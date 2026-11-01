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
extern char byte_153F7D5[];
__int64 nn__audio__GetAudioRendererState();
__int64 nn__audio__SetVoicePlayState();
__int64 nn__audio__StopAudioRenderer();
__int64 nn__fs__CloseFile();
__int64 nn__fs__FlushFile();
__int64 nn__fs__GetFileSize();
__int64 nn__fs__ReadFile();
__int64 nn__fs__SetFileSize();
__int64 nn__oe__GetOperationMode();
__int64 nn__os__AcquireSemaphore();
__int64 nn__os__DestroyThread();
__int64 nn__os__GetCurrentThread();
__int64 nn__os__GetSystemTick();
__int64 nn__os__GetSystemTickFrequency();
__int64 nn__os__ReleaseSemaphore();
__int64 nn__os__TimedAcquireSemaphore();
extern void* off_18E00C0[];
extern void* off_18E0180[];
extern void* off_18E9570[];
extern void* off_18E9B40[];
extern void* off_18EA8F0[];
extern void* off_18EA938[];
extern void* off_191A7A0[];
extern void* off_191B558[];
extern __int64 qword_195B1E0;
extern __int64 qword_195B648;
extern __int64 qword_195B650;
extern __int64 qword_195B658;
extern __int64 qword_195B670;
extern __int64 qword_195B678;
__int64 sub_DDB190();
__int64 sub_DDB350();
__int64 sub_DFCCB0();
__int64 sub_DFD150();
__int64 sub_DFD2C0();
__int64 sub_E06BD0();
__int64 sub_E10E90();
__int64 sub_EA6C60();
__int64 sub_EC1410();
__int64 sub_EC2B10();
__int64 sub_EC3FC0();
__int64 sub_EFFD80();
__int64 sub_F24F40();
__int64 sub_F9F3E0();
__int64 sub_FA0140();

// N2EE15ResourceManagerE, virtual slot 5
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

// N2EE23RendererResourceJobLoopE, virtual slot 2
__int64 __fastcall sub_DFC200(__int64 a1, _Bool a2)
{
  __int64 result; // x0

  result = sub_DFD150(a1);
  if ( a2 )
    return sub_DFCCB0(a1);
  return result;
}

// N2EE15ApplicationBaseE, virtual slot 3
__int64 __fastcall sub_DFC240(__int64 a1)
{
  __int64 i; // x8
  __int64 v3; // x8
  __int64 v4; // x0
  __int64 result; // x0

  if ( *(_QWORD *)(a1 + 736) != 0 )
  {
    for ( i = *(_QWORD *)(a1 + 720); i == 0; i = *(_QWORD *)(a1 + 720) )
    {
      v3 = *(int *)(a1 + 672);
      if ( (_DWORD)v3 != 0 )
      {
        v4 = *(_QWORD *)(a1 + 664);
        if ( (_DWORD)v3 == -1 )
          nn__os__AcquireSemaphore(v4);
        else
          nn__os__TimedAcquireSemaphore(v4, 1000000 * v3);
      }
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 56LL))(a1);
    }
    return nn__os__ReleaseSemaphore(*(_QWORD *)(i + 8));
  }
  else
  {
    while ( 1 )
    {
      if ( (*(_BYTE *)(a1 + 728) & 0x20) != 0 )
      {
        result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 760) + 96LL))(*(_QWORD *)(a1 + 760));
        if ( (result & 1) != 0 )
          break;
      }
      if ( *(_QWORD *)(a1 + 736) == 0 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 96LL))(a1);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 56LL))(a1);
      }
    }
  }
  return result;
}

// N2EE15ApplicationBaseE, virtual slot 9
float __fastcall sub_DFC720(_DWORD *a1, int *a2)
{
  int v2; // w8
  int v3; // w9
  float v4; // s0
  float result; // s0

  v2 = *a2;
  a1[204] = *a2;
  v3 = a2[1];
  a1[202] = v2;
  a1[205] = v3;
  a1[203] = v3;
  a1[200] = 2 * *a2 / 3;
  if ( (float)((float)v2 / (float)v3) <= 1.7777778f )
    v4 = (float)a2[1];
  else
    v4 = (float)((float)*a2 * 9.0) * 0.0625;
  result = (float)(v4 + v4) / 3.0;
  a1[201] = (int)result;
  return result;
}

// N2EE23RendererResourceJobLoopE, virtual slot 3
__int64 __fastcall sub_DFD450(__int64 a1)
{
  __int64 i; // x8
  __int64 v3; // x8
  __int64 v4; // x0

  for ( i = *(_QWORD *)(a1 + 720); i == 0; i = *(_QWORD *)(a1 + 720) )
  {
    v3 = *(int *)(a1 + 672);
    if ( (_DWORD)v3 != 0 )
    {
      v4 = *(_QWORD *)(a1 + 664);
      if ( (_DWORD)v3 == -1 )
        nn__os__AcquireSemaphore(v4);
      else
        nn__os__TimedAcquireSemaphore(v4, 1000000 * v3);
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 56LL))(a1);
  }
  return nn__os__ReleaseSemaphore(*(_QWORD *)(i + 8));
}

// N2EE13MessageThreadE, virtual slot 0
__int64 __fastcall sub_DFDA10(__int64 a1)
{
  unsigned int *v2; // x0
  unsigned int *v3; // x8
  unsigned int v4; // w9
  unsigned int v5; // w9
  unsigned int *v6; // x0
  unsigned int *v7; // x8
  unsigned int v8; // w9
  unsigned int v9; // w9
  void *v10; // x0
  __int64 result; // x0
  unsigned int *v12; // x8
  unsigned int v13; // w9
  unsigned int v14; // w9

  *(_QWORD *)a1 = off_18E00C0;
  v2 = *(unsigned int **)(a1 + 496);
  if ( v2 != nullptr )
  {
    v3 = v2 + 2;
    v5 = __atomic_sub_fetch(v3, 1, 0);
    if ( v5 == 0 )
      (*(void (__fastcall **)(unsigned int *))(*(_QWORD *)v2 + 8LL))(v2);
  }
  if ( *(_QWORD *)(a1 + 16) != 0 )
  {
    nn__os__DestroyThread(a1 + 48);
    free(*(void **)(a1 + 32));
    v6 = *(unsigned int **)(a1 + 16);
    *(_QWORD *)(a1 + 32) = 0;
    *(_QWORD *)(a1 + 40) = 0;
    *(_QWORD *)(a1 + 16) = 0;
    if ( v6 != nullptr )
    {
      v7 = v6 + 2;
      v9 = __atomic_sub_fetch(v7, 1, 0);
      if ( v9 == 0 )
        (*(void (__fastcall **)(unsigned int *))(*(_QWORD *)v6 + 8LL))(v6);
    }
  }
  else
  {
    *(_QWORD *)(a1 + 16) = 0;
  }
  v10 = *(void **)(a1 + 32);
  *(_BYTE *)(a1 + 24) = 0;
  free(v10);
  result = *(_QWORD *)(a1 + 16);
  if ( result != 0 )
  {
    v12 = (unsigned int *)(result + 8);
    v14 = __atomic_sub_fetch(v12, 1, 0);
    if ( v14 == 0 )
      return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 8LL))(result);
  }
  return result;
}

// N2EE9AudioLoopE, virtual slot 0
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

// N2EE17VfsFileCompressedE, virtual slot 5
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

// N2EE10NativeFileE, virtual slot 3
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

// N2EE10NativeFileE, virtual slot 4
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

// N2EE10NativeFileE, virtual slot 5
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

// N2EE10NativeFileE, virtual slot 10
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

// N2EE10NativeFileE, virtual slot 11
__int64 __fastcall sub_E0CE30(__int64 a1)
{
  __int64 result; // x0

  result = *(_QWORD *)(a1 + 48);
  if ( result != 0 )
    return (unsigned int)nn__fs__SetFileSize(result, *(_QWORD *)(a1 + 64)) == 0;
  return result;
}

// N2EE12PlatformBaseE, virtual slot 6
__int64 __fastcall sub_E0EE50(char *a1)
{
  qword_195B648 = nn__os__GetSystemTick(a1);
  qword_195B670 = nn__os__GetSystemTickFrequency((char *)qword_195B648);
  *(double *)&qword_195B650 = (double)qword_195B670;
  *(double *)&qword_195B678 = (double)qword_195B670 / 1000.0;
  return 1;
}

__int64 __fastcall sub_E52F20(__int64 result)
{
  _QWORD *v1; // x19
  __int64 v2; // x8
  _QWORD *v3; // x8
  _QWORD *v4; // x9
  _QWORD *v5; // t1
  __int64 v6; // x20
  void (__fastcall *v7)(_QWORD *); // x8

  v1 = *(_QWORD **)(result + 304);
  if ( v1 != nullptr )
  {
    v2 = v1[1];
    v5 = *(_QWORD **)(v2 + 152);
    v3 = (_QWORD *)(v2 + 152);
    v4 = v5;
    if ( v5 != nullptr )
    {
      v6 = *(_QWORD *)(v3[3] + 16LL);
      while ( v4 != v1 )
      {
        v3 = v4 + 2;
        v4 = (_QWORD *)v4[2];
        if ( v4 == nullptr )
          return result;
      }
      *v3 = v1[2];
      v7 = (void (__fastcall *)(_QWORD *))v1[5];
      if ( v7 != nullptr )
        v7(v1);
      sub_E10E90(v1);
      return (*(__int64 (__fastcall **)(__int64, _QWORD *))(v6 + 16))(v6, v1);
    }
  }
  return result;
}

// N2EE17ApplicationSwitchE, virtual slot 10
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

// N2EE20NvnBackBufferTextureE, virtual slot 13
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

// N2EE22D3D11DeviceContextImplINS_20NvnDeviceContextBaseELb0EEE, virtual slot 44
_QWORD *__fastcall sub_EA4B90(_QWORD *a1, unsigned int *a2)
{
  unsigned int *v3; // x0
  unsigned int *v5; // x8
  unsigned int v6; // w9
  unsigned int v7; // w9
  unsigned int *v8; // x8
  unsigned int v9; // w9

  v3 = (unsigned int *)a1[251];
  if ( v3 != a2 )
  {
    if ( v3 != nullptr )
    {
      v5 = v3 + 2;
      v7 = __atomic_sub_fetch(v5, 1, 0);
      if ( v7 == 0 )
        (*(void (__fastcall **)(unsigned int *))(*(_QWORD *)v3 + 24LL))(v3);
    }
    a1[251] = a2;
    if ( a2 != nullptr )
    {
      v8 = a2 + 2;
      v9 = __atomic_fetch_add(v8, 1, 0);
    }
  }
  return sub_EA6C60(a1, 1, 0);
}

// N2EE13NvnEventQueryE, virtual slot 12
__int64 __fastcall sub_EA78A0(__int64 a1)
{
  __int64 v1; // x19

  v1 = *(_QWORD *)(qword_195B1E0 + 56) + 104LL;
  (*(__int64(**)())off_191B558)(v1, a1 + 72, 0, 0);
  return (*(__int64(**)())off_191A7A0)(v1);
}

// N2EE12NvnSwapChainE, virtual slot 2
__int64 __fastcall sub_EAB4B0(__int64 a1)
{
  return *(_QWORD *)(a1 + 8LL * *(int *)(a1 + 9368) + 10096);
}

// N2EE18SwitchInputManagerE, virtual slot 21
__int64 __fastcall sub_EB5B00(__int64 a1, __int64 a2)
{
  __int64 result; // x0

  result = sub_DDB190();
  if ( a2 != 0 )
  {
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 112LL))(a2);
    while ( (char **)result != off_18E9570 )
    {
      result = *(_QWORD *)(result + 8);
      if ( result == 0 )
        return result;
    }
    return (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 960) + 40LL))(*(_QWORD *)(a1 + 960), a2);
  }
  return result;
}

// N2EE18SwitchInputManagerE, virtual slot 22
__int64 __fastcall sub_EB5B70(__int64 a1, __int64 a2)
{
  __int64 result; // x0

  result = sub_DDB350();
  if ( a2 != 0 )
  {
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 112LL))(a2);
    while ( (char **)result != off_18E9570 )
    {
      result = *(_QWORD *)(result + 8);
      if ( result == 0 )
        return result;
    }
    return (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 960) + 48LL))(*(_QWORD *)(a1 + 960), a2);
  }
  return result;
}

// N2EE8HeatWave11SwitchSynthE, virtual slot 4
__int64 __fastcall sub_EB6740(__int64 a1)
{
  __int64 result; // x0

  result = nn__audio__GetAudioRendererState(*(_QWORD *)(a1 + 80), *(_QWORD *)(a1 + 88));
  if ( (_DWORD)result == 0 )
    return nn__audio__StopAudioRenderer(*(_QWORD *)(a1 + 80), *(_QWORD *)(a1 + 88));
  return result;
}

// N2EE8HeatWave18SwitchSynthChannelE, virtual slot 5
__int64 __fastcall sub_EB7210(__int64 a1)
{
  nn__audio__SetVoicePlayState(a1 + 240, 2);
  *(_DWORD *)(a1 + 72) = 2;
  return 1;
}

// N2EE8HeatWave18SwitchSynthChannelE, virtual slot 6
__int64 __fastcall sub_EB7240(__int64 a1)
{
  nn__audio__SetVoicePlayState(a1 + 240, 0);
  *(_DWORD *)(a1 + 72) = 1;
  return 1;
}

void __fastcall sub_F060B0(__int64 a1)
{
  _QWORD *v2; // x0
  _QWORD *v3; // x20
  __int64 v4; // x20
  __int64 v5; // x21
  __int64 v6; // x8
  __int64 v7; // x0

  sub_EC2B10(*(_QWORD *)(*(_QWORD *)a1 + 544LL) + 184LL);
  v2 = *(_QWORD **)(a1 + 248);
  if ( v2 != nullptr )
  {
    do
    {
      v3 = (_QWORD *)*v2;
      sub_FA0140((__int64)v2);
      v2 = v3;
      *(_QWORD *)(a1 + 248) = v3;
    }
    while ( v3 != nullptr );
  }
  v4 = *(_QWORD *)(a1 + 256);
  if ( v4 != 0 )
  {
    do
    {
      v5 = *(_QWORD *)(v4 + 24);
      sub_EFFD80(v4);
      sub_FA0140(v4);
      v4 = v5;
      *(_QWORD *)(a1 + 256) = v5;
    }
    while ( v5 != 0 );
  }
  v6 = *(_QWORD *)(a1 + 32);
  if ( v6 != 0 && *(_BYTE *)(v6 + 61) == 9 )
  {
    v7 = *(_QWORD *)(a1 + 272);
    if ( v7 != 0 )
      sub_F24F40(v7);
  }
  *(_BYTE *)(a1 + 187) = 0;
}

__int64 __fastcall sub_F091A0(__int64 result, __int64 a2)
{
  __int64 v3; // x1
  __int64 v4; // x20
  __int64 i; // x20

  v3 = *(_QWORD *)(result + 248);
  v4 = result;
  if ( v3 != 0 )
  {
    result = sub_EC3FC0(a2 + 184, v3);
    *(_BYTE *)(a2 + 5) |= (int)result > 0;
  }
  for ( i = *(_QWORD *)(v4 + 24); i != 0; i = *(_QWORD *)(i + 16) )
    result = sub_F091A0(i, a2);
  return result;
}

// 8RichEdit, virtual slot 3
__int64 __fastcall sub_F25BD0(_QWORD *a1)
{
  _QWORD *v2; // x0
  _QWORD *v3; // x20
  __int64 v4; // x20
  __int64 v5; // x21
  _QWORD *v6; // x0
  _QWORD *v7; // x20
  __int64 v8; // x20
  __int64 v9; // x21
  __int64 v10; // x21
  __int64 v11; // x20
  __int64 v12; // x22
  __int64 result; // x0

  v2 = (_QWORD *)a1[25];
  if ( v2 != nullptr )
  {
    do
    {
      v3 = (_QWORD *)*v2;
      sub_FA0140((__int64)v2);
      v2 = v3;
      a1[25] = v3;
    }
    while ( v3 != nullptr );
  }
  v4 = a1[26];
  if ( v4 != 0 )
  {
    do
    {
      v5 = *(_QWORD *)(v4 + 24);
      sub_EFFD80(v4);
      sub_FA0140(v4);
      v4 = v5;
      a1[26] = v5;
    }
    while ( v5 != 0 );
  }
  v6 = (_QWORD *)a1[27];
  if ( v6 != nullptr )
  {
    do
    {
      v7 = (_QWORD *)*v6;
      sub_FA0140((__int64)v6);
      v6 = v7;
      a1[27] = v7;
    }
    while ( v7 != nullptr );
  }
  v8 = a1[28];
  if ( v8 != 0 )
  {
    do
    {
      v9 = *(_QWORD *)(v8 + 24);
      sub_EFFD80(v8);
      sub_FA0140(v8);
      v8 = v9;
      a1[28] = v9;
    }
    while ( v9 != 0 );
  }
  v10 = a1[18];
  v11 = *(_QWORD *)(v10 + 256);
  if ( v11 != 0 )
  {
    do
    {
      v12 = *(_QWORD *)(v11 + 24);
      sub_EFFD80(v11);
      sub_FA0140(v11);
      v11 = v12;
      *(_QWORD *)(v10 + 256) = v12;
    }
    while ( v12 != 0 );
  }
  result = sub_EC1410(a1[166]);
  a1[166] = 0;
  return result;
}

// 13EditTextTable, virtual slot 2
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

// 19achwShapeOES_Stroke, virtual slot 0
_QWORD *__fastcall sub_F90930(_QWORD *result)
{
  _QWORD *v1; // x8
  _QWORD *v2; // x9
  __int64 v3; // x11
  __int64 v4; // x10

  *result = off_18EA8F0;
  v1 = result + 6;
  v2 = (_QWORD *)result[6];
  if ( v2 != nullptr )
  {
    v3 = result[7];
    if ( v3 != 0 )
      *(_QWORD *)(v3 + 16) = result[8];
    v4 = result[8];
    if ( v4 != 0 )
      *(_QWORD *)(v4 + 8) = v3;
    if ( (_QWORD *)*v2 == v1 )
      *v2 = result[7];
    if ( (_QWORD *)v2[1] == v1 )
      v2[1] = v4;
    if ( (_QWORD *)v2[2] == v1 )
      v2[2] = result[7];
    *v1 = 0;
    result[7] = 0;
    result[8] = 0;
  }
  *result = &off_18E9B40;
  return result;
}

// 25achwShapeOES_ScaledColors, virtual slot 0
_QWORD *__fastcall sub_F90B20(_QWORD *result)
{
  _QWORD *v1; // x8
  _QWORD *v2; // x9
  __int64 v3; // x11
  __int64 v4; // x10

  *result = off_18EA938;
  v1 = result + 6;
  v2 = (_QWORD *)result[6];
  if ( v2 != nullptr )
  {
    v3 = result[7];
    if ( v3 != 0 )
      *(_QWORD *)(v3 + 16) = result[8];
    v4 = result[8];
    if ( v4 != 0 )
      *(_QWORD *)(v4 + 8) = v3;
    if ( (_QWORD *)*v2 == v1 )
      *v2 = result[7];
    if ( (_QWORD *)v2[1] == v1 )
      v2[1] = v4;
    if ( (_QWORD *)v2[2] == v1 )
      v2[2] = result[7];
    *v1 = 0;
    result[7] = 0;
    result[8] = 0;
  }
  *result = &off_18E9B40;
  return result;
}

// N4fire18DefaultBasicStringIwEE, virtual slot 2
__int64 __fastcall sub_F9F370(__int64 a1, char *a2)
{
  char *v4; // x8
  int v5; // t1
  unsigned __int64 v6; // x21
  __int64 v7; // x8

  v4 = a2;
  do
  {
    v5 = *(_DWORD *)v4;
    v4 += 4;
  }
  while ( v5 != 0 );
  v6 = (unsigned int)((unsigned __int64)(v4 - a2) >> 2) - 1;
  sub_F9F3E0((_QWORD *)(a1 + 8), v6);
  v7 = *(_QWORD *)(a1 + 16);
  if ( v7 != 0 )
    memcpy(*(void **)(v7 + 24), a2, 4 * v6);
  return a1;
}

double __fastcall sub_FA1D80(double a1, double a2, double a3, double a4)
{
  return a1 / a4 * (a1 / a4 * a3) * (a1 / a4 * 2.70158 + -1.70158) + a2;
}

double __fastcall sub_FA1DB0(double a1, double a2, double a3, double a4)
{
  return ((a1 / a4 + -1.0) * (a1 / a4 + -1.0) * ((a1 / a4 + -1.0) * 2.70158 + 1.70158) + 1.0) * a3 + a2;
}

