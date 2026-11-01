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
extern "C" {
void* memcpy(void*, const void*, size_t); void* memset(void*, int, size_t); void* memmove(void*, const void*, size_t); int memcmp(const void*, const void*, size_t); size_t strlen(const char*); int strcmp(const char*, const char*); char* strcpy(char*, const char*); char* strncpy(char*, const char*, size_t); int strncmp(const char*, const char*, size_t); void free(void*) noexcept; void* malloc(size_t); float fabsf(float); float sqrtf(float); float floorf(float); float ceilf(float);
extern char goff_18FA680[];
__attribute__((visibility("hidden"))) __int64 sub_2E45E0(...);
__attribute__((visibility("hidden"))) __int64 sub_33E470(...);
__attribute__((visibility("hidden"))) __int64 sub_33EB70(...);
__attribute__((visibility("hidden"))) __int64 sub_340FB0(...);
__attribute__((visibility("hidden"))) __int64 sub_34F7E0(...);
__attribute__((visibility("hidden"))) __int64 sub_354910(...);
__attribute__((visibility("hidden"))) __int64 sub_3593C0(...);
__attribute__((visibility("hidden"))) __int64 sub_39D110(...);
__attribute__((visibility("hidden"))) __int64 sub_56C9F0(...);
__attribute__((visibility("hidden"))) __int64 sub_56CD80(...);
__attribute__((visibility("hidden"))) __int64 sub_5753C0(...);
__attribute__((visibility("hidden"))) __int64 sub_5889E0(...);

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

// NSt3__110__function6__funcIZN5storm4echo5group20GroupManager_Network9OnStartupEPKNS2_10ActorParamEPNS2_11ActorResultEE4$_41NS_9allocatorISB_EEFvRKNS2_4GUIDERKNS2_10BasePacketERNS2_13DataContainerEEEE, virtual slot 6
void __fastcall sub_3E4420(__int64 a1)
{
  __int64 v2; // [xsp+8h] [xbp-8h] BYREF

  new ((void*)(&v2)) Big(((Big(*)(__typeof__(*(_QWORD *)(a1 + 8))))sub_39D110)(*(_QWORD *)(a1 + 8)));
}

void sub_4A3340(__int64 a1, __int64 a2)
{
  __int64 v3; // [xsp+8h] [xbp-8h] BYREF

  *(_QWORD *)(a1 + 64) = a2;
  new ((void*)(&v3)) Big(((Big(*)(__typeof__(a2), __typeof__(a1)))sub_56CD80)(a2, a1));
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
