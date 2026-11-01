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
__int64 BYREF();
__int64 _ZdlPv();
extern char byte_14EE226[];
extern char byte_153F7D5[];
extern int dword_1924C7C;
__int64 nn__audio__GetAudioRendererState();
__int64 nn__audio__SetVoicePlayState();
__int64 nn__audio__StopAudioRenderer();
__int64 nn__fs__CloseFile();
__int64 nn__fs__FlushFile();
__int64 nn__fs__GetFileSize();
__int64 nn__fs__ReadFile();
__int64 nn__fs__SetFileSize();
__int64 nn__oe__GetOperationMode();
__int64 nn__os__GetCurrentThread();
__int64 nn__os__GetSystemTick();
__int64 nn__os__GetSystemTickFrequency();
__int64 nn__os__LockMutex();
__int64 nn__os__TimedWaitEvent();
__int64 nn__os__UnlockMutex();
__int64 nn__os__WaitEvent();
extern void* off_1846B10[];
extern void* off_184A5A0[];
extern void* off_1852338[];
extern void* off_186E3F0[];
extern void* off_189B308[];
extern void* off_189BB80[];
extern void* off_18ABA68[];
extern void* off_18B55F8[];
extern void* off_18B57D8[];
extern void* off_18B59A0[];
extern void* off_18D7DE8[];
extern void* off_18E0180[];
extern void* off_191A7A0[];
extern void* off_191B558[];
extern __int64 qword_18D2318[];
extern __int64 qword_191DCE8;
extern __int64 qword_19205E0;
extern __int64 qword_1924BC0;
extern __int64 qword_1925338;
extern __int64 qword_1926BB8;
extern __int64 qword_192AE78;
extern __int64 qword_1935058;
extern __int64 qword_19351A8;
extern __int64 qword_19397C8;
extern __int64 qword_19397F0;
extern __int64 qword_1948D70;
extern __int64 qword_1948D78;
extern __int64 qword_195B1E0;
extern __int64 qword_195B648;
extern __int64 qword_195B650;
extern __int64 qword_195B658;
extern __int64 qword_195B660;
extern __int64 qword_195B670;
extern __int64 qword_195B678;
__int64 sub_3EFD0();
_Bool sub_576540();
_Bool sub_57F110();
__int64 sub_6D55A0();
__int64 sub_6D8810();
__int64 sub_6EA720();
__int64 sub_6F5B80();
__int64 sub_722190();
__int64 sub_737070();
__int64 sub_76BC40();
__int64 sub_76C240();
__int64 sub_7731C0();
__int64 sub_778670();
__int64 sub_7B58C0();
__int64 sub_7F4BA0();
__int64 sub_8E1580();
__int64 sub_A84740();
__int64 sub_A945D0();
__int64 sub_BFFE20();
__int64 sub_C3C8C0();
__int64 sub_CF6830();
__int64 sub_CF8C60();
__int64 sub_D310A0();
__int64 sub_D359B0();
__int64 sub_D7C620();
__int64 sub_D7DE10();
__int64 sub_DC1790();
__int64 sub_DCEA60();
_Bool sub_DD1160();
__int64 sub_DFCCB0();
__int64 sub_DFD150();
__int64 sub_DFD2C0();
__int64 sub_E06BD0();
_Bool sub_E08C10();

__int64 __fastcall sub_6E4F90(__int64 a1, __int64 a2)
{
  int v2; // w2

  v2 = *(_DWORD *)(a2 + 24);
  if ( v2 != 0 )
    return sub_BFFE20("Wrong number of arguments. Need %d found %d.", 0, v2);
  else
    return (*(__int64 (**)(void))(a1 + 8))();
}

__int64 __fastcall sub_6F5B50(__int64 a1)
{
  *(_QWORD *)a1 = off_1846B10;
  sub_6F5B80(a1 + 24, *(_QWORD **)(a1 + 32));
  return sub_3EFD0(a1);
}

__int64 __fastcall sub_7211B0(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // x8
  __int64 v4; // x0

  v3 = *(_QWORD *)(a1 + 88);
  if ( v3 != 0 && (v4 = *(_QWORD *)(v3 + 8)) != 0 )
    return (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v4 + 104LL))(v4, a3);
  else
    return 0xFFFFFFFFLL;
}

__int64 __fastcall sub_73D160(__int64 a1)
{
  __int64 v1; // x8
  int v2; // w9

  v1 = qword_191DCE8;
  v2 = *(_DWORD *)(qword_191DCE8 + 460);
  *(_DWORD *)(qword_191DCE8 + 464) = *(_DWORD *)(a1 + 20);
  *(_DWORD *)(v1 + 440) |= 0x3C000u;
  *(_DWORD *)(v1 + 460) = v2 & 0x8000003F | 0x7F888980;
  *(_BYTE *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 20) = 0;
  return 0;
}

__int64 __fastcall sub_73D1D0(__int64 a1)
{
  float v1; // s0

  *(_DWORD *)(qword_191DCE8 + 460) = *(_DWORD *)(qword_191DCE8 + 460) & 0xFFFFFFBE | 1;
  v1 = *(float *)(a1 + 24) + 0.01f;
  *(_BYTE *)(a1 + 17) = 0;
  *(float *)(a1 + 28) = v1;
  return 0;
}

_QWORD *sub_73E2E0()
{
  _QWORD *result; // x0

  result = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(qword_1935058 + 1368) + 16LL))(
                       *(_QWORD *)(qword_1935058 + 1368),
                       24);
  *result = off_184A5A0;
  result[1] = qword_1935058 + 80;
  result[2] = 0;
  return result;
}

__int64 sub_74C9E0()
{
  __int64 result; // x0

  result = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(qword_1935058 + 1368) + 16LL))(
             *(_QWORD *)(qword_1935058 + 1368),
             64);
  *(_BYTE *)(result + 9) = 0;
  *(_QWORD *)result = off_186E3F0;
  *(_QWORD *)(result + 40) = 0;
  *(_QWORD *)(result + 48) = 0;
  *(_QWORD *)(result + 24) = qword_1935058 + 80;
  *(_QWORD *)(result + 32) = 0;
  return result;
}

bool __fastcall sub_7838B0(__int64 a1, __int64 a2)
{
  return (sub_576540()) != 0 && *(_DWORD *)(a1 + 28) == *(_DWORD *)(a2 + 28);
}

_Bool __fastcall sub_784230(__int64 a1, __int64 a2)
{
  if ( (sub_576540()) != 0 && (sub_57F110(a1 + 40, a2 + 40)) != 0 )
    return sub_57F110(a1 + 80, a2 + 80);
  else
    return 0;
}

bool __fastcall sub_7848E0(__int64 a1, __int64 a2)
{
  return (sub_576540()) != 0 && *(_DWORD *)(a1 + 28) == *(_DWORD *)(a2 + 28);
}

bool __fastcall sub_786AE0(__int64 a1, __int64 a2)
{
  return (sub_576540()) != 0
      && *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL) - **(_QWORD **)(a1 + 32) == *(_QWORD *)(*(_QWORD *)(a2 + 32) + 8LL)
                                                                           - **(_QWORD **)(a2 + 32);
}

bool __fastcall sub_788FE0(__int64 a1, __int64 a2)
{
  return (sub_576540()) != 0 && *(unsigned __int8 *)(a1 + 26) == *(unsigned __int8 *)(a2 + 26);
}

bool __fastcall sub_789720(__int64 a1, __int64 a2)
{
  return (sub_576540()) != 0 && *(_DWORD *)(a1 + 28) == *(_DWORD *)(a2 + 28);
}

bool __fastcall sub_78A150(__int64 a1, __int64 a2)
{
  return (sub_576540()) != 0 && *(unsigned __int8 *)(a1 + 26) == *(unsigned __int8 *)(a2 + 26);
}

bool __fastcall sub_78A8A0(__int64 a1, __int64 a2)
{
  return (sub_576540()) != 0 && *(unsigned __int16 *)(a1 + 26) == *(unsigned __int16 *)(a2 + 26);
}

__int64 __fastcall sub_7BB190(__int64 result)
{
  int v1; // w8
  unsigned int v2; // w9
  unsigned int v3; // w8

  v1 = *(_DWORD *)(result + 260);
  if ( v1 != 0 )
  {
    v2 = v1 - 1;
    v3 = *(_DWORD *)(result + 256);
    *(_DWORD *)(result + 260) = v2;
    if ( v2 < v3 )
      *(_DWORD *)(result + 256) = v3 - 1;
  }
  return result;
}

__int64 __fastcall sub_7CB640(__int64 result)
{
  qword_1924BC0 = 0;
  *(_DWORD *)(result + 56) &= ~2u;
  return result;
}

__int64 __fastcall sub_7CBB60(__int64 a1)
{
  __int64 v2; // x0
  __int64 result; // x0

  v2 = sub_76BC40(a1);
  result = sub_76C240(v2, a1);
  qword_1924BC0 = a1;
  *(_BYTE *)(a1 + 225) = 0;
  return result;
}

bool __fastcall sub_7CBBB0(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 56) & 1) == 0 )
    return false;
  if ( qword_1924BC0 != 0 )
    return *(_BYTE *)(qword_1924BC0 + 224) != 0;
  return false;
}

__int64 __fastcall sub_7F5620(__int64 a1)
{
  *(_QWORD *)a1 = off_1852338;
  sub_7F4BA0(a1 + 16, *(_QWORD **)(a1 + 24));
  return sub_3EFD0(a1);
}

__int64 __fastcall sub_7FC0E0(__int64 *a1)
{
  int v2; // w8
  int v3; // w8
  __int64 v4; // x8

  sub_737070();
  a1[40] = qword_19205E0;
  v2 = *((unsigned __int8 *)a1 + 185);
  *((_BYTE *)a1 + 349) = v2;
  if ( v2 != 0 )
    v3 = 2;
  else
    v3 = 1;
  *((_DWORD *)a1 + 78) = v3;
  v4 = *a1;
  a1[36] = (__int64)a1;
  return (*(__int64 (__fastcall **)(__int64 *))(v4 + 336))(a1);
}

__int64 __fastcall sub_828FA0(__int64 *a1)
{
  int v2; // w8
  int v3; // w8
  __int64 v4; // x8

  sub_737070();
  a1[40] = qword_19205E0;
  v2 = *((unsigned __int8 *)a1 + 185);
  *((_BYTE *)a1 + 349) = v2;
  if ( v2 != 0 )
    v3 = 2;
  else
    v3 = 1;
  *((_DWORD *)a1 + 78) = v3;
  v4 = *a1;
  a1[36] = (__int64)a1;
  return (*(__int64 (__fastcall **)(__int64 *))(v4 + 336))(a1);
}

__int64 __fastcall sub_862600(_DWORD *a1)
{
  int v1; // w9

  v1 = dword_1924C7C++;
  a1[19] = v1;
  return (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 128LL))(a1);
}

bool sub_873430()
{
  return qword_1924BC0 == 0 || *(_BYTE *)(qword_1924BC0 + 224) == 0;
}

unsigned __int64 __fastcall sub_897160(unsigned __int8 *a1)
{
  return a1[168]
       | (2LL * a1[169])
       | (4LL * a1[170])
       | (8LL * a1[171])
       | (16LL * a1[172])
       | (32LL * a1[173])
       | ((unsigned __int64)a1[174] << 6)
       | ((unsigned __int64)a1[175] << 7);
}

__int64 __fastcall sub_8F38D0(__int64 a1, __int64 a2)
{
  __int64 i; // x8
  __int64 v5; // x8

  for ( i = *(_QWORD *)(a1 + 200); i != 0; *(_QWORD *)(a1 + 200) = i )
  {
    sub_7B58C0(*(_QWORD *)(*(_QWORD *)(a1 + 216) + 8 * i - 8));
    v5 = *(_QWORD *)(a1 + 200);
    if ( v5 == 0 )
      break;
    i = v5 - 1;
  }
  *(_DWORD *)(a1 + 180) = 0;
  return sub_8E1580(a1, a2);
}

__int64 __fastcall sub_911A30(__int64 a1)
{
  _DWORD *v2; // x0

  v2 = (_DWORD *)sub_6EA720(a1 + 160);
  return sub_778670(v2, (_DWORD *)(a1 + 168), 0, 0);
}

__int64 __fastcall sub_912330(__int64 a1)
{
  __int64 v2; // x0
  _DWORD *v3; // x0

  if ( qword_1924BC0 != 0 && *(_BYTE *)(qword_1924BC0 + 224) != 0 )
  {
    v2 = sub_6EA720(a1 + 160);
    sub_7731C0(v2);
  }
  v3 = (_DWORD *)sub_6EA720(a1 + 160);
  return sub_778670(v3, (_DWORD *)(a1 + 168), 32, 0);
}

void sub_9264D0()
{
  _QWORD *v0; // x0

  if ( qword_1925338 == 0 )
  {
    v0 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(qword_1935058 + 1368) + 16LL))(
                     *(_QWORD *)(qword_1935058 + 1368),
                     40);
    v0[2] = 0;
    v0[3] = 0;
    *v0 = qword_1935058 + 80;
    v0[1] = 0;
    qword_1925338 = (__int64)v0;
  }
}

void __fastcall sub_99B560(__int64 a1, int *a2, _DWORD *a3)
{
  int v3; // w8
  int v4; // w8

  v3 = *a2;
  if ( (unsigned int)(*a2 - 17) <= 1 )
    *a3 += 3;
  if ( v3 == 15 )
  {
    v4 = 1;
  }
  else
  {
    if ( v3 != 16 )
      return;
    v4 = 2;
  }
  *a3 += v4;
}

void __fastcall sub_99C8C0(__int64 a1, int *a2, _DWORD *a3)
{
  int v3; // w8
  int v4; // w8

  v3 = *a2;
  if ( (unsigned int)(*a2 - 17) <= 1 )
    *a3 += 3;
  if ( v3 == 15 )
  {
    v4 = 1;
  }
  else
  {
    if ( v3 != 16 )
      return;
    v4 = 3;
  }
  *a3 += v4;
}

__int64 __fastcall sub_A14960(_DWORD *a1)
{
  int v1; // w9

  v1 = dword_1924C7C++;
  a1[19] = v1;
  return (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 128LL))(a1);
}

__int64 sub_A7E210()
{
  int v1; // [xsp+Ch] [xbp-4h] BYREF

  v1 = 4;
  (*(__int64(**)())off_189B308)(0, &v1);
  return 0xFFFFFFFFLL;
}

__int64 sub_A7E240()
{
  int v1; // [xsp+Ch] [xbp-4h] BYREF

  v1 = 4;
  (*(__int64(**)())off_189B308)(0, &v1);
  return 0xFFFFFFFFLL;
}

__int64 sub_A7E270()
{
  int v1; // [xsp+Ch] [xbp-4h] BYREF

  v1 = 4;
  (*(__int64(**)())off_189B308)(0, &v1);
  return 0xFFFFFFFFLL;
}

__int64 __fastcall sub_A7F040(__int64 a1, int a2)
{
  __int64 v2; // x0

  v2 = *(_QWORD *)(a1 + 200) + 8LL;
  if ( a2 != -1 )
    return nn__os__TimedWaitEvent(v2, 1000000LL * a2);
  nn__os__WaitEvent(v2);
  return 1;
}

_Bool __fastcall sub_A84B20(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  char v5; // [xsp+Ch] [xbp-4h] BYREF

  *a4 = 169;
  return sub_E08C10(qword_195B660, a2, &v5);
}

__int64 __fastcall sub_A8A040(__int64 a1)
{
  return (unsigned int)(*(_DWORD *)(a1 + 24) - *(_DWORD *)(*(_QWORD *)(a1 + 16) + 32LL));
}

__int64 __fastcall sub_A8CED0(__int64 (__fastcall **a1)(_QWORD, __int64), unsigned int a2, __int64 a3)
{
  return (*a1)(a2, a3);
}

__int64 __fastcall sub_A94C00(__int64 a1, __int64 a2, unsigned int a3)
{
  if ( a2 == 0 )
    return (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 16LL))(a1, a3);
  if ( a3 != 0 )
    return a2;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 48LL))(a1);
  return 0;
}

__int64 __fastcall sub_A94C40(_DWORD *a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  if ( a2 != 0 )
  {
    if ( a3 != 0 )
    {
      return a2;
    }
    else
    {
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 48LL))(a1);
      return 0;
    }
  }
  else if ( a3 != 0 && a1[12] >= a4 )
  {
    return (*(__int64 (__fastcall **)(_DWORD *, _QWORD))(*(_QWORD *)a1 + 16LL))(a1, a3);
  }
  else
  {
    return 0;
  }
}

_QWORD *__fastcall sub_A95750(_QWORD *result, _Bool a2)
{
  __int64 v2; // x8

  if ( a2 )
  {
    v2 = result[5];
    result[7] = v2;
    result[8] = v2;
  }
  else
  {
    result[8] = -1;
  }
  return result;
}

_Bool __fastcall sub_A988F0(__int64 a1, __int64 a2)
{
  __int64 v2; // x19
  __int64 v3; // x0
  _BYTE v5[4]; // [xsp+Ch] [xbp-14h] BYREF

  v2 = qword_195B660;
  v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 40LL))(a2);
  return sub_E08C10(v2, v3, v5);
}

__int64 sub_A98A50()
{
  int v1; // [xsp+Ch] [xbp-4h] BYREF

  v1 = 4;
  (*(__int64(**)())off_189B308)(0, &v1);
  return 0xFFFFFFFFLL;
}

__int64 sub_A98A80()
{
  int v1; // [xsp+Ch] [xbp-4h] BYREF

  v1 = 4;
  (*(__int64(**)())off_189B308)(0, &v1);
  return 0xFFFFFFFFLL;
}

__int64 sub_A98AB0()
{
  int v1; // [xsp+Ch] [xbp-4h] BYREF

  v1 = 4;
  (*(__int64(**)())off_189B308)(0, &v1);
  return 0xFFFFFFFFLL;
}

__int64 sub_A99630()
{
  int v1; // [xsp+Ch] [xbp-4h] BYREF

  v1 = 4;
  return (*(__int64(**)())off_189B308)(0, &v1);
}

__int64 __fastcall sub_AA3990(__int64 a1, unsigned __int8 a2)
{
  return byte_14EE226[a2];
}

__int64 __fastcall sub_AA41A0(__int64 a1, int a2)
{
  return a1 + 8LL * a2 + 20;
}

__int64 __fastcall sub_AA41D0(__int64 a1, int a2)
{
  return a1 + 12LL * a2 + 36;
}

__int64 __fastcall sub_AA4240(__int64 a1, unsigned int a2)
{
  return a1 + 12LL * a2 + 100;
}

__int64 __fastcall sub_AA4250(__int64 a1, unsigned int a2)
{
  return a1 + 12LL * a2 + 124;
}

__int64 __fastcall sub_AA4330(__int64 result, unsigned int a2, _DWORD *a3)
{
  __int64 v3; // x8

  v3 = result + 8LL * a2;
  *(_DWORD *)(v3 + 148) = *a3;
  *(_DWORD *)(v3 + 152) = a3[1];
  return result;
}

__int64 __fastcall sub_AA4350(__int64 result, unsigned int a2, _DWORD *a3)
{
  __int64 v3; // x8

  v3 = result + 8LL * a2;
  *(_DWORD *)(v3 + 164) = *a3;
  *(_DWORD *)(v3 + 168) = a3[1];
  return result;
}

__int64 __fastcall sub_AA5290(__int64 a1)
{
  _BOOL8 v2; // x1

  v2 = (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1) - 6 > 3;
  return (*(__int64 (__fastcall **)(__int64, _BOOL8))(*(_QWORD *)a1 + 376LL))(a1, v2);
}

__int64 __fastcall sub_AA52D0(__int64 a1)
{
  _BOOL8 v2; // x1

  v2 = (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1) - 6 < 4;
  return (*(__int64 (__fastcall **)(__int64, _BOOL8))(*(_QWORD *)a1 + 376LL))(a1, v2);
}

void __fastcall sub_AA8750(_QWORD *a1)
{
  *a1 = off_189BB80;
  qword_1926BB8 = -1;
  sub_A945D0((__int64)a1);
  _ZdlPv(a1);
}

void __fastcall sub_AA8A40(void *a1)
{
  qword_192AE78 = -1;
  _ZdlPv(a1);
}

bool __fastcall sub_AA8AE0(__int64 a1, unsigned __int8 a2)
{
  return a2 < 4u;
}

bool __fastcall sub_AABB00(__int64 a1, unsigned __int8 a2, unsigned int a3)
{
  int v3; // w8

  v3 = *(_DWORD *)(a1 + 4LL * a2 + 328);
  if ( v3 == -1 )
    return false;
  if ( *(_DWORD *)(a1 + 436) - v3 >= a3 )
    return false;
  return *(_DWORD *)(a1 + 440) - v3 >= a3;
}

__int64 __fastcall sub_AABD20(__int64 a1, unsigned __int8 a2)
{
  int v2; // w8

  v2 = *(_DWORD *)(a1 + 4LL * a2 + 328);
  if ( v2 == -1 )
    return 0xFFFFFFFFLL;
  else
    return (unsigned int)(*(_DWORD *)(a1 + 440) - v2);
}

bool __fastcall sub_AAC540(float *a1)
{
  float *v2; // x0

  v2 = (float *)(*(__int64 (__fastcall **)(float *))(*(_QWORD *)a1 + 176LL))(a1);
  return *v2 != a1[23] || v2[1] != a1[24];
}

__int64 __fastcall sub_AAD200(__int64 a1, unsigned int a2)
{
  const void *v4; // x0

  *(_DWORD *)(a1 + 1332) = *(_DWORD *)(a1 + 1336);
  v4 = (const void *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 160LL))(a1);
  memcpy((void *)(a1 + 48), v4, 0x104u);
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 8) + 88LL))(*(_QWORD *)(a1 + 8), a2);
}

__int64 __fastcall sub_AAD420(__int64 a1)
{
  int v2; // w8

  v2 = *(_DWORD *)(a1
                 + 4LL
                 * (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 40) + 64LL))(*(_QWORD *)(a1 + 40))
                 + 308);
  if ( v2 == -1 )
    return 0xFFFFFFFFLL;
  else
    return (unsigned int)(*(_DWORD *)(a1 + 1336) - v2);
}

bool __fastcall sub_AADE00(__int64 a1, unsigned __int8 a2, unsigned int a3)
{
  int v3; // w8

  v3 = *(_DWORD *)(a1 + 4LL * a2 + 56);
  if ( v3 == -1 )
    return false;
  if ( *(_DWORD *)(a1 + 88) - v3 >= a3 )
    return false;
  return *(_DWORD *)(a1 + 92) - v3 >= a3;
}

__int64 __fastcall sub_AADED0(__int64 a1, unsigned __int8 a2)
{
  int v2; // w8

  v2 = *(_DWORD *)(a1 + 4LL * a2 + 56);
  if ( v2 == -1 )
    return 0xFFFFFFFFLL;
  else
    return (unsigned int)(*(_DWORD *)(a1 + 92) - v2);
}

__int64 __fastcall sub_AAE590(__int64 a1, __int64 a2, unsigned int a3)
{
  if ( a2 == 0 )
    return (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 16LL))(a1, a3);
  if ( a3 != 0 )
    return a2;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 48LL))(a1);
  return 0;
}

__int64 __fastcall sub_AAE5D0(_DWORD *a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  if ( a2 != 0 )
  {
    if ( a3 != 0 )
    {
      return a2;
    }
    else
    {
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 48LL))(a1);
      return 0;
    }
  }
  else if ( a3 != 0 && a1[12] >= a4 )
  {
    return (*(__int64 (__fastcall **)(_DWORD *, _QWORD))(*(_QWORD *)a1 + 16LL))(a1, a3);
  }
  else
  {
    return 0;
  }
}

__int64 sub_ABD480()
{
  __int64 result; // x0
  __int64 v1; // x8

  result = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(qword_1935058 + 1368) + 16LL))(
             *(_QWORD *)(qword_1935058 + 1368),
             48);
  *(_BYTE *)(result + 8) = 0;
  *(_DWORD *)(result + 12) = 6;
  v1 = qword_1935058;
  *(_QWORD *)result = off_18ABA68;
  *(_DWORD *)(result + 32) = 0;
  *(_QWORD *)(result + 16) = v1 + 80;
  *(_QWORD *)(result + 24) = 0;
  *(_QWORD *)(result + 40) = 0;
  return result;
}

bool __fastcall sub_B20AB0(__int64 a1, __int64 a2)
{
  float v2; // s0
  float v3; // s1

  v2 = *(float *)(a2 + 112);
  v3 = *(float *)(a1 + 76);
  return v2 > v3 || vabds_f32(v2, v3) <= 0.000002f;
}

__int64 __fastcall sub_B3FC50(unsigned int *a1)
{
  return sub_6D55A0(qword_191DCE8 + 9160, a1[14], a1[12], a1[10]);
}

__int64 __fastcall sub_B5FEF0(__int64 a1)
{
  return sub_6D8810(qword_191DCE8 + 9192, *(_QWORD *)(a1 + 96));
}

float __fastcall sub_B90AA0(float *a1)
{
  return (float)(a1[55] - a1[54]) / (float)(a1[57] - a1[56]);
}

float __fastcall sub_B91240(__int64 a1, float a2, __int64 a3, float *a4)
{
  return (float)((float)(*(float *)(a1 + 220) - *(float *)(a1 + 216)) / *a4) * a2;
}

double __fastcall sub_BA7370(unsigned int *a1, unsigned int *a2, _DWORD *a3, float a4)
{
  __int64 v4; // x8
  double result; // d0

  v4 = *a1;
  result = a4 * (double)(*a2 - v4);
  *a3 = v4 + (__int64)result;
  return result;
}

double __fastcall sub_BA73A0(int *a1, int *a2, _DWORD *a3, float a4)
{
  __int64 v4; // x8
  double result; // d0

  v4 = *a1;
  result = a4 * (double)(*a2 - v4);
  *a3 = v4 + (__int64)result;
  return result;
}

float32x4_t __fastcall sub_BA7610(float32x4_t *a1, float32x4_t *a2, float32x4_t *a3, float a4)
{
  float32x4_t result; // q0

  result = vaddq_f32(*a1, vmulq_n_f32(vsubq_f32(*a2, *a1), a4));
  *a3 = result;
  return result;
}

__int64 __fastcall sub_BC7560(__int64 a1, __int64 a2)
{
  __int64 result; // x0
  _BYTE v4[4]; // [xsp+Ch] [xbp-14h] BYREF

  result = (*(__int64 (__fastcall **)(_QWORD, _BYTE *, __int64))(**(_QWORD **)(a2 + 8) + 48LL))(
             *(_QWORD *)(a2 + 8),
             v4,
             4);
  *(_QWORD *)a2 += (unsigned int)result;
  return result;
}

__int64 __fastcall sub_BC75E0(__int64 a1, __int64 a2)
{
  __int64 result; // x0
  _BYTE v4[4]; // [xsp+Ch] [xbp-14h] BYREF

  result = (*(__int64 (__fastcall **)(_QWORD, _BYTE *, __int64))(**(_QWORD **)(a2 + 8) + 48LL))(
             *(_QWORD *)(a2 + 8),
             v4,
             4);
  *(_QWORD *)a2 += (unsigned int)result;
  return result;
}

void __fastcall sub_BC96C0(__int64 a1, __int64 a2)
{
  __int64 v2; // x8
  _QWORD *v3; // x9
  _QWORD *v5; // x20

  v2 = *(_QWORD *)(a2 + 16);
  if ( v2 != 0 )
  {
    v3 = *(_QWORD **)(a2 + 32);
    v5 = v3;
    do
    {
      if ( (*(_BYTE *)(*v5 + 56LL) & 1) != 0 )
      {
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v5 + 104LL))(*v5);
        v3 = *(_QWORD **)(a2 + 32);
        v2 = *(_QWORD *)(a2 + 16);
      }
      ++v5;
    }
    while ( v5 != &v3[v2] );
  }
}

_QWORD *sub_BF1D70()
{
  _QWORD *result; // x0
  __int64 v1; // x8

  result = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(qword_1935058 + 1368) + 16LL))(
                       *(_QWORD *)(qword_1935058 + 1368),
                       48);
  result[5] = 0;
  result[2] = 0;
  result[3] = 0;
  v1 = qword_1935058 + 80;
  *result = off_18B59A0;
  result[1] = v1;
  return result;
}

_QWORD *sub_BF1E40()
{
  _QWORD *result; // x0
  __int64 v1; // x8

  result = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(qword_1935058 + 1368) + 16LL))(
                       *(_QWORD *)(qword_1935058 + 1368),
                       48);
  result[5] = 0;
  result[2] = 0;
  result[3] = 0;
  v1 = qword_1935058 + 80;
  *result = off_18B57D8;
  result[1] = v1;
  return result;
}

_QWORD *sub_BF1F10()
{
  _QWORD *result; // x0

  result = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(qword_1935058 + 1368) + 16LL))(
                       *(_QWORD *)(qword_1935058 + 1368),
                       24);
  *result = &off_18B55F8;
  result[1] = qword_1935058 + 80;
  result[2] = 0;
  return result;
}

__int64 __fastcall sub_C01400(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // [xsp+Ch] [xbp-4h] BYREF

  v4 = 0;
  sub_A84740(a1 + 16, a2, a3, &v4);
  return v4;
}

__int64 __fastcall sub_C1F820(char *a1)
{
  __int64 result; // x0

  result = nn__os__GetSystemTick(a1);
  *((_QWORD *)a1 + 89) = 1000000 * (result - qword_195B648) / qword_195B670;
  return result;
}

bool __fastcall sub_C251E0(__int64 a1, __int64 a2)
{
  return (sub_576540()) != 0 && *(_QWORD *)(a1 + 32) == *(_QWORD *)(a2 + 32);
}

bool __fastcall sub_C2DD40(__int64 a1, __int64 a2)
{
  return (sub_576540()) != 0
      && *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL) - **(_QWORD **)(a1 + 32) == *(_QWORD *)(*(_QWORD *)(a2 + 32) + 8LL)
                                                                           - **(_QWORD **)(a2 + 32);
}

bool __fastcall sub_C300F0(__int64 a1, __int64 a2)
{
  return (sub_576540()) != 0
      && *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL) - **(_QWORD **)(a1 + 32) == *(_QWORD *)(*(_QWORD *)(a2 + 32) + 8LL)
                                                                           - **(_QWORD **)(a2 + 32);
}

bool __fastcall sub_C31AE0(__int64 a1, __int64 a2)
{
  return (sub_576540()) != 0
      && *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL) - **(_QWORD **)(a1 + 32) == *(_QWORD *)(*(_QWORD *)(a2 + 32) + 8LL)
                                                                           - **(_QWORD **)(a2 + 32);
}

bool __fastcall sub_C33840(__int64 a1, __int64 a2)
{
  return (sub_576540()) != 0
      && *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL) - **(_QWORD **)(a1 + 32) == *(_QWORD *)(*(_QWORD *)(a2 + 32) + 8LL)
                                                                           - **(_QWORD **)(a2 + 32);
}

void __fastcall sub_C3F310(__int64 a1, __int64 a2)
{
  *(_QWORD *)(qword_19351A8 + 40) = *(_QWORD *)(a2 + 32);
}

__int64 __fastcall sub_C4A6F0(__int64 a1)
{
  __int64 v1; // x19
  __int64 v2; // x0

  v1 = *(_QWORD *)(a1 + 8);
  v2 = *(_QWORD *)(v1 + 264);
  if ( v2 != 0 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 24LL))(v2);
  return sub_C3C8C0(v1, 0);
}

__int64 __fastcall sub_C511B0(__int64 a1)
{
  __int64 result; // x0
  char v2; // [xsp+Ch] [xbp-4h] BYREF

  result = *(_QWORD *)(a1 + 48);
  if ( result != 0 )
  {
    v2 = 0;
    return (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)result + 48LL))(result, &v2);
  }
  return result;
}

__int64 __fastcall sub_C51800(__int64 a1)
{
  __int64 result; // x0
  char v2; // [xsp+Ch] [xbp-4h] BYREF

  result = *(_QWORD *)(a1 + 48);
  if ( result != 0 )
  {
    v2 = 0;
    return (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)result + 48LL))(result, &v2);
  }
  return result;
}

__int64 __fastcall sub_C51E50(__int64 a1)
{
  __int64 result; // x0
  char v2; // [xsp+Ch] [xbp-4h] BYREF

  result = *(_QWORD *)(a1 + 48);
  if ( result != 0 )
  {
    v2 = 0;
    return (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)result + 48LL))(result, &v2);
  }
  return result;
}

__int64 __fastcall sub_C524A0(__int64 a1)
{
  __int64 result; // x0
  char v2; // [xsp+Ch] [xbp-4h] BYREF

  result = *(_QWORD *)(a1 + 48);
  if ( result != 0 )
  {
    v2 = 0;
    return (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)result + 48LL))(result, &v2);
  }
  return result;
}

__int64 __fastcall sub_C52AF0(__int64 a1)
{
  __int64 result; // x0
  char v2; // [xsp+Ch] [xbp-4h] BYREF

  result = *(_QWORD *)(a1 + 48);
  if ( result != 0 )
  {
    v2 = 1;
    return (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)result + 48LL))(result, &v2);
  }
  return result;
}

float __fastcall sub_C60C00(float *a1, float *a2)
{
  float result; // s0

  result = a1[38] + (float)(a1[42] * (float)(a1[39] - a1[38]));
  *a2 = result;
  return result;
}

double __fastcall sub_C60C70(__int64 a1, _DWORD *a2)
{
  __int64 v2; // x8
  double result; // d0

  v2 = *(unsigned int *)(a1 + 152);
  result = *(float *)(a1 + 168) * (double)(*(unsigned int *)(a1 + 156) - v2);
  *a2 = v2 + (__int64)result;
  return result;
}

void __fastcall sub_C82AB0(__int64 a1, __int64 a2, _Bool a3)
{
  char v3; // w8

  if ( *(_BYTE *)(a2 + 88) == 0 && a3 )
  {
    v3 = 1;
LABEL_7:
    *(_BYTE *)(a2 + 88) = v3;
    return;
  }
  if ( *(_BYTE *)(a2 + 88) != 0 && !a3 )
  {
    v3 = 0;
    goto LABEL_7;
  }
}

void __fastcall sub_C82AF0(__int64 a1, __int64 a2, _Bool a3)
{
  char v3; // w8

  if ( *(_BYTE *)(a2 + 88) != 0 && a3 )
  {
    v3 = 0;
LABEL_7:
    *(_BYTE *)(a2 + 88) = v3;
    return;
  }
  if ( *(_BYTE *)(a2 + 88) == 0 && !a3 )
  {
    v3 = 1;
    goto LABEL_7;
  }
}

__int64 __fastcall sub_C851F0(__int64 a1, __int64 a2)
{
  __int64 result; // x0
  int v5; // [xsp+Ch] [xbp-14h] BYREF

  v5 = *(unsigned __int8 *)(a1 + 8);
  result = (*(__int64 (__fastcall **)(_QWORD, int *, __int64))(**(_QWORD **)(a2 + 8) + 48LL))(
             *(_QWORD *)(a2 + 8),
             &v5,
             4);
  *(_QWORD *)a2 += (unsigned int)result;
  *(_BYTE *)(a1 + 8) = v5;
  return result;
}

__int64 __fastcall sub_C86660(__int64 a1, __int64 a2)
{
  __int64 result; // x0
  int v5; // [xsp+Ch] [xbp-14h] BYREF

  v5 = *(unsigned __int8 *)(a1 + 8);
  result = (*(__int64 (__fastcall **)(_QWORD, int *, __int64))(**(_QWORD **)(a2 + 8) + 48LL))(
             *(_QWORD *)(a2 + 8),
             &v5,
             4);
  *(_QWORD *)a2 += (unsigned int)result;
  *(_BYTE *)(a1 + 8) = v5;
  return result;
}

__int64 __fastcall sub_C8FB20(__int64 a1)
{
  return sub_6D55A0(qword_191DCE8 + 9160, 7, (unsigned int)(4 * *(_DWORD *)(a1 + 48)), 1);
}

__int64 __fastcall sub_CC00B0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _BYTE v7[4]; // [xsp+Ch] [xbp-14h] BYREF

  (*(void (__fastcall **)(__int64, __int64, _BYTE *))(*(_QWORD *)a4 + 40LL))(a4, a3, v7);
  (*(void (__fastcall **)(__int64, __int64, _BYTE *))(*(_QWORD *)a1 + 48LL))(a1, a2, v7);
  return 1;
}

__int64 __fastcall sub_CC01A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _BYTE v7[4]; // [xsp+Ch] [xbp-14h] BYREF

  (*(void (__fastcall **)(__int64, __int64, _BYTE *))(*(_QWORD *)a4 + 40LL))(a4, a3, v7);
  (*(void (__fastcall **)(__int64, __int64, _BYTE *))(*(_QWORD *)a1 + 48LL))(a1, a2, v7);
  return 1;
}

__int64 __fastcall sub_CC0220(char *result, char *a2, _BYTE *a3)
{
  *(_BYTE *)(a2 + *(unsigned int *)(result + 28)) = *a3;
  return result;
}

__int64 __fastcall sub_CC0230(char *result, char *a2, _BYTE *a3)
{
  *a3 = *(_BYTE *)(a2 + *(unsigned int *)(result + 28));
  return result;
}

__int64 __fastcall sub_CC0460(char *result, char *a2, _BYTE *a3)
{
  *(_BYTE *)(a2 + *(unsigned int *)(result + 28)) = *a3;
  return result;
}

__int64 __fastcall sub_CC0470(char *result, char *a2, _BYTE *a3)
{
  *a3 = *(_BYTE *)(a2 + *(unsigned int *)(result + 28));
  return result;
}

__int64 __fastcall sub_CC04B0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _BYTE v7[4]; // [xsp+Ch] [xbp-14h] BYREF

  (*(void (__fastcall **)(__int64, __int64, _BYTE *))(*(_QWORD *)a4 + 40LL))(a4, a3, v7);
  (*(void (__fastcall **)(__int64, __int64, _BYTE *))(*(_QWORD *)a1 + 48LL))(a1, a2, v7);
  return 1;
}

__int64 __fastcall sub_CC0530(char *result, char *a2, _DWORD *a3)
{
  *(_DWORD *)(a2 + *(unsigned int *)(result + 28)) = *a3;
  return result;
}

__int64 __fastcall sub_CC0540(char *result, char *a2, _DWORD *a3)
{
  *a3 = *(_DWORD *)(a2 + *(unsigned int *)(result + 28));
  return result;
}

__int64 __fastcall sub_CC05E0(char *result, char *a2, _BYTE *a3)
{
  *(_BYTE *)(a2 + *(unsigned int *)(result + 28)) = *a3;
  return result;
}

__int64 __fastcall sub_CC05F0(char *result, char *a2, _BYTE *a3)
{
  *a3 = *(_BYTE *)(a2 + *(unsigned int *)(result + 28));
  return result;
}

__int64 __fastcall sub_CC0640(char *result, char *a2, _DWORD *a3)
{
  *(_DWORD *)(a2 + *(unsigned int *)(result + 28)) = *a3;
  return result;
}

__int64 __fastcall sub_CC0650(char *result, char *a2, _DWORD *a3)
{
  *a3 = *(_DWORD *)(a2 + *(unsigned int *)(result + 28));
  return result;
}

__int64 __fastcall sub_CC0770(char *result, char *a2, _BYTE *a3)
{
  *(_BYTE *)(a2 + *(unsigned int *)(result + 28)) = *a3;
  return result;
}

__int64 __fastcall sub_CC0780(char *result, char *a2, _BYTE *a3)
{
  *a3 = *(_BYTE *)(a2 + *(unsigned int *)(result + 28));
  return result;
}

__int64 __fastcall sub_CC0850(char *result, char *a2, _DWORD *a3)
{
  *a3 = *(_DWORD *)(a2 + *(unsigned int *)(result + 28));
  return result;
}

__int64 __fastcall sub_CC5680(char *result, char *a2, _DWORD *a3)
{
  *a3 = *(_DWORD *)(a2 + *(unsigned int *)(result + 28));
  return result;
}

__int64 __fastcall sub_CC56D0(char *result, char *a2, _DWORD *a3)
{
  *(_DWORD *)(a2 + *(unsigned int *)(result + 28)) = *a3;
  return result;
}

__int64 __fastcall sub_CC56E0(char *result, char *a2, _DWORD *a3)
{
  *a3 = *(_DWORD *)(a2 + *(unsigned int *)(result + 28));
  return result;
}

__int64 __fastcall sub_CC5730(char *result, char *a2, _DWORD *a3)
{
  *(_DWORD *)(a2 + *(unsigned int *)(result + 28)) = *a3;
  return result;
}

__int64 __fastcall sub_CC5740(char *result, char *a2, _DWORD *a3)
{
  *a3 = *(_DWORD *)(a2 + *(unsigned int *)(result + 28));
  return result;
}

__int64 __fastcall sub_CC87B0(char *result, char *a2, _DWORD *a3)
{
  *(_DWORD *)(a2 + *(unsigned int *)(result + 28)) = *a3;
  return result;
}

__int64 __fastcall sub_CC87C0(char *result, char *a2, _DWORD *a3)
{
  *a3 = *(_DWORD *)(a2 + *(unsigned int *)(result + 28));
  return result;
}

__int64 __fastcall sub_CC9200(char *result, char *a2, _BYTE *a3)
{
  *(_BYTE *)(a2 + *(unsigned int *)(result + 28)) = *a3;
  return result;
}

__int64 __fastcall sub_CC9210(char *result, char *a2, _BYTE *a3)
{
  *a3 = *(_BYTE *)(a2 + *(unsigned int *)(result + 28));
  return result;
}

__int64 __fastcall sub_CCA9B0(char *result, char *a2, _DWORD *a3)
{
  *(_DWORD *)(a2 + *(unsigned int *)(result + 28)) = *a3;
  return result;
}

__int64 __fastcall sub_CCA9C0(char *result, char *a2, _DWORD *a3)
{
  *a3 = *(_DWORD *)(a2 + *(unsigned int *)(result + 28));
  return result;
}

__int64 __fastcall sub_CCBAD0(char *result, char *a2, _BYTE *a3)
{
  *(_BYTE *)(a2 + *(unsigned int *)(result + 28)) = *a3;
  return result;
}

__int64 __fastcall sub_CCBAE0(char *result, char *a2, _BYTE *a3)
{
  *a3 = *(_BYTE *)(a2 + *(unsigned int *)(result + 28));
  return result;
}

__int64 __fastcall sub_CF7540(__int64 a1)
{
  nn__os__LockMutex(qword_19397C8);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 24LL))(a1);
  return nn__os__UnlockMutex(qword_19397C8);
}

__int64 __fastcall sub_CF7580(__int64 a1)
{
  nn__os__LockMutex(qword_19397C8);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 32LL))(a1);
  return nn__os__UnlockMutex(qword_19397C8);
}

__int64 __fastcall sub_CF8770(__int64 a1, __int64 a2)
{
  nn__os__LockMutex(qword_19397C8);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 176LL))(a2);
  sub_CF8C60(a2);
  return nn__os__UnlockMutex(qword_19397C8);
}

__int64 __fastcall sub_CF8820(__int64 a1, __int64 a2)
{
  nn__os__LockMutex(qword_19397C8);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 192LL))(a2);
  return nn__os__UnlockMutex(qword_19397C8);
}

__int64 __fastcall sub_CF8860(__int64 a1, __int64 a2)
{
  nn__os__LockMutex(qword_19397C8);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 200LL))(a2);
  return nn__os__UnlockMutex(qword_19397C8);
}

__int64 __fastcall sub_CF89D0(__int64 a1, __int64 a2)
{
  nn__os__LockMutex(qword_19397C8);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 176LL))(a2);
  sub_CF8C60(a2);
  return nn__os__UnlockMutex(qword_19397C8);
}

__int64 __fastcall sub_CF8A80(__int64 a1, __int64 a2)
{
  nn__os__LockMutex(qword_19397C8);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 192LL))(a2);
  return nn__os__UnlockMutex(qword_19397C8);
}

__int64 __fastcall sub_CF8AC0(__int64 a1, __int64 a2)
{
  nn__os__LockMutex(qword_19397C8);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 200LL))(a2);
  return nn__os__UnlockMutex(qword_19397C8);
}

bool __fastcall sub_CFD9A0(__int64 a1)
{
  return *(float *)(a1 + 16) != 3.39e38f;
}

bool __fastcall sub_CFFF60(__int64 a1)
{
  return *(float *)(a1 + 16) != 3.39e38f;
}

void *__fastcall sub_D08860(__int64 a1, const void *a2, unsigned int a3, const void *a4, unsigned int a5)
{
  memcpy(*(void **)(a1 + 24), a2, 4LL * a3);
  return memcpy(*(void **)(a1 + 32), a4, 4LL * a5);
}

void *__fastcall sub_D088A0(__int64 a1, const void *a2, unsigned int a3, const void *a4, unsigned int a5)
{
  memcpy(*(void **)(a1 + 16), a2, 4LL * a3);
  return memcpy(*(void **)(a1 + 8), a4, 4LL * a5);
}

bool __fastcall sub_D19960(__int64 a1)
{
  return *(float *)(a1 + 64) != 3.39e38f;
}

__int64 __fastcall sub_D37A20(__int64 a1, int a2)
{
  __int64 v2; // x0

  v2 = *(_QWORD *)(a1 + 208) + 8LL;
  if ( a2 != -1 )
    return nn__os__TimedWaitEvent(v2, 1000000LL * a2);
  nn__os__WaitEvent(v2);
  return 1;
}

__int64 __fastcall sub_D5EE80(__int64 a1)
{
  __int64 v1; // x20
  __int64 v3; // x1

  v1 = qword_19397F0;
  if ( qword_19397F0 == 0 )
  {
    v1 = sub_722190(488, 8);
    sub_CF6830(v1, v3);
    qword_19397F0 = v1;
  }
  return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v1 + 32LL))(v1, a1);
}

__int64 __fastcall sub_D5EED0(__int64 a1)
{
  __int64 v1; // x20
  __int64 v3; // x1

  v1 = qword_19397F0;
  if ( qword_19397F0 == 0 )
  {
    v1 = sub_722190(488, 8);
    sub_CF6830(v1, v3);
    qword_19397F0 = v1;
  }
  return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v1 + 40LL))(v1, a1);
}

__int64 __fastcall sub_D5EF90(__int64 a1)
{
  __int64 v1; // x20
  __int64 v3; // x1

  v1 = qword_19397F0;
  if ( qword_19397F0 == 0 )
  {
    v1 = sub_722190(488, 8);
    sub_CF6830(v1, v3);
    qword_19397F0 = v1;
  }
  return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v1 + 16LL))(v1, a1);
}

__int64 __fastcall sub_D5EFE0(__int64 a1)
{
  __int64 v1; // x20
  __int64 v3; // x1

  v1 = qword_19397F0;
  if ( qword_19397F0 == 0 )
  {
    v1 = sub_722190(488, 8);
    sub_CF6830(v1, v3);
    qword_19397F0 = v1;
  }
  return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v1 + 56LL))(v1, a1);
}

__int64 __fastcall sub_D5F2B0(__int64 result)
{
  __int64 v1; // x19
  __int64 v2; // x8

  v1 = *(_QWORD *)(result + 16);
  if ( *(_DWORD *)v1 == 0 && *(_DWORD *)(v1 + 4) != 0 )
  {
    *(_DWORD *)(v1 + 40) = 1;
    v2 = 10LL * *(unsigned int *)(sub_D310A0(v1 + 32) + 4);
    return ((__int64 (__fastcall *)(_QWORD))qword_18D2318[v2])(*(_QWORD *)(v1 + 24));
  }
  return result;
}

__int64 __fastcall sub_D5FC60(__int64 result)
{
  __int64 v1; // x19
  __int64 v2; // x8

  v1 = *(_QWORD *)(result + 8);
  if ( *(_DWORD *)v1 == 0 && *(_DWORD *)(v1 + 4) != 0 )
  {
    *(_DWORD *)(v1 + 40) = 1;
    v2 = 10LL * *(unsigned int *)(sub_D310A0(v1 + 32) + 4);
    return ((__int64 (__fastcall *)(_QWORD))qword_18D2318[v2])(*(_QWORD *)(v1 + 24));
  }
  return result;
}

__int64 __fastcall sub_D61AA0(__int64 a1)
{
  __int64 v1; // x20
  __int64 v3; // x1

  v1 = qword_19397F0;
  if ( qword_19397F0 == 0 )
  {
    v1 = sub_722190(488, 8);
    sub_CF6830(v1, v3);
    qword_19397F0 = v1;
  }
  return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v1 + 32LL))(v1, a1);
}

__int64 __fastcall sub_D61AF0(__int64 a1)
{
  __int64 v1; // x20
  __int64 v3; // x1

  v1 = qword_19397F0;
  if ( qword_19397F0 == 0 )
  {
    v1 = sub_722190(488, 8);
    sub_CF6830(v1, v3);
    qword_19397F0 = v1;
  }
  return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v1 + 40LL))(v1, a1);
}

__int64 __fastcall sub_D61BB0(__int64 a1)
{
  __int64 v1; // x20
  __int64 v3; // x1

  v1 = qword_19397F0;
  if ( qword_19397F0 == 0 )
  {
    v1 = sub_722190(488, 8);
    sub_CF6830(v1, v3);
    qword_19397F0 = v1;
  }
  return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v1 + 16LL))(v1, a1);
}

__int64 __fastcall sub_D61C00(__int64 a1)
{
  __int64 v1; // x20
  __int64 v3; // x1

  v1 = qword_19397F0;
  if ( qword_19397F0 == 0 )
  {
    v1 = sub_722190(488, 8);
    sub_CF6830(v1, v3);
    qword_19397F0 = v1;
  }
  return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v1 + 56LL))(v1, a1);
}

float __fastcall sub_D757A0(_DWORD *a1)
{
  if ( a1[2] == 2 )
    return -2.0;
  else
    return (float)(unsigned int)a1[19] / (float)(unsigned int)a1[7];
}

float __fastcall sub_D76130(_DWORD *a1)
{
  if ( a1[2] == 2 )
    return -2.0;
  else
    return (float)(unsigned int)a1[23] / (float)(unsigned int)a1[7];
}

__int64 __fastcall sub_D777A0(__int64 a1, unsigned int a2)
{
  __int64 (__fastcall ***v2)(_QWORD); // x0

  v2 = *(__int64 (__fastcall ****)(_QWORD))(*(_QWORD *)(a1 + 136) + 8LL * a2);
  return (**v2)(v2);
}

__int64 __fastcall sub_D777C0(__int64 a1, unsigned int a2)
{
  __int64 v2; // x0

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 136) + 8LL * a2);
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
}

__int64 __fastcall sub_D777E0(__int64 a1, unsigned int a2)
{
  __int64 v2; // x0

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 136) + 8LL * a2);
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
}

__int64 __fastcall sub_D77800(__int64 a1, unsigned int a2)
{
  __int64 v2; // x0

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 136) + 8LL * a2);
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 24LL))(v2);
}

__int64 __fastcall sub_D77820(__int64 a1, unsigned int a2)
{
  __int64 v2; // x0

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 136) + 8LL * a2);
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 32LL))(v2);
}

__int64 __fastcall sub_D7B010(__int64 a1)
{
  __int64 v1; // x20
  __int64 v3; // x1
  __int64 v4; // x20
  __int64 v5; // x0

  v1 = qword_19397F0;
  if ( qword_19397F0 == 0 )
  {
    v1 = sub_722190(488, 8);
    sub_CF6830(v1, v3);
    qword_19397F0 = v1;
  }
  v4 = *(_QWORD *)(v1 + 472);
  v5 = sub_D359B0(a1 + 64);
  return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 304LL))(v4, v5);
}

__int64 __fastcall sub_D7B9A0(__int64 a1)
{
  __int64 v1; // x20
  __int64 v3; // x1
  __int64 v4; // x20
  __int64 v5; // x0

  v1 = qword_19397F0;
  if ( qword_19397F0 == 0 )
  {
    v1 = sub_722190(488, 8);
    sub_CF6830(v1, v3);
    qword_19397F0 = v1;
  }
  v4 = *(_QWORD *)(v1 + 472);
  v5 = sub_D359B0(a1 + 64);
  return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 304LL))(v4, v5);
}

bool __fastcall sub_D7BB40(__int64 a1)
{
  return *(_DWORD *)(a1 + 144) != 0 && *(float *)(a1 + 148) <= 0.0039f;
}

__int64 __fastcall sub_D7C2E0(__int64 a1)
{
  __int64 v1; // x20
  __int64 v3; // x1

  v1 = qword_19397F0;
  if ( qword_19397F0 == 0 )
  {
    v1 = sub_722190(488, 8);
    sub_CF6830(v1, v3);
    qword_19397F0 = v1;
  }
  return sub_D7DE10((_QWORD *)(v1 + 8), *(_QWORD *)(a1 + 8));
}

__int64 __fastcall sub_D7C520(__int64 a1)
{
  __int64 v1; // x20
  __int64 v3; // x1

  v1 = qword_19397F0;
  if ( qword_19397F0 == 0 )
  {
    v1 = sub_722190(488, 8);
    sub_CF6830(v1, v3);
    qword_19397F0 = v1;
  }
  return sub_D7C620((_QWORD *)(v1 + 8), *(_QWORD *)(a1 + 8));
}

bool __fastcall sub_D84740(__int64 a1)
{
  return *(_DWORD *)(a1 + 208) != 0 && *(float *)(a1 + 212) <= 0.0039f;
}

__int64 __fastcall sub_D84E10(__int64 a1)
{
  __int64 v1; // x20
  __int64 v3; // x1

  v1 = qword_19397F0;
  if ( qword_19397F0 == 0 )
  {
    v1 = sub_722190(488, 8);
    sub_CF6830(v1, v3);
    qword_19397F0 = v1;
  }
  return sub_D7DE10(v1 + 8, *(_QWORD *)(a1 + 8));
}

__int64 __fastcall sub_D85050(__int64 a1)
{
  __int64 v1; // x20
  __int64 v3; // x1

  v1 = qword_19397F0;
  if ( qword_19397F0 == 0 )
  {
    v1 = sub_722190(488, 8);
    sub_CF6830(v1, v3);
    qword_19397F0 = v1;
  }
  return sub_D7C620(v1 + 8, *(_QWORD *)(a1 + 8));
}

float __fastcall sub_D87140(_DWORD *a1)
{
  if ( a1[14] != 0 )
    return -1.0;
  if ( a1[2] == 2 )
    return -2.0;
  return (float)(int)a1[43] / (float)(unsigned int)a1[7];
}

float __fastcall sub_D87B90(unsigned int *a1)
{
  if ( a1[15] != 0 )
    return (float)a1[16] / (float)a1[7];
  else
    return -1.0;
}

bool __fastcall sub_D8A190(__int64 a1)
{
  return *(_DWORD *)(a1 + 216) != 0 && *(float *)(a1 + 220) <= 0.0039f;
}

__int64 __fastcall sub_D8A550(__int64 a1)
{
  __int64 v1; // x20
  __int64 v3; // x1

  v1 = qword_19397F0;
  if ( qword_19397F0 == 0 )
  {
    v1 = sub_722190(488, 8);
    sub_CF6830(v1, v3);
    qword_19397F0 = v1;
  }
  return sub_D7DE10(v1 + 8, *(_QWORD *)(a1 + 8));
}

__int64 __fastcall sub_D8A790(__int64 a1)
{
  __int64 v1; // x20
  __int64 v3; // x1

  v1 = qword_19397F0;
  if ( qword_19397F0 == 0 )
  {
    v1 = sub_722190(488, 8);
    sub_CF6830(v1, v3);
    qword_19397F0 = v1;
  }
  return sub_D7C620(v1 + 8, *(_QWORD *)(a1 + 8));
}

__int64 __fastcall sub_D8C620(__int64 a1, unsigned int a2)
{
  __int64 v2; // x8

  v2 = *(_QWORD *)(a1 + 112);
  if ( v2 == 0 )
    return 0;
  if ( *(_DWORD *)(a1 + 120) <= a2 )
    return 0;
  return v2 + 88LL * a2 + 48;
}

__int64 __fastcall sub_D8C660(__int64 a1, unsigned int a2)
{
  __int64 v2; // x8

  v2 = *(_QWORD *)(a1 + 112);
  if ( v2 == 0 )
    return 0;
  if ( *(_DWORD *)(a1 + 120) <= a2 )
    return 0;
  return v2 + 88LL * a2 + 56;
}

__int64 __fastcall sub_D8C6A0(__int64 a1, unsigned int a2)
{
  __int64 v2; // x8

  v2 = *(_QWORD *)(a1 + 112);
  if ( v2 == 0 )
    return 0;
  if ( *(_DWORD *)(a1 + 120) <= a2 )
    return 0;
  return v2 + 88LL * a2 + 64;
}

__int64 __fastcall sub_D8C6E0(__int64 a1, unsigned int a2)
{
  __int64 v2; // x8

  v2 = *(_QWORD *)(a1 + 112);
  if ( v2 == 0 )
    return 0;
  if ( *(_DWORD *)(a1 + 120) <= a2 )
    return 0;
  return v2 + 88LL * a2 + 72;
}

__int64 __fastcall sub_D8C720(__int64 a1, unsigned int a2)
{
  __int64 v2; // x8

  v2 = *(_QWORD *)(a1 + 112);
  if ( v2 == 0 )
    return 0;
  if ( *(_DWORD *)(a1 + 120) <= a2 )
    return 0;
  return v2 + 88LL * a2 + 80;
}

bool __fastcall sub_D8DF40(__int64 a1)
{
  return *(_DWORD *)(a1 + 200) != 0 && *(float *)(a1 + 204) <= 0.0039f;
}

__int64 __fastcall sub_D8E1B0(__int64 a1)
{
  __int64 v1; // x20
  __int64 v3; // x1

  v1 = qword_19397F0;
  if ( qword_19397F0 == 0 )
  {
    v1 = sub_722190(488, 8);
    sub_CF6830(v1, v3);
    qword_19397F0 = v1;
  }
  return sub_D7DE10(v1 + 8, *(_QWORD *)(a1 + 8));
}

__int64 __fastcall sub_D8E3F0(__int64 a1)
{
  __int64 v1; // x20
  __int64 v3; // x1

  v1 = qword_19397F0;
  if ( qword_19397F0 == 0 )
  {
    v1 = sub_722190(488, 8);
    sub_CF6830(v1, v3);
    qword_19397F0 = v1;
  }
  return sub_D7C620(v1 + 8, *(_QWORD *)(a1 + 8));
}

_Bool __fastcall sub_D8EF40(__int64 a1)
{
  __int64 v1; // x10
  unsigned int v2; // w8
  _DWORD *v3; // x10
  unsigned int v4; // w9

  v1 = *(_QWORD *)(a1 + 8);
  v2 = *(_DWORD *)(v1 + 80);
  if ( v2 == 0 )
    return 0;
  v3 = *(_DWORD **)(v1 + 136);
  v4 = 0;
  while ( *v3 == -1 )
  {
    ++v4;
    v3 += 2;
    if ( v4 >= v2 )
      return 0;
  }
  return 1;
}

__int64 __fastcall sub_D90DC0(__int64 result)
{
  __int64 v1; // x19
  __int64 v2; // x8

  v1 = *(_QWORD *)(result + 608);
  if ( *(_DWORD *)v1 == 0 && *(_DWORD *)(v1 + 4) != 0 )
  {
    *(_DWORD *)(v1 + 40) = 1;
    v2 = 10LL * *(unsigned int *)(sub_D310A0(v1 + 32) + 4);
    return ((__int64 (__fastcall *)(_QWORD))qword_18D2318[v2])(*(_QWORD *)(v1 + 24));
  }
  return result;
}

_DWORD *__fastcall sub_DA59F0(_DWORD *result, int a2)
{
  result[7] = 0;
  result[8] = 0;
  result[5] = a2;
  return result;
}

float __fastcall sub_DAD1D0(__int64 a1)
{
  unsigned __int64 v1; // x10
  unsigned __int64 v2; // x8
  unsigned __int64 v3; // x9
  unsigned __int64 v4; // x10
  unsigned __int64 v5; // x8

  v1 = *(_QWORD *)(a1 + 216) >> 24;
  v2 = *(unsigned int *)(a1 + 164);
  v3 = v1 - v2;
  if ( v1 <= v2 )
  {
    v5 = v1 % v2;
  }
  else
  {
    v4 = *(unsigned int *)(a1 + 176);
    if ( (_DWORD)v4 != 0 )
      v5 = v3 % v4 + *(unsigned int *)(a1 + 168);
    else
      v5 = v3 % v2;
  }
  return (float)v5 / (float)*(unsigned int *)(a1 + 92);
}

__int64 __fastcall sub_DB8130(__int64 result, _QWORD *a2)
{
  __int64 v2; // x8

  v2 = *(_QWORD *)(result + 8);
  if ( v2 != 0 )
  {
    *a2 = v2;
    *(_QWORD *)(result + 8) = a2;
  }
  else
  {
    *(_QWORD *)(result + 8) = a2;
    *(_QWORD *)(result + 16) = a2;
  }
  return result;
}

__int64 sub_DB8570()
{
  int v1; // [xsp+Ch] [xbp-4h] BYREF

  v1 = 4;
  (*(__int64(**)())off_18D7DE8)(0, &v1);
  return 0xFFFFFFFFLL;
}

__int64 sub_DB85A0()
{
  int v1; // [xsp+Ch] [xbp-4h] BYREF

  v1 = 4;
  (*(__int64(**)())off_18D7DE8)(0, &v1);
  return 0xFFFFFFFFLL;
}

__int64 sub_DB85D0()
{
  int v1; // [xsp+Ch] [xbp-4h] BYREF

  v1 = 4;
  (*(__int64(**)())off_18D7DE8)(0, &v1);
  return 0xFFFFFFFFLL;
}

bool __fastcall sub_DC1F90(unsigned __int8 *a1, unsigned __int8 *a2)
{
  _BOOL8 result; // x0
  unsigned __int8 v4; // w9
  unsigned __int8 *v5; // x8
  int v6; // t1

  if ( a1 == a2 )
    return true;
  result = false;
  if ( a1 != nullptr && a2 != nullptr )
  {
    v4 = *a1;
    if ( *a1 != 0 )
    {
      v5 = a1 + 1;
      do
      {
        if ( *a2 != v4 )
          break;
        v6 = *v5++;
        v4 = v6;
        ++a2;
      }
      while ( v6 != 0 );
    }
    return *a2 == v4;
  }
  return result;
}

__int64 sub_DC54D0()
{
  if ( qword_1948D78 != 0 )
  {
    sub_DC1790((void *)qword_1948D78);
    qword_1948D78 = 0;
  }
  qword_1948D70 = 0;
  return 1;
}

__int64 __fastcall sub_DCE6B0(__int64 a1, const char *a2, int a3)
{
  int v4; // [xsp+Ch] [xbp-4h] BYREF

  v4 = 0;
  return sub_DCEA60(*(_QWORD *)(a1 + 8), a2, a3, &v4);
}

__int64 __fastcall sub_DD2870(__int64 a1)
{
  return (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(a1 + 16))(a1 + 32, *(_QWORD *)(a1 + 24), 3);
}

float __fastcall sub_DD2DC0(__int64 a1)
{
  return (float)((float)(*(float *)(a1 + 16) + -0.7f) / 0.28f) / (float)(*(float *)(a1 + 24) / 0.4f);
}

_Bool __fastcall sub_DD5AB0(unsigned int *a1)
{
  if ( (sub_DD1160()) == 0 )
    return 0;
  a1[9] = a1[13] / (2 * (unsigned __int64)a1[7]);
  return 1;
}

__int64 __fastcall sub_DF2220(__int64 a1, char a2)
{
  sub_DFD150(a1);
  if ( (a2 & 1) != 0 )
    sub_DFCCB0(a1);
  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 1272) + 16LL))(*(_QWORD *)(a1 + 1272), 1);
  return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 728) + 40LL))(*(_QWORD *)(a1 + 728));
}

__int64 __fastcall sub_DF6330(__int64 a1, _Bool a2)
{
  __int64 result; // x0

  result = sub_DFD150(a1);
  if ( a2 )
  {
    sub_DFCCB0(a1);
    return sub_DFCCB0(a1);
  }
  return result;
}

__int64 __fastcall sub_DF6370(__int64 a1)
{
  const void *CurrentThread; // x0
  __int64 result; // x0

  CurrentThread = (const void *)nn__os__GetCurrentThread((char *)a1);
  memmove((void *)(a1 + 48), CurrentThread, 0x1C0u);
  *(_BYTE *)(a1 + 24) = 1;
  result = qword_195B1E0;
  if ( qword_195B1E0 != 0 )
  {
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)qword_195B1E0 + 56LL))(qword_195B1E0);
    *(_QWORD *)(a1 + 792) = result;
  }
  return result;
}

__int64 __fastcall sub_DFB850(__int64 result, __int64 a2)
{
  if ( a2 != 0 )
    result += sub_DFB850(*(_QWORD *)(a2 + 40), *(_QWORD *)(a2 + 48));
  return result;
}

__int64 __fastcall sub_DFC200(__int64 a1, _Bool a2)
{
  __int64 result; // x0

  result = sub_DFD150(a1);
  if ( a2 )
    return sub_DFCCB0(a1);
  return result;
}

__int64 __fastcall sub_DFDBF0(_QWORD *a1)
{
  unsigned int *v2; // x0
  unsigned int *v3; // x8
  unsigned int v4; // w9
  unsigned int v5; // w9

  *a1 = off_18E0180;
  qword_195B658 = 0;
  v2 = (unsigned int *)a1[91];
  if ( v2 != nullptr )
  {
    v3 = v2 + 2;
    v5 = __atomic_sub_fetch(v3, 1, 0);
    if ( v5 == 0 )
      (*(void (__fastcall **)(unsigned int *))(*(_QWORD *)v2 + 8LL))(v2);
  }
  return sub_DFD2C0(a1);
}

__int64 __fastcall sub_DFE4C0(__int64 result, __int64 a2)
{
  if ( a2 != 0 )
    result += sub_DFE4C0(*(_QWORD *)(a2 + 24), *(_QWORD *)(a2 + 48));
  return result;
}

__int64 __fastcall sub_E069A0(__int64 a1, char *dest, unsigned __int64 a3)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 result; // x0

  v3 = *(_QWORD *)(a1 + 56);
  if ( *(_QWORD *)(a1 + 48) - v3 >= a3 )
    v4 = a3;
  else
    v4 = *(_QWORD *)(a1 + 48) - v3;
  if ( v4 == 0 )
    return 0;
  result = sub_E06BD0(*(_QWORD **)(a1 + 64), *(unsigned int *)(a1 + 44), dest, v3, v4);
  if ( result != 0 )
    *(_QWORD *)(a1 + 56) += result;
  return result;
}

bool __fastcall sub_E0CC00(__int64 a1)
{
  __int64 v1; // x1
  unsigned __int64 v2; // x19
  int FileSize; // w0
  unsigned __int64 v4; // x8
  unsigned __int64 v6; // [xsp+8h] [xbp-18h] BYREF

  v1 = *(_QWORD *)(a1 + 48);
  if ( v1 != 0 )
  {
    v2 = *(_QWORD *)(a1 + 64);
    FileSize = nn__fs__GetFileSize(&v6, v1);
    v4 = v6;
    if ( FileSize != 0 )
      v4 = 0;
  }
  else
  {
    v2 = 0;
    v4 = 0;
  }
  return v2 >= v4;
}

__int64 __fastcall sub_E0CC50(__int64 a1)
{
  __int64 result; // x0

  result = *(_QWORD *)(a1 + 48);
  if ( result != 0 )
  {
    if ( (*(_BYTE *)(a1 + 56) & 2) != 0 )
    {
      nn__fs__FlushFile();
      result = *(_QWORD *)(a1 + 48);
    }
    result = nn__fs__CloseFile(result);
    *(_QWORD *)(a1 + 48) = 0;
  }
  *(_QWORD *)(a1 + 64) = 0;
  return result;
}

__int64 __fastcall sub_E0CC90(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // x1
  __int64 result; // x0
  __int64 v7; // [xsp+8h] [xbp-18h] BYREF

  if ( a3 == 0 )
    return 0;
  v4 = *(_QWORD *)(a1 + 48);
  if ( v4 == 0 )
    return 0;
  v7 = 0;
  nn__fs__ReadFile(&v7, v4, *(_QWORD *)(a1 + 64), a2, a3);
  result = v7;
  *(_QWORD *)(a1 + 64) += v7;
  return result;
}

__int64 __fastcall sub_E0CE00(__int64 a1)
{
  __int64 v1; // x1
  __int64 v3; // [xsp+8h] [xbp-8h] BYREF

  v1 = *(_QWORD *)(a1 + 48);
  if ( v1 == 0 )
    return 0;
  if ( (unsigned int)nn__fs__GetFileSize(&v3, v1) != 0 )
    return 0;
  return v3;
}

__int64 __fastcall sub_E0CE30(__int64 a1)
{
  __int64 result; // x0

  result = *(_QWORD *)(a1 + 48);
  if ( result != 0 )
    return (unsigned int)nn__fs__SetFileSize(result, *(_QWORD *)(a1 + 64)) == 0;
  return result;
}

__int64 __fastcall sub_E0EE50(char *a1)
{
  qword_195B648 = nn__os__GetSystemTick(a1);
  qword_195B670 = nn__os__GetSystemTickFrequency((char *)qword_195B648);
  *(double *)&qword_195B650 = (double)qword_195B670;
  *(double *)&qword_195B678 = (double)qword_195B670 / 1000.0;
  return 1;
}

__int64 __fastcall sub_E95030(__int64 a1)
{
  char *v2; // x0
  char *SystemTick; // x0
  _BOOL8 v4; // x1

  v2 = (char *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 760) + 24LL))(*(_QWORD *)(a1 + 760));
  SystemTick = (char *)nn__os__GetSystemTick(v2);
  *(_QWORD *)(a1 + 744) = (char *)SystemTick - qword_195B648;
  *(_DWORD *)(a1 + 728) |= 0x40u;
  v4 = (unsigned int)nn__oe__GetOperationMode(SystemTick) == 0;
  return (*(__int64 (__fastcall **)(_QWORD, _BOOL8))(**(_QWORD **)(a1 + 760) + 80LL))(*(_QWORD *)(a1 + 760), v4);
}

__int64 sub_E95350()
{
  return *(_QWORD *)(*(_QWORD *)(qword_195B1E0 + 56) + 8LL * *(int *)(*(_QWORD *)(qword_195B1E0 + 56) + 9368LL) + 10096)
       + 416LL;
}

__int64 sub_E95380()
{
  return *(_QWORD *)(*(_QWORD *)(qword_195B1E0 + 56) + 8LL * *(int *)(*(_QWORD *)(qword_195B1E0 + 56) + 9368LL) + 10096)
       + 416LL;
}

__int64 __fastcall sub_EA78A0(__int64 a1)
{
  __int64 v1; // x19

  v1 = *(_QWORD *)(qword_195B1E0 + 56) + 104LL;
  (*(__int64(**)())off_191B558)(v1, a1 + 72, 0, 0);
  return (*(__int64(**)())off_191A7A0)(v1);
}

__int64 __fastcall sub_EAB4B0(__int64 a1)
{
  return *(_QWORD *)(a1 + 8LL * *(int *)(a1 + 9368) + 10096);
}

__int64 __fastcall sub_EB6740(__int64 a1)
{
  __int64 result; // x0

  result = nn__audio__GetAudioRendererState(*(_QWORD *)(a1 + 80), *(_QWORD *)(a1 + 88));
  if ( (_DWORD)result == 0 )
    return nn__audio__StopAudioRenderer(*(_QWORD *)(a1 + 80), *(_QWORD *)(a1 + 88));
  return result;
}

__int64 __fastcall sub_EB7210(__int64 a1)
{
  nn__audio__SetVoicePlayState(a1 + 240, 2);
  *(_DWORD *)(a1 + 72) = 2;
  return 1;
}

__int64 __fastcall sub_EB7240(__int64 a1)
{
  nn__audio__SetVoicePlayState(a1 + 240, 0);
  *(_DWORD *)(a1 + 72) = 1;
  return 1;
}

bool __fastcall sub_F35C30(__int64 a1, unsigned __int8 *a2, unsigned int a3, unsigned int *a4)
{
  unsigned __int8 v4; // w10
  unsigned int v5; // w8
  unsigned __int8 *v6; // x9
  int v7; // t1

  if ( a2 != nullptr )
  {
    v4 = *a2;
    if ( *a2 != 0 )
    {
      v5 = 0;
      v6 = a2 + 1;
      do
      {
        v5 = (unsigned __int8)(byte_153F7D5[v4] ^ v4) ^ __builtin_rotateright32(v5, 28);
        v7 = *v6++;
        v4 = v7;
      }
      while ( v7 != 0 );
    }
    else
    {
      v5 = 0;
    }
    *a4 = v5 % a3;
  }
  return a2 != nullptr;
}

double __fastcall sub_FA1D80(double a1, double a2, double a3, double a4)
{
  return a1 / a4 * (a1 / a4 * a3) * (a1 / a4 * 2.70158 + -1.70158) + a2;
}

double __fastcall sub_FA1DB0(double a1, double a2, double a3, double a4)
{
  return ((a1 / a4 + -1.0) * (a1 / a4 + -1.0) * ((a1 / a4 + -1.0) * 2.70158 + 1.70158) + 1.0) * a3 + a2;
}

