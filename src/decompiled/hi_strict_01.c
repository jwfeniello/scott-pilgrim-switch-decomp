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
extern char byte_153F7D5[];
extern char byte_1924C90;
extern int dword_191FB00;
extern int dword_194AFA4;
__int64 nn__audio__GetAudioRendererState();
__int64 nn__audio__SetVoicePlayState();
__int64 nn__audio__StopAudioRenderer();
__int64 nn__fs__CloseFile();
__int64 nn__fs__FlushFile();
__int64 nn__fs__GetFileSize();
__int64 nn__fs__ReadFile();
__int64 nn__fs__SetFileSize();
__int64 nn__fs__WriteFile();
__int64 nn__oe__GetOperationMode();
__int64 nn__os__AcquireSemaphore();
__int64 nn__os__DestroyThread();
__int64 nn__os__FinalizeEvent();
__int64 nn__os__FinalizeMutex();
__int64 nn__os__GetCurrentThread();
__int64 nn__os__GetSystemTick();
__int64 nn__os__GetSystemTickFrequency();
__int64 nn__os__LockMutex();
__int64 nn__os__ReleaseSemaphore();
__int64 nn__os__SignalEvent();
__int64 nn__os__TimedAcquireSemaphore();
__int64 nn__os__TimedWaitEvent();
__int64 nn__os__UnlockMutex();
__int64 nn__os__WaitEvent();
__int64 nn__os__WaitThread();
extern void* off_18CC2D0[];
extern void* off_18CC408[];
extern void* off_18CC600[];
extern void* off_18CC608[];
extern void* off_18CCA20[];
extern void* off_18CCB80[];
extern void* off_18CCCE0[];
extern void* off_18CCEC8[];
extern void* off_18CD028[];
extern void* off_18CD188[];
extern void* off_18CD300[];
extern void* off_18CD460[];
extern void* off_18CD540[];
extern void* off_18D7DE8[];
extern void* off_18D8720[];
extern void* off_18D87A0[];
extern void* off_18DC448[];
extern void* off_18DC550[];
extern void* off_18DCA68[];
extern void* off_18DCCE0[];
extern void* off_18DF750[];
extern void* off_18E00C0[];
extern void* off_18E0180[];
extern void* off_18E01F0[];
extern void* off_18E0568[];
extern void* off_18E05F8[];
extern void* off_18E07C0[];
extern void* off_18E0838[];
extern void* off_18E08B8[];
extern void* off_18E9570[];
extern void* off_18E9B40[];
extern void* off_18EA8F0[];
extern void* off_18EA938[];
extern void* off_191A7A0[];
extern void* off_191B558[];
__int64 q0();
extern __int64 qword_18D2318[];
extern __int64 qword_191CD10;
extern __int64 qword_191FAF8;
extern __int64 qword_1924BC0;
extern __int64 qword_1926BD8;
extern __int64 qword_19396D8;
extern __int64 qword_19396E8;
extern __int64 qword_19396F8;
extern __int64 qword_1939708;
extern __int64 qword_1939718;
extern __int64 qword_1939728;
extern __int64 qword_1939738;
extern __int64 qword_1939748;
extern __int64 qword_1939758;
extern __int64 qword_1939768;
extern __int64 qword_19397C8;
extern __int64 qword_19397F0;
extern __int64 qword_1939810;
extern __int64 qword_1945E28;
extern __int64 qword_1948D70;
extern __int64 qword_1948D78;
extern __int64 qword_195B1E0;
extern __int64 qword_195B4B0;
extern __int64 qword_195B638;
extern __int64 qword_195B648;
extern __int64 qword_195B650;
extern __int64 qword_195B658;
extern __int64 qword_195B668;
extern __int64 qword_195B670;
extern __int64 qword_195B678;
_Bool sub_576540();
int sub_57F110();
__int64 sub_67EDD0();
__int64 sub_68ED40();
__int64 sub_722190();
__int64 sub_7710B0();
__int64 sub_778670();
unsigned char sub_A82B30();
__int64 sub_BFBCE0();
__int64 sub_CD5D80();
__int64 sub_CD6DF0();
__int64 sub_CF6830();
__int64 sub_CF8C60();
__int64 sub_CFA210();
__int64 sub_D1C450();
__int64 sub_D1C780();
__int64 sub_D29AF0();
__int64 sub_D2BDE0();
__int64 sub_D310A0();
__int64 sub_D359B0();
__int64 sub_D3C490();
unsigned int sub_D494A0();
__int64 sub_D54040();
unsigned int sub_D54110();
unsigned int sub_D54DE0();
__int64 sub_D59C00();
__int64 sub_D59D20();
__int64 sub_D59E40();
__int64 sub_D59F60();
__int64 sub_D64900();
__int64 sub_D7C620();
__int64 sub_D7DE10();
__int64 sub_D8B010();
__int64 sub_DC1790();
__int64 sub_DCEA60();
_Bool sub_DD1160();
__int64 sub_DDB190();
__int64 sub_DDB350();
int sub_DEBD70();
int sub_DEC120();
int sub_DEC4D0();
__int64 sub_DF1F10();
__int64 sub_DFCCB0();
__int64 sub_DFCE80();
__int64 sub_DFD150();
__int64 sub_DFD2C0();
__int64 sub_E06BD0();
__int64 sub_E10E90();
__int64 sub_EA6C60();
__int64 sub_EC1410();
__int64 sub_EC2B10();
__int64 sub_EC3FC0();
__int64 sub_EEB530();
__int64 sub_EEB660();
__int64 sub_EEB800();
__int64 sub_EFFD80();
__int64 sub_F24F40();
__int64 sub_F34FA0();
__int64 sub_F83A10();
__int64 sub_F9F3E0();
__int64 sub_F9FB50();
__int64 sub_FA0140();
extern char unk_1939CD0;

// N5storm14NetPropertyMapINS_18NetPropertyIntegerINS_8StringIdENS_14NumericalTraitIS2_NS_15MaxValueFunctorIS2_Lm0EEELh0ELb0ELb0ENS_19DefaultValueFunctorIS2_Lm0EEEEEEENS_15TNetPropertyRefINS_15NetPropertyNullEEEEE, virtual slot 19
int __fastcall sub_787710(__int64 a1, __int64 a2)
{
  if ( (sub_576540()) != 0 )
    return sub_57F110(a1 + 40, a2 + 40);
  else
    return 0;
}

// NSt3__110__function6__funcIZZN4SPTG7Network21MatchmakingDiscoverer18HandleInviteAcceptEPNS2_9FlashMenuEENK4$_40clEN4Onyx21ProfileCallbackResultEEUlvE_NS_9allocatorISA_EEFvvEEE, virtual slot 6
__int64 __fastcall sub_7E4C30(__int64 a1)
{
  __int64 v1; // x19
  int v3 __attribute__((aligned(8)));

  v1 = *(_QWORD *)(a1 + 8);
  v3 = sub_BFBCE0("SelectCharacterMovie");
  return sub_7710B0(v1, &v3, 0);
}

// NSt3__110__function6__funcIZN4SPTG13DialogManager10ShowDialogEijNS_8functionIFvvEEEbE4$_11NS_9allocatorIS7_EES5_EE, virtual slot 6
__int64 __fastcall sub_7E4DF0(__int64 a1)
{
  __int64 v1; // x8
  _DWORD *v3; // x20
  __int64 v4; // x8
  int v6 __attribute__((aligned(8)));

  v1 = *(_QWORD *)(a1 + 16);
  if ( qword_1924BC0 != 0 && *(_BYTE *)(qword_1924BC0 + 224) != 0 )
    byte_1924C90 = 1;
  v3 = *(_DWORD **)(a1 + 8);
  v6 = -1;
  v4 = *(_QWORD *)(v1 + 152);
  if ( v4 != 0 && *(_QWORD *)(v4 + 8) != 0 )
    v6 = sub_BFBCE0((void *)(v4 + 24));
  return sub_778670(v3, &v6, *(unsigned int *)(a1 + 24), 0);
}

// N4Onyx8Gameplay8Circuits10Properties7Details40StaticMemberVariablePropertyRegistrationINS1_31Vector3ConstantPublisherCircuitEN4Gear7Vector3IfEEEE, virtual slot 7
__int64 __fastcall sub_CC55D0(__int64 result, char *a2, _DWORD *a3)
{
  _DWORD *v3; // x8

  v3 = (_DWORD *)(a2 + *(unsigned int *)(result + 28));
  *v3 = *a3;
  v3[1] = a3[1];
  v3[2] = a3[2];
  return result;
}

// N4Onyx8Gameplay8Circuits10Properties7Details40StaticMemberVariablePropertyRegistrationINS1_31Vector3ConstantPublisherCircuitEN4Gear7Vector3IfEEEE, virtual slot 8
__int64 __fastcall sub_CC5600(__int64 result, char *a2, _DWORD *a3)
{
  _DWORD *v3; // x8

  v3 = (_DWORD *)(a2 + *(unsigned int *)(result + 28));
  *a3 = *v3;
  a3[1] = v3[1];
  a3[2] = v3[2];
  return result;
}

// N4Onyx8Gameplay8Circuits10Properties7Details40StaticMemberVariablePropertyRegistrationINS1_29ColorConstantPublisherCircuitENS_8Graphics5ColorEEE, virtual slot 8
__int64 __fastcall sub_CC5680(char *result, char *a2, _DWORD *a3)
{
  *a3 = *(_DWORD *)(a2 + *(unsigned int *)(result + 28));
  return result;
}

// N4Onyx8Gameplay8Circuits10Properties7Details40StaticMemberVariablePropertyRegistrationINS1_27F32ConstantPublisherCircuitEfEE, virtual slot 7
__int64 __fastcall sub_CC56D0(char *result, char *a2, _DWORD *a3)
{
  *(_DWORD *)(a2 + *(unsigned int *)(result + 28)) = *a3;
  return result;
}

// N4Onyx8Gameplay8Circuits10Properties7Details40StaticMemberVariablePropertyRegistrationINS1_27F32ConstantPublisherCircuitEfEE, virtual slot 8
__int64 __fastcall sub_CC56E0(char *result, char *a2, _DWORD *a3)
{
  *a3 = *(_DWORD *)(a2 + *(unsigned int *)(result + 28));
  return result;
}

// N4Onyx8Gameplay8Circuits10Properties7Details40StaticMemberVariablePropertyRegistrationINS1_27U32ConstantPublisherCircuitEjEE, virtual slot 7
__int64 __fastcall sub_CC5730(char *result, char *a2, _DWORD *a3)
{
  *(_DWORD *)(a2 + *(unsigned int *)(result + 28)) = *a3;
  return result;
}

// N4Onyx8Gameplay8Circuits10Properties7Details40StaticMemberVariablePropertyRegistrationINS1_27U32ConstantPublisherCircuitEjEE, virtual slot 8
__int64 __fastcall sub_CC5740(char *result, char *a2, _DWORD *a3)
{
  *a3 = *(_DWORD *)(a2 + *(unsigned int *)(result + 28));
  return result;
}

// N4Onyx8Gameplay8Circuits10Properties7Details40StaticMemberVariablePropertyRegistrationINS1_13SwitchCircuitEjEE, virtual slot 7
__int64 __fastcall sub_CC87B0(char *result, char *a2, _DWORD *a3)
{
  *(_DWORD *)(a2 + *(unsigned int *)(result + 28)) = *a3;
  return result;
}

// N4Onyx8Gameplay8Circuits10Properties7Details40StaticMemberVariablePropertyRegistrationINS1_13SwitchCircuitEjEE, virtual slot 8
__int64 __fastcall sub_CC87C0(char *result, char *a2, _DWORD *a3)
{
  *a3 = *(_DWORD *)(a2 + *(unsigned int *)(result + 28));
  return result;
}

// N4Onyx8Gameplay8Circuits10Properties7Details40StaticMemberVariablePropertyRegistrationINS1_9IfCircuitEbEE, virtual slot 7
__int64 __fastcall sub_CC9200(char *result, char *a2, _BYTE *a3)
{
  *(_BYTE *)(a2 + *(unsigned int *)(result + 28)) = *a3;
  return result;
}

// N4Onyx8Gameplay8Circuits10Properties7Details40StaticMemberVariablePropertyRegistrationINS1_9IfCircuitEbEE, virtual slot 8
__int64 __fastcall sub_CC9210(char *result, char *a2, _BYTE *a3)
{
  *a3 = *(_BYTE *)(a2 + *(unsigned int *)(result + 28));
  return result;
}

// N4Onyx8Gameplay8Circuits10Properties7Details40StaticMemberVariablePropertyRegistrationINS1_14ComputeCircuitEN4Gear11Quaternion4IfEEEE, virtual slot 7
__int64 __fastcall sub_CCA870(__int64 result, char *a2, _DWORD *a3)
{
  _DWORD *v3; // x8

  v3 = (_DWORD *)(a2 + *(unsigned int *)(result + 28));
  *v3 = *a3;
  v3[1] = a3[1];
  v3[2] = a3[2];
  v3[3] = a3[3];
  return result;
}

// N4Onyx8Gameplay8Circuits10Properties7Details40StaticMemberVariablePropertyRegistrationINS1_14ComputeCircuitEN4Gear11Quaternion4IfEEEE, virtual slot 8
__int64 __fastcall sub_CCA8A0(__int64 result, char *a2, _DWORD *a3)
{
  _DWORD *v3; // x8

  v3 = (_DWORD *)(a2 + *(unsigned int *)(result + 28));
  *a3 = *v3;
  a3[1] = v3[1];
  a3[2] = v3[2];
  a3[3] = v3[3];
  return result;
}

// N4Onyx8Gameplay8Circuits10Properties7Details40StaticMemberVariablePropertyRegistrationINS1_14ComputeCircuitEN4Gear7Vector3IfEEEE, virtual slot 7
__int64 __fastcall sub_CCA910(__int64 result, char *a2, _DWORD *a3)
{
  _DWORD *v3; // x8

  v3 = (_DWORD *)(a2 + *(unsigned int *)(result + 28));
  *v3 = *a3;
  v3[1] = a3[1];
  v3[2] = a3[2];
  return result;
}

// N4Onyx8Gameplay8Circuits10Properties7Details40StaticMemberVariablePropertyRegistrationINS1_14ComputeCircuitEN4Gear7Vector3IfEEEE, virtual slot 8
__int64 __fastcall sub_CCA940(__int64 result, char *a2, _DWORD *a3)
{
  _DWORD *v3; // x8

  v3 = (_DWORD *)(a2 + *(unsigned int *)(result + 28));
  *a3 = *v3;
  a3[1] = v3[1];
  a3[2] = v3[2];
  return result;
}

// N4Onyx8Gameplay8Circuits10Properties7Details40StaticMemberVariablePropertyRegistrationINS1_14ComputeCircuitEfEE, virtual slot 7
__int64 __fastcall sub_CCA9B0(char *result, char *a2, _DWORD *a3)
{
  *(_DWORD *)(a2 + *(unsigned int *)(result + 28)) = *a3;
  return result;
}

// N4Onyx8Gameplay8Circuits10Properties7Details40StaticMemberVariablePropertyRegistrationINS1_14ComputeCircuitEfEE, virtual slot 8
__int64 __fastcall sub_CCA9C0(char *result, char *a2, _DWORD *a3)
{
  *a3 = *(_DWORD *)(a2 + *(unsigned int *)(result + 28));
  return result;
}

// N4Onyx8Gameplay8Circuits10Properties7Details40StaticMemberVariablePropertyRegistrationINS1_14CompareCircuitEbEE, virtual slot 7
__int64 __fastcall sub_CCBAD0(char *result, char *a2, _BYTE *a3)
{
  *(_BYTE *)(a2 + *(unsigned int *)(result + 28)) = *a3;
  return result;
}

// N4Onyx8Gameplay8Circuits10Properties7Details40StaticMemberVariablePropertyRegistrationINS1_14CompareCircuitEbEE, virtual slot 8
__int64 __fastcall sub_CCBAE0(char *result, char *a2, _BYTE *a3)
{
  *a3 = *(_BYTE *)(a2 + *(unsigned int *)(result + 28));
  return result;
}

// N4Onyx17CollisionObstacleE, virtual slot 15
__int64 __fastcall sub_CD3980(__int64 a1)
{
  __int64 v1; // x8
  __int64 v2; // x19
  __int64 v3; // x0

  v2 = a1 + 96;
  v1 = *(_QWORD *)(a1 + 96);
  if ( v1 == 0 || (v3 = *(_QWORD *)(v1 + 8)) == 0 )
  {
    sub_67EDD0(qword_191CD10, 1044721973, v2);
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)v2 + 8LL) + 16LL))(*(_QWORD *)(*(_QWORD *)v2 + 8LL));
    v3 = *(_QWORD *)(*(_QWORD *)v2 + 8LL);
  }
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 112LL))(v3);
}

__int64 __fastcall sub_CD3AF0(__int64 a1)
{
  __int64 v1; // x8
  __int64 v2; // x19
  __int64 v3; // x0

  v2 = a1 + 16;
  v1 = *(_QWORD *)(a1 + 16);
  if ( v1 == 0 || (v3 = *(_QWORD *)(v1 + 8)) == 0 )
  {
    sub_67EDD0(qword_191CD10, 1044721973, v2);
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)v2 + 8LL) + 16LL))(*(_QWORD *)(*(_QWORD *)v2 + 8LL));
    v3 = *(_QWORD *)(*(_QWORD *)v2 + 8LL);
  }
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 112LL))(v3);
}

// N4Onyx15PursuitBehaviorE, virtual slot 3
__int64 __fastcall sub_CD4310(__int64 result)
{
  void (__fastcall ***v1)(_QWORD); // x20
  __int64 v2; // x19
  __int64 v3; // x21
  __int64 v4; // x21

  v1 = *(void (__fastcall ****)(_QWORD))(result + 128);
  v2 = result;
  if ( v1 != nullptr )
  {
    v3 = qword_1926BD8;
    v4 = *(_QWORD *)(v3 + 8LL * (unsigned __int8)sub_A82B30(qword_1926BD8, v1) + 880);
    (**v1)(v1);
    result = (*(__int64 (__fastcall **)(__int64, void (__fastcall ***)(_QWORD)))(*(_QWORD *)v4 + 48LL))(v4, v1);
  }
  *(_DWORD *)(v2 + 56) &= ~2u;
  return result;
}

// N4Onyx11WalkAlignerE, virtual slot 14
__int64 __fastcall sub_CD5D00(__int64 a1)
{
  __int64 v1; // x8
  __int64 v2; // x20
  __int64 v4; // x8
  __int64 v5; // x9
  int v6; // w8

  v2 = a1 + 128;
  v1 = *(_QWORD *)(a1 + 128);
  if ( v1 == 0 || (v4 = *(_QWORD *)(v1 + 8)) == 0 )
  {
    sub_67EDD0(qword_191CD10, 1924101670, v2);
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)v2 + 8LL) + 16LL))(*(_QWORD *)(*(_QWORD *)v2 + 8LL));
    v4 = *(_QWORD *)(*(_QWORD *)v2 + 8LL);
  }
  v5 = *(_QWORD *)(v4 + 104);
  v6 = *(_DWORD *)(v4 + 112);
  *(_QWORD *)(a1 + 96) = v5;
  *(_DWORD *)(a1 + 104) = v6;
  return sub_CD5D80(a1);
}

// N4Onyx23CollisionRollingAlignerE, virtual slot 14
__int64 __fastcall sub_CD7330(__int64 a1)
{
  __int64 v1; // x8
  __int64 v2; // x20
  __int64 v4; // x0

  v2 = a1 + 112;
  v1 = *(_QWORD *)(a1 + 112);
  if ( v1 == 0 || (v4 = *(_QWORD *)(v1 + 8)) == 0 )
  {
    sub_67EDD0(qword_191CD10, 1044721973, v2);
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)v2 + 8LL) + 16LL))(*(_QWORD *)(*(_QWORD *)v2 + 8LL));
    v4 = *(_QWORD *)(*(_QWORD *)v2 + 8LL);
  }
  *(float *)(a1 + 108) = (*(float (__fastcall **)(__int64))(*(_QWORD *)v4 + 112LL))(v4);
  return sub_CD6DF0(a1);
}

// N4Onyx17DirectionalShakerE, virtual slot 15
__int64 __fastcall sub_CDC9D0(__int64 a1)
{
  __int64 v2; // x8
  __int64 *v3; // x20
  __int64 v4; // x8
  __int64 v5; // x9
  _DWORD *v6; // x8
  __int64 result; // x0

  if ( *(_BYTE *)(a1 + 128) == 0 )
  {
    v3 = (__int64 *)(a1 + 168);
    v2 = *(_QWORD *)(a1 + 168);
    if ( v2 == 0 || (v4 = *(_QWORD *)(v2 + 8)) == 0 )
    {
      sub_67EDD0(qword_191CD10, 36693834, a1 + 168);
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*v3 + 8) + 16LL))(*(_QWORD *)(*v3 + 8));
      v4 = *v3;
      if ( *v3 != 0 )
        v4 = *(_QWORD *)(v4 + 8);
    }
    v5 = *(_QWORD *)(v4 + 144);
    v6 = (_DWORD *)(v4 + 88);
    if ( v5 != 0 )
      v6 = (_DWORD *)(v5 + 32);
    *(_DWORD *)(a1 + 184) = v6[9];
    *(_DWORD *)(a1 + 188) = v6[10];
    *(_DWORD *)(a1 + 192) = v6[11];
  }
  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 112LL))(a1);
  *(_BYTE *)(a1 + 128) = 1;
  return result;
}

// N4Onyx17DirectionalShakerE, virtual slot 16
__int64 __fastcall sub_CDCA80(__int64 a1)
{
  __int64 v1; // x8
  __int64 v2; // x20
  __int64 result; // x0
  _DWORD *v5; // x9
  int v6; // w10
  int v7; // w11
  int v8; // w8

  v2 = a1 + 168;
  v1 = *(_QWORD *)(a1 + 168);
  if ( v1 == 0 || (result = *(_QWORD *)(v1 + 8)) == 0 )
  {
    sub_67EDD0(qword_191CD10, 36693834, v2);
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)v2 + 8LL) + 16LL))(*(_QWORD *)(*(_QWORD *)v2 + 8LL));
    if ( *(_QWORD *)v2 != 0 )
      result = *(_QWORD *)(*(_QWORD *)v2 + 8LL);
    else
      result = 0;
  }
  *(_BYTE *)(result + 136) = 1;
  v5 = *(_DWORD **)(result + 144);
  v7 = *(_DWORD *)(a1 + 184);
  v6 = *(_DWORD *)(a1 + 188);
  v8 = *(_DWORD *)(a1 + 192);
  if ( v5 != nullptr )
  {
    v5[17] = v7;
    v5[18] = v6;
    v5[19] = v8;
    result = sub_68ED40(result);
  }
  else
  {
    *(_DWORD *)(result + 124) = v7;
    *(_DWORD *)(result + 128) = v6;
    *(_DWORD *)(result + 132) = v8;
  }
  *(_BYTE *)(a1 + 128) = 0;
  return result;
}

// N4Onyx10MoveActionE, virtual slot 3
__int64 __fastcall sub_CF1820(__int64 result)
{
  void (__fastcall ***v1)(_QWORD); // x20
  __int64 v2; // x19
  __int64 v3; // x21
  __int64 v4; // x21

  v1 = *(void (__fastcall ****)(_QWORD))(result + 224);
  v2 = result;
  if ( v1 != nullptr )
  {
    v3 = qword_1926BD8;
    v4 = *(_QWORD *)(v3 + 8LL * (unsigned __int8)sub_A82B30(qword_1926BD8, v1) + 880);
    (**v1)(v1);
    result = (*(__int64 (__fastcall **)(__int64, void (__fastcall ***)(_QWORD)))(*(_QWORD *)v4 + 48LL))(v4, v1);
  }
  *(_DWORD *)(v2 + 56) &= ~2u;
  return result;
}

__int64 __fastcall sub_CF74B0(__int64 a1, unsigned int a2)
{
  nn__os__LockMutex(qword_19397C8);
  (*(void (__fastcall **)(__int64, __typeof__(a2)))(*(_QWORD *)a1 + 8LL))(a1, a2);
  return nn__os__UnlockMutex(qword_19397C8);
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

// N4Dare7Private10SndManagerE, virtual slot 2
__int64 __fastcall sub_CF8770(__int64 a1, __int64 a2)
{
  nn__os__LockMutex(qword_19397C8);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 176LL))(a2);
  sub_CF8C60(a2);
  return nn__os__UnlockMutex(qword_19397C8);
}

// N4Dare7Private10SndManagerE, virtual slot 4
__int64 __fastcall sub_CF8820(__int64 a1, __int64 a2)
{
  nn__os__LockMutex(qword_19397C8);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 192LL))(a2);
  return nn__os__UnlockMutex(qword_19397C8);
}

// N4Dare7Private10SndManagerE, virtual slot 5
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

// N4Dare7Private17ValueInterpolatorIfEE, virtual slot 5
__int64 __fastcall sub_CFD6A0(__int64 result, int a2)
{
  __int64 *v2; // x8

  if ( *(_DWORD *)(result + 36) != a2 || *(_QWORD *)(result + 48) == 0 )
  {
    v2 = (__int64 *)&off_18CC608;
    switch ( a2 )
    {
      case 0:
        goto LABEL_15;
      case 1:
        v2 = (__int64 *)off_18CC600;
        goto LABEL_15;
      case 2:
        v2 = &qword_1939708;
        goto LABEL_15;
      case 3:
        v2 = &qword_1939718;
        goto LABEL_15;
      case 4:
        v2 = &qword_1939728;
        goto LABEL_15;
      case 5:
        v2 = &qword_19396D8;
        goto LABEL_15;
      case 6:
        v2 = &qword_19396E8;
        goto LABEL_15;
      case 7:
        v2 = &qword_19396F8;
        goto LABEL_15;
      case 8:
        v2 = &qword_1939738;
        goto LABEL_15;
      case 9:
        v2 = &qword_1939748;
        goto LABEL_15;
      case 10:
        v2 = &qword_1939758;
        goto LABEL_15;
      case 11:
        v2 = &qword_1939768;
LABEL_15:
        *(_QWORD *)(result + 48) = v2;
        break;
      default:
        break;
    }
    *(_DWORD *)(result + 36) = a2;
  }
  return result;
}

// N4Dare7Private23EffectParameterSndFloatE, virtual slot 5
bool __fastcall sub_CFD9A0(__int64 a1)
{
  return *(float *)(a1 + 16) != 3.39e38f;
}

// N4Dare7Private21EffectParameterSndS32E, virtual slot 5
bool __fastcall sub_CFFF60(__int64 a1)
{
  return *(float *)(a1 + 16) != 3.39e38f;
}

// N4Dare7Private17ValueInterpolatorIiEE, virtual slot 4
__int64 __fastcall sub_D00600(__int64 a1)
{
  char *v2; // x0
  __int64 v3; // x8
  unsigned int *v4; // x20

  v2 = (char *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 24LL))(a1);
  if ( (_DWORD)v2 != 0 )
  {
    if ( *(_DWORD *)(a1 + 24) == 2 )
      v3 = nn__os__GetSystemTick(v2) - qword_195B648;
    else
      v3 = *(_QWORD *)(a1 + 16);
    if ( (float)((float)(unsigned __int64)(v3 - *(_QWORD *)(a1 + 8)) / (float)(unsigned __int64)qword_1939810) >= *(float *)(a1 + 32) )
    {
      v4 = (unsigned int *)(a1 + 60);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
    }
    else
    {
      v4 = (unsigned int *)(a1 + 56);
    }
  }
  else
  {
    v4 = (unsigned int *)(a1 + 60);
  }
  return *v4;
}

// N4Dare7Private17ValueInterpolatorIiEE, virtual slot 5
__int64 __fastcall sub_D006A0(__int64 result, int a2)
{
  __int64 *v2; // x8

  if ( *(_DWORD *)(result + 36) != a2 || *(_QWORD *)(result + 48) == 0 )
  {
    v2 = (__int64 *)&off_18CC608;
    switch ( a2 )
    {
      case 0:
        goto LABEL_15;
      case 1:
        v2 = (__int64 *)off_18CC600;
        goto LABEL_15;
      case 2:
        v2 = &qword_1939708;
        goto LABEL_15;
      case 3:
        v2 = &qword_1939718;
        goto LABEL_15;
      case 4:
        v2 = &qword_1939728;
        goto LABEL_15;
      case 5:
        v2 = &qword_19396D8;
        goto LABEL_15;
      case 6:
        v2 = &qword_19396E8;
        goto LABEL_15;
      case 7:
        v2 = &qword_19396F8;
        goto LABEL_15;
      case 8:
        v2 = &qword_1939738;
        goto LABEL_15;
      case 9:
        v2 = &qword_1939748;
        goto LABEL_15;
      case 10:
        v2 = &qword_1939758;
        goto LABEL_15;
      case 11:
        v2 = &qword_1939768;
LABEL_15:
        *(_QWORD *)(result + 48) = v2;
        break;
      default:
        break;
    }
    *(_DWORD *)(result + 36) = a2;
  }
  return result;
}

// N4Dare7Private10UserEffectINS0_16CompressorEffectEEE, virtual slot 3
__int64 __fastcall sub_D00E40(_OWORD *a1)
{
  __int128 v1; // q0

  ((_QWORD *)(a1))[0] = (_QWORD)(off_18CC2D0);

  ((_QWORD *)(a1))[1] = (_QWORD)(&off_18CC408);
  return sub_CFA210((__int64)(a1 + 3));
}

// N4Dare7Private10UserEffectINS0_16CompressorEffectEEE, virtual slot 4
void __fastcall sub_D00E60(_OWORD *a1)
{
  __int128 v1; // q0

  ((_QWORD *)(a1))[0] = (_QWORD)(off_18CC2D0);

  ((_QWORD *)(a1))[1] = (_QWORD)(&off_18CC408);
  sub_CFA210((__int64)(a1 + 3));
  _ZdlPv(a1);
}

// N4Dare7Private12AmpModEffectE, virtual slot 5
int __fastcall sub_D02CF0(__int64 a1, int a2, float *a3)
{
  int v3; // w8
  __int64 result; // x0
  int v5; // w8
  int v6; // w8
  int v7; // w8
  float v8; // s0

  *((_DWORD *)a3 + 1) = a2;
  switch ( a2 )
  {
    case 0:
      *(_DWORD *)a3 = 2;
      a3[3] = *(float *)(a1 + 36);
    case 1:
      *(_DWORD *)a3 = 1;
      v3 = *(_DWORD *)(a1 + 144);
      *((_DWORD *)a3 + 2) = v3;
      result = 0;
      break;
    case 2:
      *(_DWORD *)a3 = 2;
      v5 = *(_DWORD *)(a1 + 148);
      *((_DWORD *)a3 + 3) = v5;
      result = 0;
      break;
    case 3:
      *(_DWORD *)a3 = 2;
      v6 = *(_DWORD *)(a1 + 152);
      *((_DWORD *)a3 + 3) = v6;
      result = 0;
      break;
    case 4:
      *(_DWORD *)a3 = 2;
      v7 = *(_DWORD *)(a1 + 156);
      *((_DWORD *)a3 + 3) = v7;
      result = 0;
      break;
    case 5:
      *(_DWORD *)a3 = 2;
      v8 = 1.0 - *(float *)(a1 + 160);
      a3[3] = v8;
      result = 0;
      break;
    default:
      result = 2147541001LL;
      break;
  }
  return result;
}

// N4Dare7Private10UserEffectINS0_12AmpModEffectEEE, virtual slot 3
__int64 __fastcall sub_D038D0(_OWORD *a1)
{
  __int128 v1; // q0

  ((_QWORD *)(a1))[0] = (_QWORD)(off_18CCA20);

  ((_QWORD *)(a1))[1] = (_QWORD)(&off_18CC408);
  return sub_CFA210((__int64)(a1 + 3));
}

// N4Dare7Private10UserEffectINS0_12AmpModEffectEEE, virtual slot 4
void __fastcall sub_D038F0(_OWORD *a1)
{
  __int128 v1; // q0

  ((_QWORD *)(a1))[0] = (_QWORD)(off_18CCA20);

  ((_QWORD *)(a1))[1] = (_QWORD)(&off_18CC408);
  sub_CFA210((__int64)(a1 + 3));
  _ZdlPv(a1);
}

// N4Dare7Private10UserEffectINS0_16DistortionEffectEEE, virtual slot 3
__int64 __fastcall sub_D04C80(_OWORD *a1)
{
  __int128 v1; // q0

  ((_QWORD *)(a1))[0] = (_QWORD)(off_18CCB80);

  ((_QWORD *)(a1))[1] = (_QWORD)(&off_18CC408);
  return sub_CFA210((__int64)(a1 + 3));
}

// N4Dare7Private10UserEffectINS0_16DistortionEffectEEE, virtual slot 4
void __fastcall sub_D04CA0(_OWORD *a1)
{
  __int128 v1; // q0

  ((_QWORD *)(a1))[0] = (_QWORD)(off_18CCB80);

  ((_QWORD *)(a1))[1] = (_QWORD)(&off_18CC408);
  sub_CFA210((__int64)(a1 + 3));
  _ZdlPv(a1);
}

// N6DSPLib17FilterCoeffStaticILj3ELj3EEE, virtual slot 2
void *__fastcall sub_D08860(__int64 a1, const void *a2, unsigned int a3, const void *a4, unsigned int a5)
{
  memcpy(*(void **)(a1 + 24), a2, 4LL * a3);
  return memcpy(*(void **)(a1 + 32), a4, 4LL * a5);
}

// N6DSPLib17FilterCoeffStaticILj3ELj3EEE, virtual slot 3
void *__fastcall sub_D088A0(__int64 a1, const void *a2, unsigned int a3, const void *a4, unsigned int a5)
{
  memcpy(*(void **)(a1 + 16), a2, 4LL * a3);
  return memcpy(*(void **)(a1 + 8), a4, 4LL * a5);
}

// N4Dare7Private10UserEffectINS0_14CrossComEffectEEE, virtual slot 3
__int64 __fastcall sub_D092E0(_OWORD *a1)
{
  __int128 v1; // q0

  ((_QWORD *)(a1))[0] = (_QWORD)(off_18CCCE0);

  ((_QWORD *)(a1))[1] = (_QWORD)(&off_18CC408);
  return sub_CFA210((__int64)(a1 + 3));
}

// N4Dare7Private10UserEffectINS0_14CrossComEffectEEE, virtual slot 4
void __fastcall sub_D09300(_OWORD *a1)
{
  __int128 v1; // q0

  ((_QWORD *)(a1))[0] = (_QWORD)(off_18CCCE0);

  ((_QWORD *)(a1))[1] = (_QWORD)(&off_18CC408);
  sub_CFA210((__int64)(a1 + 3));
  _ZdlPv(a1);
}

// N4Dare7Private10UserEffectINS0_9RmsEffectEEE, virtual slot 3
__int64 __fastcall sub_D0ACE0(_OWORD *a1)
{
  __int128 v1; // q0

  ((_QWORD *)(a1))[0] = (_QWORD)(off_18CCEC8);

  ((_QWORD *)(a1))[1] = (_QWORD)(&off_18CC408);
  return sub_CFA210((__int64)(a1 + 3));
}

// N4Dare7Private10UserEffectINS0_9RmsEffectEEE, virtual slot 4
void __fastcall sub_D0AD00(_OWORD *a1)
{
  __int128 v1; // q0

  ((_QWORD *)(a1))[0] = (_QWORD)(off_18CCEC8);

  ((_QWORD *)(a1))[1] = (_QWORD)(&off_18CC408);
  sub_CFA210((__int64)(a1 + 3));
  _ZdlPv(a1);
}

// N4Dare7Private10UserEffectINS0_8EQEffectEEE, virtual slot 3
__int64 __fastcall sub_D0C9C0(_OWORD *a1)
{
  __int128 v1; // q0

  ((_QWORD *)(a1))[0] = (_QWORD)(off_18CD028);

  ((_QWORD *)(a1))[1] = (_QWORD)(&off_18CC408);
  return sub_CFA210((__int64)(a1 + 3));
}

// N4Dare7Private10UserEffectINS0_8EQEffectEEE, virtual slot 4
void __fastcall sub_D0C9E0(_OWORD *a1)
{
  __int128 v1; // q0

  ((_QWORD *)(a1))[0] = (_QWORD)(off_18CD028);

  ((_QWORD *)(a1))[1] = (_QWORD)(&off_18CC408);
  sub_CFA210((__int64)(a1 + 3));
  _ZdlPv(a1);
}

// N4Dare7Private10UserEffectINS0_15OcclusionEffectEEE, virtual slot 3
__int64 __fastcall sub_D0E760(_OWORD *a1)
{
  __int128 v1; // q0

  ((_QWORD *)(a1))[0] = (_QWORD)(off_18CD188);

  ((_QWORD *)(a1))[1] = (_QWORD)(&off_18CC408);
  return sub_CFA210((__int64)(a1 + 3));
}

// N4Dare7Private10UserEffectINS0_15OcclusionEffectEEE, virtual slot 4
void __fastcall sub_D0E780(_OWORD *a1)
{
  __int128 v1; // q0

  ((_QWORD *)(a1))[0] = (_QWORD)(off_18CD188);

  ((_QWORD *)(a1))[1] = (_QWORD)(&off_18CC408);
  sub_CFA210((__int64)(a1 + 3));
  _ZdlPv(a1);
}

// N4Dare7Private10UserEffectINS0_14HighPassEffectEEE, virtual slot 3
__int64 __fastcall sub_D0FD80(_OWORD *a1)
{
  __int128 v1; // q0

  ((_QWORD *)(a1))[0] = (_QWORD)(off_18CD300);

  ((_QWORD *)(a1))[1] = (_QWORD)(&off_18CC408);
  return sub_CFA210((__int64)(a1 + 3));
}

// N4Dare7Private10UserEffectINS0_14HighPassEffectEEE, virtual slot 4
void __fastcall sub_D0FDA0(_OWORD *a1)
{
  __int128 v1; // q0

  ((_QWORD *)(a1))[0] = (_QWORD)(off_18CD300);

  ((_QWORD *)(a1))[1] = (_QWORD)(&off_18CC408);
  sub_CFA210((__int64)(a1 + 3));
  _ZdlPv(a1);
}

// N4Dare7Private10UserEffectINS0_14BandPassEffectEEE, virtual slot 3
__int64 __fastcall sub_D10410(_OWORD *a1)
{
  __int128 v1; // q0

  ((_QWORD *)(a1))[0] = (_QWORD)(off_18CD460);

  ((_QWORD *)(a1))[1] = (_QWORD)(&off_18CC408);
  return sub_CFA210((__int64)(a1 + 3));
}

// N4Dare7Private10UserEffectINS0_14BandPassEffectEEE, virtual slot 4
void __fastcall sub_D10430(_OWORD *a1)
{
  __int128 v1; // q0

  ((_QWORD *)(a1))[0] = (_QWORD)(off_18CD460);

  ((_QWORD *)(a1))[1] = (_QWORD)(&off_18CC408);
  sub_CFA210((__int64)(a1 + 3));
  _ZdlPv(a1);
}

// N4Dare7Private10UserEffectINS0_13LowPassEffectEEE, virtual slot 3
__int64 __fastcall sub_D11A10(_OWORD *a1)
{
  __int128 v1; // q0

  ((_QWORD *)(a1))[0] = (_QWORD)(off_18CD540);

  ((_QWORD *)(a1))[1] = (_QWORD)(&off_18CC408);
  return sub_CFA210((__int64)(a1 + 3));
}

// N4Dare7Private10UserEffectINS0_13LowPassEffectEEE, virtual slot 4
void __fastcall sub_D11A30(_OWORD *a1)
{
  __int128 v1; // q0

  ((_QWORD *)(a1))[0] = (_QWORD)(off_18CD540);

  ((_QWORD *)(a1))[1] = (_QWORD)(&off_18CC408);
  sub_CFA210((__int64)(a1 + 3));
  _ZdlPv(a1);
}

// N4Dare7Private29BusPostEffectVolumesParameterE, virtual slot 5
bool __fastcall sub_D19960(__int64 a1)
{
  return *(float *)(a1 + 64) != 3.39e38f;
}

// N4Dare7Private17ValueInterpolatorINS0_14ChannelVolumesEEE, virtual slot 5
__int64 __fastcall sub_D1A480(__int64 result, int a2)
{
  __int64 *v2; // x8

  if ( *(_DWORD *)(result + 36) != a2 || *(_QWORD *)(result + 48) == 0 )
  {
    v2 = (__int64 *)&off_18CC608;
    switch ( a2 )
    {
      case 0:
        goto LABEL_15;
      case 1:
        v2 = (__int64 *)off_18CC600;
        goto LABEL_15;
      case 2:
        v2 = &qword_1939708;
        goto LABEL_15;
      case 3:
        v2 = &qword_1939718;
        goto LABEL_15;
      case 4:
        v2 = &qword_1939728;
        goto LABEL_15;
      case 5:
        v2 = &qword_19396D8;
        goto LABEL_15;
      case 6:
        v2 = &qword_19396E8;
        goto LABEL_15;
      case 7:
        v2 = &qword_19396F8;
        goto LABEL_15;
      case 8:
        v2 = &qword_1939738;
        goto LABEL_15;
      case 9:
        v2 = &qword_1939748;
        goto LABEL_15;
      case 10:
        v2 = &qword_1939758;
        goto LABEL_15;
      case 11:
        v2 = &qword_1939768;
LABEL_15:
        *(_QWORD *)(result + 48) = v2;
        break;
      default:
        break;
    }
    *(_DWORD *)(result + 36) = a2;
  }
  return result;
}

// N4Dare7Private19BusParameterManagerE, virtual slot 12
__int64 __fastcall sub_D1C190(__int64 a1, __int64 a2)
{
  __int64 v3; // x0
  __int64 result; // x0
  int v6; // w8

  v3 = *(_QWORD *)(a1 + 1048);
  if ( v3 == 0 )
    return 720913;
  result = sub_D1C780(v3);
  v6 = *(_DWORD *)(*(_QWORD *)(a1 + 1048) + 136LL);
  *(_QWORD *)(a2 + 12) = 0x7F7F090600000001LL;
  *(_QWORD *)(a2 + 20) = 0;
  *(_DWORD *)(a2 + 8) = v6;
  *(_QWORD *)(a2 + 28) = 0;
  *(_DWORD *)(a2 + 36) = -1;
  return result;
}

// N4Dare7Private19BusParameterManagerE, virtual slot 13
__int64 __fastcall sub_D1C1F0(__int64 a1, __int64 a2)
{
  __int64 v3; // x0
  __int64 result; // x0
  int v6; // w8

  v3 = *(_QWORD *)(a1 + 1056);
  if ( v3 == 0 )
    return 720913;
  result = sub_D1C450(v3);
  v6 = *(_DWORD *)(*(_QWORD *)(a1 + 1056) + 136LL);
  *(_QWORD *)(a2 + 12) = 0x7F7F090600000001LL;
  *(_QWORD *)(a2 + 20) = 0;
  *(_DWORD *)(a2 + 8) = v6;
  *(_QWORD *)(a2 + 28) = 0;
  *(_DWORD *)(a2 + 36) = -1;
  return result;
}

__int64 __fastcall sub_D1C350(__int64 a1, __int64 a2)
{
  __int64 v3; // x0
  __int64 result; // x0
  int v6; // w8

  v3 = *(_QWORD *)(a1 + 1024);
  if ( v3 == 0 )
    return 720913;
  result = sub_D1C780(v3);
  v6 = *(_DWORD *)(*(_QWORD *)(a1 + 1024) + 136LL);
  *(_QWORD *)(a2 + 12) = 0x7F7F090600000001LL;
  *(_QWORD *)(a2 + 20) = 0;
  *(_DWORD *)(a2 + 8) = v6;
  *(_QWORD *)(a2 + 28) = 0;
  *(_DWORD *)(a2 + 36) = -1;
  return result;
}

__int64 __fastcall sub_D1C3F0(__int64 a1, __int64 a2)
{
  __int64 v3; // x0
  __int64 result; // x0
  int v6; // w8

  v3 = *(_QWORD *)(a1 + 1024);
  if ( v3 == 0 )
    return 720913;
  result = sub_D1C450(v3);
  v6 = *(_DWORD *)(*(_QWORD *)(a1 + 1024) + 136LL);
  *(_QWORD *)(a2 + 12) = 0x7F7F090600000001LL;
  *(_QWORD *)(a2 + 20) = 0;
  *(_DWORD *)(a2 + 8) = v6;
  *(_QWORD *)(a2 + 28) = 0;
  *(_DWORD *)(a2 + 36) = -1;
  return result;
}

// N4Dare7Private9MasterBusE, virtual slot 21
__int64 __fastcall sub_D21890(__int64 a1, __int64 a2)
{
  return (*(__int64 (__fastcall **)(__int64, __int64, int))(*(_QWORD *)a1 + 192LL))(a1, a2, 0);
}

// N4Dare7Private9MasterBusE, virtual slot 22
__int64 __fastcall sub_D218A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, int))(*(_QWORD *)a1 + 200LL))(
           a1,
           a2,
           a3,
           a4,
           0);
}

// N4Dare7Private15MasterReverbBusE, virtual slot 28
int __fastcall sub_D28310(__int64 a1, unsigned int a2, float a3)
{
  if ( *(_DWORD *)(a1 + 1376) == 0 )
    return 2147541001LL;
  *(float *)(*(_QWORD *)(a1 + 1400) + 112LL * a2 + 16) = a3;
  return 0;
}

// N4Dare22SynchronizedRepositoryIPvNS_14ObjectTypeDataE11DareFastMapLi1EEE, virtual slot 2
int __fastcall sub_D298E0(_QWORD *a1)
{
  unsigned __int64 v2; // x8
  unsigned __int64 v3; // x9
  __int64 v4; // x0

  nn__os__LockMutex(a1[1]);
  v3 = a1[8];
  v2 = a1[9];
  if ( v2 > v3 )
  {
    do
      v2 -= 28LL;
    while ( v2 > v3 );
    a1[9] = v2;
  }
  v4 = a1[1];
  a1[11] = 0;
  return nn__os__UnlockMutex(v4);
}

// N4Dare22SynchronizedRepositoryIPvNS_7MicDataE11DareFastMapLi1EEE, virtual slot 2
int __fastcall sub_D2BA70(_QWORD *a1)
{
  unsigned __int64 v2; // x8
  unsigned __int64 v3; // x9
  __int64 v4; // x0

  nn__os__LockMutex(a1[1]);
  v3 = a1[8];
  v2 = a1[9];
  if ( v2 > v3 )
  {
    do
      v2 -= 20LL;
    while ( v2 > v3 );
    a1[9] = v2;
  }
  v4 = a1[1];
  a1[11] = 0;
  return nn__os__UnlockMutex(v4);
}

// N4Dare22SynchronizedRepositoryIPvNS_12QueuedBufferE11DareFastMapLi0EEE, virtual slot 2
int __fastcall sub_D2BAF0(_QWORD *a1)
{
  unsigned __int64 v2; // x8
  unsigned __int64 v3; // x9
  __int64 v4; // x0

  nn__os__LockMutex(a1[1]);
  v3 = a1[8];
  v2 = a1[9];
  if ( v2 > v3 )
  {
    do
      v2 -= 16LL;
    while ( v2 > v3 );
    a1[9] = v2;
  }
  v4 = a1[1];
  a1[11] = 0;
  return nn__os__UnlockMutex(v4);
}

// N4Dare22SynchronizedRepositoryIPvNS_12ClientBufferE11DareFastMapLi0EEE, virtual slot 2
int __fastcall sub_D2BB70(_QWORD *a1)
{
  unsigned __int64 v2; // x8
  unsigned __int64 v3; // x9
  __int64 v4; // x0

  nn__os__LockMutex(a1[1]);
  v3 = a1[8];
  v2 = a1[9];
  if ( v2 > v3 )
  {
    do
      v2 -= 24LL;
    while ( v2 > v3 );
    a1[9] = v2;
  }
  v4 = a1[1];
  a1[11] = 0;
  return nn__os__UnlockMutex(v4);
}

// N4Dare22SynchronizedRepositoryIjNS_14MTTChannelDataE11DareFastMapLi1EEE, virtual slot 2
int __fastcall sub_D2BBF0(_QWORD *a1)
{
  unsigned __int64 v2; // x8
  unsigned __int64 v3; // x9
  __int64 v4; // x0

  nn__os__LockMutex(a1[1]);
  v3 = a1[8];
  v2 = a1[9];
  if ( v2 > v3 )
  {
    do
      v2 -= 72LL;
    while ( v2 > v3 );
    a1[9] = v2;
  }
  v4 = a1[1];
  a1[11] = 0;
  return nn__os__UnlockMutex(v4);
}

// N4Dare22SynchronizedRepositoryIPvNS_14VolumeLineDataE11DareFastMapLi1EEE, virtual slot 2
int __fastcall sub_D2BD00(_QWORD *a1)
{
  unsigned __int64 v2; // x8
  unsigned __int64 v3; // x9
  __int64 v4; // x0

  nn__os__LockMutex(a1[1]);
  v3 = a1[8];
  v2 = a1[9];
  if ( v2 > v3 )
  {
    do
      v2 -= 16LL;
    while ( v2 > v3 );
    a1[9] = v2;
  }
  v4 = a1[1];
  a1[11] = 0;
  return nn__os__UnlockMutex(v4);
}

// N4Dare22SynchronizedRepositoryI5TupleIPvS2_vvvENS_14GameObjectDataE11DareFastMapLi1EEE, virtual slot 2
int __fastcall sub_D2BD80(_QWORD *a1)
{
  unsigned __int64 v2; // x8
  unsigned __int64 v3; // x9
  __int64 v4; // x0

  nn__os__LockMutex(a1[1]);
  v3 = a1[8];
  v2 = a1[9];
  if ( v2 > v3 )
  {
    do
      v2 -= 32LL;
    while ( v2 > v3 );
    a1[9] = v2;
  }
  v4 = a1[1];
  a1[12] = 0;
  return nn__os__UnlockMutex(v4);
}

// N4Dare20ObjectTypeRepositoryE, virtual slot 2
__int64 __fastcall sub_D2C060(_QWORD *a1)
{
  unsigned __int64 v2; // x8
  unsigned __int64 v3; // x9
  __int64 v4; // x0
  unsigned __int64 *v5; // x8
  unsigned __int64 v6; // x9
  unsigned __int64 v7; // x9
  unsigned __int64 v8; // x9
  unsigned __int64 v10; // [xsp+8h] [xbp-18h] BYREF

  nn__os__LockMutex(a1[1]);
  v3 = a1[8];
  v2 = a1[9];
  if ( v2 > v3 )
  {
    do
      v2 -= 28LL;
    while ( v2 > v3 );
    a1[9] = v2;
  }
  v4 = a1[1];
  a1[11] = 0;
  nn__os__UnlockMutex(v4);
  a1[6] = -1;
  v5 = a1 + 6;
  { __typeof__(*(v5)) e_ = (-1); if ( __atomic_compare_exchange_n(v5, &e_, 0, 0, 5, 5) ) { v6 = e_; {
      v7 = 0;
      goto LABEL_10;
    } } v6 = e_; }
  v7 = __atomic_add_fetch(v5, 1, 0);
LABEL_10:
  v10 = v7;
  return sub_D2BDE0(a1, &v10);
}

// N4Dare22SynchronizedRepositoryIPhNS_12SoundRequestE11DareFastMapLi1EEE, virtual slot 2
int __fastcall sub_D2C120(_QWORD *a1)
{
  unsigned __int64 v2; // x8
  unsigned __int64 v3; // x9
  __int64 v4; // x0

  nn__os__LockMutex(a1[1]);
  v3 = a1[8];
  v2 = a1[9];
  if ( v2 > v3 )
  {
    do
      v2 -= 28LL;
    while ( v2 > v3 );
    a1[9] = v2;
  }
  v4 = a1[1];
  a1[11] = 0;
  return nn__os__UnlockMutex(v4);
}

// N4Dare7Private9ReverbBusE, virtual slot 21
__int64 __fastcall sub_D2C8A0(__int64 a1, __int64 a2)
{
  __int64 result; // x0

  result = (*(__int64 (__fastcall **)(__int64, __int64, int))(*(_QWORD *)a1 + 192LL))(a1, a2, 0);
  if ( (result & 0x80000000) == 0 )
    return (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 192LL))(a1, a2, 1);
  return result;
}

// N4Dare10DareThreadE, virtual slot 5
__int64 __fastcall sub_D37A20(__int64 a1, int a2)
{
  __int64 v2; // x0

  v2 = *(_QWORD *)(a1 + 208) + 8LL;
  if ( a2 != -1 )
    return nn__os__TimedWaitEvent(v2, 1000000LL * a2);
  nn__os__WaitEvent(v2);
  return 1;
}

// N4Dare7Private18DareAsyncSchedulerE, virtual slot 8
__int64 __fastcall sub_D3C280(__int64 result, unsigned int a2)
{
  unsigned int *v2; // x8
  unsigned int v3; // w9
  unsigned int v4; // w10

  v2 = (unsigned int *)(result + 103440);
LABEL_3:
  v3 = *v2;
  { __typeof__(*(v2)) e_ = (v3); if ( !__atomic_compare_exchange_n(v2, &e_, a2, 0, 5, 5) ) goto LABEL_3; v4 = e_; }
  return result;
}

// N4Dare7Private18DareAsyncSchedulerE, virtual slot 9
__int64 __fastcall sub_D3C2B0(unsigned __int64 *a1)
{
  __int64 result; // x0
  _DWORD *v3; // x21
  void (__fastcall *v4)(_DWORD *); // x22
  _DWORD *v5; // [xsp+8h] [xbp-28h] BYREF

  nn__os__WaitEvent(a1[112] + 8);
  v5 = nullptr;
  while ( 1 )
  {
    result = sub_D3C490(a1 + 119, &v5);
    if ( (_DWORD)result == 0 )
      break;
    v3 = v5;
    if ( v5[2] == 0 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v5 + 16LL))(v5);
    v4 = (void (__fastcall *)(_DWORD *))(*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)v3 + 56LL))(v3);
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v3 + 24LL))(v3);
    if ( (*(unsigned int (__fastcall **)(unsigned __int64 *))(*a1 + 56))(a1) == 1 )
      v4(v3);
  }
  return result;
}

// N4Dare7Private19DareEffectChainBaseINS0_14DareEffectBaseE19_SND_tdstToolFormatEE, virtual slot 3
void sub_D3CC10(__int64 result)
{
  __int64 v1; // x8
  __int64 v2; // x19
  _QWORD *v3; // x9
  _QWORD *v4; // x23
  __int64 (__fastcall ***v5)(_QWORD); // x20

  v1 = *(_QWORD *)(result + 40);
  v2 = result;
  if ( v1 != 0 )
  {
    v3 = *(_QWORD **)(result + 56);
    v4 = v3;
    do
    {
      v5 = (__int64 (__fastcall ***)(_QWORD))*v4;
      if ( *v4 != 0 )
      {
        result = (**v5)(*v4);
        if ( dword_191FB00 != 0 )
        {
          result = qword_191FAF8;
          if ( qword_191FAF8 != 0 )
            result = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall ***)(_QWORD)))(*(_QWORD *)qword_191FAF8
                                                                                          + 48LL))(
                       qword_191FAF8,
                       v5);
        }
        v3 = *(_QWORD **)(v2 + 56);
        v1 = *(_QWORD *)(v2 + 40);
      }
      ++v4;
    }
    while ( v4 != &v3[v1] );
  }
  *(_QWORD *)(v2 + 40) = 0;
  *(_DWORD *)(v2 + 28) = 0;
  return;
}

// N4Dare7Private15UserEffectChainE, virtual slot 11
void __fastcall sub_D3DAA0(_QWORD *result)
{
  __int64 v1; // x8
  _QWORD *v2; // x19
  unsigned __int64 v3; // x11
  __int64 v4; // x20
  __int64 v5; // x9
  unsigned __int64 v6; // x11
  _QWORD *v7; // x9
  _QWORD *v8; // x23
  __int64 (__fastcall ***v9)(_QWORD); // x20

  v1 = result[10];
  v2 = result;
  if ( (_DWORD)v1 != 0 )
  {
    v3 = result[2];
    v4 = (unsigned int)result[10];
    v5 = v3 - v4;
    if ( v3 > v3 - v4 )
    {
      v6 = v3 - (v4 + 2);
      if ( v6 != 0 )
      {
        memmove((void *)(result[4] + 16LL), (const void *)(result[4] + 8 * (v4 + 2)), 8 * v6);
        v5 = v2[2] - v4;
        v1 = v2[10];
      }
    }
    v2[2] = v5;
    if ( v1 != 0 )
    {
      v7 = (_QWORD *)v2[12];
      v8 = v7;
      do
      {
        v9 = (__int64 (__fastcall ***)(_QWORD))*v8;
        if ( *v8 != 0 )
        {
          result = (_QWORD *)(**v9)(*v8);
          if ( dword_191FB00 != 0 )
          {
            result = (_QWORD *)qword_191FAF8;
            if ( qword_191FAF8 != 0 )
              result = (_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64 (__fastcall ***)(_QWORD)))(*(_QWORD *)qword_191FAF8 + 48LL))(
                                   qword_191FAF8,
                                   v9);
          }
          v7 = (_QWORD *)v2[12];
          v1 = v2[10];
        }
        ++v8;
      }
      while ( v8 != &v7[v1] );
    }
    v2[10] = 0;
    *((_DWORD *)v2 + 17) = 0;
  }
  *((_DWORD *)v2 + 17) = 0;
  return;
}

void __fastcall sub_D3DCC0(_QWORD *result)
{
  __int64 v1; // x8
  _QWORD *v2; // x19
  unsigned __int64 v3; // x11
  __int64 v4; // x20
  __int64 v5; // x9
  unsigned __int64 v6; // x11
  _QWORD *v7; // x9
  _QWORD *v8; // x23
  __int64 (__fastcall ***v9)(_QWORD); // x20

  v1 = result[5];
  v2 = result;
  if ( (_DWORD)v1 != 0 )
  {
    v3 = *(result - 3);
    v4 = (unsigned int)result[5];
    v5 = v3 - v4;
    if ( v3 > v3 - v4 )
    {
      v6 = v3 - (v4 + 2);
      if ( v6 != 0 )
      {
        memmove((void *)(*(result - 1) + 16LL), (const void *)(*(result - 1) + 8 * (v4 + 2)), 8 * v6);
        v5 = *(v2 - 3) - v4;
        v1 = v2[5];
      }
    }
    *(v2 - 3) = v5;
    if ( v1 != 0 )
    {
      v7 = (_QWORD *)v2[7];
      v8 = v7;
      do
      {
        v9 = (__int64 (__fastcall ***)(_QWORD))*v8;
        if ( *v8 != 0 )
        {
          result = (_QWORD *)(**v9)(*v8);
          if ( dword_191FB00 != 0 )
          {
            result = (_QWORD *)qword_191FAF8;
            if ( qword_191FAF8 != 0 )
              result = (_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64 (__fastcall ***)(_QWORD)))(*(_QWORD *)qword_191FAF8 + 48LL))(
                                   qword_191FAF8,
                                   v9);
          }
          v7 = (_QWORD *)v2[7];
          v1 = v2[5];
        }
        ++v8;
      }
      while ( v8 != &v7[v1] );
    }
    v2[5] = 0;
    *((_DWORD *)v2 + 7) = 0;
  }
  *((_DWORD *)v2 + 7) = 0;
  return;
}

int __fastcall sub_D452A0(const char *a1)
{
  const char *v1; // x19
  const char *v2; // x19
  const char *v3; // x19
  __int64 result; // x0
  const char *v5; // x19

  if ( a1 != nullptr )
    v1 = a1;
  else
    v1 = (const char *)&unk_1939CD0;
  v2 = &v1[(unsigned int)strlen(v1) - 4];
  if ( strcmp(v2, "sbao") == 0 )
    return 2;
  v3 = v2 + 1;
  if ( strcmp(v3, "bao") == 0 )
    return 2;
  result = strcmp(v3, "lpk");
  if ( (_DWORD)result != 0 )
  {
    v5 = v3 - 1;
    result = strcmp(v5, "lspk");
    if ( (_DWORD)result != 0 )
      return strcmp(v5, "lhpk") != 0;
  }
  return result;
}

// N4Dare7Private14AssoMultiEventE, virtual slot 2
void sub_D565E0(__int64 result, unsigned int a2)
{
  __int64 v2; // x20
  _QWORD *i; // x20

  if ( *(_DWORD *)(result + 416) != a2 )
  {
    v2 = result;
    sub_D59C00(result + 456, a2);
    sub_D59D20(v2 + 488, a2);
    sub_D59E40(v2 + 520, a2);
    sub_D59F60(v2 + 552, a2);
    *(_DWORD *)(v2 + 416) = a2;
    for ( i = *(_QWORD **)(v2 + 608); i != nullptr; i = (_QWORD *)i[73] )
      result = (*(__int64 (__fastcall **)(_QWORD *, __typeof__(a2)))(*i + 16LL))(i, a2);
  }
  return;
}

// N4Dare7Private11AssoStopNGoE, virtual slot 2
void __fastcall sub_D5AD20(_DWORD *result, unsigned int a2)
{
  _DWORD *v2; // x20

  if ( result[104] != a2 )
  {
    v2 = result;
    sub_D59C00(result + 114);
    sub_D59D20(v2 + 122, a2);
    sub_D59E40(v2 + 130, a2);
    sub_D59F60(v2 + 138, a2);
    result = *((_DWORD **)v2 + 76);
    v2[104] = a2;
    if ( result != nullptr )
      { (*(__int64 (__fastcall **)(_DWORD *, _QWORD))(*(_QWORD *)result + 16LL))(result, a2); return; }
  }
  return;
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

__int64 __fastcall sub_D602E0(__int64 result)
{
  _DWORD *v1; // x19
  __int64 v2; // x8

  if ( *(_DWORD *)(result + 16) == 0 )
  {
    v1 = *(_DWORD **)result;
    if ( **(_DWORD **)result == 0 && v1[1] != 0 )
    {
      v1[10] = 1;
      v2 = 10LL * *(unsigned int *)(sub_D310A0(v1 + 8) + 4);
      return ((__int64 (__fastcall *)(_QWORD))qword_18D2318[v2])(*((_QWORD *)v1 + 3));
    }
  }
  return result;
}

int __fastcall sub_D603A0(__int64 a1, __int64 a2, unsigned __int64 *a3)
{
  __int64 result; // x0

  if ( *(_DWORD *)(a1 + 16) == 0 && (unsigned int)sub_D64900(*(_QWORD *)a1, a2, a3) != 0 )
    return 1;
  if ( dword_191FB00 != 0 )
  {
    result = qword_191FAF8;
    if ( qword_191FAF8 == 0 )
      return result;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)qword_191FAF8 + 48LL))(qword_191FAF8, a1);
  }
  return 0;
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

// 18OneShotSILENCEPath, virtual slot 14
__int64 __fastcall sub_D6AB90(__int64 a1)
{
  __int64 v1; // x0

  v1 = (*(__int64 (__fastcall **)(__int64, int))(*(_QWORD *)a1 + 96LL))(a1, 0);
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 152LL))(v1);
}

__int64 __fastcall sub_D6B9C0(_QWORD *a1)
{
  __int64 result; // x0
  __int64 v3; // x8
  __int64 v4; // t1
  __int64 v5; // x20
  __int64 v6; // x20
  __int64 v7; // x20
  __int64 v8; // x20

  v4 = a1[6];
  result = (__int64)(a1 + 6);
  v3 = v4;
  if ( v4 != 0 )
    result = (*(__int64 (__fastcall **)(__int64))(v3 + 56))(result);
  v5 = a1[7];
  if ( v5 != 0 )
  {
    result = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v5 + 160LL))(a1[7]);
    if ( dword_191FB00 != 0 )
    {
      result = qword_191FAF8;
      if ( qword_191FAF8 != 0 )
        result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)qword_191FAF8 + 48LL))(qword_191FAF8, v5);
    }
    a1[7] = 0;
  }
  v6 = a1[8];
  if ( v6 != 0 )
  {
    result = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v6 + 160LL))(a1[8]);
    if ( dword_191FB00 != 0 )
    {
      result = qword_191FAF8;
      if ( qword_191FAF8 != 0 )
        result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)qword_191FAF8 + 48LL))(qword_191FAF8, v6);
    }
    a1[8] = 0;
  }
  v7 = a1[9];
  if ( v7 != 0 )
  {
    result = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v7 + 160LL))(a1[9]);
    if ( dword_191FB00 != 0 )
    {
      result = qword_191FAF8;
      if ( qword_191FAF8 != 0 )
        result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)qword_191FAF8 + 48LL))(qword_191FAF8, v7);
    }
    a1[9] = 0;
  }
  v8 = a1[10];
  if ( v8 != 0 )
  {
    result = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v8 + 160LL))(a1[10]);
    if ( dword_191FB00 != 0 )
    {
      result = qword_191FAF8;
      if ( qword_191FAF8 != 0 )
        result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)qword_191FAF8 + 48LL))(qword_191FAF8, v8);
    }
    a1[10] = 0;
  }
  return result;
}

void __fastcall sub_D6CCE0(_QWORD *result)
{
  __int64 v1; // x20
  _QWORD *v2; // x19

  v1 = *result;
  if ( *result != 0 )
  {
    v2 = result;
    result = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v1 + 160LL))(*result);
    if ( dword_191FB00 != 0 )
    {
      result = (_QWORD *)qword_191FAF8;
      if ( qword_191FAF8 != 0 )
        result = (_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)qword_191FAF8 + 48LL))(
                             qword_191FAF8,
                             v1);
    }
    *v2 = 0;
  }
  return;
}

void __fastcall sub_D6D5D0(_QWORD *result)
{
  __int64 v1; // x20
  _QWORD *v2; // x19

  v1 = *result;
  if ( *result != 0 )
  {
    v2 = result;
    result = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v1 + 160LL))(*result);
    if ( dword_191FB00 != 0 )
    {
      result = (_QWORD *)qword_191FAF8;
      if ( qword_191FAF8 != 0 )
        result = (_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)qword_191FAF8 + 48LL))(
                             qword_191FAF8,
                             v1);
    }
    *v2 = 0;
  }
  return;
}

// N4Dare7Private19DareEffectChainBaseI7TEffect19_SND_tdstToolFormatEE, virtual slot 3
void sub_D6FC30(__int64 result)
{
  __int64 v1; // x8
  __int64 v2; // x19
  _QWORD *v3; // x9
  _QWORD *v4; // x23
  __int64 v5; // x20

  v1 = *(_QWORD *)(result + 40);
  v2 = result;
  if ( v1 != 0 )
  {
    v3 = *(_QWORD **)(result + 56);
    v4 = v3;
    do
    {
      v5 = *v4;
      if ( *v4 != 0 )
      {
        result = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v5 + 160LL))(*v4);
        if ( dword_191FB00 != 0 )
        {
          result = qword_191FAF8;
          if ( qword_191FAF8 != 0 )
            result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)qword_191FAF8 + 48LL))(qword_191FAF8, v5);
        }
        v3 = *(_QWORD **)(v2 + 56);
        v1 = *(_QWORD *)(v2 + 40);
      }
      ++v4;
    }
    while ( v4 != &v3[v1] );
  }
  *(_QWORD *)(v2 + 40) = 0;
  *(_DWORD *)(v2 + 28) = 0;
  return;
}

// 7TEffect, virtual slot 1
int __fastcall sub_D70580(_QWORD *a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // x20
  __int64 result; // x0

  v3 = a1[10];
  result = (*(__int64 (__fastcall **)(_QWORD *, _QWORD))(*a1 + 16LL))(a1, a3);
  if ( (_DWORD)result != 0 )
  {
    if ( (*(unsigned int (__fastcall **)(_QWORD *, __int64))*a1)(a1, a2) == -1 )
    {
      (*(void (__fastcall **)(_QWORD *, __int64))*a1)(a1, v3);
      return 0;
    }
    else
    {
      return 1;
    }
  }
  return result;
}

// 10TConverter, virtual slot 1
int __fastcall sub_D70B80(_QWORD *a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // x20
  __int64 result; // x0

  v3 = a1[7];
  result = (*(__int64 (__fastcall **)(_QWORD *, _QWORD))(*a1 + 16LL))(a1, a3);
  if ( (_DWORD)result != 0 )
  {
    if ( (*(unsigned int (__fastcall **)(_QWORD *, __int64))*a1)(a1, a2) == -1 )
    {
      (*(void (__fastcall **)(_QWORD *, __int64))*a1)(a1, v3);
      return 0;
    }
    else
    {
      return 1;
    }
  }
  return result;
}

// 12TEffectChain, virtual slot 1
int __fastcall sub_D71690(_QWORD *a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // x20
  __int64 result; // x0

  v3 = a1[10];
  result = (*(__int64 (__fastcall **)(_QWORD *, _QWORD))(*a1 + 16LL))(a1, a3);
  if ( (_DWORD)result != 0 )
  {
    if ( (*(unsigned int (__fastcall **)(_QWORD *, __int64))*a1)(a1, a2) == -1 )
    {
      (*(void (__fastcall **)(_QWORD *, __int64))*a1)(a1, v3);
      return 0;
    }
    else
    {
      return 1;
    }
  }
  return result;
}

// 14TVolPanGeneric, virtual slot 1
int __fastcall sub_D71FA0(_QWORD *a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // x20
  __int64 result; // x0

  v3 = a1[8];
  result = (*(__int64 (__fastcall **)(_QWORD *, _QWORD))(*a1 + 16LL))(a1, a3);
  if ( (_DWORD)result != 0 )
  {
    if ( (*(unsigned int (__fastcall **)(_QWORD *, __int64))*a1)(a1, a2) == -1 )
    {
      (*(void (__fastcall **)(_QWORD *, __int64))*a1)(a1, v3);
      return 0;
    }
    else
    {
      return 1;
    }
  }
  return result;
}

// 20TPitchShifterGeneric, virtual slot 1
int __fastcall sub_D72A90(_QWORD *a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // x20
  __int64 result; // x0

  v3 = a1[11];
  result = (*(__int64 (__fastcall **)(_QWORD *, _QWORD))(*a1 + 16LL))(a1, a3);
  if ( (_DWORD)result != 0 )
  {
    if ( (*(unsigned int (__fastcall **)(_QWORD *, __int64))*a1)(a1, a2) == -1 )
    {
      (*(void (__fastcall **)(_QWORD *, __int64))*a1)(a1, v3);
      return 0;
    }
    else
    {
      return 1;
    }
  }
  return result;
}

// 6TFader, virtual slot 1
int __fastcall sub_D74CD0(_QWORD *a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // x20
  __int64 result; // x0

  v3 = a1[7];
  result = (*(__int64 (__fastcall **)(_QWORD *, _QWORD))(*a1 + 16LL))(a1, a3);
  if ( (_DWORD)result != 0 )
  {
    if ( (*(unsigned int (__fastcall **)(_QWORD *, __int64))*a1)(a1, a2) == -1 )
    {
      (*(void (__fastcall **)(_QWORD *, __int64))*a1)(a1, v3);
      return 0;
    }
    else
    {
      return 1;
    }
  }
  return result;
}

__int64 __fastcall sub_D75480(_QWORD *a1)
{
  __int64 result; // x0
  __int64 v3; // x8
  __int64 v4; // t1
  __int64 v5; // x20
  __int64 v6; // x20
  __int64 v7; // x20
  __int64 v8; // x20

  v4 = a1[6];
  result = (__int64)(a1 + 6);
  v3 = v4;
  if ( v4 != 0 )
    result = (*(__int64 (__fastcall **)(__int64))(v3 + 56))(result);
  v5 = a1[7];
  if ( v5 != 0 )
  {
    result = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v5 + 160LL))(a1[7]);
    if ( dword_191FB00 != 0 )
    {
      result = qword_191FAF8;
      if ( qword_191FAF8 != 0 )
        result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)qword_191FAF8 + 48LL))(qword_191FAF8, v5);
    }
    a1[7] = 0;
  }
  v6 = a1[8];
  if ( v6 != 0 )
  {
    result = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v6 + 160LL))(a1[8]);
    if ( dword_191FB00 != 0 )
    {
      result = qword_191FAF8;
      if ( qword_191FAF8 != 0 )
        result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)qword_191FAF8 + 48LL))(qword_191FAF8, v6);
    }
    a1[8] = 0;
  }
  v7 = a1[9];
  if ( v7 != 0 )
  {
    result = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v7 + 160LL))(a1[9]);
    if ( dword_191FB00 != 0 )
    {
      result = qword_191FAF8;
      if ( qword_191FAF8 != 0 )
        result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)qword_191FAF8 + 48LL))(qword_191FAF8, v7);
    }
    a1[9] = 0;
  }
  v8 = a1[10];
  if ( v8 != 0 )
  {
    result = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v8 + 160LL))(a1[10]);
    if ( dword_191FB00 != 0 )
    {
      result = qword_191FAF8;
      if ( qword_191FAF8 != 0 )
        result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)qword_191FAF8 + 48LL))(qword_191FAF8, v8);
    }
    a1[10] = 0;
  }
  return result;
}

void __fastcall sub_D755C0(_QWORD *result)
{
  __int64 v1; // x20
  _QWORD *v2; // x19

  v1 = *result;
  if ( *result != 0 )
  {
    v2 = result;
    result = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v1 + 160LL))(*result);
    if ( dword_191FB00 != 0 )
    {
      result = (_QWORD *)qword_191FAF8;
      if ( qword_191FAF8 != 0 )
        result = (_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)qword_191FAF8 + 48LL))(
                             qword_191FAF8,
                             v1);
    }
    *v2 = 0;
  }
  return;
}

// 9TImaAdpcm, virtual slot 1
int __fastcall sub_D75690(_QWORD *a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // x20
  __int64 result; // x0

  v3 = a1[8];
  result = (*(__int64 (__fastcall **)(_QWORD *, _QWORD))(*a1 + 16LL))(a1, a3);
  if ( (_DWORD)result != 0 )
  {
    if ( (*(unsigned int (__fastcall **)(_QWORD *, __int64))*a1)(a1, a2) == -1 )
    {
      (*(void (__fastcall **)(_QWORD *, __int64))*a1)(a1, v3);
      return 0;
    }
    else
    {
      return 1;
    }
  }
  return result;
}

// 9TImaAdpcm, virtual slot 11
float __fastcall sub_D757A0(_DWORD *a1)
{
  if ( a1[2] == 2 )
    return -2.0;
  else
    return (float)(unsigned int)a1[19] / (float)(unsigned int)a1[7];
}

void __fastcall sub_D75F40(_QWORD *result)
{
  __int64 v1; // x20
  _QWORD *v2; // x19

  v1 = *result;
  if ( *result != 0 )
  {
    v2 = result;
    result = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v1 + 160LL))(*result);
    if ( dword_191FB00 != 0 )
    {
      result = (_QWORD *)qword_191FAF8;
      if ( qword_191FAF8 != 0 )
        result = (_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)qword_191FAF8 + 48LL))(
                             qword_191FAF8,
                             v1);
    }
    *v2 = 0;
  }
  return;
}

// 4TPCM, virtual slot 1
int __fastcall sub_D76010(_QWORD *a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // x20
  __int64 result; // x0

  v3 = a1[8];
  result = (*(__int64 (__fastcall **)(_QWORD *, _QWORD))(*a1 + 16LL))(a1, a3);
  if ( (_DWORD)result != 0 )
  {
    if ( (*(unsigned int (__fastcall **)(_QWORD *, __int64))*a1)(a1, a2) == -1 )
    {
      (*(void (__fastcall **)(_QWORD *, __int64))*a1)(a1, v3);
      return 0;
    }
    else
    {
      return 1;
    }
  }
  return result;
}

// 4TPCM, virtual slot 11
float __fastcall sub_D76130(_DWORD *a1)
{
  if ( a1[2] == 2 )
    return -2.0;
  else
    return (float)(unsigned int)a1[23] / (float)(unsigned int)a1[7];
}

// 11TMultiTrack, virtual slot 1
int __fastcall sub_D76670(_QWORD *a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // x20
  __int64 result; // x0

  v3 = a1[7];
  result = (*(__int64 (__fastcall **)(_QWORD *, _QWORD))(*a1 + 16LL))(a1, a3);
  if ( (_DWORD)result != 0 )
  {
    if ( (*(unsigned int (__fastcall **)(_QWORD *, __int64))*a1)(a1, a2) == -1 )
    {
      (*(void (__fastcall **)(_QWORD *, __int64))*a1)(a1, v3);
      return 0;
    }
    else
    {
      return 1;
    }
  }
  return result;
}

// 23OneShotMULTITRACK3DPath, virtual slot 6
__int64 __fastcall sub_D777A0(__int64 a1, unsigned int a2)
{
  __int64 (__fastcall ***v2)(_QWORD); // x0

  v2 = *(__int64 (__fastcall ****)(_QWORD))(*(_QWORD *)(a1 + 136) + 8LL * a2);
  return (**v2)(v2);
}

// 23OneShotMULTITRACK3DPath, virtual slot 7
__int64 __fastcall sub_D777C0(__int64 a1, unsigned int a2)
{
  __int64 v2; // x0

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 136) + 8LL * a2);
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
}

// 23OneShotMULTITRACK3DPath, virtual slot 8
__int64 __fastcall sub_D777E0(__int64 a1, unsigned int a2)
{
  __int64 v2; // x0

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 136) + 8LL * a2);
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
}

// 23OneShotMULTITRACK3DPath, virtual slot 9
__int64 __fastcall sub_D77800(__int64 a1, unsigned int a2)
{
  __int64 v2; // x0

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 136) + 8LL * a2);
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 24LL))(v2);
}

// 23OneShotMULTITRACK3DPath, virtual slot 10
__int64 __fastcall sub_D77820(__int64 a1, unsigned int a2)
{
  __int64 v2; // x0

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 136) + 8LL * a2);
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 32LL))(v2);
}

// 17OneShotSAMPLEPath, virtual slot 5
__int64 __fastcall sub_D780D0(__int64 a1)
{
  __int64 result; // x0
  _QWORD *v3; // x19
  __int64 v4; // x0
  __int64 v5; // x0
  __int64 v6; // x0
  __int64 v7; // x0

  result = *(_QWORD *)(a1 + 104);
  if ( result != 0 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 112LL))(result);
  v3 = *(_QWORD **)(a1 + 120);
  if ( v3 != nullptr )
  {
    v4 = v3[6];
    if ( v4 != 0 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 112LL))(v4);
    v5 = v3[7];
    if ( v5 != 0 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 112LL))(v5);
    v6 = v3[8];
    if ( v6 != 0 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 112LL))(v6);
    v7 = v3[9];
    if ( v7 != 0 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 112LL))(v7);
    result = v3[10];
    if ( result != 0 )
      return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 112LL))(result);
  }
  return result;
}

// N4Dare7Private28ManagerVoiceForVirtualPlayerINS0_20ManagerHardwareVoiceEEE, virtual slot 18
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

// N4Dare7Private28ManagerVoiceForVirtualPlayerINS0_20ManagerHardwareVoiceEEE, virtual slot 8
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

// N4Dare7Private28ManagerVoiceForVirtualPlayerINS0_20ManagerHardwareVoiceEEE, virtual slot 10
bool __fastcall sub_D7BB40(__int64 a1)
{
  return *(_DWORD *)(a1 + 144) != 0 && *(float *)(a1 + 148) <= 0.0039f;
}

// N4Dare7Private28ManagerVoiceForVirtualPlayerINS0_20ManagerHardwareVoiceEEE, virtual slot 34
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

// N4Dare7Private28ManagerVoiceForVirtualPlayerINS0_20ManagerHardwareVoiceEEE, virtual slot 36
__int64 __fastcall sub_D7C440(__int64 result)
{
  __int64 v1; // x20
  __int64 v2; // x19
  __int64 v3; // x1
  __int64 v4; // x8

  v1 = qword_19397F0;
  v2 = result;
  if ( qword_19397F0 == 0 )
  {
    v1 = sub_722190(488, 8);
    result = sub_CF6830(v1, v3);
    qword_19397F0 = v1;
  }
  v4 = *(_QWORD *)(v2 + 8);
  *(_DWORD *)(v4 + 28) = 1;
  if ( *(_DWORD *)(v4 + 24) == 1 )
    return (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)(v1 + 64) + 24LL))(*(_QWORD *)(v4 + 8));
  return result;
}

// N4Dare7Private28ManagerVoiceForVirtualPlayerINS0_20ManagerHardwareVoiceEEE, virtual slot 37
__int64 __fastcall sub_D7C4B0(__int64 result)
{
  __int64 v1; // x20
  __int64 v2; // x19
  __int64 v3; // x1
  __int64 v4; // x8
  int v5; // w9

  v1 = qword_19397F0;
  v2 = result;
  if ( qword_19397F0 == 0 )
  {
    v1 = sub_722190(488, 8);
    result = sub_CF6830(v1, v3);
    qword_19397F0 = v1;
  }
  v4 = *(_QWORD *)(v2 + 8);
  v5 = *(_DWORD *)(v4 + 24);
  *(_DWORD *)(v4 + 28) = 0;
  if ( v5 == 1 )
    return (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)(v1 + 64) + 32LL))(*(_QWORD *)(v4 + 8));
  return result;
}

// N4Dare7Private28ManagerVoiceForVirtualPlayerINS0_20ManagerHardwareVoiceEEE, virtual slot 38
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

void sub_D7E9E0(__int64 result)
{
  __int64 v1; // x19
  _QWORD *v2; // x21
  __int64 v3; // x20
  __int64 v4; // x8
  int v5; // w9
  int v6; // w8
  __int64 v7; // x20
  _DWORD *v8; // x22
  int v9; // w8
  int v10; // w8

  if ( (*(_DWORD *)(result + 72) & 0xFFFFFFFE) != 2 )
  {
    v1 = result;
    if ( *(_QWORD *)(result + 48) != 0 )
    {
      v2 = *(_QWORD **)(result + 64);
      do
      {
        v3 = *v2;
        if ( *v2 != 0 && (*(_DWORD *)(v3 + 24) & 0xFFFFFFFE) != 2 )
        {
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v3 + 88LL))(*v2);
          result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 120LL))(v3);
          if ( (_DWORD)result != 0 )
          {
            v4 = *(_QWORD *)(v3 + 8);
            v5 = *(_DWORD *)(v4 + 20);
            if ( (v5 & 0xFFFFFFFE) != 2 )
            {
              *(_DWORD *)(v4 + 20) = 2;
              *(_DWORD *)(v4 + 24) = v5;
            }
          }
          v6 = *(_DWORD *)(v3 + 24);
          if ( v6 != 2 )
          {
            *(_DWORD *)(v3 + 24) = 2;
            *(_DWORD *)(v3 + 28) = v6;
          }
        }
        ++v2;
      }
      while ( v2 != (_QWORD *)(*(_QWORD *)(v1 + 64) + 8LL * *(_QWORD *)(v1 + 48)) );
    }
    if ( *(_QWORD *)(v1 + 16) != 0 )
    {
      v7 = *(_QWORD *)(v1 + 32);
      do
      {
        v8 = *(_DWORD **)v7;
        if ( (*(_DWORD *)(*(_QWORD *)v7 + 40LL) & 0xFFFFFFFE) != 2 )
        {
          result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)v8 + 104LL))(*(_QWORD *)v8);
          v9 = v8[10];
          if ( v9 != 2 )
          {
            v8[10] = 2;
            v8[11] = v9;
          }
        }
        v7 += 8;
      }
      while ( v7 != *(_QWORD *)(v1 + 32) + 8LL * *(_QWORD *)(v1 + 16) );
    }
    v10 = *(_DWORD *)(v1 + 72);
    if ( v10 != 2 )
    {
      *(_DWORD *)(v1 + 72) = 2;
      *(_DWORD *)(v1 + 76) = v10;
    }
  }
  return;
}

// N4Dare7Private28ManagerVoiceForVirtualPlayerINS0_17ManagerSynthVoiceEEE, virtual slot 10
bool __fastcall sub_D84740(__int64 a1)
{
  return *(_DWORD *)(a1 + 208) != 0 && *(float *)(a1 + 212) <= 0.0039f;
}

// N4Dare7Private28ManagerVoiceForVirtualPlayerINS0_17ManagerSynthVoiceEEE, virtual slot 34
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

// N4Dare7Private28ManagerVoiceForVirtualPlayerINS0_17ManagerSynthVoiceEEE, virtual slot 36
__int64 __fastcall sub_D84F70(__int64 result)
{
  __int64 v1; // x20
  __int64 v2; // x19
  __int64 v3; // x1
  __int64 v4; // x8

  v1 = qword_19397F0;
  v2 = result;
  if ( qword_19397F0 == 0 )
  {
    v1 = sub_722190(488, 8);
    result = sub_CF6830(v1, v3);
    qword_19397F0 = v1;
  }
  v4 = *(_QWORD *)(v2 + 8);
  *(_DWORD *)(v4 + 28) = 1;
  if ( *(_DWORD *)(v4 + 24) == 1 )
    return (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)(v1 + 64) + 24LL))(*(_QWORD *)(v4 + 8));
  return result;
}

// N4Dare7Private28ManagerVoiceForVirtualPlayerINS0_17ManagerSynthVoiceEEE, virtual slot 37
__int64 __fastcall sub_D84FE0(__int64 result)
{
  __int64 v1; // x20
  __int64 v2; // x19
  __int64 v3; // x1
  __int64 v4; // x8
  int v5; // w9

  v1 = qword_19397F0;
  v2 = result;
  if ( qword_19397F0 == 0 )
  {
    v1 = sub_722190(488, 8);
    result = sub_CF6830(v1, v3);
    qword_19397F0 = v1;
  }
  v4 = *(_QWORD *)(v2 + 8);
  v5 = *(_DWORD *)(v4 + 24);
  *(_DWORD *)(v4 + 28) = 0;
  if ( v5 == 1 )
    return (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)(v1 + 64) + 32LL))(*(_QWORD *)(v4 + 8));
  return result;
}

// N4Dare7Private28ManagerVoiceForVirtualPlayerINS0_17ManagerSynthVoiceEEE, virtual slot 38
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

// 11TTransition, virtual slot 11
float __fastcall sub_D87140(_DWORD *a1)
{
  if ( a1[14] != 0 )
    return -1.0;
  if ( a1[2] == 2 )
    return -2.0;
  return (float)(int)a1[43] / (float)(unsigned int)a1[7];
}

// 17TContactGenerator, virtual slot 11
float __fastcall sub_D87B90(unsigned int *a1)
{
  if ( a1[15] != 0 )
    return (float)a1[16] / (float)a1[7];
  else
    return -1.0;
}

__int64 __fastcall sub_D87DC0(__int64 result)
{
  __int64 v1; // x20
  _QWORD *v2; // x19
  __int64 v3; // x20
  __int64 v4; // x20
  __int64 v5; // x20
  __int64 v6; // x20
  __int64 v7; // x20
  __int64 v8; // x20
  __int64 v9; // x20

  v1 = *(_QWORD *)(result + 128);
  v2 = (_QWORD *)result;
  if ( v1 != 0 )
  {
    result = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v1 + 160LL))(*(_QWORD *)(result + 128));
    if ( dword_191FB00 != 0 )
    {
      result = qword_191FAF8;
      if ( qword_191FAF8 != 0 )
        result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)qword_191FAF8 + 48LL))(qword_191FAF8, v1);
    }
    v2[16] = 0;
  }
  v3 = v2[13];
  if ( v3 != 0 )
  {
    result = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v3 + 160LL))(v2[13]);
    if ( dword_191FB00 != 0 )
    {
      result = qword_191FAF8;
      if ( qword_191FAF8 != 0 )
        result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)qword_191FAF8 + 48LL))(qword_191FAF8, v3);
    }
    v2[13] = 0;
  }
  v4 = v2[14];
  if ( v4 != 0 )
  {
    result = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v4 + 160LL))(v2[14]);
    if ( dword_191FB00 != 0 )
    {
      result = qword_191FAF8;
      if ( qword_191FAF8 != 0 )
        result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)qword_191FAF8 + 48LL))(qword_191FAF8, v4);
    }
    v2[14] = 0;
  }
  v5 = v2[15];
  if ( v5 != 0 )
  {
    result = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v5 + 160LL))(v2[15]);
    if ( dword_191FB00 != 0 )
    {
      result = qword_191FAF8;
      if ( qword_191FAF8 != 0 )
        result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)qword_191FAF8 + 48LL))(qword_191FAF8, v5);
    }
    v2[15] = 0;
  }
  v6 = v2[9];
  if ( v6 != 0 )
  {
    result = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v6 + 160LL))(v2[9]);
    if ( dword_191FB00 != 0 )
    {
      result = qword_191FAF8;
      if ( qword_191FAF8 != 0 )
        result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)qword_191FAF8 + 48LL))(qword_191FAF8, v6);
    }
    v2[9] = 0;
  }
  v7 = v2[10];
  if ( v7 != 0 )
  {
    result = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v7 + 160LL))(v2[10]);
    if ( dword_191FB00 != 0 )
    {
      result = qword_191FAF8;
      if ( qword_191FAF8 != 0 )
        result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)qword_191FAF8 + 48LL))(qword_191FAF8, v7);
    }
    v2[10] = 0;
  }
  v8 = v2[11];
  if ( v8 != 0 )
  {
    result = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v8 + 160LL))(v2[11]);
    if ( dword_191FB00 != 0 )
    {
      result = qword_191FAF8;
      if ( qword_191FAF8 != 0 )
        result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)qword_191FAF8 + 48LL))(qword_191FAF8, v8);
    }
    v2[11] = 0;
  }
  v9 = v2[12];
  if ( v9 != 0 )
  {
    result = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v9 + 160LL))(v2[12]);
    if ( dword_191FB00 != 0 )
    {
      result = qword_191FAF8;
      if ( qword_191FAF8 != 0 )
        result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)qword_191FAF8 + 48LL))(qword_191FAF8, v9);
    }
    v2[12] = 0;
  }
  return result;
}

// N4Dare7Private28ManagerVoiceForVirtualPlayerINS0_17ManagerThemeVoiceEEE, virtual slot 10
bool __fastcall sub_D8A190(__int64 a1)
{
  return *(_DWORD *)(a1 + 216) != 0 && *(float *)(a1 + 220) <= 0.0039f;
}

// N4Dare7Private28ManagerVoiceForVirtualPlayerINS0_17ManagerThemeVoiceEEE, virtual slot 34
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

// N4Dare7Private28ManagerVoiceForVirtualPlayerINS0_17ManagerThemeVoiceEEE, virtual slot 36
__int64 __fastcall sub_D8A6B0(__int64 result)
{
  __int64 v1; // x20
  __int64 v2; // x19
  __int64 v3; // x1
  __int64 v4; // x8

  v1 = qword_19397F0;
  v2 = result;
  if ( qword_19397F0 == 0 )
  {
    v1 = sub_722190(488, 8);
    result = sub_CF6830(v1, v3);
    qword_19397F0 = v1;
  }
  v4 = *(_QWORD *)(v2 + 8);
  *(_DWORD *)(v4 + 28) = 1;
  if ( *(_DWORD *)(v4 + 24) == 1 )
    return (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)(v1 + 64) + 24LL))(*(_QWORD *)(v4 + 8));
  return result;
}

// N4Dare7Private28ManagerVoiceForVirtualPlayerINS0_17ManagerThemeVoiceEEE, virtual slot 37
__int64 __fastcall sub_D8A720(__int64 result)
{
  __int64 v1; // x20
  __int64 v2; // x19
  __int64 v3; // x1
  __int64 v4; // x8
  int v5; // w9

  v1 = qword_19397F0;
  v2 = result;
  if ( qword_19397F0 == 0 )
  {
    v1 = sub_722190(488, 8);
    result = sub_CF6830(v1, v3);
    qword_19397F0 = v1;
  }
  v4 = *(_QWORD *)(v2 + 8);
  v5 = *(_DWORD *)(v4 + 24);
  *(_DWORD *)(v4 + 28) = 0;
  if ( v5 == 1 )
    return (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)(v1 + 64) + 32LL))(*(_QWORD *)(v4 + 8));
  return result;
}

// N4Dare7Private28ManagerVoiceForVirtualPlayerINS0_17ManagerThemeVoiceEEE, virtual slot 38
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

// N4Dare7Private28ManagerVoiceForVirtualPlayerINS0_17ManagerThemeVoiceEEE, virtual slot 41
__int64 __fastcall sub_D8AE40(__int64 a1)
{
  *(_QWORD *)(*(_QWORD *)(a1 + 128) + 56LL) = a1;
  qword_1945E28 = (__int64)sub_D8B010;
  return 1;
}

// 9ThemePath, virtual slot 6
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

// 9ThemePath, virtual slot 7
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

// 9ThemePath, virtual slot 8
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

// 9ThemePath, virtual slot 9
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

// 9ThemePath, virtual slot 10
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

// N4Dare7Private28ManagerVoiceForVirtualPlayerINS0_16ManagerToolVoiceEEE, virtual slot 10
bool __fastcall sub_D8DF40(__int64 a1)
{
  return *(_DWORD *)(a1 + 200) != 0 && *(float *)(a1 + 204) <= 0.0039f;
}

// N4Dare7Private28ManagerVoiceForVirtualPlayerINS0_16ManagerToolVoiceEEE, virtual slot 34
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

// N4Dare7Private28ManagerVoiceForVirtualPlayerINS0_16ManagerToolVoiceEEE, virtual slot 36
__int64 __fastcall sub_D8E310(__int64 result)
{
  __int64 v1; // x20
  __int64 v2; // x19
  __int64 v3; // x1
  __int64 v4; // x8

  v1 = qword_19397F0;
  v2 = result;
  if ( qword_19397F0 == 0 )
  {
    v1 = sub_722190(488, 8);
    result = sub_CF6830(v1, v3);
    qword_19397F0 = v1;
  }
  v4 = *(_QWORD *)(v2 + 8);
  *(_DWORD *)(v4 + 28) = 1;
  if ( *(_DWORD *)(v4 + 24) == 1 )
    return (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)(v1 + 64) + 24LL))(*(_QWORD *)(v4 + 8));
  return result;
}

// N4Dare7Private28ManagerVoiceForVirtualPlayerINS0_16ManagerToolVoiceEEE, virtual slot 37
__int64 __fastcall sub_D8E380(__int64 result)
{
  __int64 v1; // x20
  __int64 v2; // x19
  __int64 v3; // x1
  __int64 v4; // x8
  int v5; // w9

  v1 = qword_19397F0;
  v2 = result;
  if ( qword_19397F0 == 0 )
  {
    v1 = sub_722190(488, 8);
    result = sub_CF6830(v1, v3);
    qword_19397F0 = v1;
  }
  v4 = *(_QWORD *)(v2 + 8);
  v5 = *(_DWORD *)(v4 + 24);
  *(_DWORD *)(v4 + 28) = 0;
  if ( v5 == 1 )
    return (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)(v1 + 64) + 32LL))(*(_QWORD *)(v4 + 8));
  return result;
}

// N4Dare7Private28ManagerVoiceForVirtualPlayerINS0_16ManagerToolVoiceEEE, virtual slot 38
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

// N4Dare7Private16ManagerToolVoice22ManagerToolSampleVoiceE, virtual slot 23
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

// N4Dare7Private16ManagerToolVoice30ManagerHardwareStreamToolVoiceE, virtual slot 8
int __fastcall sub_D8F3B0(__int64 a1)
{
  __int64 *v1; // x21
  __int64 v2; // x19
  __int64 v3; // x20
  __int64 v4; // x1
  __int64 result; // x0

  v1 = *(__int64 **)(*(_QWORD *)(a1 + 8) + 136LL);
  v2 = *v1;
  if ( *v1 == 0 )
    return 0;
  v3 = qword_19397F0;
  if ( qword_19397F0 == 0 )
  {
    v3 = sub_722190(488, 8);
    sub_CF6830(v3, v4);
    qword_19397F0 = v3;
  }
  result = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v3 + 472) + 424LL))(*(_QWORD *)(v3 + 472), v2);
  if ( (_DWORD)result == 0 )
    *v1 = 0;
  return result;
}

// N4Dare7Private16ManagerToolVoice36ManagerHardwareStreamToolSampleVoiceE, virtual slot 19
__int64 __fastcall sub_D8F8B0(__int64 a1)
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
  v5 = sub_D359B0(*(_QWORD *)(a1 + 8) + 64LL);
  return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 496LL))(v4, v5);
}

// N4Dare7Private16ManagerToolVoice36ManagerHardwareStreamToolSampleVoiceE, virtual slot 24
__int64 __fastcall sub_D8FE20(__int64 result)
{
  __int64 *v1; // x21
  __int64 v2; // x19
  __int64 v3; // x20
  __int64 v4; // x1

  v1 = *(__int64 **)(*(_QWORD *)(result + 8) + 136LL);
  v2 = *v1;
  if ( *v1 != 0 )
  {
    v3 = qword_19397F0;
    if ( qword_19397F0 == 0 )
    {
      v3 = sub_722190(488, 8);
      sub_CF6830(v3, v4);
      qword_19397F0 = v3;
    }
    result = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v3 + 472) + 456LL))(*(_QWORD *)(v3 + 472), v2);
    *v1 = 0;
  }
  return result;
}

// N4Dare7Private8AssoPlayE, virtual slot 14
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

// N4Dare7Private25UnloadAtomicObjectCommandE, virtual slot 2
__int64 __fastcall sub_D9B3C0(__int64 a1)
{
  unsigned int v1; // w19
  __int64 v2; // x0

  v1 = *(_DWORD *)(a1 + 16);
  v2 = sub_D29AF0(a1);
  return (unsigned int)sub_D494A0(v2, v1) >> 31;
}

void sub_D9B6A0(__int64 result)
{
  __int64 v1; // x1

  if ( dword_191FB00 != 0 )
  {
    v1 = result;
    result = qword_191FAF8;
    if ( qword_191FAF8 != 0 )
      { (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)qword_191FAF8 + 48LL))(qword_191FAF8, v1); return; }
  }
  return;
}

void sub_DA1B20(__int64 result)
{
  __int64 v1; // x1

  if ( dword_191FB00 != 0 )
  {
    v1 = result;
    result = qword_191FAF8;
    if ( qword_191FAF8 != 0 )
      { (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)qword_191FAF8 + 48LL))(qword_191FAF8, v1); return; }
  }
  return;
}

// 16CDataBlockMemory, virtual slot 2
_DWORD *__fastcall sub_DA59F0(_DWORD *result, int a2)
{
  result[7] = 0;
  result[8] = 0;
  result[5] = a2;
  return result;
}

// N4Dare7Private10RendererEEE, virtual slot 15
void sub_DA75B0(__int64 result)
{
  __int64 v1; // x19

  if ( *(_BYTE *)(result + 352) != 0 )
  {
    v1 = result;
    nn__os__UnlockMutex(qword_19397C8);
    nn__os__SignalEvent(*(_QWORD *)(v1 + 832) + 8LL);
    if ( *(_BYTE *)(v1 + 352) != 0 )
      nn__os__WaitThread(v1 + 376);
    { nn__os__LockMutex(qword_19397C8); return; }
  }
  return;
}

// N4Dare7Private10RendererEEE, virtual slot 23
_Bool __fastcall sub_DA7A10(__int64 a1, int a2)
{
  int v3; // w8

  if ( *(_DWORD *)(a1 + 896) == 0 || (*(unsigned int (**)(void))(*(_QWORD *)a1 + 656LL))() != a2 )
    return 0;
  nn__os__LockMutex(qword_19397C8);
  v3 = *(_DWORD *)(a1 + 896) - 1;
  *(_QWORD *)(a1 + 888) = 0;
  *(_DWORD *)(a1 + 896) = v3;
  nn__os__UnlockMutex(qword_19397C8);
  return 1;
}

// N4Dare7Private10RendererEEE, virtual slot 24
int __fastcall sub_DA7A80(_QWORD *a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // x20
  __int64 result; // x0

  v3 = a1[111];
  result = (*(__int64 (__fastcall **)(_QWORD *, _QWORD))(*a1 + 184LL))(a1, a3);
  if ( (_DWORD)result != 0 )
  {
    if ( (*(unsigned int (__fastcall **)(_QWORD *, __int64))(*a1 + 176LL))(a1, a2) == -1 )
    {
      (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 176LL))(a1, v3);
      return 0;
    }
    else
    {
      return 1;
    }
  }
  return result;
}

// N4Dare7Private15EESourceVoiceSWE, virtual slot 6
int __fastcall sub_DACEA0(__int64 a1)
{
  return (*(_QWORD *)(a1 + 216) >> 24) * (unsigned __int64)*(unsigned int *)(a1 + 108) % *(unsigned int *)(a1 + 160);
}

// N4Dare7Private15EESourceVoiceSWE, virtual slot 14
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

// N4Dare7Private9ToolVoiceE, virtual slot 4
bool __fastcall sub_DB09F0(__int64 a1)
{
  _QWORD *v1; // x8
  __int64 v3; // x9
  _QWORD *v4; // x20
  __int64 v6; // x19

  if ( *(_QWORD *)(a1 + 48) != 1 )
    return false;
  v1 = *(_QWORD **)(a1 + 64);
  v3 = 1;
  v4 = v1;
  while ( *v4 == 0 )
  {
LABEL_6:
    if ( ++v4 == &v1[v3] )
      return false;
  }
  if ( (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)*v4 + 24LL))(*v4) == 0 )
  {
    v1 = *(_QWORD **)(a1 + 64);
    v3 = *(_QWORD *)(a1 + 48);
    goto LABEL_6;
  }
  v6 = qword_19397F0;
  if ( qword_19397F0 == 0 )
  {
    v6 = sub_722190(488, 8);
    sub_CF6830();
    qword_19397F0 = v6;
  }
  return (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(v6 + 280) + 24LL))(*(_QWORD *)(v6 + 280)) != 0;
}

// N4Dare7Private5VoiceE, virtual slot 4
_Bool __fastcall sub_DB0B20(__int64 a1)
{
  __int64 v1; // x8
  _QWORD *v2; // x9
  _QWORD *v4; // x20

  v1 = *(_QWORD *)(a1 + 48);
  if ( v1 == 0 )
    return 0;
  v2 = *(_QWORD **)(a1 + 64);
  v4 = v2;
  while ( *v4 == 0 )
  {
LABEL_6:
    if ( ++v4 == &v2[v1] )
      return 0;
  }
  if ( (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)*v4 + 24LL))(*v4) == 0 )
  {
    v2 = *(_QWORD **)(a1 + 64);
    v1 = *(_QWORD *)(a1 + 48);
    goto LABEL_6;
  }
  return 1;
}

// N4Dare7Private13PresetCommandE, virtual slot 2
__int64 __fastcall sub_DB2F30(__int64 a1)
{
  int v1; // w8
  unsigned int v3; // w19
  __int64 v4; // x20
  unsigned int v5; // w0
  unsigned int v6; // w19
  __int64 v7; // x20

  v1 = *(_DWORD *)(a1 + 16);
  switch ( v1 )
  {
    case 0:
      sub_D54040(*(unsigned int *)(a1 + 20));
      return 0;
    case 1:
      v6 = *(_DWORD *)(a1 + 20);
      if ( qword_19397F0 == 0 )
      {
        v7 = sub_722190(488, 8);
        sub_CF6830();
        qword_19397F0 = v7;
      }
      v5 = sub_D54110(v6);
      return v5 >> 31;
    case 2:
      v3 = *(_DWORD *)(a1 + 20);
      if ( qword_19397F0 == 0 )
      {
        v4 = sub_722190(488, 8);
        sub_CF6830();
        qword_19397F0 = v4;
      }
      v5 = sub_D54DE0(v3);
      return v5 >> 31;
    default:
      return 1;
  }
}

void sub_DB57E0(__int64 result)
{
  __int64 v1; // x1

  if ( dword_191FB00 != 0 )
  {
    v1 = result;
    result = qword_191FAF8;
    if ( qword_191FAF8 != 0 )
      { (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)qword_191FAF8 + 48LL))(qword_191FAF8, v1); return; }
  }
  return;
}

void __fastcall sub_DB7270(_QWORD *result)
{
  _QWORD *v1; // x19
  _QWORD *v2; // x20

  if ( result != nullptr )
  {
    v1 = result;
    do
    {
      sub_DB7270(*v1);
      v2 = (_QWORD *)v1[1];
      free(*(void **)((char *)v1 - 12));
      v1 = v2;
    }
    while ( v2 != nullptr );
  }
  return;
}

// N7SndGear10BinaryTree19BinaryTreeStackRootINS_12LocalStorageELi0EEE, virtual slot 2
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

// N7SndGear13MemFileDeviceE, virtual slot 12
__int64 sub_DB8570()
{
  int v1; // [xsp+Ch] [xbp-4h] BYREF

  v1 = 4;
  (*(__int64(**)())off_18D7DE8)(0, &v1);
  return 0xFFFFFFFFLL;
}

// N7SndGear13MemFileDeviceE, virtual slot 13
__int64 sub_DB85A0()
{
  int v1; // [xsp+Ch] [xbp-4h] BYREF

  v1 = 4;
  (*(__int64(**)())off_18D7DE8)(0, &v1);
  return 0xFFFFFFFFLL;
}

// N7SndGear13MemFileDeviceE, virtual slot 14
__int64 sub_DB85D0()
{
  int v1; // [xsp+Ch] [xbp-4h] BYREF

  v1 = 4;
  (*(__int64(**)())off_18D7DE8)(0, &v1);
  return 0xFFFFFFFFLL;
}

void __fastcall sub_DBD720(_QWORD *result)
{
  _QWORD *v1; // x19
  _QWORD *v2; // x20

  if ( result != nullptr )
  {
    v1 = result;
    do
    {
      sub_DBD720(*v1);
      v2 = (_QWORD *)v1[1];
      free(*(void **)((char *)v1 - 12));
      v1 = v2;
    }
    while ( v2 != nullptr );
  }
  return;
}

// N7SndGear6ThreadE, virtual slot 0
__int64 __fastcall sub_DC0E40(__int64 a1)
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
  unsigned int *v11; // x0
  unsigned int *v12; // x8
  unsigned int v13; // w9
  unsigned int v14; // w9

  *(_QWORD *)a1 = &off_18D87A0;
  *(_DWORD *)(a1 + 96) = 0;
  v2 = *(unsigned int **)(a1 + 344);
  *(_QWORD *)(a1 + 344) = 0;
  if ( v2 == nullptr )
    goto LABEL_12;
  v3 = v2 + 2;
  v5 = __atomic_sub_fetch(v3, 1, 0);
  if ( v5 == 0 )
    (*(void (__fastcall **)(unsigned int *))(*(_QWORD *)v2 + 8LL))(v2);
  if ( *(_QWORD *)(a1 + 344) != 0 )
  {
    nn__os__DestroyThread(a1 + 376);
    free(*(void **)(a1 + 360));
    v6 = *(unsigned int **)(a1 + 344);
    *(_QWORD *)(a1 + 360) = 0;
    *(_QWORD *)(a1 + 368) = 0;
    *(_QWORD *)(a1 + 344) = 0;
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
LABEL_12:
    *(_QWORD *)(a1 + 344) = 0;
  }
  v10 = *(void **)(a1 + 360);
  *(_BYTE *)(a1 + 352) = 0;
  free(v10);
  v11 = *(unsigned int **)(a1 + 344);
  if ( v11 != nullptr )
  {
    v12 = v11 + 2;
    v14 = __atomic_sub_fetch(v12, 1, 0);
    if ( v14 == 0 )
      (*(void (__fastcall **)(unsigned int *))(*(_QWORD *)v11 + 8LL))(v11);
  }
  *(_QWORD *)a1 = &off_18D8720;
  nn__os__FinalizeEvent(*(_QWORD *)(a1 + 264) + 8LL);
  nn__os__FinalizeEvent(*(_QWORD *)(a1 + 208) + 8LL);
  return nn__os__FinalizeMutex(*(_QWORD *)(a1 + 104));
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

// N6icu_6718CharStringByteSinkE, virtual slot 2
__int64 __fastcall sub_DCE6B0(__int64 a1, const char *a2, int a3)
{
  int v4; // [xsp+Ch] [xbp-4h] BYREF

  v4 = 0;
  return sub_DCEA60(*(_QWORD *)(a1 + 8), a2, a3, &v4);
}

// N2EE8HeatWave14AudioStreamPCME, virtual slot 4
__int64 __fastcall sub_DD2870(__int64 a1)
{
  return (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(a1 + 16))(a1 + 32, *(_QWORD *)(a1 + 24), 3);
}

// N2EE8HeatWave14EffectFreeverbE, virtual slot 2
float __fastcall sub_DD2DC0(__int64 a1)
{
  return (float)((float)(*(float *)(a1 + 16) + -0.7f) / 0.28f) / (float)(*(float *)(a1 + 24) / 0.4f);
}

// N2EE8HeatWave8PCMCodecE, virtual slot 2
_Bool __fastcall sub_DD5AB0(unsigned int *a1)
{
  if ( (sub_DD1160()) == 0 )
    return 0;
  a1[9] = a1[13] / (2 * (unsigned __int64)a1[7]);
  return 1;
}

__int64 __fastcall sub_DD5CD0(__int64 a1)
{
  __int64 result; // x0
  unsigned int *v3; // x8
  unsigned int v4; // w9
  __int64 v5; // x8

  result = malloc(0x50u);
  *(_DWORD *)(result + 8) = 0;
  *(_QWORD *)result = &off_18DC448;
  *(_QWORD *)(result + 16) = a1;
  if ( a1 != 0 )
  {
    v3 = (unsigned int *)(a1 + 8);
    v4 = __atomic_fetch_add(v3, 1, 0);
  }
  v5 = qword_195B668;
  *(_QWORD *)(result + 36) = 0;
  *(_QWORD *)(result + 28) = 0;
  *(_DWORD *)(result + 44) = 0;
  LODWORD(v5) = *(_DWORD *)(v5 + 320);
  *(_QWORD *)(result + 48) = 0;
  *(_QWORD *)result = &off_18DCA68;
  *(_DWORD *)(result + 24) = v5;
  return result;
}

__int64 __fastcall sub_DD5DC0(__int64 a1)
{
  __int64 result; // x0
  unsigned int *v3; // x8
  unsigned int v4; // w9
  __int64 v5; // x8

  result = malloc(0x38u);
  *(_DWORD *)(result + 8) = 0;
  *(_QWORD *)result = &off_18DC448;
  *(_QWORD *)(result + 16) = a1;
  if ( a1 != 0 )
  {
    v3 = (unsigned int *)(a1 + 8);
    v4 = __atomic_fetch_add(v3, 1, 0);
  }
  v5 = qword_195B668;
  *(_QWORD *)(result + 36) = 0;
  *(_QWORD *)(result + 28) = 0;
  *(_DWORD *)(result + 44) = 0;
  LODWORD(v5) = *(_DWORD *)(v5 + 320);
  *(_QWORD *)(result + 48) = 0;
  *(_QWORD *)result = &off_18DC550;
  *(_DWORD *)(result + 24) = v5;
  return result;
}

// N2EE8HeatWave6SourceE, virtual slot 0
__int64 __fastcall sub_DD76A0(__int64 a1)
{
  __int64 v1; // x8
  __int64 v3; // x9
  unsigned int *v4; // x0
  unsigned int *v5; // x8
  unsigned int v6; // w9
  unsigned int v7; // w9
  __int64 result; // x0
  unsigned int *v9; // x8
  unsigned int v10; // w9
  unsigned int v11; // w9

  *(_QWORD *)a1 = off_18DCCE0;
  --dword_194AFA4;
  v1 = *(_QWORD *)(a1 + 40);
  while ( v1 != 0 )
  {
    v3 = *(_QWORD *)(a1 + 24);
    *(_QWORD *)(a1 + 40) = --v1;
    v4 = *(unsigned int **)(v3 + 8 * v1);
    if ( v4 != nullptr )
    {
      v5 = v4 + 2;
      v7 = __atomic_sub_fetch(v5, 1, 0);
      if ( v7 == 0 )
        (*(void (__fastcall **)(unsigned int *))(*(_QWORD *)v4 + 8LL))(v4);
      v1 = *(_QWORD *)(a1 + 40);
    }
  }
  free(*(void **)(a1 + 24));
  result = *(_QWORD *)(a1 + 16);
  if ( result != 0 )
  {
    v9 = (unsigned int *)(result + 8);
    v11 = __atomic_sub_fetch(v9, 1, 0);
    if ( v11 == 0 )
      return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 8LL))(result);
  }
  return result;
}

// N2EE8HeatWave6SourceE, virtual slot 1
void __fastcall sub_DD7750(void *a1)
{
  __int64 v1; // x8
  __int64 v3; // x9
  unsigned int *v4; // x0
  unsigned int *v5; // x8
  unsigned int v6; // w9
  unsigned int v7; // w9
  unsigned int *v8; // x0
  unsigned int *v9; // x8
  unsigned int v10; // w9
  unsigned int v11; // w9

  *(_QWORD *)a1 = off_18DCCE0;
  --dword_194AFA4;
  v1 = *((_QWORD *)a1 + 5);
  while ( v1 != 0 )
  {
    v3 = *((_QWORD *)a1 + 3);
    *((_QWORD *)a1 + 5) = --v1;
    v4 = *(unsigned int **)(v3 + 8 * v1);
    if ( v4 != nullptr )
    {
      v5 = v4 + 2;
      v7 = __atomic_sub_fetch(v5, 1, 0);
      if ( v7 == 0 )
        (*(void (__fastcall **)(unsigned int *))(*(_QWORD *)v4 + 8LL))(v4);
      v1 = *((_QWORD *)a1 + 5);
    }
  }
  free(*((void **)a1 + 3));
  v8 = *((unsigned int **)a1 + 2);
  if ( v8 != nullptr )
  {
    v9 = v8 + 2;
    v11 = __atomic_sub_fetch(v9, 1, 0);
    if ( v11 == 0 )
      (*(void (__fastcall **)(unsigned int *))(*(_QWORD *)v8 + 8LL))(v8);
  }
  { free(a1); return; }
}

// N2EE11InputDeviceE, virtual slot 8
void sub_DD9FF0(__int64 result)
{
  __int64 v1; // x19
  unsigned __int64 v2; // x8
  unsigned int v3; // w20
  __int64 v4; // x0

  if ( *(_QWORD *)(result + 176) != 0 )
  {
    v1 = result;
    v2 = 0;
    v3 = 1;
    do
    {
      v4 = *(_QWORD *)(*(_QWORD *)(v1 + 160) + 8 * v2);
      result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 64LL))(v4);
      v2 = v3++;
    }
    while ( *(_QWORD *)(v1 + 176) > v2 );
  }
  return;
}

// N2EE19NvnShaderReflectionE, virtual slot 5
unsigned int *__fastcall sub_DEB740(__int64 a1, unsigned int a2)
{
  unsigned int *v2; // x0
  unsigned int *v3; // x8
  unsigned int v4; // w9
  unsigned int *v5; // x19
  unsigned int v6; // w9
  unsigned int v7; // w9

  if ( *(_QWORD *)(a1 + 304) <= (unsigned __int64)a2 )
    return nullptr;
  v2 = *(unsigned int **)(*(_QWORD *)(a1 + 288) + 8LL * a2);
  if ( v2 == nullptr )
    return nullptr;
  v3 = v2 + 2;
  v4 = __atomic_fetch_add(v3, 1, 0);
  v5 = v2 + 4;
  v7 = __atomic_sub_fetch(v3, 1, 0);
  if ( v7 == 0 )
    (*(void (__fastcall **)(unsigned int *))(*(_QWORD *)v2 + 8LL))(v2);
  return v5;
}

// N2EE19NvnStagingTexture1DE, virtual slot 2
int __fastcall sub_DEC870(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  unsigned int *v3; // x8
  unsigned int v4; // w9

  if ( a3 == nullptr )
    return 2147483651LL;
  if ( *a2 != -117744601 || a2[1] != 1333118643 || a2[2] != -1706833756 || a2[3] != 1280765938 )
    return sub_DEBD70();
  v3 = (unsigned int *)(a1 + 8);
  v4 = __atomic_fetch_add(v3, 1, 0);
  *a3 = a1;
  return 0;
}

// N2EE19NvnStagingTexture2DE, virtual slot 2
int __fastcall sub_DECA30(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  unsigned int *v3; // x8
  unsigned int v4; // w9

  if ( *a2 != 1863690994 || a2[1] != 1317655048 || a2[2] != -1790397286 || a2[3] != -1672490187 )
    return sub_DEC120();
  v3 = (unsigned int *)(a1 + 8);
  v4 = __atomic_fetch_add(v3, 1, 0);
  *a3 = a1;
  return 0;
}

// N2EE19NvnStagingTexture3DE, virtual slot 2
int __fastcall sub_DECBE0(__int64 a1, int *a2, __int64 *a3)
{
  unsigned int *v3; // x8
  unsigned int v4; // w9

  if ( *a2 != 58623598 || a2[1] != 1129837933 || a2[2] != -1415729240 || a2[3] != 237334206 )
    return sub_DEC4D0(a1, a2, a3);
  v3 = (unsigned int *)(a1 + 8);
  v4 = __atomic_fetch_add(v3, 1, 0);
  *a3 = a1;
  return 0;
}

// N2EE33NvnShaderReflectionConstantBufferE, virtual slot 3
unsigned int *__fastcall sub_DF13F0(__int64 a1, unsigned int a2)
{
  unsigned int *v2; // x0
  unsigned int *v3; // x8
  unsigned int v4; // w9
  unsigned int *v5; // x19
  unsigned int v6; // w9
  unsigned int v7; // w9

  if ( *(_QWORD *)(a1 + 72) <= (unsigned __int64)a2 )
    return nullptr;
  v2 = *(unsigned int **)(*(_QWORD *)(a1 + 56) + 8LL * a2);
  if ( v2 == nullptr )
    return nullptr;
  v3 = v2 + 2;
  v4 = __atomic_fetch_add(v3, 1, 0);
  v5 = v2 + 4;
  v7 = __atomic_sub_fetch(v3, 1, 0);
  if ( v7 == 0 )
    (*(void (__fastcall **)(unsigned int *))(*(_QWORD *)v2 + 8LL))(v2);
  return v5;
}

unsigned int *__fastcall sub_DF14F0(__int64 a1, unsigned int a2)
{
  unsigned int *v2; // x0
  unsigned int *v3; // x8
  unsigned int v4; // w9
  unsigned int *v5; // x19
  unsigned int v6; // w9
  unsigned int v7; // w9

  if ( *(_QWORD *)(a1 + 56) <= (unsigned __int64)a2 )
    return nullptr;
  v2 = *(unsigned int **)(*(_QWORD *)(a1 + 40) + 8LL * a2);
  if ( v2 == nullptr )
    return nullptr;
  v3 = v2 + 2;
  v4 = __atomic_fetch_add(v3, 1, 0);
  v5 = v2 + 4;
  v7 = __atomic_sub_fetch(v3, 1, 0);
  if ( v7 == 0 )
    (*(void (__fastcall **)(unsigned int *))(*(_QWORD *)v2 + 8LL))(v2);
  return v5;
}

void __fastcall sub_DF1A70(char *a1)
{
  __int64 v1; // x19
  const void *CurrentThread; // x0

  v1 = qword_195B638;
  CurrentThread = (const void *)nn__os__GetCurrentThread(a1);
  memmove((void *)(v1 + 1824), CurrentThread, 0x1C0u);
  *(_BYTE *)(v1 + 1800) = 1;
  return;
}

// N2EE10RenderLoopE, virtual slot 2
__int64 __fastcall sub_DF2220(__int64 a1, char a2)
{
  sub_DFD150(a1);
  if ( (a2 & 1) != 0 )
    sub_DFCCB0(a1);
  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 1272) + 16LL))(*(_QWORD *)(a1 + 1272), 1);
  return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 728) + 40LL))(*(_QWORD *)(a1 + 728));
}

// N2EE10RenderLoopE, virtual slot 7
__int64 __fastcall sub_DF22D0(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 654) == 0 )
    sub_DFCE80(a1);
  if ( *(_DWORD *)(a1 + 676) >= 0x11u )
  {
    nn__os__AcquireSemaphore(*(_QWORD *)(*(_QWORD *)(a1 + 712) + 8LL));
    nn__os__ReleaseSemaphore(*(_QWORD *)(*(_QWORD *)(a1 + 712) + 8LL));
  }
  return ((__int64(*)(__typeof__(*(_QWORD *)(a1 + 1272)), __typeof__(1000), float))sub_DF1F10)(*(_QWORD *)(a1 + 1272), 1000, (float)(0.01f));
}

void __fastcall sub_DF4A60(_DWORD *result, __int64 a2, unsigned int a3)
{
  if ( (*(_BYTE *)(qword_195B638 + 728) & 0x20) != 0 )
  {
    result[11] = 0;
  }
  else if ( *(_BYTE *)(qword_195B4B0 + 652) == 0 )
  {
    { (*(__int64 (__fastcall **)(_DWORD *, _QWORD))(*(_QWORD *)result + 24LL))(result, a3); return; }
  }
  return;
}

// N2EE15ResourceManagerE, virtual slot 0
__int64 __fastcall sub_DF6160(_QWORD *a1)
{
  unsigned int *v2; // x0
  unsigned int *v3; // x8
  unsigned int v4; // w9
  unsigned int v5; // w9
  unsigned int *v6; // x0
  unsigned int *v7; // x8
  unsigned int v8; // w9
  unsigned int v9; // w9
  unsigned int *v10; // x0
  unsigned int *v11; // x8
  unsigned int v12; // w9
  unsigned int v13; // w9
  unsigned int *v14; // x0
  unsigned int *v15; // x8
  unsigned int v16; // w9
  unsigned int v17; // w9

  *a1 = off_18DF750;
  qword_195B4B0 = 0;
  nn__os__FinalizeMutex(a1 + 95);
  v2 = (unsigned int *)a1[94];
  if ( v2 != nullptr )
  {
    v3 = v2 + 2;
    v5 = __atomic_sub_fetch(v3, 1, 0);
    if ( v5 == 0 )
      (*(void (__fastcall **)(unsigned int *))(*(_QWORD *)v2 + 8LL))(v2);
  }
  v6 = (unsigned int *)a1[93];
  if ( v6 != nullptr )
  {
    v7 = v6 + 2;
    v9 = __atomic_sub_fetch(v7, 1, 0);
    if ( v9 == 0 )
      (*(void (__fastcall **)(unsigned int *))(*(_QWORD *)v6 + 8LL))(v6);
  }
  v10 = (unsigned int *)a1[92];
  if ( v10 != nullptr )
  {
    v11 = v10 + 2;
    v13 = __atomic_sub_fetch(v11, 1, 0);
    if ( v13 == 0 )
      (*(void (__fastcall **)(unsigned int *))(*(_QWORD *)v10 + 8LL))(v10);
  }
  v14 = (unsigned int *)a1[91];
  if ( v14 != nullptr )
  {
    v15 = v14 + 2;
    v17 = __atomic_sub_fetch(v15, 1, 0);
    if ( v17 == 0 )
      (*(void (__fastcall **)(unsigned int *))(*(_QWORD *)v14 + 8LL))(v14);
  }
  return sub_DFD2C0(a1);
}

// N2EE15ResourceManagerE, virtual slot 1
void __fastcall sub_DF6240(_QWORD *a1)
{
  unsigned int *v2; // x0
  unsigned int *v3; // x8
  unsigned int v4; // w9
  unsigned int v5; // w9
  unsigned int *v6; // x0
  unsigned int *v7; // x8
  unsigned int v8; // w9
  unsigned int v9; // w9
  unsigned int *v10; // x0
  unsigned int *v11; // x8
  unsigned int v12; // w9
  unsigned int v13; // w9
  unsigned int *v14; // x0
  unsigned int *v15; // x8
  unsigned int v16; // w9
  unsigned int v17; // w9

  *a1 = off_18DF750;
  qword_195B4B0 = 0;
  nn__os__FinalizeMutex(a1 + 95);
  v2 = (unsigned int *)a1[94];
  if ( v2 != nullptr )
  {
    v3 = v2 + 2;
    v5 = __atomic_sub_fetch(v3, 1, 0);
    if ( v5 == 0 )
      (*(void (__fastcall **)(unsigned int *))(*(_QWORD *)v2 + 8LL))(v2);
  }
  v6 = (unsigned int *)a1[93];
  if ( v6 != nullptr )
  {
    v7 = v6 + 2;
    v9 = __atomic_sub_fetch(v7, 1, 0);
    if ( v9 == 0 )
      (*(void (__fastcall **)(unsigned int *))(*(_QWORD *)v6 + 8LL))(v6);
  }
  v10 = (unsigned int *)a1[92];
  if ( v10 != nullptr )
  {
    v11 = v10 + 2;
    v13 = __atomic_sub_fetch(v11, 1, 0);
    if ( v13 == 0 )
      (*(void (__fastcall **)(unsigned int *))(*(_QWORD *)v10 + 8LL))(v10);
  }
  v14 = (unsigned int *)a1[91];
  if ( v14 != nullptr )
  {
    v15 = v14 + 2;
    v17 = __atomic_sub_fetch(v15, 1, 0);
    if ( v17 == 0 )
      (*(void (__fastcall **)(unsigned int *))(*(_QWORD *)v14 + 8LL))(v14);
  }
  sub_DFD2C0(a1);
  { free(a1); return; }
}

// N2EE15ResourceManagerE, virtual slot 2
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

// N2EE9LocalUserE, virtual slot 2
int __fastcall sub_DF65A0(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  __int64 result; // x0
  unsigned int *v5; // x9
  unsigned int v6; // w10

  if ( a3 == nullptr )
    return 2147483651LL;
  result = 2147483652LL;
  if ( *a2 != -357710630 )
  {
    if ( *a2 != -48391185 || a2[1] != 1257418993 || a2[2] != -77929856 || a2[3] != -243739340 )
      return result;
LABEL_12:
    v5 = (unsigned int *)(a1 + 8);
    v6 = __atomic_fetch_add(v5, 1, 0);
    *a3 = a1;
    return 0;
  }
  if ( a2[1] == 1153707371 && a2[2] == -1740191042 && a2[3] == 1418273985 )
    goto LABEL_12;
  return result;
}

// N2EE16LocalUserManagerE, virtual slot 2
int __fastcall sub_DF6970(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  __int64 result; // x0
  unsigned int *v5; // x9
  unsigned int v6; // w10

  if ( a3 == nullptr )
    return 2147483651LL;
  result = 2147483652LL;
  if ( *a2 != 1307040867 )
  {
    if ( *a2 != -48391185 || a2[1] != 1257418993 || a2[2] != -77929856 || a2[3] != -243739340 )
      return result;
LABEL_12:
    v5 = (unsigned int *)(a1 + 8);
    v6 = __atomic_fetch_add(v5, 1, 0);
    *a3 = a1;
    return 0;
  }
  if ( a2[1] == 1179189418 && a2[2] == 27842177 && a2[3] == -592243240 )
    goto LABEL_12;
  return result;
}

// N2EE11ConsoleLoopE, virtual slot 7
char *__fastcall sub_DFB0C0(char *result)
{
  char *v1; // x19
  char *v2; // x0

  v1 = result;
  if ( *((_BYTE *)result + 654) == 0 )
    result = (char *)sub_DFCE80((__int64)result);
  if ( *((_BYTE *)v1 + 736) != 0 )
  {
    result = (char *)nn__os__GetSystemTick(result);
    if ( (double)((__int64)result - qword_195B648 - *((__int64 *)v1 + 93)) / *(double *)&qword_195B678 > 30.0 )
    {
      v2 = (char *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v1 + 91) + 24LL))(*((__int64 *)v1 + 91));
      result = (char *)nn__os__GetSystemTick(v2);
      *((__int64 *)v1 + 93) = (char *)result - qword_195B648;
    }
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

// N2EE13MessageThreadE, virtual slot 1
void __fastcall sub_DFDAF0(char *a1)
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
  unsigned int *v11; // x0
  unsigned int *v12; // x8
  unsigned int v13; // w9
  unsigned int v14; // w9

  *(_QWORD *)a1 = off_18E00C0;
  v2 = *((unsigned int **)a1 + 62);
  if ( v2 != nullptr )
  {
    v3 = v2 + 2;
    v5 = __atomic_sub_fetch(v3, 1, 0);
    if ( v5 == 0 )
      (*(void (__fastcall **)(unsigned int *))(*(_QWORD *)v2 + 8LL))(v2);
  }
  if ( *((_QWORD *)a1 + 2) != 0 )
  {
    nn__os__DestroyThread(a1 + 48);
    free(*((void **)a1 + 4));
    *((_QWORD *)a1 + 4) = 0;
    v6 = *((unsigned int **)a1 + 2);
    *((_QWORD *)a1 + 5) = 0;
    *((_QWORD *)a1 + 2) = 0;
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
    *((_QWORD *)a1 + 2) = 0;
  }
  v10 = *((void **)a1 + 4);
  a1[24] = 0;
  free(v10);
  v11 = *((unsigned int **)a1 + 2);
  if ( v11 != nullptr )
  {
    v12 = v11 + 2;
    v14 = __atomic_sub_fetch(v12, 1, 0);
    if ( v14 == 0 )
      (*(void (__fastcall **)(unsigned int *))(*(_QWORD *)v11 + 8LL))(v11);
  }
  { free(a1); return; }
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

// N2EE9AudioLoopE, virtual slot 1
void __fastcall sub_DFDC50(_QWORD *a1)
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
  sub_DFD2C0(a1);
  { free(a1); return; }
}

__int64 __fastcall sub_DFE4C0(__int64 result, __int64 a2)
{
  if ( a2 != 0 )
    result += sub_DFE4C0(*(_QWORD *)(a2 + 24), *(_QWORD *)(a2 + 48));
  return result;
}

// N2EE10MemoryFileE, virtual slot 5
size_t __fastcall sub_E05FE0(_QWORD *a1, void *dest, size_t a3)
{
  char *v3; // x8
  __int64 v5; // x9
  size_t v6; // x10
  size_t v7; // x20

  if ( a3 == 0 )
    return 0;
  v3 = a1[9];
  if ( v3 == 0 )
    return -1;
  v5 = a1[12];
  v6 = a1[11] - v5;
  if ( v6 == 0 )
    return 0;
  if ( v6 <= a3 )
    v7 = a1[11] - v5;
  else
    v7 = a3;
  memcpy(dest, (const void *)(v3 + v5), v7);
  a1[12] += v7;
  return v7;
}

// N2EE10VfsFileXorE, virtual slot 0
void __fastcall sub_E067B0(__int64 a1)
{
  unsigned int *result; // x0
  unsigned int *v3; // x8
  unsigned int v4; // w9
  unsigned int v5; // w9
  unsigned int *v6; // x8
  unsigned int v7; // w9
  unsigned int v8; // w9
  unsigned int v9; // w8
  unsigned int v10; // w8

  *(_QWORD *)a1 = &off_18E05F8;
  result = *(unsigned int **)(a1 + 64);
  if ( result != nullptr )
  {
    v3 = result + 2;
    *(_QWORD *)(a1 + 64) = 0;
    v5 = __atomic_sub_fetch(v3, 1, 0);
    if ( v5 == 0 )
      (*(void (__fastcall **)(unsigned int *))(*(_QWORD *)result + 8LL))(result);
    result = *(unsigned int **)(a1 + 64);
    *(_DWORD *)(a1 + 44) = -1;
    *(_QWORD *)(a1 + 48) = 0;
    *(_QWORD *)(a1 + 56) = 0;
    if ( result != nullptr )
    {
      v6 = result + 2;
      v8 = __atomic_sub_fetch(v6, 1, 0);
      if ( v8 == 0 )
        result = (unsigned int *)(*(__int64 (__fastcall **)(unsigned int *))(*(_QWORD *)result + 8LL))(result);
    }
  }
  *(_QWORD *)a1 = &off_18E01F0;
  if ( *(_DWORD *)(a1 + 32) == 2 )
  {
    result = *(unsigned int **)(a1 + 16);
    v10 = __atomic_sub_fetch(result, 1, 0);
    if ( v10 == 0 )
      { free(result); return; }
  }
  return;
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

// N2EE17VfsFileCompressedE, virtual slot 0
void __fastcall sub_E06E30(__int64 a1)
{
  unsigned int *result; // x0
  unsigned int *v3; // x8
  unsigned int v4; // w9
  unsigned int v5; // w9
  unsigned int *v6; // x8
  unsigned int v7; // w9
  unsigned int v8; // w9
  unsigned int v9; // w8
  unsigned int v10; // w8

  *(_QWORD *)a1 = &off_18E0568;
  free(*(void **)(a1 + 80));
  result = *(unsigned int **)(a1 + 64);
  *(_QWORD *)a1 = &off_18E05F8;
  if ( result != nullptr )
  {
    v3 = result + 2;
    *(_QWORD *)(a1 + 64) = 0;
    v5 = __atomic_sub_fetch(v3, 1, 0);
    if ( v5 == 0 )
      (*(void (__fastcall **)(unsigned int *))(*(_QWORD *)result + 8LL))(result);
    result = *(unsigned int **)(a1 + 64);
    *(_DWORD *)(a1 + 44) = -1;
    *(_QWORD *)(a1 + 48) = 0;
    *(_QWORD *)(a1 + 56) = 0;
    if ( result != nullptr )
    {
      v6 = result + 2;
      v8 = __atomic_sub_fetch(v6, 1, 0);
      if ( v8 == 0 )
        result = (unsigned int *)(*(__int64 (__fastcall **)(unsigned int *))(*(_QWORD *)result + 8LL))(result);
    }
  }
  *(_QWORD *)a1 = &off_18E01F0;
  if ( *(_DWORD *)(a1 + 32) == 2 )
  {
    result = *(unsigned int **)(a1 + 16);
    v10 = __atomic_sub_fetch(result, 1, 0);
    if ( v10 == 0 )
      { free(result); return; }
  }
  return;
}

// N2EE20VfsArchiveEnumeratorE, virtual slot 0
void __fastcall sub_E09BB0(__int64 a1)
{
  unsigned int *result; // x0
  unsigned int *v3; // x8
  unsigned int v4; // w9
  unsigned int v5; // w9
  unsigned int v6; // w8
  unsigned int v7; // w8

  *(_QWORD *)a1 = &off_18E07C0;
  result = *(unsigned int **)(a1 + 832);
  if ( result != nullptr )
  {
    v3 = result + 2;
    v5 = __atomic_sub_fetch(v3, 1, 0);
    if ( v5 == 0 )
      result = (unsigned int *)(*(__int64 (__fastcall **)(unsigned int *))(*(_QWORD *)result + 8LL))(result);
  }
  *(_QWORD *)a1 = &off_18E0838;
  if ( *(_DWORD *)(a1 + 32) == 2 )
  {
    result = *(unsigned int **)(a1 + 16);
    v7 = __atomic_sub_fetch(result, 1, 0);
    if ( v7 == 0 )
      { free(result); return; }
  }
  return;
}

// N2EE10NativeFileE, virtual slot 0
void __fastcall sub_E0CAF0(__int64 a1)
{
  unsigned int *result; // x0
  int v3; // w8
  unsigned int v4; // w8
  unsigned int v5; // w8

  *(_QWORD *)a1 = &off_18E08B8;
  result = *(unsigned int **)(a1 + 48);
  if ( result != nullptr )
  {
    if ( (*(_BYTE *)(a1 + 56) & 2) != 0 )
    {
      nn__fs__FlushFile();
      result = *(unsigned int **)(a1 + 48);
    }
    result = (unsigned int *)nn__fs__CloseFile(result);
    *(_QWORD *)(a1 + 48) = 0;
  }
  *(_QWORD *)a1 = &off_18E01F0;
  v3 = *(_DWORD *)(a1 + 32);
  *(_QWORD *)(a1 + 64) = 0;
  if ( v3 == 2 )
  {
    result = *(unsigned int **)(a1 + 16);
    v5 = __atomic_sub_fetch(result, 1, 0);
    if ( v5 == 0 )
      { free(result); return; }
  }
  return;
}

// N2EE10NativeFileE, virtual slot 1
void sub_E0CB70(_QWORD *a1)
{
  __int64 v2; // x0
  int v3; // w8
  unsigned int *v4; // x0
  unsigned int v5; // w8
  unsigned int v6; // w8

  *a1 = &off_18E08B8;
  v2 = a1[6];
  if ( v2 != 0 )
  {
    if ( (a1[7] & 2) != 0 )
    {
      nn__fs__FlushFile();
      v2 = a1[6];
    }
    nn__fs__CloseFile(v2);
    a1[6] = 0;
  }
  *a1 = &off_18E01F0;
  v3 = *((_DWORD *)a1 + 8);
  a1[8] = 0;
  if ( v3 == 2 )
  {
    v4 = (unsigned int *)a1[2];
    v6 = __atomic_sub_fetch(v4, 1, 0);
    if ( v6 == 0 )
      free(v4);
  }
  { free(a1); return; }
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

// N2EE10NativeFileE, virtual slot 6
__int64 __fastcall sub_E0CCF0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // x19
  __int64 v5; // x0
  __int64 v7; // x1
  int v9 __attribute__((aligned(8)));

  v3 = a3;
  if ( a3 != 0 )
  {
    v5 = *(_QWORD *)(a1 + 48);
    if ( v5 != 0 && (v7 = *(_QWORD *)(a1 + 64), v9 = 0, (unsigned int)nn__fs__WriteFile(v5, v7, a2, v3, &v9) == 0) )
      *(_QWORD *)(a1 + 64) += v3;
    else
      return 0;
  }
  return v3;
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

// 17achwHeapAllocator, virtual slot 2
_QWORD *__fastcall sub_EC2780(__int64 a1, unsigned __int64 a2)
{
  return sub_F9FB50(*(_QWORD *)(a1 + 56), nullptr, a2, 0LL, 0LL);
}

__int64 __fastcall sub_EF9D40(char *a1, unsigned __int64 a2)
{
  char *result; // x0
  _QWORD *v5; // x9
  char *v6; // x8

  result = *(_QWORD *)(a1 + 8);
  if ( result != 0 )
    result = sub_F83A10(result);
  if ( result != a2 )
  {
    v6 = *(_QWORD *)(a1 + 8);
    v5 = *(_QWORD **)(*(_QWORD *)(a1 + 24) + 5640LL);
    if ( v6 != v5[261] )
    {
      if ( v6 == 0 )
        return result;
      return sub_F34FA0(v6 + 56, a2);
    }
    result = (__int64)sub_F9FB50(v5[245], nullptr, v5[246], 0LL, 0LL);
    *(_QWORD *)(a1 + 8) = result;
    if ( result != 0 )
    {
      *(_QWORD *)result = 0;
      *(_OWORD *)(result + 8) = 0u;
      *(_OWORD *)(result + 24) = 0u;
      *(_OWORD *)(result + 40) = 0u;
      *(_QWORD *)(result + 56) = 2;
      *(_QWORD *)(result + 64) = 0;
      *(_QWORD *)(result + 72) = 0;
      v6 = *(_QWORD *)(a1 + 8);
      if ( v6 != 0 )
        return sub_F34FA0(v6 + 56, a2);
    }
  }
  return result;
}

__int64 __fastcall sub_F01AA0(__int64 result, int *a2, int a3, unsigned int *a4)
{
  __int64 v4; // x8
  int v5; // w11
  int v6; // w9
  int v7; // w10
  int v8; // w12
  __int64 v9; // x13
  __int64 v10; // x14
  __int64 v11; // x15
  int v12; // w16
  unsigned __int8 *v13; // x15
  int v14; // w9
  __int64 v15; // x10
  int v16; // w11
  int v17; // w13
  int v18; // w12
  unsigned __int8 *v19; // x9
  unsigned int v20; // t1
  int v21; // w12
  unsigned __int8 *v22; // x12

  v4 = *(_QWORD *)(result + 32);
  v5 = *(_DWORD *)(result + 12);
  if ( !(v5 != 0) )
  {
    v15 = *(_QWORD *)(result + 16) + ((__int64)a2[1] >> 16) * *(int *)(result + 24);
    v14 = *a2;
    v16 = *(_DWORD *)(result + 8);
    v17 = *a2 + v16 * a3;
    v18 = *a2 >> 16;
    if ( v18 + a3 == v17 >> 16 )
    {
      *a2 = v17;
      if ( a3 != 0 )
      {
        v19 = (unsigned __int8 *)(v15 + v18);
        do
        {
          v20 = *v19++;
          --a3;
          *a4++ = (unsigned __int16)(*(unsigned __int8 *)(v4 + 4LL * v20)
                                   | (*(unsigned __int8 *)(v4 + 4LL * v20 + 1) << 8))
                | (*(unsigned __int8 *)(v4 + 4LL * v20 + 2) << 16)
                | 0xFF000000;
        }
        while ( a3 != 0 );
      }
    }
    else
    {
      for ( ; a3 != 0; ++a4 )
      {
        v21 = v14 >> 16;
        v14 += v16;
        --a3;
        v22 = (unsigned __int8 *)(v4 + 4LL * *(unsigned __int8 *)(v15 + v21));
        *a4 = (unsigned __int16)(*v22 | (v22[1] << 8)) | (v22[2] << 16) | 0xFF000000;
      }
      *a2 = v14;
    }
  }
  else
  {
    v6 = *a2;
    v7 = a2[1];
    if ( a3 != 0 )
    {
      v8 = *(_DWORD *)(result + 8);
      v9 = *(_QWORD *)(result + 16);
      v10 = *(int *)(result + 24);
      do
      {
        v11 = (__int64)v7 >> 16;
        v7 += v5;
        v12 = v6 >> 16;
        v6 += v8;
        --a3;
        v13 = (unsigned __int8 *)(v4 + 4LL * *(unsigned __int8 *)(v9 + v11 * v10 + v12));
        *a4++ = (unsigned __int16)(*v13 | (v13[1] << 8)) | (v13[2] << 16) | 0xFF000000;
      }
      while ( a3 != 0 );
    }
    *a2 = v6;
    a2[1] = v7;
  }
  return result;
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

__int64 __fastcall sub_F2AFD0(__int64 a1, char *a2, int *a3)
{
  __int64 v3; // x8
  __int64 v4; // x8
  __int64 result; // x0
  __int64 v9; // x21
  __int64 v10; // x8
  __int64 v11; // x0
  __int64 v12; // x22
  __int64 v13; // x8
  __int64 v14; // x0
  unsigned int v15; // w24
  __int64 v16; // x23
  __int64 v17; // x8
  __int64 v18; // x10
  unsigned __int8 *v19; // x8
  int v20; // w9
  int v21; // w8
  unsigned __int8 *v22; // x9
  int v23; // w8

  v3 = *(_QWORD *)(a1 + 16);
  if ( v3 == 0 )
    return 0;
  v4 = *(_QWORD *)(v3 + 144);
  if ( v4 == 0 )
    return 0;
  result = *(_QWORD *)(a2 + 200);
  if ( result != 0 )
  {
    *a3 = *(_DWORD *)(a2 + 208);
    return result;
  }
  v9 = *(_QWORD *)(v4 + 112);
  if ( v9 == 0 )
    return 0;
  v10 = 8;
  if ( *(__int16 *)(a1 + 56) > 5 )
    v10 = 40;
  v11 = *(_QWORD *)(v9 + 72);
  v12 = *(_QWORD *)(a2 + v10);
  if ( v11 != 0 && (v13 = sub_EEB530(v11, *(_QWORD *)(a2 + v10))) != 0
    || (v14 = *(_QWORD *)(v9 + 80)) != 0 && (v13 = sub_EEB530(v14, v12)) != 0 )
  {
    while ( *(_BYTE *)(v13 + 61) == 96 )
    {
      v13 = *(_QWORD *)(v13 + 16);
      result = 0;
      if ( v13 == 0 )
        return result;
    }
    result = v13;
  }
  else
  {
    v15 = *(_DWORD *)(a2 + 168);
    result = sub_EEB660(v9, v12, v15);
    if ( result == 0 )
    {
      v16 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 3112LL);
      if ( v16 == 0 )
        return 0;
      while ( 1 )
      {
        if ( v16 != *(_QWORD *)(v9 + 72) )
        {
          result = sub_EEB800(v16, v12, v15);
          if ( result != 0 )
            break;
        }
        v16 = *(_QWORD *)(v16 + 1024);
        result = 0;
        if ( v16 == 0 )
          return result;
      }
    }
  }
  if ( *(_BYTE *)(result + 61) != 3 || (*(_BYTE *)(result + 90) & 0x80) == 0 )
    return 0;
  v17 = *(unsigned __int16 *)(result + 88);
  v18 = *(_QWORD *)(result + 16);
  if ( (*(_BYTE *)(result + 90) & 8) != 0 )
  {
    v22 = (unsigned __int8 *)(v18 + 4 * v17);
    v21 = (unsigned __int16)(*v22 | (v22[1] << 8)) | (v22[2] << 16);
    v20 = v22[3] << 24;
  }
  else
  {
    v19 = (unsigned __int8 *)(v18 + 2 * v17);
    v20 = *v19;
    v21 = v19[1] << 8;
  }
  v23 = v21 | v20;
  *a3 = v23;
  *(_QWORD *)(a2 + 200) = result;
  *(_DWORD *)(a2 + 208) = v23;
  return result;
}

// 13EditTextTable, virtual slot 6
_QWORD *__fastcall sub_F358F0(__int64 a1)
{
  return sub_F9FB50(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 1928LL), nullptr, *(_QWORD *)(*(_QWORD *)(a1 + 24) + 1936LL), 0LL, 0LL);
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

_QWORD *__fastcall sub_F81220(__int64 a1, int a2, int a3)
{
  return sub_F9FB50(*(_QWORD *)(a1 + 48), nullptr, (unsigned int)(a3 * a2), 0LL, 0LL);
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

// 12achwShapeOES, virtual slot 3
void sub_F93C90(__int64 result)
{
  __int64 *v1; // x20
  __int64 v2; // x19
  __int64 v3; // x0
  __int64 v4; // x0

  v1 = *(__int64 **)(result + 80);
  if ( v1 != nullptr )
  {
    v2 = result;
    v3 = v1[2];
    if ( v3 != 0 )
    {
      sub_FA0140(v3);
      v1[2] = 0;
    }
    v4 = v1[1];
    if ( v4 != 0 )
    {
      sub_FA0140(v4);
      v1[1] = 0;
    }
    if ( *v1 != 0 )
    {
      sub_FA0140(*v1);
      *v1 = 0;
    }
    sub_FA0140((__int64)v1);
    *(_QWORD *)(v2 + 80) = 0;
  }
  return;
}

void __fastcall sub_F96260(__int64 a1, __int64 a2)
{
  __int64 v3; // x19
  __int64 v4; // x0

  if ( a2 != 0 )
  {
    v3 = a2 - 64;
    v4 = *(_QWORD *)((qword_1926BD8) + 8LL * (unsigned __int8)sub_A82B30(qword_1926BD8, a2 - 64) + 880);
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 48LL))(v4, v3);
  }
}

void sub_F98FD0(__int64 result)
{
  _QWORD *v1; // x19
  _QWORD *v3; // x22
  _QWORD *v4; // x19
  __int64 v5; // x0

  if ( result != 0 )
  {
    v1 = (_QWORD *)result;
    do
    {
      sub_F98FD0(*v1);
      v3 = (_QWORD *)v1[1];
      v4 = v1 - 8;
      v5 = *(_QWORD *)((qword_1926BD8) + 8LL * (unsigned __int8)sub_A82B30(qword_1926BD8, v4) + 880);
      result = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v5 + 48LL))(v5, v4);
      v1 = v3;
    }
    while ( v3 != nullptr );
  }
  return;
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

void sub_FA1410(__int64 result)
{
  _QWORD *v1; // x19
  _QWORD *v3; // x22
  _QWORD *v4; // x19
  __int64 v5; // x0

  if ( result != 0 )
  {
    v1 = (_QWORD *)result;
    do
    {
      sub_FA1410(*v1);
      v3 = (_QWORD *)v1[1];
      v4 = v1 - 8;
      v5 = *(_QWORD *)((qword_1926BD8) + 8LL * (unsigned __int8)sub_A82B30(qword_1926BD8, v4) + 880);
      result = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v5 + 48LL))(v5, v4);
      v1 = v3;
    }
    while ( v3 != nullptr );
  }
  return;
}

double __fastcall sub_FA1D80(double a1, double a2, double a3, double a4)
{
  return a1 / a4 * (a1 / a4 * a3) * (a1 / a4 * 2.70158 + -1.70158) + a2;
}

double __fastcall sub_FA1DB0(double a1, double a2, double a3, double a4)
{
  return ((a1 / a4 + -1.0) * (a1 / a4 + -1.0) * ((a1 / a4 + -1.0) * 2.70158 + 1.70158) + 1.0) * a3 + a2;
}

