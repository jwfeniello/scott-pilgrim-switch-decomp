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
__int64 Recovered_ResultTextConstruct();
__int64 Recovered_ResultTextCopy();
__int64 Recovered_ResultTextDestroy();
__int64 _ZdlPv();
__attribute__((malloc)) void* _Znwm(size_t);
extern __attribute__((visibility("hidden"))) int dword_1385494[];
extern __attribute__((visibility("hidden"))) int dword_1915530;
extern __attribute__((visibility("hidden"))) int dword_1915534;
extern char goff_17C1000[];
extern char goff_1828A50[];
extern char goff_1828FD0[];
extern char goff_182AE70[];
extern char goff_182B3F0[];
extern char goff_18EDCD0[];
extern char goff_18EDE08[];
extern char goff_18EDE68[];
extern char goff_18EDE70[];
extern char goff_18EE7F0[];
extern char goff_18F13E8[];
extern char goff_18F1518[];
extern char goff_18F1700[];
extern char goff_18F58B0[];
extern char goff_18F7A70[];
extern char goff_18F7C28[];
extern char goff_18F87A0[];
extern char goff_18F87A8[];
extern char goff_18F87B0[];
extern char goff_18F88D8[];
extern char goff_18F8CC8[];
extern char goff_18F8D00[];
extern char goff_18F8F30[];
extern char goff_18F8F68[];
extern char goff_18F91E8[];
extern char goff_18F9200[];
extern char goff_18F9218[];
extern char goff_18F9220[];
extern char goff_18F9238[];
extern char goff_18F9250[];
extern char goff_18F9258[];
extern char goff_18F9298[];
extern char goff_18F92A0[];
extern char goff_18F92A8[];
extern char goff_18F92B0[];
extern char goff_18F92B8[];
extern char goff_18F92C0[];
extern char goff_18F92C8[];
extern char goff_18F92D8[];
extern char goff_18F92E0[];
extern char goff_18F92F0[];
extern char goff_18F92F8[];
extern char goff_18F9328[];
extern char goff_18F9330[];
extern char goff_18F9348[];
extern char goff_18F9350[];
extern char goff_18F9358[];
extern char goff_18F9360[];
extern char goff_18F9398[];
extern char goff_18F93C0[];
extern char goff_18F93D8[];
extern char goff_18F93F0[];
extern char goff_18F9420[];
extern char goff_18F9458[];
extern char goff_18F9470[];
extern char goff_18F9478[];
extern char goff_18F9480[];
extern char goff_18F9488[];
extern char goff_18F94A0[];
extern char goff_18F94B0[];
extern char goff_18F94B8[];
extern char goff_18F94C0[];
extern char goff_18F94C8[];
extern char goff_18F94D0[];
extern char goff_18F94E0[];
extern char goff_18F9508[];
extern char goff_18F9510[];
extern char goff_18F9518[];
extern char goff_18F9538[];
extern char goff_18F9540[];
extern char goff_18F9548[];
extern char goff_18F9550[];
extern char goff_18F95B0[];
extern char goff_18F95B8[];
extern char goff_18F95C0[];
extern char goff_18F95E0[];
extern char goff_18F9608[];
extern char goff_18F9658[];
extern char goff_18F9668[];
extern char goff_18F9678[];
extern char goff_18F9680[];
extern char goff_18F96A0[];
extern char goff_18F96A8[];
extern char goff_18F96B0[];
extern char goff_18F96C0[];
extern char goff_18F96C8[];
extern char goff_18F9708[];
extern char goff_18F97D8[];
extern char goff_18F97E8[];
extern char goff_18F9800[];
extern char goff_18F9808[];
extern char goff_18F9850[];
extern char goff_18F9860[];
extern char goff_18F98F0[];
extern char goff_18F9918[];
extern char goff_18F9940[];
extern char goff_18F9948[];
extern char goff_18F99A8[];
extern char goff_18F9A00[];
extern char goff_18F9A10[];
extern char goff_18F9A18[];
extern char goff_18F9A20[];
extern char goff_18F9A28[];
extern char goff_18F9A30[];
extern char goff_18F9A50[];
extern char goff_18F9A98[];
extern char goff_18F9AB0[];
extern char goff_18F9AB8[];
extern char goff_18F9AC0[];
extern char goff_18F9AD8[];
extern char goff_18F9AE0[];
extern char goff_18F9AE8[];
extern char goff_18F9AF0[];
extern char goff_18F9B70[];
extern char goff_18F9B78[];
extern char goff_18F9B88[];
extern char goff_18F9BB8[];
extern char goff_18F9BF8[];
extern char goff_18F9C08[];
extern char goff_18F9C18[];
extern char goff_18F9C70[];
extern char goff_18F9CE0[];
extern char goff_18F9D48[];
extern char goff_18F9D50[];
extern char goff_18F9DD0[];
extern char goff_18F9DE0[];
extern char goff_18F9EF8[];
extern char goff_18F9F00[];
extern char goff_18F9FD8[];
extern char goff_18F9FE0[];
extern char goff_18F9FE8[];
extern char goff_18FA008[];
extern char goff_18FA068[];
extern char goff_18FA070[];
extern char goff_18FA078[];
extern char goff_18FA080[];
extern char goff_18FA088[];
extern char goff_18FA098[];
extern char goff_18FA1C8[];
extern char goff_18FA5F8[];
extern char goff_18FA620[];
extern char goff_18FA640[];
extern char goff_18FA678[];
extern char goff_18FA9D8[];
extern char goff_18FAA00[];
extern char goff_18FAA08[];
extern char goff_18FABD0[];
extern __attribute__((visibility("hidden"))) char hoff_17C1000[];
extern __attribute__((visibility("hidden"))) char hoff_1828A50[];
extern __attribute__((visibility("hidden"))) char hoff_1828FD0[];
extern __attribute__((visibility("hidden"))) char hoff_182AE70[];
extern __attribute__((visibility("hidden"))) char hoff_182B3F0[];
__int64 nn__os__GetSystemTick();
__attribute__((visibility("hidden"))) __int64 nullsub_1096();
__attribute__((visibility("hidden"))) __int64 nullsub_1576();
__attribute__((visibility("hidden"))) __int64 nullsub_1627();
__attribute__((visibility("hidden"))) __int64 nullsub_1682();
__attribute__((visibility("hidden"))) __int64 nullsub_2();
__attribute__((visibility("hidden"))) __int64 nullsub_79();
__int64 pthread_mutex_destroy();
extern __attribute__((visibility("hidden"))) __int64 qword_19148A0;
extern __attribute__((visibility("hidden"))) __int64 qword_19153D0;
extern __attribute__((visibility("hidden"))) __int64 qword_1915428;
extern __attribute__((visibility("hidden"))) __int64 qword_19154A8;
extern __attribute__((visibility("hidden"))) __int64 qword_1915508;
extern __attribute__((visibility("hidden"))) __int64 qword_1915908;
extern __attribute__((visibility("hidden"))) __int64 qword_1915B80;
extern __attribute__((visibility("hidden"))) __int64 qword_1915B90;
extern __attribute__((visibility("hidden"))) __int64 qword_1916FA8;
__int64 std____shared_weak_count____release_weak();
__int64 std__condition_variable___condition_variable();
__int64 std__mutex___mutex();
__int64 std__mutex__lock();
__int64 std__mutex__unlock();
__int64 std__recursive_mutex__lock();
__int64 std__recursive_mutex__unlock();
__int64 std__shared_timed_mutex__lock_shared();
__int64 std__shared_timed_mutex__unlock_shared();
__attribute__((visibility("hidden"))) __int64 sub_1E5980();
__attribute__((visibility("hidden"))) __int64 sub_250();
__attribute__((visibility("hidden"))) __int64 sub_2590F0();
__attribute__((visibility("hidden"))) __int64 sub_36CB0();
__attribute__((visibility("hidden"))) __int64 sub_36EA0();
__attribute__((visibility("hidden"))) __int64 sub_37030();
__attribute__((visibility("hidden"))) __int64 sub_370A0();
__attribute__((visibility("hidden"))) __int64 sub_377F0();
__attribute__((visibility("hidden"))) __int64 sub_37B00();
__attribute__((visibility("hidden"))) __int64 sub_464570();
__attribute__((visibility("hidden"))) __int64 sub_47C170();
__attribute__((visibility("hidden"))) __int64 sub_4D6990();
__attribute__((visibility("hidden"))) __int64 sub_4DDCC0();
__attribute__((visibility("hidden"))) __int64 sub_4DFE80();
__attribute__((visibility("hidden"))) __int64 sub_4DFF20();
__attribute__((visibility("hidden"))) __int64 sub_4DFFE0();
__attribute__((visibility("hidden"))) __int64 sub_4EB320();
__attribute__((visibility("hidden"))) __int64 sub_4EB340();
__attribute__((visibility("hidden"))) __int64 sub_4EB350();
__attribute__((visibility("hidden"))) __int64 sub_4EB3D0();
__attribute__((visibility("hidden"))) _Bool sub_4EB710();
__attribute__((visibility("hidden"))) __int64 sub_4EBAE0();
__attribute__((visibility("hidden"))) __int64 sub_4EC170();
__attribute__((visibility("hidden"))) __int64 sub_4ECFE0();
__attribute__((visibility("hidden"))) _Bool sub_4ED190();
__attribute__((visibility("hidden"))) __int64 sub_4EDA00();
__attribute__((visibility("hidden"))) __int64 sub_4EDA90();
__attribute__((visibility("hidden"))) __int64 sub_4EDC80();
__attribute__((visibility("hidden"))) __int64 sub_4EE1B0();
__attribute__((visibility("hidden"))) __int64 sub_4EE1E0();
__attribute__((visibility("hidden"))) __int64 sub_4EE210();
__attribute__((visibility("hidden"))) __int64 sub_4EE230();
__attribute__((visibility("hidden"))) __int64 sub_4EE290();
__attribute__((visibility("hidden"))) __int64 sub_4EE2A0();
__attribute__((visibility("hidden"))) __int64 sub_4EE340();
__attribute__((visibility("hidden"))) __int64 sub_4EEC30();
__attribute__((visibility("hidden"))) __int64 sub_4EF420();
__attribute__((visibility("hidden"))) __int64 sub_4EF440();
__attribute__((visibility("hidden"))) __int64 sub_4EF450();
__attribute__((visibility("hidden"))) __int64 sub_4EF460();
__attribute__((visibility("hidden"))) __int64 sub_4EF540();
__attribute__((visibility("hidden"))) __int64 sub_4EF810();
__attribute__((visibility("hidden"))) __int64 sub_4EF8D0();
__attribute__((visibility("hidden"))) __int64 sub_4EF9A0();
__attribute__((visibility("hidden"))) __int64 sub_4EFA90();
__attribute__((visibility("hidden"))) __int64 sub_4EFE60();
__attribute__((visibility("hidden"))) unsigned int sub_4EFEE0();
__attribute__((visibility("hidden"))) __int64 sub_4EFF50();
__attribute__((visibility("hidden"))) __int64 sub_4F0040();
__attribute__((visibility("hidden"))) __int64 sub_4F02D0();
__attribute__((visibility("hidden"))) __int64 sub_4F03B0();
__attribute__((visibility("hidden"))) __int64 sub_4F1D30();
__attribute__((visibility("hidden"))) __int64 sub_4F2000();
__attribute__((visibility("hidden"))) __int64 sub_4F2190();
__attribute__((visibility("hidden"))) __int64 sub_4F2360();
__attribute__((visibility("hidden"))) __int64 sub_4F2FA0();
__attribute__((visibility("hidden"))) __int64 sub_4F30C0();
__attribute__((visibility("hidden"))) __int64 sub_4F42C0();
__attribute__((visibility("hidden"))) __int64 sub_4F4330();
__attribute__((visibility("hidden"))) __int64 sub_4F4370();
__attribute__((visibility("hidden"))) __int64 sub_4F47B0();
__attribute__((visibility("hidden"))) __int64 sub_4F4810();
__attribute__((visibility("hidden"))) __int64 sub_4F48B0();
__attribute__((visibility("hidden"))) __int64 sub_4F49B0();
__attribute__((visibility("hidden"))) __int64 sub_4F49F0();
__attribute__((visibility("hidden"))) __int64 sub_4F4D20();
__attribute__((visibility("hidden"))) __int64 sub_4F4F60();
__attribute__((visibility("hidden"))) __int64 sub_4F5150();
__attribute__((visibility("hidden"))) __int64 sub_4F5220();
__attribute__((visibility("hidden"))) __int64 sub_4F53C0();
__attribute__((visibility("hidden"))) __int64 sub_4F5410();
__attribute__((visibility("hidden"))) __int64 sub_4F5C90();
__attribute__((visibility("hidden"))) char sub_4F5FA0();
__attribute__((visibility("hidden"))) __int64 sub_4F61C0();
__attribute__((visibility("hidden"))) __int64 sub_4F8040();
__attribute__((visibility("hidden"))) __int64 sub_4F8660();
__attribute__((visibility("hidden"))) __int64 sub_4F8720();
__attribute__((visibility("hidden"))) __int64 sub_4F9AC0();
__attribute__((visibility("hidden"))) __int64 sub_4FABF0();
__attribute__((visibility("hidden"))) __int64 sub_4FAFD0();
__attribute__((visibility("hidden"))) __int64 sub_4FB800();
__attribute__((visibility("hidden"))) __int64 sub_4FB9D0();
__attribute__((visibility("hidden"))) __int64 sub_4FBCC0();
__attribute__((visibility("hidden"))) __int64 sub_4FC1E0();
__attribute__((visibility("hidden"))) __int64 sub_4FC1F0();
__attribute__((visibility("hidden"))) unsigned int sub_4FC220();
__attribute__((visibility("hidden"))) __int64 sub_4FC710();
__attribute__((visibility("hidden"))) __int64 sub_4FD720();
__attribute__((visibility("hidden"))) __int64 sub_502D30();
__attribute__((visibility("hidden"))) __int64 sub_504040();
__attribute__((visibility("hidden"))) __int64 sub_504140();
__attribute__((visibility("hidden"))) __int64 sub_504170();
__attribute__((visibility("hidden"))) __int64 sub_5042B0();
__attribute__((visibility("hidden"))) __int64 sub_505D60();
__attribute__((visibility("hidden"))) unsigned int sub_505FB0();
__attribute__((visibility("hidden"))) __int64 sub_505FC0();
__attribute__((visibility("hidden"))) __int64 sub_507E40();
__attribute__((visibility("hidden"))) __int64 sub_508970();
__attribute__((visibility("hidden"))) __int64 sub_5089B0();
__attribute__((visibility("hidden"))) __int64 sub_5089F0();
__attribute__((visibility("hidden"))) __int64 sub_5098B0();
__attribute__((visibility("hidden"))) _Bool sub_50B8E0();
__attribute__((visibility("hidden"))) __int64 sub_50EA00();
__attribute__((visibility("hidden"))) __int64 sub_50EB70();
__attribute__((visibility("hidden"))) __int64 sub_50EF00();
__attribute__((visibility("hidden"))) __int64 sub_50F850();
__attribute__((visibility("hidden"))) __int64 sub_510D80();
__attribute__((visibility("hidden"))) __int64 sub_510F10();
__attribute__((visibility("hidden"))) __int64 sub_511790();
__attribute__((visibility("hidden"))) __int64 sub_511800();
__attribute__((visibility("hidden"))) __int64 sub_511C20();
__attribute__((visibility("hidden"))) __int64 sub_5150D0();
__attribute__((visibility("hidden"))) __int64 sub_515C10();
__attribute__((visibility("hidden"))) __int64 sub_5174F0();
__attribute__((visibility("hidden"))) __int64 sub_518FE0();
__attribute__((visibility("hidden"))) __int64 sub_5190B0();
__attribute__((visibility("hidden"))) __int64 sub_519620();
__attribute__((visibility("hidden"))) __int64 sub_51A630();
__attribute__((visibility("hidden"))) __int64 sub_51A700();
__attribute__((visibility("hidden"))) __int64 sub_51B010();
__attribute__((visibility("hidden"))) __int64 sub_51D650();
__attribute__((visibility("hidden"))) __int64 sub_51D670();
__attribute__((visibility("hidden"))) __int64 sub_51D8C0();
__attribute__((visibility("hidden"))) __int64 sub_51E060();
__attribute__((visibility("hidden"))) __int64 sub_51F7E0();
__attribute__((visibility("hidden"))) __int64 sub_520530();
__attribute__((visibility("hidden"))) __int64 sub_520750();
__attribute__((visibility("hidden"))) __int64 sub_520840();
__attribute__((visibility("hidden"))) __int64 sub_5208B0();
__attribute__((visibility("hidden"))) __int64 sub_520FB0();
__attribute__((visibility("hidden"))) __int64 sub_521430();
__attribute__((visibility("hidden"))) __int64 sub_521AD0();
__attribute__((visibility("hidden"))) __int64 sub_521C40();
__attribute__((visibility("hidden"))) __int64 sub_5292E0();
__attribute__((visibility("hidden"))) __int64 sub_52B270();
__attribute__((visibility("hidden"))) __int64 sub_52FFF0();
__attribute__((visibility("hidden"))) __int64 sub_539810();
__attribute__((visibility("hidden"))) __int64 sub_53CE50();
__attribute__((visibility("hidden"))) __int64 sub_53CF40();
__attribute__((visibility("hidden"))) int sub_53DA80();
__attribute__((visibility("hidden"))) int sub_53DCE0();
__attribute__((visibility("hidden"))) int sub_53E6E0();
__attribute__((visibility("hidden"))) int sub_53EE90();
__attribute__((visibility("hidden"))) int sub_53F100();
__attribute__((visibility("hidden"))) int sub_53F370();
__attribute__((visibility("hidden"))) int sub_53F5C0();
__attribute__((visibility("hidden"))) __int64 sub_543EC0();
__attribute__((visibility("hidden"))) __int64 sub_548310();
__attribute__((visibility("hidden"))) __int64 sub_5484D0();
__attribute__((visibility("hidden"))) __int64 sub_548600();
__attribute__((visibility("hidden"))) __int64 sub_5490D0();
__attribute__((visibility("hidden"))) __int64 sub_54BC60();
__attribute__((visibility("hidden"))) __int64 sub_54C810();
__attribute__((visibility("hidden"))) __int64 sub_54C820();
__attribute__((visibility("hidden"))) __int64 sub_54DD50();
__attribute__((visibility("hidden"))) __int64 sub_554100();
__attribute__((visibility("hidden"))) __int64 sub_554110();
__attribute__((visibility("hidden"))) __int64 sub_561EB0();
__attribute__((visibility("hidden"))) __int64 sub_5669E0();
__attribute__((visibility("hidden"))) __int64 sub_567CE0();
__attribute__((visibility("hidden"))) __int64 sub_56C9F0();
__attribute__((visibility("hidden"))) __int64 sub_56CA00();
__attribute__((visibility("hidden"))) __int64 sub_56F3C0();
__attribute__((visibility("hidden"))) __int64 sub_56F400();
__attribute__((visibility("hidden"))) __int64 sub_56F490();
__attribute__((visibility("hidden"))) __int64 sub_56F9A0();
__attribute__((visibility("hidden"))) __int64 sub_576000();
__attribute__((visibility("hidden"))) _Bool sub_576540();
__attribute__((visibility("hidden"))) __int64 sub_5771D0();
__attribute__((visibility("hidden"))) __int64 sub_5771E0();
__attribute__((visibility("hidden"))) __int64 sub_577290();
__attribute__((visibility("hidden"))) __int64 sub_578210();
__attribute__((visibility("hidden"))) __int64 sub_578410();
__attribute__((visibility("hidden"))) __int64 sub_57D200();
__attribute__((visibility("hidden"))) __int64 sub_57D230();
__attribute__((visibility("hidden"))) __int64 sub_57EDC0();
__attribute__((visibility("hidden"))) __int64 sub_57EF40();
__attribute__((visibility("hidden"))) __int64 sub_57F070();
__attribute__((visibility("hidden"))) int sub_57F110();
__attribute__((visibility("hidden"))) __int64 sub_57F1B0();
__attribute__((visibility("hidden"))) __int64 sub_583700();
__attribute__((visibility("hidden"))) __int64 sub_585CA0();
__attribute__((visibility("hidden"))) int sub_589530();
__attribute__((visibility("hidden"))) __int64 sub_58A960();
__attribute__((visibility("hidden"))) __int64 sub_58AEC0();
__attribute__((visibility("hidden"))) __int64 sub_58BBE0();
__attribute__((visibility("hidden"))) __int64 sub_58C2A0();
__attribute__((visibility("hidden"))) __int64 sub_58EB60();
__attribute__((visibility("hidden"))) __int64 sub_58EBE0();
__attribute__((visibility("hidden"))) __int64 sub_593B50();
__attribute__((visibility("hidden"))) __int64 sub_594400();
__attribute__((visibility("hidden"))) __int64 sub_5A2780();
__attribute__((visibility("hidden"))) __int64 sub_5CE340();
__attribute__((visibility("hidden"))) __int64 sub_5D0AC0();
extern __attribute__((visibility("hidden"))) char unk_1326E41;
__int64 x0();

// N5storm4echo41MulticastedAcceptReplaceGoneMasterMessageE, virtual slot 19
int __fastcall sub_436CB0(__int64 a1, __int64 a2)
{
  if ( (sub_576540()) != 0 )
    return sub_57F110(a1 + 40, a2 + 40);
  else
    return 0;
}

// N5storm4echo41MulticastedRefuseReplaceGoneMasterMessageE, virtual slot 19
int __fastcall sub_437340(__int64 a1, __int64 a2)
{
  if ( (sub_576540()) != 0 )
    return sub_57F110(a1 + 40, a2 + 40);
  else
    return 0;
}

// N5storm4echo35MulticastedReplaceGoneMasterMessageE, virtual slot 19
int __fastcall sub_4379D0(__int64 a1, __int64 a2)
{
  if ( (sub_576540()) != 0 )
    return sub_57F110(a1 + 40, a2 + 40);
  else
    return 0;
}

// N5storm4echo31MulticastedElectedMasterMessageE, virtual slot 19
int __fastcall sub_438830(__int64 a1, __int64 a2)
{
  if ( (sub_576540()) != 0 )
    return sub_57F110(a1 + 40, a2 + 40);
  else
    return 0;
}

// N5storm4echo17ReplicaReadyEventE, virtual slot 19
int __fastcall sub_43EDA0(__int64 a1, __int64 a2)
{
  if ( (sub_576540()) != 0 )
    return sub_57F110(a1 + 40, a2 + 40);
  else
    return 0;
}

// N5storm4echo33MulticastedClientMasterReadyEventE, virtual slot 19
int __fastcall sub_43F430(__int64 a1, __int64 a2)
{
  if ( (sub_576540()) != 0 )
    return sub_57F110(a1 + 40, a2 + 40);
  else
    return 0;
}

// N5storm4echo18DeleteReplicaEventE, virtual slot 19
int __fastcall sub_4492A0(__int64 a1, __int64 a2)
{
  if ( (sub_576540()) != 0 )
    return sub_57F110(a1 + 40, a2 + 40);
  else
    return 0;
}

// N5storm4echo24MasterDeleteReplicaEventE, virtual slot 19
int __fastcall sub_44AE10(__int64 a1, __int64 a2)
{
  if ( (sub_576540()) != 0 )
    return sub_57F110(a1 + 40, a2 + 40);
  else
    return 0;
}

// N5storm4echo20RecreateReplicaEventE, virtual slot 19
int __fastcall sub_44DFA0(__int64 a1, __int64 a2)
{
  if ( (sub_576540()) != 0 )
    return sub_57F110(a1 + 40, a2 + 40);
  else
    return 0;
}

// N5storm4echo18RejectReplicaEventE, virtual slot 19
int __fastcall sub_44E540(__int64 a1, __int64 a2)
{
  if ( (sub_576540()) != 0 )
    return sub_57F110(a1 + 40, a2 + 40);
  else
    return 0;
}

// N5storm4echo29MulticastedBrokerReadyMessageE, virtual slot 19
int __fastcall sub_451F40(__int64 a1, __int64 a2)
{
  if ( (sub_576540()) != 0 )
    return sub_57F110(a1 + 40, a2 + 40);
  else
    return 0;
}

__int64 __fastcall sub_4A2A80(_QWORD *a1)
{
  __int64 result; // x0

  result = sub_47C170();
  *a1 = ((char *)goff_18F7A70 + 16);
  a1[12] = 0;
  a1[13] = 0;
  a1[14] = 0;
  a1[11] = a1 + 12;
  a1[15] = 0;
  a1[16] = 0;
  return result;
}

void sub_4B0BA0(__int64 a1)
{  __int64 *v3; // x8

  sub_464570();
  *(_QWORD *)(a1 + 96) = 0;
  v3 = ((__int64 *)goff_18F7C28 + 117);
  *(_QWORD *)a1 = ((__int64 *)goff_18F7C28 + 2);
  *(_QWORD *)(a1 + 64) = v3;
  *(_QWORD *)(a1 + 72) = 0;
  *(_QWORD *)(a1 + 88) = 0;
  *(_QWORD *)(a1 + 80) = a1 + 88;
  *(_BYTE *)(a1 + 104) = 0;
  *(_QWORD *)(a1 + 108) = 0;
  return;
}

// NSt3__110__function6__funcIZN5storm30SimpleStormMatchmakingStrategy24StoreOnlinePlayerProfileEPNS2_19SimpleResultRelayerERNS2_7HandlerEE3$_7NS_9allocatorIS8_EEFNS2_7EResultERNS2_13SimpleAsyncOpEEEE, virtual slot 2
_QWORD *__fastcall sub_4DD8F0(__int64 a1)
{
  _QWORD *result; // x0
  __int64 v3; // x9

  result = (_QWORD *)_Znwm(0x18u);
  *result = ((void*)hoff_1828A50);
  v3 = *(_QWORD *)(a1 + 16);
  result[1] = *(_QWORD *)(a1 + 8);
  result[2] = v3;
  return result;
}

// NSt3__110__function6__funcIZN5storm30SimpleStormMatchmakingStrategy11LockSessionEPNS2_19SimpleResultRelayerERNS2_7HandlerERKNS3_18StormMMSessionInfoEE3$_8NS_9allocatorISB_EEFNS2_7EResultERNS2_13SimpleAsyncOpEEEE, virtual slot 2
_QWORD *__fastcall sub_4DF460(__int64 a1)
{
  _QWORD *result; // x0
  __int64 v3; // x9

  result = (_QWORD *)_Znwm(0x18u);
  *result = ((void*)hoff_1828FD0);
  v3 = *(_QWORD *)(a1 + 16);
  result[1] = *(_QWORD *)(a1 + 8);
  result[2] = v3;
  return result;
}

// N5storm2mm7helpers33SimpleRdvSessionCreateCallContextE, virtual slot 0
__int64 __fastcall sub_4DFC80(_QWORD *a1)
{
  _QWORD *v2; // x0
  __int64 v3; // t1
  __int64 result; // x0

  *a1 = ((char *)((__int64*)goff_18F8CC8) + 16);
  v3 = a1[8];
  v2 = a1 + 8;
  if ( v3 != 0 )
    sub_4DFE80(v2, &unk_1326E41, 0);
  sub_4DDCC0(a1 + 9, a1[10]);
  result = a1[5];
  *a1 = ((char *)goff_18F8D00 + 16);
  if ( result != 0 )
  {
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 8LL))(result);
    a1[5] = 0;
  }
  a1[5] = 0;
  return result;
}

// N5storm2mm7helpers33SimpleRdvSessionCreateCallContextE, virtual slot 1
void __fastcall sub_4DFD00(_QWORD *a1)
{
  RecoveredSdkText *v1; // x20
  __int64 v3; // x0

  v1 = (RecoveredSdkText *)a1[8];
  *a1 = ((char *)((__int64*)goff_18F8CC8) + 16);
  if ( v1 != nullptr )
  {
    sub_4DFF20(&v1[17], v1[18].data);
    sub_4DFFE0(&v1[14], v1[15].data);
    sub_4DDCC0(&v1[11], v1[12].data);
    sub_4DDCC0(&v1[8], v1[9].data);
    nullsub_79((char *)&v1[5].data + 4);
    Recovered_ResultTextDestroy(v1 + 4);
    nullsub_79(&v1[2]);
    Recovered_ResultTextDestroy(v1);
    sub_57EDC0(v1, 0LL, &unk_1326E41, 0);
    a1[8] = 0;
  }
  sub_4DDCC0(a1 + 9, a1[10]);
  v3 = a1[5];
  *a1 = ((char *)goff_18F8D00 + 16);
  if ( v3 != 0 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  _ZdlPv(a1);
}

// N5storm2mm7helpers30SimpleReportJoinRdvCallContextE, virtual slot 0
__int64 __fastcall sub_4E4F40(_QWORD *a1)
{
  _QWORD *v2; // x0
  __int64 v3; // t1
  __int64 result; // x0

  *a1 = ((char *)((__int64*)goff_18F8F30) + 16);
  v3 = a1[8];
  v2 = a1 + 8;
  if ( v3 != 0 )
    sub_4DFE80(v2, &unk_1326E41, 0);
  result = a1[3];
  *a1 = ((char *)goff_18F8F68 + 16);
  if ( result != 0 )
  {
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 8LL))(result);
    a1[3] = 0;
  }
  return result;
}

// N5storm2mm7helpers30SimpleReportJoinRdvCallContextE, virtual slot 1
void __fastcall sub_4E4FB0(_QWORD *a1)
{
  RecoveredSdkText *v1; // x20
  __int64 v3; // x0

  v1 = (RecoveredSdkText *)a1[8];
  *a1 = ((char *)((__int64*)goff_18F8F30) + 16);
  if ( v1 != nullptr )
  {
    sub_4DFF20(&v1[17], v1[18].data);
    sub_4DFFE0(&v1[14], v1[15].data);
    sub_4DDCC0(&v1[11], v1[12].data);
    sub_4DDCC0(&v1[8], v1[9].data);
    nullsub_79((char *)&v1[5].data + 4);
    Recovered_ResultTextDestroy(v1 + 4);
    nullsub_79(&v1[2]);
    Recovered_ResultTextDestroy(v1);
    sub_57EDC0(v1, 0LL, &unk_1326E41, 0);
    a1[8] = 0;
  }
  v3 = a1[3];
  *a1 = ((char *)goff_18F8F68 + 16);
  if ( v3 != 0 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  _ZdlPv(a1);
}

// NSt3__110__function6__funcIZN5storm30SimpleStormMatchmakingStrategy28RequestRendezVousSessionJoinEPNS2_19SimpleResultRelayerERNS2_7HandlerERNS3_18StormMMSessionInfoEE4$_14NS_9allocatorISA_EEFNS2_7EResultERNS2_13SimpleAsyncOpEEEE, virtual slot 2
_QWORD *__fastcall sub_4E8BF0(__int64 a1)
{
  _QWORD *result; // x0
  __int64 v3; // x9

  result = (_QWORD *)_Znwm(0x18u);
  *result = ((void*)hoff_182AE70);
  v3 = *(_QWORD *)(a1 + 16);
  result[1] = *(_QWORD *)(a1 + 8);
  result[2] = v3;
  return result;
}

// NSt3__110__function6__funcIZN5storm30SimpleStormMatchmakingStrategy22LeaveRendezVousSessionEPNS2_19SimpleResultRelayerERNS2_7HandlerERKNS3_18StormMMSessionInfoEE4$_15NS_9allocatorISB_EEFNS2_7EResultERNS2_13SimpleAsyncOpEEEE, virtual slot 2
_QWORD *__fastcall sub_4EA500(__int64 a1)
{
  _QWORD *result; // x0
  __int64 v3; // x9

  result = (_QWORD *)_Znwm(0x18u);
  *result = ((void*)hoff_182B3F0);
  v3 = *(_QWORD *)(a1 + 16);
  result[1] = *(_QWORD *)(a1 + 8);
  result[2] = v3;
  return result;
}

// N5storm2mm10IPLocationE, virtual slot 0
void __fastcall sub_4EAAB0(RecoveredSdkText *a1)
{
  a1->data = (char *)(((__int64 *)((__int64*)goff_18F91E8) + 2));
  Recovered_ResultTextDestroy(a1 + 6);
  Recovered_ResultTextDestroy(a1 + 5);
  Recovered_ResultTextDestroy(a1 + 4);
  Recovered_ResultTextDestroy(a1 + 3);
  Recovered_ResultTextDestroy(a1 + 2);
}

// N5storm2mm10IPLocationE, virtual slot 1
__int64 __fastcall sub_4EAB10(RecoveredSdkText *a1)
{
  a1->data = (char *)(((__int64 *)((__int64*)goff_18F91E8) + 2));
  Recovered_ResultTextDestroy(a1 + 6);
  Recovered_ResultTextDestroy(a1 + 5);
  Recovered_ResultTextDestroy(a1 + 4);
  Recovered_ResultTextDestroy(a1 + 3);
  Recovered_ResultTextDestroy(a1 + 2);
  return sub_4EB340(a1);
}

// N5storm2mm15_DDL_IPLocationE, virtual slot 0
void __fastcall sub_4EABD0(RecoveredSdkText *a1)
{
  a1->data = (char *)(((__int64 *)((__int64*)goff_18F91E8) + 2));
  Recovered_ResultTextDestroy(a1 + 6);
  Recovered_ResultTextDestroy(a1 + 5);
  Recovered_ResultTextDestroy(a1 + 4);
  Recovered_ResultTextDestroy(a1 + 3);
  Recovered_ResultTextDestroy(a1 + 2);
}

// N5storm2mm15_DDL_IPLocationE, virtual slot 1
__int64 __fastcall sub_4EAC30(RecoveredSdkText *a1)
{
  a1->data = (char *)(((__int64 *)((__int64*)goff_18F91E8) + 2));
  Recovered_ResultTextDestroy(a1 + 6);
  Recovered_ResultTextDestroy(a1 + 5);
  Recovered_ResultTextDestroy(a1 + 4);
  Recovered_ResultTextDestroy(a1 + 3);
  Recovered_ResultTextDestroy(a1 + 2);
  return sub_4EB340(a1);
}

// N5storm2mm30IP2LocationProtocolAdminClientE, virtual slot 25
_QWORD *sub_4EB1F0()
{
  _QWORD *v0; // x19

  v0 = (_QWORD *)sub_4EB320(96, &unk_1326E41, 0);
  sub_52B270(v0, 1);
  *v0 = ((__int64 *)((__int64*)goff_18F9200) + 2);
  return v0;
}

char **__fastcall sub_4EB4F0(char **a1, const char **a2)
{
  const char *v2; // x8
  const char *v3; // x20
  int v6; // w0
  int v7; // w21
  char *v8; // x0

  v2 = *a1;
  v3 = *a2;
  if ( *a1 != *a2 )
  {
    if ( v2 != nullptr )
    {
      sub_37030(v2 - 4);
      v3 = *a2;
    }
    if ( v3 != nullptr )
    {
      v6 = strlen(v3);
      v7 = v6 + 1;
      v8 = (char *)sub_36EA0(v6 + 5, 4u, 0, 1095761920);
      *(_DWORD *)v8 = v7;
      v8 += 4;
      *a1 = v8;
      strcpy(v8, v3);
    }
    else
    {
      *a1 = nullptr;
    }
  }
  return a1;
}

char **__fastcall sub_4EB600(char **a1, char *s)
{
  char *v2; // x8
  int v5; // w0
  int v6; // w21
  char *v7; // x0

  v2 = *a1;
  if ( *a1 != s )
  {
    if ( v2 != nullptr )
      sub_37030(v2 - 4);
    if ( s != nullptr )
    {
      v5 = strlen(s);
      v6 = v5 + 1;
      v7 = (char *)sub_36EA0(v5 + 5, 4u, 0, 1095761920);
      *(_DWORD *)v7 = v6;
      v7 += 4;
      *a1 = v7;
      strcpy(v7, s);
    }
    else
    {
      *a1 = nullptr;
    }
  }
  return a1;
}

const char *__fastcall sub_4EB9F0(const char **a1)
{
  const char *result; // x0

  result = *a1;
  if ( result != nullptr )
    return (const char *)strlen(result);
  return result;
}

__int64 __fastcall sub_4EDA40(__int64 a1, __int64 a2, int a3, int a4)
{
  int v6; // [xsp+Ch] [xbp-4h] BYREF
  int v5; // [xsp+8h] [xbp-8h] BYREF

  v6 = a3;
  v5 = a4;
  sub_4EDA90(*((__int64*)goff_18F9218), &v6);
  return sub_4EDA90(*((__int64*)goff_18F9220), &v5);
}

__int64 __fastcall sub_4EE150(pthread_mutex_t **a1)
{
  __int64 result; // x0

  pthread_mutex_destroy(*a1);
  result = sub_370A0(*a1, 5, &unk_1326E41, 0);
  *a1 = nullptr;
  return result;
}

// N5storm2mm18ThreadVariableRootE, virtual slot 0
__int64 __fastcall sub_4EE650(_QWORD *a1)
{
  *a1 = ((__int64 *)((__int64*)goff_18F9238) + 2);
  return sub_4EE340(qword_19148A0, a1);
}

// N5storm2mm18ThreadVariableRootE, virtual slot 1
__int64 __fastcall sub_4EE670(_QWORD *a1)
{
  *a1 = ((__int64 *)((__int64*)goff_18F9238) + 2);
  sub_4EE340(qword_19148A0, a1);
  return sub_4EB340(a1);
}

__int64 __fastcall sub_4EE900(__int64 result, __int64 a2)
{
  _DWORD *v2; // x20
  _BYTE *v3; // x21
  __int64 v4; // x19

  *(_QWORD *)(result + 32) = a2;
  v2 = *(_DWORD **)goff_18F9258;
  v3 = (_BYTE *)goff_18F88D8;
  v4 = *(_QWORD *)goff_18F9258 + 8LL;
  if ( *(char*)goff_18F88D8 == 0 )
    result = sub_4EE210(*(_QWORD *)goff_18F9258 + 8LL);
  ++*v2;
  if ( *v3 == 0 )
    return sub_4EE230(v4);
  return result;
}

__int64 sub_4EE980()
{
  _DWORD *v0; // x20
  _BYTE *v1; // x21
  __int64 v2; // x19
  __int64 v3; // x0

  v0 = *(_DWORD **)goff_18F9258;
  v1 = (_BYTE *)goff_18F88D8;
  v2 = *(_QWORD *)goff_18F9258 + 8LL;
  if ( *(char*)goff_18F88D8 == 0 )
    sub_4EE210(*(_QWORD *)goff_18F9258 + 8LL);
  --*v0;
  if ( *v1 == 0 )
    sub_4EE230(v2);
  v3 = sub_4EE290();
  return sub_4EE2A0(v3);
}

__int64 sub_4EEBB0()
{
  _QWORD *v0; // x20
  _DWORD *v1; // x19
  __int64 result; // x0
  __int64 v3; // [xsp+8h] [xbp-18h] BYREF

  v0 = (_QWORD *)sub_4EB320(88, &unk_1326E41, 0);
  v3 = 0;
  sub_4EEC30(v0, &v3);
  *(_QWORD *)((__int64*)goff_18F9250) = v0;
  v1 = (_DWORD *)sub_4EB320(40, &unk_1326E41, 0);
  *v1 = 0;
  result = sub_4EE1B0(v1 + 2, 0x40000000);
  *(_QWORD *)goff_18F9258 = v1;
  return result;
}

__int64 sub_4EED70()
{
  _QWORD *v0; // x19
  __int64 result; // x0
  _QWORD *v2; // x20
  __int64 v3; // x19

  v0 = (_QWORD *)((__int64*)goff_18F9250);
  result = *(_QWORD *)((__int64*)goff_18F9250);
  if ( *(_QWORD *)((__int64*)goff_18F9250) != 0 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 8LL))(result);
  *v0 = 0;
  v2 = (_QWORD *)goff_18F9258;
  v3 = *(_QWORD *)goff_18F9258;
  if ( *(_QWORD *)goff_18F9258 != 0 )
  {
    sub_4EE1E0(v3 + 8);
    result = sub_4EB340(v3);
  }
  *v2 = 0;
  return result;
}

__int64 __fastcall sub_4EF480(_QWORD *a1, int a2)
{
  if ( a2 < 0 )
    return *a1 - -a2;
  else
    return *a1 + a2;
}

int __fastcall sub_4EF500(unsigned __int64 a1)
{
  unsigned __int64 v2; // x0

  if ( a1 == 0 )
    return 0xFFFFFFFFLL;
  v2 = sub_4EF540(0);
  if ( v2 < a1 )
    return (unsigned int)(a1 - v2);
  else
    return 0;
}

__int64 sub_4EF6F0()
{
  __int64 v0; // x19
  __int64 result; // x0

  v0 = sub_4EB320(32, &unk_1326E41, 0);
  result = sub_4EE1B0(v0, 0);
  *(__int64*)goff_18F9298 = v0;
  return result;
}

void sub_4EF740()
{
  __int64 *v0; // x20
  __int64 v1; // x19

  v0 = goff_18F9298;
  v1 = *(__int64*)goff_18F9298;
  if ( *(__int64*)goff_18F9298 != 0 )
  {
    sub_4EE1E0(*(__int64*)goff_18F9298);
    sub_4EB340(v1);
  }
  *v0 = 0;
  return;
}

__int64 __fastcall sub_4EF8F0(unsigned int a1)
{
  return sub_4EFA90(goff_18F92A0, a1);
}

__int64 sub_4EF930()
{
  __int64 v0; // x19
  void *v1; // x19

  v0 = goff_18F92A0;
  sub_4EF9A0(goff_18F92A0);
  sub_250((__int64)goff_18F92A8, v0, (__int64)((void*)hoff_17C1000));
  v1 = goff_18F92B0;
  sub_4EDA00(goff_18F92B0, goff_18F92B8, 0);
  return sub_250((__int64)goff_18F92C0, (__int64)v1, (__int64)((void*)hoff_17C1000));
}

float __fastcall sub_4EFBF0(__int64 a1, float a2)
{
  return (float)((float)(unsigned int)sub_4EFA90(a1, 0x10000) * 0.000015258789f) * a2;
}

unsigned int __fastcall sub_4EFC30(unsigned int result)
{
  if ( *((__int64*)goff_18F92C8) != 0 )
    ++*(_DWORD *)(*((__int64*)goff_18F92C8) + 4LL * result);
  return result;
}

__int64 sub_4F0000()
{
  void *v0; // x19

  v0 = goff_18F87A8;
  sub_4F0040(goff_18F87A8);
  return sub_250((__int64)goff_18F92E0, (__int64)v0, (__int64)((void*)hoff_17C1000));
}

__int64 sub_4F0290()
{
  void *v0; // x19

  v0 = goff_18F92F0;
  sub_4F02D0(goff_18F92F0);
  return sub_250((__int64)goff_18F92F8, (__int64)v0, (__int64)((void*)hoff_17C1000));
}

__int64 __fastcall sub_4F0900(__int64 *a1)
{
  _BYTE *v1; // x22
  __int64 *v3; // x19
  __int64 *v4; // x21
  __int64 result; // x0

  v1 = (_BYTE *)goff_18F88D8;
  v3 = a1 + 15;
  if ( *(char*)goff_18F88D8 != 0 )
  {
    v4 = a1 + 19;
  }
  else
  {
    sub_4EE210(a1 + 15);
    v4 = a1 + 19;
    if ( *v1 == 0 )
      sub_4EE210(a1 + 19);
  }
  sub_4F2190((__int64)a1, a1 + 23);
  sub_4F2190((__int64)a1, a1 + 27);
  sub_4F2360((__int64)a1, a1 + 39);
  result = sub_4F2190((__int64)a1, a1 + 35);
  if ( *v1 == 0 )
  {
    result = sub_4EE230(v4);
    if ( *v1 == 0 )
      return sub_4EE230(v3);
  }
  return result;
}

__int64 __fastcall sub_4F1F50(unsigned int a1)
{
  int v2; // w20
  unsigned int v4; // w21
  unsigned int v5; // w22

  if ( *(char*)goff_18F9328 == 0 )
    return sub_4F1D30(a1);
  if ( *(char*)goff_18F87A0 != 0 )
    v2 = *(_DWORD *)sub_4D6990(*((__int64*)goff_18F87B0));
  else
    v2 = 0;
  v4 = sub_4EFEE0();
  v5 = 0;
  do
  {
    if ( (sub_4EFF50(v5) & 1) != 0 )
    {
      sub_4F4370(v5);
      sub_4F1D30(a1);
    }
    ++v5;
  }
  while ( v5 <= v4 );
  return sub_4F4370(v2);
}

__int64 sub_4F20F0()
{
  int v0; // w19
  unsigned int v2; // w20
  unsigned int v3; // w21
  __int64 v4; // x0

  if ( *(char*)goff_18F9328 == 0 )
    return ((__int64 (*)(void))sub_4F2000)();
  if ( *(char*)goff_18F87A0 != 0 )
    v0 = *(_DWORD *)sub_4D6990(*((__int64*)goff_18F87B0));
  else
    v0 = 0;
  v2 = sub_4EFEE0();
  v3 = 0;
  do
  {
    if ( (sub_4EFF50(v3) & 1) != 0 )
    {
      v4 = sub_4F4370(v3);
      sub_4F2000(v4);
    }
    ++v3;
  }
  while ( v3 <= v2 );
  return sub_4F4370(v0);
}

__int64 sub_4F2540()
{
  __int64 v0; // x19
  __int64 result; // x0

  v0 = sub_4EB320(32, &unk_1326E41, 0);
  result = sub_4EE1B0(v0, 2);
  *(__int64*)goff_18F92D8 = v0;
  return result;
}

void sub_4F2590()
{
  __int64 *v0; // x20
  __int64 v1; // x19

  v0 = goff_18F92D8;
  v1 = *(__int64*)goff_18F92D8;
  if ( *(__int64*)goff_18F92D8 != 0 )
  {
    sub_4EE1E0(*(__int64*)goff_18F92D8);
    sub_4EB340(v1);
  }
  *v0 = 0;
  return;
}

void sub_4F31B0()
{
  _QWORD *v0; // x19

  v0 = (_QWORD *)sub_4EB320(64, &unk_1326E41, 0);
  sub_4EE1B0(v0 + 1, 0);
  v0[5] = v0 + 5;
  v0[6] = v0 + 5;
  v0[7] = 0;
  *(__int64*)goff_18F9330 = (__int64)v0;
  return;
}

__int64 __fastcall sub_4F3920(__int64 result, unsigned __int64 a2)
{
  __int64 v2; // x19
  _BYTE *v3; // x22
  __int64 v5; // x20

  v2 = *(_QWORD *)((__int64*)goff_18F9358);
  v3 = (_BYTE *)goff_18F88D8;
  v5 = result;
  if ( *(char*)goff_18F88D8 == 0 )
    result = sub_4EE210(*(_QWORD *)((__int64*)goff_18F9358));
  ++*(_QWORD *)(v5 + 56);
  if ( *(_QWORD *)(v5 + 40) > a2 )
    *(_QWORD *)(v5 + 40) = a2;
  if ( *(_QWORD *)(v5 + 48) < a2 )
    *(_QWORD *)(v5 + 48) = a2;
  *(_QWORD *)(v5 + 32) += a2;
  *(_BYTE *)(v5 + 24) = 1;
  if ( *v3 == 0 )
    return sub_4EE230(v2);
  return result;
}

__int64 sub_4F3A90()
{
  _QWORD *v0; // x0
  __int64 v1; // x19
  __int64 result; // x0

  v0 = (_QWORD *)sub_4EB320(24, &unk_1326E41, 0);
  v0[1] = 0;
  v0[2] = 0;
  *v0 = 0;
  *(_QWORD *)((__int64*)goff_18F9348) = v0;
  v1 = sub_4EB320(32, &unk_1326E41, 0);
  result = sub_4EE1B0(v1, 0x40000000);
  *(_QWORD *)((__int64*)goff_18F9358) = v1;
  return result;
}

void sub_4F3B00()
{
  _QWORD *v0; // x20
  __int64 *v1; // x19
  __int64 v2; // x0
  _QWORD *v3; // x21
  __int64 v4; // x19

  v0 = (_QWORD *)((__int64*)goff_18F9348);
  v1 = *(__int64 **)((__int64*)goff_18F9348);
  if ( *(_QWORD *)((__int64*)goff_18F9348) != 0 )
  {
    v2 = *v1;
    if ( *v1 != 0 )
    {
      v1[1] = v2;
      sub_37030(v2);
    }
    sub_4EB340(v1);
  }
  v3 = (_QWORD *)((__int64*)goff_18F9358);
  v4 = *(_QWORD *)((__int64*)goff_18F9358);
  if ( *(_QWORD *)((__int64*)goff_18F9358) != 0 )
  {
    sub_4EE1E0(*(_QWORD *)((__int64*)goff_18F9358));
    sub_4EB340(v4);
  }
  *v0 = 0;
  *v3 = 0;
}

// N5storm2mm6MetricE, virtual slot 0
void __fastcall sub_4F3B70(RecoveredSdkText *a1)
{
  a1->data = (char *)(((char *)((__int64*)goff_18F9350) + 16));
  Recovered_ResultTextDestroy(a1 + 2);
  Recovered_ResultTextDestroy(a1 + 1);
}

void __fastcall sub_4F3BC0(__int64 a1, const char *a2, const char *a3)
{
  *(_QWORD *)a1 = ((char *)((__int64*)goff_18F9350) + 16);
  Recovered_ResultTextConstruct((RecoveredSdkText *)(a1 + 8), a2);
  Recovered_ResultTextConstruct((RecoveredSdkText *)(a1 + 16), a3);
  *(_BYTE *)(a1 + 24) = 0;
}

__int64 __fastcall sub_4F3CB0(__int64 a1)
{
  __int64 result; // x0

  *(_QWORD *)a1 = ((char *)((__int64*)goff_18F9360) + 16);
  result = sub_4EE1B0(a1 + 8, 0x40000000);
  *(_QWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 64) = 0;
  *(_QWORD *)(a1 + 48) = 0;
  *(_DWORD *)(a1 + 40) = 2;
  return result;
}

__int64 sub_4F4540()
{
  __int64 v0; // x19
  __int64 result; // x0
  int v2; // [xsp+Ch] [xbp-4h] BYREF

  v0 = sub_4EB320(88, &unk_1326E41, 0);
  v2 = 0;
  result = sub_4EDC80(v0, &v2);
  *((__int64*)goff_18F87B0) = v0;
  return result;
}

__int64 sub_4F4EA0()
{
  __int64 v0; // x19
  __int64 v1; // x0
  RecoveredSdkText self; // [xsp+8h] [xbp-8h] BYREF

  v0 = sub_4EB320(32, &unk_1326E41, 0);
  Recovered_ResultTextConstruct(&self, "CONNECTION_ENCODING");
  sub_4F5150(v0, &self, 1);
  *((__int64*)goff_18F93C0) = v0;
  Recovered_ResultTextDestroy(&self);
  self.data = (char *)sub_4EF810();
  v1 = sub_4EF450(&self);
  return sub_4EF8D0(v1);
}

void sub_4F4F20()
{
  __int64 *v0; // x20
  __int64 v1; // x19

  v0 = ((__int64*)goff_18F93C0);
  v1 = *((__int64*)goff_18F93C0);
  if ( *((__int64*)goff_18F93C0) != 0 )
  {
    sub_4F5220(*(RecoveredSdkText **)((__int64*)goff_18F93C0));
    sub_4EB340(v1);
  }
  *v0 = 0;
  return;
}

// N5storm2mm4CoreE, virtual slot 0
__int64 __fastcall sub_4F50A0(RecoveredSdkText *a1)
{
  a1->data = (char *)(((__int64 *)goff_18F9398 + 2));
  sub_4F4330((__int64)&a1[7]);
  Recovered_ResultTextDestroy(a1 + 6);
  Recovered_ResultTextDestroy(a1 + 5);
  return sub_4F49F0((__int64)a1);
}

// N5storm2mm4CoreE, virtual slot 1
__int64 __fastcall sub_4F50F0(RecoveredSdkText *a1)
{
  a1->data = (char *)(((__int64 *)goff_18F9398 + 2));
  sub_4F4330((__int64)&a1[7]);
  Recovered_ResultTextDestroy(a1 + 6);
  Recovered_ResultTextDestroy(a1 + 5);
  sub_4F49F0((__int64)a1);
  return sub_4EB340(a1);
}

char *__fastcall sub_4F5F60(__int64 a1, const char **a2, __int16 a3, char a4)
{
  char v5; // w20
  char *result; // x0

  *(_WORD *)a1 = a3;
  *(_QWORD *)(a1 + 8) = &unk_1326E41;
  *(_DWORD *)(a1 + 16) = 0;
  v5 = a4 & 1;
  result = Recovered_ResultTextCopy((char *)(a1 + 24), a2);
  *(_BYTE *)(a1 + 32) = v5;
  return result;
}

__int64 __fastcall sub_4F6190(__int64 a1, const char *a2, char a3)
{
  char s[4]; // [xsp+Ch] [xbp-4h] BYREF

  *(_DWORD *)(a1 + 256) = 0;
  s[0] = a3;
  s[1] = 0;
  return sub_4F61C0(a1, a2, s);
}

__int64 __fastcall sub_4F63B0(__int64 a1, unsigned int *a2)
{
  return a1 + 8LL * *a2;
}

void __fastcall sub_4F63C0(__int64 a1, __int64 a2)
{
  RecoveredSdkText self; // [xsp+8h] [xbp-18h] BYREF

  Recovered_ResultTextConstruct(&self, "CallContextRegister");
  sub_4F53C0(a1, &self);
  Recovered_ResultTextDestroy(&self);
  *(_QWORD *)a1 = ((__int64 *)((__int64*)goff_18F93D8) + 2);
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 64) = 0;
  *(_QWORD *)(a1 + 40) = a1 + 48;
  *(_DWORD *)(a1 + 72) = 1;
  *(_QWORD *)(a1 + 80) = a2;
}

__int64 __fastcall sub_4F6E60(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v4; // x8
  __int64 v5; // x1

  sub_4F47B0(a1, a2, a3);
  v4 = ((__int64*)goff_18F93F0);
  *(_DWORD *)(a1 + 84) = 0;
  *(_QWORD *)a1 = v4 + 2;
  v5 = *(unsigned int *)(a1 + 60);
  return sub_4F48B0(a1, v5);
}

// N5storm2mm14ThreadVariableINS0_5qListINS0_15SecurityContextEEEEE, virtual slot 2
void __fastcall sub_4F7CB0(_QWORD *result)
{
  _BYTE *v1; // x22
  _QWORD *v2; // x20
  _QWORD *v3; // x19

  v1 = (_BYTE *)goff_18F88D8;
  v2 = result;
  v3 = result + 6;
  if ( *(char*)goff_18F88D8 == 0 )
  {
    sub_4EE210(result + 6);
    if ( v2[12] == 0 )
      goto LABEL_6;
    do
LABEL_5:
      sub_4F8040(v2 + 10, (_QWORD *)v2[10]);
    while ( v2[12] != 0 );
    goto LABEL_6;
  }
  if ( result[12] != 0 )
    goto LABEL_5;
LABEL_6:
  if ( *v1 == 0 )
    { sub_4EE230(v3); return; }
  return;
}

char *__fastcall sub_4F8350(char *result, char *s)
{
  __int64 v2; // x8
  char *v4; // x19
  int v5; // w0
  int v6; // w21
  char *v7; // x0

  v2 = *((_QWORD *)result + 11);
  v4 = result;
  if ( v2 != 0 )
  {
    result = (char *)sub_37030(v2 - 4);
    *((_QWORD *)v4 + 11) = 0;
    v4[97] = 0;
  }
  if ( s != nullptr )
  {
    v5 = strlen(s);
    v6 = v5 + 1;
    v7 = (char *)sub_36EA0(v5 + 5, 4u, 0, 1095761920);
    *(_DWORD *)v7 = v6;
    v7 += 4;
    *((_QWORD *)v4 + 11) = v7;
    result = strcpy(v7, s);
    *((_WORD *)v4 + 48) = 256;
    v4[98] = 0;
  }
  return result;
}

__int64 __fastcall sub_4F8690(__int64 a1, char *s)
{
  __int64 v2; // x8
  int v5; // w0
  int v6; // w21
  char *v7; // x0

  v2 = *(_QWORD *)(a1 + 88);
  if ( v2 != 0 )
  {
    sub_37030(v2 - 4);
    *(_QWORD *)(a1 + 88) = 0;
    *(_BYTE *)(a1 + 97) = 0;
  }
  if ( s != nullptr )
  {
    v5 = strlen(s);
    v6 = v5 + 1;
    v7 = (char *)sub_36EA0(v5 + 5, 4u, 0, 1095761920);
    *(_DWORD *)v7 = v6;
    v7 += 4;
    *(_QWORD *)(a1 + 88) = v7;
    strcpy(v7, s);
    *(_WORD *)(a1 + 96) = 256;
    *(_BYTE *)(a1 + 98) = 0;
  }
  return a1;
}

__int64 __fastcall sub_4F99C0(__int64 a1, const char **a2)
{
  const char *v2; // x20
  __int64 v3; // x8
  int v5; // w0
  int v6; // w21
  char *v7; // x0

  v2 = *a2;
  v3 = *(_QWORD *)(a1 + 88);
  if ( v3 != 0 )
  {
    sub_37030(v3 - 4);
    *(_QWORD *)(a1 + 88) = 0;
    *(_BYTE *)(a1 + 97) = 0;
  }
  if ( v2 != nullptr )
  {
    v5 = strlen(v2);
    v6 = v5 + 1;
    v7 = (char *)sub_36EA0(v5 + 5, 4u, 0, 1095761920);
    *(_DWORD *)v7 = v6;
    v7 += 4;
    *(_QWORD *)(a1 + 88) = v7;
    strcpy(v7, v2);
    *(_WORD *)(a1 + 96) = 256;
    *(_BYTE *)(a1 + 98) = 0;
  }
  return a1;
}

__int64 __fastcall sub_4FB070(__int64 a1, __int64 a2)
{
  _BYTE v4[200]; // [xsp+8h] [xbp-D8h] BYREF

  sub_4FAFD0(a2, v4);
  sub_4EC170(a1, v4);
  return a1;
}

__int64 sub_4FC5C0()
{
  _QWORD *v0; // x21
  _QWORD *v1; // x19
  __int64 result; // x0

  v0 = (_QWORD *)sub_36EA0(0x28u, 4u, 0, 1095761920);
  *v0 = 0;
  sub_4EE1B0(v0 + 1, 0x40000000);
  *(__int64*)goff_18F9420 = (__int64)v0;
  v1 = (_QWORD *)sub_36EA0(0x28u, 4u, 0, 1095761920);
  *v1 = 0;
  result = sub_4EE1B0(v1 + 1, 0x40000000);
  qword_19153D0 = (__int64)v1;
  return result;
}

__int64 __fastcall sub_4FCF00(__int64 a1, __int64 a2)
{
  RecoveredSdkText self; // [xsp+8h] [xbp-18h] BYREF

  sub_4EB3D0(&self);
  sub_4EBAE0(
    (int)&self,
    "%08x-%04x-%04x-%04x-%04x%04x%04x",
    *(_DWORD *)a2,
    *(unsigned __int16 *)(a2 + 4),
    *(unsigned __int16 *)(a2 + 6),
    *(unsigned __int16 *)(a2 + 8),
    *(unsigned __int16 *)(a2 + 10),
    *(unsigned __int16 *)(a2 + 12),
    *(_WORD *)(a2 + 14));
  sub_4EC170(a1, self.data);
  Recovered_ResultTextDestroy(&self);
  return a1;
}

_QWORD *__fastcall sub_4FD940(__int64 a1, __int64 a2)
{
  __int64 v4; // x21
  _QWORD *result; // x0
  __int64 v6; // x8
  __int64 v7; // x8

  v4 = a1 + 8;
  result = (_QWORD *)sub_36EA0(0x18u, 4u, 0, 1095761920);
  result[2] = a2;
  result[1] = v4;
  *result = 0;
  v6 = *(_QWORD *)(a1 + 8);
  *result = v6;
  *(_QWORD *)(v6 + 8) = result;
  v7 = *(_QWORD *)(a1 + 24) + 1LL;
  *(_QWORD *)(a1 + 8) = result;
  *(_QWORD *)(a1 + 24) = v7;
  return result;
}

void sub_4FDF50()
{
  __int64 v0; // x19
  RecoveredSdkText self; // [xsp+8h] [xbp-8h] BYREF

  v0 = sub_4EB320(32, &unk_1326E41, 0);
  Recovered_ResultTextConstruct(&self, "ConnectionMapSizeThreshold");
  sub_4F5150(v0, &self, 100000);
  *((__int64*)goff_18F9458) = v0;
  Recovered_ResultTextDestroy(&self);
}

void sub_4FDFC0()
{
  __int64 *v0; // x20
  __int64 v1; // x19

  v0 = ((__int64*)goff_18F9458);
  v1 = *((__int64*)goff_18F9458);
  if ( *((__int64*)goff_18F9458) != 0 )
  {
    sub_4F5220(*((__int64*)goff_18F9458));
    sub_4EB340(v1);
  }
  *v0 = 0;
  return;
}

// N5storm2mm11PRUDPStreamE, virtual slot 33
_Bool __fastcall sub_500DB0(__int64 a1)
{
  _QWORD *v1; // x9
  _QWORD *v2; // x10
  __int64 v3; // x10
  __int64 v4; // x11
  _QWORD *v5; // t1

  v1 = *(_QWORD **)(a1 + 88);
  while ( 1 )
  {
    if ( v1 == (_QWORD *)(a1 + 96) )
      return 1;
    if ( *(_DWORD *)(v1[21] + 152LL) != 0 )
      break;
    v2 = (_QWORD *)v1[1];
    if ( v2 != nullptr )
    {
      do
      {
        v1 = v2;
        v2 = (_QWORD *)*v2;
      }
      while ( v2 != nullptr );
    }
    else
    {
      v3 = (__int64)(v1 + 2);
      if ( *(_QWORD **)v1[2] == v1 )
      {
        v1 = (_QWORD *)v1[2];
      }
      else
      {
        do
        {
          v4 = *(_QWORD *)v3;
          v5 = *(_QWORD **)(*(_QWORD *)v3 + 16LL);
          v3 = *(_QWORD *)v3 + 16LL;
          v1 = v5;
        }
        while ( *v5 != v4 );
      }
    }
  }
  return 0;
}

// N5storm2mm13PRUDPEndPointE, virtual slot 26
__int64 __fastcall sub_502D10(__int64 a1, unsigned int a2, _Bool a3, int a4)
{
  *(_DWORD *)(a1 + 140) = a4;
  if ( a3 )
    return sub_502D30(a1, a2);
  *(_DWORD *)(a1 + 212) = a2;
  return a1;
}

void sub_503CC0()
{
  __int64 *v0; // x20
  __int64 v1; // x19
  __int64 *v3; // x20
  __int64 v4; // x19
  __int64 *v5; // x20
  __int64 v6; // x19

  v0 = ((__int64*)goff_18F9470);
  v1 = *((__int64*)goff_18F9470);
  if ( *((__int64*)goff_18F9470) != 0 )
  {
    sub_4F30C0(*((__int64*)goff_18F9470));
    sub_4EB340(v1);
  }
  *v0 = 0;
  v3 = ((__int64*)goff_18F9488);
  v4 = *((__int64*)goff_18F9488);
  if ( *((__int64*)goff_18F9488) != 0 )
  {
    sub_4F30C0(*((__int64*)goff_18F9488));
    sub_4EB340(v4);
  }
  *v3 = 0;
  v5 = ((__int64*)goff_18F9480);
  v6 = *((__int64*)goff_18F9480);
  if ( *((__int64*)goff_18F9480) != 0 )
  {
    sub_4F5220(*((__int64*)goff_18F9480));
    sub_4EB340(v6);
  }
  *v5 = 0;
  return;
}

__int64 __fastcall sub_5045C0(__int64 a1, _BYTE *a2)
{
  _BYTE src[4]; // [xsp+Ch] [xbp-4h] BYREF

  src[0] = *a2;
  sub_4FBCC0(*(_QWORD *)(a1 + 8), src, 1u, -1);
  return a1;
}

// N5storm2mm13AESEncryptionE, virtual slot 7
__int64 __fastcall sub_504F70(__int64 a1, __int64 a2)
{
  __int64 v4; // x21
  unsigned int v5; // w0

  v4 = sub_505FC0(a2);
  v5 = sub_505FB0(a2);
  return (*(__int64 (__fastcall **)(__int64, __int64, __typeof__(v5)))(*(_QWORD *)a1 + 64LL))(a1, v4, v5);
}

__int64 __fastcall sub_505AE0(__int64 a1, int a2, int a3)
{
  __int64 result; // x0

  *(_QWORD *)a1 = ((__int64 *)((__int64*)goff_18F94A0) + 2);
  result = sub_505D60((_QWORD *)(a1 + 8));
  *(_DWORD *)(a1 + 48) = a2;
  *(_DWORD *)(a1 + 52) = a3;
  return result;
}

__int64 __fastcall sub_5072D0(__int64 a1, char *a2)
{
  if ( a1 + 16 == a2 )
    return 0;
  else
    return *(_QWORD *)(a2 + 40);
}

void sub_507600()
{
  __int64 v0; // x19
  RecoveredSdkText self; // [xsp+8h] [xbp-8h] BYREF

  v0 = sub_4EB320(32, &unk_1326E41, 0);
  Recovered_ResultTextConstruct(&self, "ExponentialBackoffEnabled");
  sub_4F5150(v0, &self, 1);
  *((__int64*)goff_18F9478) = v0;
  Recovered_ResultTextDestroy(&self);
}

void sub_507670()
{
  __int64 *v0; // x20
  __int64 v1; // x19

  v0 = ((__int64*)goff_18F9478);
  v1 = *((__int64*)goff_18F9478);
  if ( *((__int64*)goff_18F9478) != 0 )
  {
    sub_4F5220(*((__int64*)goff_18F9478));
    sub_4EB340(v1);
  }
  *v0 = 0;
  return;
}

__int64 __fastcall sub_507B20(__int64 result)
{
  *(_QWORD *)(result + 88) = 0;
  *(_QWORD *)(result + 80) = 0;
  *(_QWORD *)(result + 64) = 0;
  *(_QWORD *)(result + 72) = result + 80;
  *(_QWORD *)(result + 8) = 0;
  *(_QWORD *)(result + 24) = 0x3E800000014LL;
  *(_QWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 32) = 5000;
  *(_QWORD *)(result + 44) = 0x323F800000LL;
  *(_QWORD *)(result + 36) = 0x3FA0000000000008LL;
  *(_QWORD *)(result + 52) = 0x32000000FALL;
  *(_DWORD *)result = 0;
  *(_WORD *)(result + 60) = 1;
  *(_BYTE *)(result + 62) = 1;
  return result;
}

__int64 __fastcall sub_507B80(__int64 a1)
{
  return sub_507E40(a1 + 72, *(_QWORD *)(a1 + 80));
}

void sub_507D90()
{
  __int64 v0; // x19
  RecoveredSdkText self; // [xsp+8h] [xbp-8h] BYREF

  v0 = sub_4EB320(32, &unk_1326E41, 0);
  Recovered_ResultTextConstruct(&self, "IsKeepAliveInfinite");
  sub_4F5150(v0, &self, 0);
  *((__int64*)goff_18F94B0) = v0;
  Recovered_ResultTextDestroy(&self);
}

void sub_507E00()
{
  __int64 *v0; // x20
  __int64 v1; // x19

  v0 = ((__int64*)goff_18F94B0);
  v1 = *((__int64*)goff_18F94B0);
  if ( *((__int64*)goff_18F94B0) != 0 )
  {
    sub_4F5220(*((__int64*)goff_18F94B0));
    sub_4EB340(v1);
  }
  *v0 = 0;
  return;
}

__int64 __fastcall sub_507EA0(__int64 a1)
{
  sub_508970(a1 + 24, *(_QWORD *)(a1 + 32));
  return sub_5089B0(a1, *(_QWORD *)(a1 + 8));
}

bool __fastcall sub_508A90(__int64 a1)
{
  __int64 v1; // x0
  __int64 v2; // t1
  __int64 v3; // x19
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v2 = *(_QWORD *)(a1 + 16);
  v1 = a1 + 16;
  if ( v2 == 0 )
    return false;
  v3 = sub_4EF460(v1);
  v5 = sub_4EF420(v3);
  return v3 < sub_4EF450(&v5);
}

__int64 __fastcall sub_508CC0(__int64 a1, __int64 a2, char a3, char a4, __int64 a5)
{
  __int64 v9; // x1
  __int64 result; // x0

  if ( a5 != 0 )
    v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a5 + 16LL))(a5);
  else
    v9 = 0;
  sub_5098B0(a1, v9);
  *(_QWORD *)a1 = ((__int64 *)((__int64*)goff_18F94B8) + 2);
  sub_5089F0(a1 + 240);
  *(_QWORD *)(a1 + 280) = 0;
  *(_WORD *)(a1 + 272) = 0;
  *(_BYTE *)(a1 + 34) = a4 & 0xF8 | a3 & 7;
  result = sub_4EF440(a1 + 280, 0LL);
  *(_QWORD *)(a1 + 264) = a2;
  *(_QWORD *)(a1 + 288) = 0;
  return result;
}

__int64 sub_5093F0()
{
  _QWORD *v0; // x19
  __int64 result; // x0

  v0 = (_QWORD *)sub_36EA0(0x28u, 4u, 0, 1095761920);
  *v0 = 0;
  result = sub_4EE1B0(v0 + 1, 0x40000000);
  qword_1915428 = (__int64)v0;
  return result;
}

__int64 __fastcall sub_509550(_QWORD *a1)
{
  __int64 result; // x0

  *a1 = ((__int64 *)((__int64*)goff_18F94C0) + 2);
  sub_4EE1B0(a1 + 2, 0x20000000);
  sub_4F2FA0(a1 + 6, "Compression", 0, "Time to compress a buffer before sending on PRUDP.");
  result = sub_4F2FA0(a1 + 25, "Decompression", 0, "Time to decompress a buffer received from PRUDP.");
  a1[1] = 0;
  return result;
}

__int64 __fastcall sub_509620(_DWORD *a1, __int64 a2, __int64 a3)
{
  _BYTE *v3; // x24
  _DWORD *v7; // x19
  unsigned int v8; // w22

  v3 = (_BYTE *)goff_18F88D8;
  v7 = a1 + 4;
  if ( *(char*)goff_18F88D8 == 0 )
    sub_4EE210(a1 + 4);
  v8 = (*(unsigned int (__fastcall **)(_DWORD *, __int64, __int64))(*(_QWORD *)a1 + 16LL))(a1, a2, a3);
  a1[2] += sub_4FC1F0(a2);
  a1[3] += sub_4FC1F0(a3);
  if ( *v3 == 0 )
    sub_4EE230(v7);
  return v8;
}

void sub_509790()
{
  __int64 v0; // x20
  __int64 v1; // x19
  RecoveredSdkText self; // [xsp+8h] [xbp-18h] BYREF

  v0 = sub_4EB320(32, &unk_1326E41, 0);
  Recovered_ResultTextConstruct(&self, "UseFlatCompression");
  sub_4F5150(v0, &self, 0);
  *((__int64*)goff_18F94C8) = v0;
  Recovered_ResultTextDestroy(&self);
  v1 = sub_4EB320(32, &unk_1326E41, 0);
  Recovered_ResultTextConstruct(&self, "MaxDecompressedSize");
  sub_4F5150(v1, &self, 10485760);
  *((__int64*)goff_18F94D0) = v1;
  Recovered_ResultTextDestroy(&self);
}

void sub_509850()
{
  __int64 *v0; // x20
  __int64 v1; // x19
  __int64 *v3; // x20
  __int64 v4; // x19

  v0 = ((__int64*)goff_18F94C8);
  v1 = *((__int64*)goff_18F94C8);
  if ( *((__int64*)goff_18F94C8) != 0 )
  {
    sub_4F5220(*((__int64*)goff_18F94C8));
    sub_4EB340(v1);
  }
  *v0 = 0;
  v3 = ((__int64*)goff_18F94D0);
  v4 = *((__int64*)goff_18F94D0);
  if ( *((__int64*)goff_18F94D0) != 0 )
  {
    sub_4F5220(*((__int64*)goff_18F94D0));
    sub_4EB340(v4);
  }
  *v3 = 0;
  return;
}

int __fastcall sub_509A00(__int64 a1)
{
  if ( (sub_50B8E0(a1)) != 0 )
    return 45;
  else
    return 29;
}

__int64 sub_509EC0()
{
  __int64 *v0; // x20
  char *v1; // x21
  _DWORD *v2; // x19
  unsigned __int64 v3; // x22
  void (__fastcall ***v4)(_QWORD); // x0
  void (__fastcall ***v5)(_QWORD); // x23
  void (__fastcall **v6)(_QWORD); // t1
  __int64 result; // x0

  v0 = ((__int64*)goff_18F94E0);
  v1 = *((__int64*)goff_18F94E0);
  v2 = (_DWORD *)(*((__int64*)goff_18F94E0) - 4);
  if ( *v2 != 0 )
  {
    v3 = 0;
    v4 = (void (__fastcall ***)(_QWORD))*((__int64*)goff_18F94E0);
    v5 = (void (__fastcall ***)(_QWORD))*((__int64*)goff_18F94E0);
    do
    {
      v6 = *v5;
      v5 += 27;
      (*v6)(v4);
      ++v3;
      v4 = v5;
    }
    while ( v3 < *(unsigned int *)(v1 - 4) );
  }
  result = sub_37030(v2);
  *v0 = 0;
  return result;
}

__int64 __fastcall sub_50B700(__int64 a1, __int64 a2)
{
  _BYTE *v2; // x22
  __int64 v4; // x21
  __int64 v5; // x19
  __int64 result; // x0

  v2 = (_BYTE *)goff_18F88D8;
  v4 = a1 + 80;
  v5 = a1 + 88;
  if ( *(char*)goff_18F88D8 == 0 )
    sub_4EE210(a1 + 88);
  result = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)((__int64*)goff_18F9508) + 40LL))(
             *((__int64*)goff_18F9508),
             v4,
             a2);
  if ( *v2 == 0 )
    return sub_4EE230(v5);
  return result;
}

__int64 sub_50BA60()
{
  __int64 *v0; // x19

  v0 = goff_18F9510;
  sub_515C10(goff_18F9510);
  return sub_250((__int64)goff_18F9538, (__int64)v0, (__int64)((void*)hoff_17C1000));
}

void sub_50BBB0()
{
  _QWORD *v0; // x20
  __int64 v1; // x19
  _QWORD *v3; // x20
  __int64 v4; // x19
  _QWORD *v5; // x20
  __int64 v6; // x19

  v0 = (_QWORD *)((__int64*)goff_18F9550);
  v1 = *(_QWORD *)((__int64*)goff_18F9550);
  if ( *(_QWORD *)((__int64*)goff_18F9550) != 0 )
  {
    sub_4F5220(*(_QWORD *)((__int64*)goff_18F9550));
    sub_4EB340(v1);
  }
  *v0 = 0;
  v3 = (_QWORD *)((__int64*)goff_18F9548);
  v4 = *(_QWORD *)((__int64*)goff_18F9548);
  if ( *(_QWORD *)((__int64*)goff_18F9548) != 0 )
  {
    sub_4F5220(*(_QWORD *)((__int64*)goff_18F9548));
    sub_4EB340(v4);
  }
  *v3 = 0;
  v5 = (_QWORD *)((__int64*)goff_18F9540);
  v6 = *(_QWORD *)((__int64*)goff_18F9540);
  if ( *(_QWORD *)((__int64*)goff_18F9540) != 0 )
  {
    sub_4F5220(*(_QWORD *)((__int64*)goff_18F9540));
    sub_4EB340(v6);
  }
  *v5 = 0;
  return;
}

unsigned __int64 __fastcall sub_50EEF0(__int64 a1, int a2, __int64 a3)
{
  return sub_50EF00(a1, a3, a2);
}

// N5storm2mm7CounterE, virtual slot 2
__int64 __fastcall sub_50F5C0(__int64 result, _DWORD *a2)
{
  __int64 v2; // x19
  _BYTE *v3; // x22
  __int64 v5; // x20

  v2 = *(_QWORD *)((__int64*)goff_18F95B8);
  v3 = (_BYTE *)goff_18F88D8;
  v5 = result;
  if ( *(char*)goff_18F88D8 == 0 )
    result = sub_4EE210(*(_QWORD *)((__int64*)goff_18F95B8));
  *a2 = *(_DWORD *)(v5 + 28);
  *(_DWORD *)(v5 + 28) = 0;
  if ( *v3 == 0 )
    return sub_4EE230(v2);
  return result;
}

__int64 sub_50F640()
{
  _QWORD *v0; // x0
  __int64 v1; // x19
  __int64 result; // x0

  v0 = (_QWORD *)sub_4EB320(24, &unk_1326E41, 0);
  v0[1] = 0;
  v0[2] = 0;
  *v0 = 0;
  *(_QWORD *)((__int64*)goff_18F95B0) = v0;
  v1 = sub_4EB320(32, &unk_1326E41, 0);
  result = sub_4EE1B0(v1, 0x40000000);
  *(_QWORD *)((__int64*)goff_18F95B8) = v1;
  return result;
}

void sub_50F6B0()
{
  _QWORD *v0; // x20
  __int64 *v1; // x19
  __int64 v2; // x0
  _QWORD *v3; // x21
  __int64 v4; // x19

  v0 = (_QWORD *)((__int64*)goff_18F95B0);
  v1 = *(__int64 **)((__int64*)goff_18F95B0);
  if ( *(_QWORD *)((__int64*)goff_18F95B0) != 0 )
  {
    v2 = *v1;
    if ( *v1 != 0 )
    {
      v1[1] = v2;
      sub_37030(v2);
    }
    sub_4EB340(v1);
  }
  v3 = (_QWORD *)((__int64*)goff_18F95B8);
  v4 = *(_QWORD *)((__int64*)goff_18F95B8);
  if ( *(_QWORD *)((__int64*)goff_18F95B8) != 0 )
  {
    sub_4EE1E0(*(_QWORD *)((__int64*)goff_18F95B8));
    sub_4EB340(v4);
  }
  *v0 = 0;
  *v3 = 0;
}

__int64 __fastcall sub_50F7A0(_QWORD *a1)
{
  __int64 v2; // x20
  __int64 v3; // x0
  __int64 v4; // x20
  __int64 v5; // x0

  sub_511800(a1);
  v2 = a1[21];
  if ( v2 != 0 )
  {
    sub_510F10(a1[22], a1[21], 1000);
    v3 = *(_QWORD *)(v2 + 40);
    if ( v3 != 0 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 24LL))(v3);
    sub_510D80(a1[22], v2);
  }
  v4 = a1[20];
  if ( v4 != 0 )
  {
    sub_510F10(a1[22], a1[20], 1000);
    v5 = *(_QWORD *)(v4 + 40);
    if ( v5 != 0 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 24LL))(v5);
    sub_510D80(a1[22], v4);
  }
  sub_50F850((__int64)(a1 + 52));
  sub_50F850((__int64)(a1 + 40));
  nullsub_1576((char *)a1 + 188);
  return sub_511790(a1);
}

void sub_50FDA0(__int64 result, unsigned int a2)
{
  __int64 v2; // x19
  __int64 v4; // x21
  __int64 v5; // x20
  unsigned int v6; // w0

  if ( *(_BYTE *)(result + 185) == 0 )
  {
    v2 = result;
    v4 = sub_4FB800(32);
    sub_4FB9D0(v4, a2);
    *(_BYTE *)(v2 + 185) = 1;
    *(_DWORD *)(*(_QWORD *)(v2 + 160) + 12LL) = 0;
    *(_QWORD *)(*(_QWORD *)(v2 + 160) + 40LL) = v4;
    v5 = sub_4FC1E0(v4);
    v6 = sub_4FC220(v4);
    { sub_511C20(v2, v5, v6, v2 + 188, *(_QWORD *)(v2 + 160)); return; }
  }
  return;
}

// N5storm2mm10TimedQueueINS0_15NetworkEmulator13NetworkPacketEEE, virtual slot 0
void __fastcall sub_510200(_QWORD *result)
{
  _QWORD *v1; // x19
  __int64 v2; // x20

  *result = ((char *)((__int64*)goff_18F95C0) + 16);
  if ( result[3] != 0 )
  {
    v1 = result;
    do
    {
      v2 = v1[2];
      *(_QWORD *)(*(_QWORD *)v2 + 8LL) = *(_QWORD *)(v2 + 8);
      **(_QWORD **)(v2 + 8) = *(_QWORD *)v2;
      --v1[3];
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v2 + 16) + 24LL))(*(_QWORD *)(v2 + 16));
      nullsub_1576(v2 + 24);
      sub_37030(v2);
    }
    while ( v1[3] != 0 );
  }
  return;
}

// N5storm2mm10TimedQueueINS0_15NetworkEmulator13NetworkPacketEEE, virtual slot 1
__int64 __fastcall sub_510280(_QWORD *a1)
{
  __int64 v2; // x20

  *a1 = ((char *)((__int64*)goff_18F95C0) + 16);
  while ( a1[3] != 0 )
  {
    v2 = a1[2];
    *(_QWORD *)(*(_QWORD *)v2 + 8LL) = *(_QWORD *)(v2 + 8);
    **(_QWORD **)(v2 + 8) = *(_QWORD *)v2;
    --a1[3];
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v2 + 16) + 24LL))(*(_QWORD *)(v2 + 16));
    nullsub_1576(v2 + 24);
    sub_37030(v2);
  }
  return sub_4EB340(a1);
}

// N5storm2mm12VirtualModemINS0_15NetworkEmulator13NetworkPacketEEE, virtual slot 1
__int64 __fastcall sub_510A70(_QWORD *a1)
{
  __int64 v2; // x20

  *a1 = ((char *)((__int64*)goff_18F95C0) + 16);
  while ( a1[3] != 0 )
  {
    v2 = a1[2];
    *(_QWORD *)(*(_QWORD *)v2 + 8LL) = *(_QWORD *)(v2 + 8);
    **(_QWORD **)(v2 + 8) = *(_QWORD *)v2;
    --a1[3];
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v2 + 16) + 24LL))(*(_QWORD *)(v2 + 16));
    nullsub_1576(v2 + 24);
    sub_37030(v2);
  }
  return sub_4EB340(a1);
}

// N5storm2mm15VirtualInternetINS0_15NetworkEmulator13NetworkPacketEEE, virtual slot 1
__int64 __fastcall sub_510AF0(_QWORD *a1)
{
  __int64 v2; // x20

  *a1 = ((char *)((__int64*)goff_18F95C0) + 16);
  while ( a1[3] != 0 )
  {
    v2 = a1[2];
    *(_QWORD *)(*(_QWORD *)v2 + 8LL) = *(_QWORD *)(v2 + 8);
    **(_QWORD **)(v2 + 8) = *(_QWORD *)v2;
    --a1[3];
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v2 + 16) + 24LL))(*(_QWORD *)(v2 + 16));
    nullsub_1576(v2 + 24);
    sub_37030(v2);
  }
  return sub_4EB340(a1);
}

__int64 __fastcall sub_511730(__int64 a1, int a2)
{
  __int64 result; // x0

  sub_4FABF0(a1 + 4);
  *(_DWORD *)a1 = 3;
  *(_DWORD *)(a1 + 140) = a2;
  *(_DWORD *)(a1 + 144) = 1000;
  *(_BYTE *)(a1 + 136) = 1;
  result = (__int64)*(__int64*)goff_18F9518;
  if ( *(__int64*)goff_18F9518 != nullptr )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 16LL))(result);
  *(_QWORD *)(a1 + 152) = result;
  return result;
}

// N5storm2mm20BerkeleySocketDriverE, virtual slot 2
__int64 sub_512570()
{
  __int64 v0; // x0
  __int64 v1; // x19

  v0 = sub_4EB320(48, &unk_1326E41, 0);
  *(_QWORD *)v0 = ((char *)((__int64*)goff_18F95E0) + 16);
  v1 = v0;
  *(_DWORD *)(v0 + 8) = -1;
  sub_4EE1B0(v0 + 16, 0);
  return v1;
}

__int64 __fastcall sub_512B40(__int64 a1)
{
  __int64 v2; // x19

  v2 = a1 + 8;
  sub_50EA00(a1 + 2192);
  sub_50EA00(a1 + 2024);
  sub_50EA00(a1 + 1856);
  sub_50EA00(a1 + 1688);
  sub_50EA00(a1 + 1520);
  sub_50EA00(a1 + 1352);
  sub_50EA00(a1 + 1184);
  sub_50EA00(a1 + 1016);
  sub_50EA00(a1 + 848);
  sub_50EA00(a1 + 680);
  sub_50EA00(a1 + 512);
  sub_50EA00(a1 + 344);
  sub_50EA00(a1 + 176);
  return sub_50EA00(v2);
}

__int64 __fastcall sub_512C40(__int64 result, int a2, unsigned int a3)
{
  __int64 v4; // x20
  __int64 v5; // x0

  if ( a2 <= 13 )
  {
    v4 = result + 168LL * (unsigned int)a2 + 8;
    v5 = sub_4EF420(result);
    return sub_50EB70(v4, a3, v5);
  }
  return result;
}

__int64 sub_513600()
{
  _QWORD *v0; // x19
  __int64 result; // x0

  v0 = (_QWORD *)sub_36EA0(0x28u, 4u, 0, 1095761920);
  *v0 = 0;
  result = sub_4EE1B0(v0 + 1, 0x40000000);
  qword_19154A8 = (__int64)v0;
  return result;
}

// N5storm2mm20PseudoGlobalVariableItEE, virtual slot 0
__int64 __fastcall sub_513D60(__int64 a1)
{
  *(_QWORD *)a1 = ((char *)((__int64*)goff_18F9608) + 16);
  sub_4F03B0(goff_18F92F0, a1);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 24LL))(a1);
  return nullsub_1627(a1);
}

// N5storm2mm20PseudoGlobalVariableItEE, virtual slot 1
__int64 __fastcall sub_513DB0(__int64 a1)
{
  *(_QWORD *)a1 = ((char *)((__int64*)goff_18F9608) + 16);
  sub_4F03B0(goff_18F92F0, a1);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 24LL))(a1);
  nullsub_1627(a1);
  return sub_4EB340(a1);
}

void sub_514F60(char *result)
{
  char *v1; // x8
  __int64 v2; // x9
  __int64 v3; // x20
  char *v4; // x19
  __int64 v5; // x21
  __int64 v6; // x22

  v1 = *(_QWORD *)(result + 8);
  *(_DWORD *)result = 0;
  if ( v1 != 0 )
  {
    v3 = v1 - 8;
    v2 = *(_QWORD *)(v1 - 8);
    v4 = result;
    if ( v2 != 0 )
    {
      v5 = 24 * v2;
      v6 = v1 - 24;
      do
      {
        sub_5150D0(v6 + v5);
        v5 -= 24;
      }
      while ( v5 != 0 );
    }
    sub_4EB350(v3);
    *(_QWORD *)(v4 + 8) = 0;
  }
  return;
}

__int64 __fastcall sub_517350(__int64 a1, int a2, int a3)
{
  __int64 result; // x0

  sub_5174F0();
  *(_QWORD *)a1 = ((char *)((__int64*)goff_18F9658) + 16);
  result = sub_505D60(a1 + 16);
  *(_DWORD *)(a1 + 56) = a2;
  *(_DWORD *)(a1 + 60) = a3;
  return result;
}

__int64 __fastcall sub_518910(__int64 a1)
{
  __int64 v1; // x8
  __int64 v3; // x0
  __int64 v4; // x1
  __int64 v5; // x19

  v1 = ((char *)((__int64*)goff_18F9668) + 16);
  *(_QWORD *)a1 = ((char *)((__int64*)goff_18F9668) + 16);
  v3 = *(_QWORD *)(a1 + 8);
  if ( v3 != 0 )
  {
    v4 = *(unsigned int *)(a1 + 144);
    if ( (_DWORD)v4 != 0 )
    {
      (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v3 + 120LL))(v3, v4, a1);
      v1 = *(_QWORD *)a1;
    }
  }
  *(_DWORD *)(a1 + 144) = 0;
  (*(void (__fastcall **)(__int64, int))(v1 + 160))(a1, 0);
  v5 = a1 + 16;
  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)((__int64*)goff_18F9508) + 32LL))(*((__int64*)goff_18F9508), v5);
  return sub_4F8720(v5);
}

__int64 __fastcall sub_5189A0(__int64 a1, unsigned int a2)
{
  __int64 result; // x0
  __int64 v5; // x1

  result = *(_QWORD *)(a1 + 8);
  if ( result != 0 )
  {
    v5 = *(unsigned int *)(a1 + 144);
    if ( (_DWORD)v5 != 0 )
      result = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)result + 120LL))(result, v5, a1);
    if ( a2 != 0 )
      result = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(a1 + 8) + 112LL))(
                 *(_QWORD *)(a1 + 8),
                 a2,
                 a1);
  }
  *(_DWORD *)(a1 + 144) = a2;
  return result;
}

// N5storm2mm17WebSocketEndPointE, virtual slot 20
__int64 __fastcall sub_518AE0(__int64 a1, unsigned int a2)
{
  __int64 result; // x0
  __int64 v5; // x1

  result = *(_QWORD *)(a1 + 8);
  if ( result != 0 )
  {
    v5 = *(unsigned int *)(a1 + 148);
    if ( (_DWORD)v5 != 0 )
      result = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)result + 96LL))(result, v5, a1);
    if ( a2 != 0 )
      result = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(a1 + 8) + 88LL))(
                 *(_QWORD *)(a1 + 8),
                 a2,
                 a1);
  }
  *(_DWORD *)(a1 + 148) = a2;
  return result;
}

void sub_518FA0()
{
  _QWORD *v0; // x20
  __int64 v1; // x19

  v0 = (_QWORD *)((__int64*)goff_18F9678);
  v1 = *(_QWORD *)((__int64*)goff_18F9678);
  if ( *(_QWORD *)((__int64*)goff_18F9678) != 0 )
  {
    sub_518FE0(v1 + 8, *(_QWORD *)(v1 + 16));
    sub_4EB340(v1);
  }
  *v0 = 0;
  return;
}

__int64 sub_5191F0()
{
  __int64 v0; // x19
  __int64 result; // x0

  v0 = sub_4EB320(32, &unk_1326E41, 0);
  result = sub_4EE1B0(v0, 0x40000000);
  *(_QWORD *)((__int64*)goff_18F9680) = v0;
  return result;
}

void sub_519240()
{
  _QWORD *v0; // x20
  __int64 v1; // x19

  v0 = (_QWORD *)((__int64*)goff_18F9680);
  v1 = *(_QWORD *)((__int64*)goff_18F9680);
  if ( *(_QWORD *)((__int64*)goff_18F9680) != 0 )
  {
    sub_4EE1E0(*(_QWORD *)((__int64*)goff_18F9680));
    sub_4EB340(v1);
  }
  *v0 = 0;
  return;
}

void __fastcall sub_5192B0(RecoveredSdkText *a1)
{
  RecoveredSdkText *v1; // x20
  char *data; // x23
  RecoveredSdkText *v4; // x22
  __int64 v5; // x21
  char *v6; // x8
  __int64 v7; // x8
  __int64 v8; // x9
  char *v9; // t1

  v1 = a1 + 2;
  data = a1[2].data;
  v4 = a1 + 3;
  while ( data != (char *)v4 )
  {
    v5 = *((_QWORD *)data + 5);
    if ( v5 != 0 )
    {
      sub_5190B0(v5 + 48);
      sub_5190B0(v5 + 8);
      sub_4EB340(v5);
    }
    v6 = *((char **)data + 1);
    if ( v6 != nullptr )
    {
      do
      {
        data = v6;
        v6 = *(char **)v6;
      }
      while ( v6 != nullptr );
    }
    else
    {
      v7 = (__int64)(data + 16);
      if ( **((char ***)data + 2) == data )
      {
        data = *((char **)data + 2);
      }
      else
      {
        do
        {
          v8 = *(_QWORD *)v7;
          v9 = *(char **)(*(_QWORD *)v7 + 16LL);
          v7 = *(_QWORD *)v7 + 16LL;
          data = v9;
        }
        while ( *(_QWORD *)v9 != v8 );
      }
    }
  }
  sub_519620(v1, a1[3].data);
  a1[3].data = nullptr;
  a1[2].data = (char *)v4;
  a1[4].data = nullptr;
  sub_519620(v1, 0LL);
  Recovered_ResultTextDestroy(a1 + 1);
}

__int64 __fastcall sub_519B50(__int64 a1, __int64 a2)
{
  __int64 v4; // x21
  __int64 v5; // x2

  v4 = sub_4FC1E0(*(_QWORD *)(a2 + 8)) + 4;
  v5 = (unsigned int)sub_4FC1F0(*(_QWORD *)(a2 + 8)) - 4;
  return sub_504040(a1, v4, v5);
}

__int64 sub_519BA0()
{
  _QWORD *v0; // x19
  __int64 result; // x0

  v0 = (_QWORD *)sub_36EA0(0x28u, 4u, 0, 1095761920);
  *v0 = 0;
  result = sub_4EE1B0(v0 + 1, 0x40000000);
  qword_1915508 = (__int64)v0;
  return result;
}

__int64 __fastcall sub_519E40(__int64 result)
{
  unsigned int v1; // w9
  unsigned int v2; // w9
  __int64 *v3; // x20
  __int64 v4; // x19
  __int64 *v5; // x20
  __int64 v6; // x19
  __int64 *v7; // x20
  __int64 v8; // x19
  unsigned int v9; // w9
  unsigned int v10; // w9
  __int64 *v11; // x19

  if ( (result & 1) != 0 )
  {
    v2 = __atomic_sub_fetch((unsigned int *)&dword_1915530, 1, 5);
    if ( v2 == 0 )
    {
      v3 = ((__int64*)goff_18F96A0);
      v4 = *((__int64*)goff_18F96A0);
      if ( *((__int64*)goff_18F96A0) != 0 )
      {
        sub_50EA00(*((__int64*)goff_18F96A0));
        result = sub_4EB340(v4);
      }
      *v3 = 0;
      v5 = ((__int64*)goff_18F96A8);
      v6 = *((__int64*)goff_18F96A8);
      if ( *((__int64*)goff_18F96A8) != 0 )
      {
        sub_50EA00(*((__int64*)goff_18F96A8));
        result = sub_4EB340(v6);
      }
      *v5 = 0;
      v7 = ((__int64*)goff_18F96B0);
      v8 = *((__int64*)goff_18F96B0);
      if ( *((__int64*)goff_18F96B0) != 0 )
      {
        sub_50EA00(*((__int64*)goff_18F96B0));
        result = sub_4EB340(v8);
      }
      *v7 = 0;
    }
  }
  v10 = __atomic_sub_fetch((unsigned int *)&dword_1915534, 1, 5);
  if ( v10 == 0 )
  {
    v11 = ((__int64*)goff_18F96C0);
    result = *((__int64*)goff_18F96C0);
    if ( *((__int64*)goff_18F96C0) != 0 )
      result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 8LL))(result);
    *v11 = 0;
  }
  return result;
}

__int64 __fastcall sub_519FF0(_QWORD *a1)
{
  __int64 v2; // x21
  __int64 v3; // x20
  __int64 result; // x0

  *a1 = ((__int64 *)((__int64*)goff_18F96C8) + 2);
  v2 = sub_4EB320(8, &unk_1326E41, 0);
  sub_51A630();
  a1[1] = v2;
  v3 = sub_4EB320(48, &unk_1326E41, 0);
  result = sub_51A700(v3);
  a1[2] = v3;
  a1[3] = 0;
  return result;
}

// N5storm2mm17ConnectionManagerE, virtual slot 0
__int64 __fastcall sub_51B2E0(_QWORD *a1)
{
  *a1 = ((char *)((__int64*)goff_18F9708) + 16);
  sub_4FD720(a1 + 11);
  sub_4F5410(a1 + 2);
  return nullsub_1682(a1);
}

// N5storm2mm17ConnectionManagerE, virtual slot 1
__int64 __fastcall sub_51B330(_QWORD *a1)
{
  *a1 = ((char *)((__int64*)goff_18F9708) + 16);
  sub_4FD720(a1 + 11);
  sub_4F5410(a1 + 2);
  nullsub_1682(a1);
  return sub_4EB340(a1);
}

__int64 __fastcall sub_51D810(__int64 result, __int64 a2)
{
  __int64 v2; // x22
  __int64 v3; // x21
  __int64 i; // x19
  int v6; // w8
  _QWORD *v7; // x0

  v2 = *(_QWORD *)(result + 16);
  v3 = result + 8;
  for ( i = result; v2 != v3; v2 = *(_QWORD *)(v2 + 8) )
  {
    result = *(_QWORD *)(v2 + 16);
    v6 = *(_DWORD *)(result + 8);
    if ( v6 >= 1 )
    {
      if ( v6 > 1024 )
        break;
      result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)result + 16LL))(result, a2);
    }
  }
  if ( *(_BYTE *)(i + 56) != 0 )
  {
    v7 = *(_QWORD **)(i + 32);
    *(_QWORD *)(*v7 + 8LL) = v7[1];
    *(_QWORD *)v7[1] = *v7;
    --*(_QWORD *)(i + 48);
    return sub_37030(v7);
  }
  return result;
}

__int64 sub_51E790()
{
  __int64 v0; // x19
  __int64 result; // x0

  v0 = sub_4EB320(32, &unk_1326E41, 0);
  result = sub_4EE1B0(v0, 0x40000000);
  *(__int64*)goff_18F97D8 = v0;
  return result;
}

void sub_51E7E0()
{
  __int64 *v0; // x20
  __int64 v1; // x19
  __int64 *v3; // x19

  v0 = goff_18F97D8;
  v1 = *(__int64*)goff_18F97D8;
  if ( *(__int64*)goff_18F97D8 != 0 )
  {
    sub_4EE1E0(*(__int64*)goff_18F97D8);
    sub_4EB340(v1);
    *v0 = 0;
  }
  v3 = ((__int64*)goff_18F97E8);
  if ( *((__int64*)goff_18F97E8) != 0 )
    sub_37030(*((__int64*)goff_18F97E8) - 4);
  *v3 = 0;
  return;
}

__int64 __fastcall sub_51EF60(__int64 a1, int a2, __int64 a3)
{
  __int64 v4; // x0
  __int64 v7; // x22

  v4 = *(_QWORD *)(a1 + 208);
  if ( v4 != 0 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 24LL))(v4);
    *(_QWORD *)(a1 + 208) = 0;
  }
  v7 = sub_4EB320(80, &unk_1326E41, 0);
  sub_520530(v7, a2, a3);
  *(_QWORD *)(a1 + 208) = v7;
  return v7;
}

__int64 sub_51F770()
{
  __int64 v0; // x19
  _BYTE v2[64]; // [xsp+0h] [xbp-50h] BYREF

  v0 = sub_4EB320(152, &unk_1326E41, 0);
  sub_51D650(v2, 0);
  sub_51F7E0(v0, (__int64)v2);
  *((__int64*)goff_18F9800) = v0;
  sub_51D670(v2);
  return sub_520840();
}

__int64 sub_51F8F0()
{
  __int64 *v0; // x19
  __int64 result; // x0

  sub_5208B0();
  v0 = ((__int64*)goff_18F9800);
  result = *((__int64*)goff_18F9800);
  if ( *((__int64*)goff_18F9800) != 0 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 8LL))(result);
  *v0 = 0;
  return result;
}

// N5storm2mm20PseudoGlobalVariableINS0_16OperationManagerEEE, virtual slot 0
__int64 __fastcall sub_51FF00(__int64 a1)
{
  __int64 v2; // x20

  *(_QWORD *)a1 = ((__int64 *)((__int64*)goff_18F9808) + 2);
  v2 = a1 + 88;
  sub_4F03B0(goff_18F92F0, a1);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 24LL))(a1);
  sub_51D670(v2);
  sub_51D670(a1 + 24);
  return nullsub_1627(a1);
}

// N5storm2mm20PseudoGlobalVariableINS0_16OperationManagerEEE, virtual slot 1
__int64 __fastcall sub_51FF70(__int64 a1)
{
  __int64 v2; // x20

  *(_QWORD *)a1 = ((__int64 *)((__int64*)goff_18F9808) + 2);
  v2 = a1 + 88;
  sub_4F03B0(goff_18F92F0, a1);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 24LL))(a1);
  sub_51D670(v2);
  sub_51D670(a1 + 24);
  nullsub_1627(a1);
  return sub_4EB340(a1);
}

void __fastcall sub_520C60(__int64 a1, __int64 a2)
{
  RecoveredSdkText self; // [xsp+8h] [xbp-18h] BYREF
  RecoveredSdkText v4; // [xsp+0h] [xbp-20h] BYREF

  sub_4F8660(a2, a1 + 48);
  if ( *(_BYTE *)(a1 + 256) != 0 )
  {
    Recovered_ResultTextConstruct(&self, "redirected");
    Recovered_ResultTextConstruct(&v4, "true");
    sub_4F9AC0(a2, &self, &v4, 0);
    Recovered_ResultTextDestroy(&v4);
    Recovered_ResultTextDestroy(&self);
  }
}

__int64 __fastcall sub_5211C0(_QWORD *a1, char *a2)
{
  __int64 result; // x0

  (*(void (__fastcall **)(_QWORD *))(*a1 + 72LL))(a1);
  result = a1[1];
  if ( result != a2 )
  {
    if ( a2 != 0 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 16LL))(a2);
      result = a1[1];
    }
    a1[1] = a2;
    if ( result != 0 )
      return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 24LL))(result);
  }
  return result;
}

// N5storm2mm22IP2LocationAdminClientE, virtual slot 6
int __fastcall sub_521240(__int64 a1)
{
  __int64 v2; // x0
  __int64 v4; // x0

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 != 0 && *(_BYTE *)(a1 + 16) == 0 && (v4 = sub_520750(v2)) != 0 )
    return (*(int (__fastcall **)(__int64))(*(_QWORD *)v4 + 48LL))(v4);
  else
    return 0;
}

// N5storm2mm22IP2LocationAdminClientE, virtual slot 7
int __fastcall sub_521280(__int64 a1)
{
  __int64 v2; // x0
  __int64 v4; // x0

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 != 0 && *(_BYTE *)(a1 + 16) == 0 && (v4 = sub_520750(v2)) != 0 )
    return (*(int (__fastcall **)(__int64))(*(_QWORD *)v4 + 24LL))(v4);
  else
    return 0;
}

void __fastcall sub_521350(__int64 a1)
{
  __int64 v2; // x0
  _QWORD *v3; // x21
  _QWORD *v4; // x20
  RecoveredSdkText self; // [xsp+8h] [xbp-18h] BYREF

  sub_4F49B0();
  *(_QWORD *)a1 = ((char *)((__int64*)goff_18F9850) + 16);
  sub_4F42C0(a1 + 24, 11);
  *(_QWORD *)(a1 + 72) = 0;
  *(_QWORD *)(a1 + 80) = 0;
  *(_QWORD *)(a1 + 64) = a1 + 72;
  v2 = sub_4EFE60(a1 + 24, a1);
  sub_4F4D20(v2);
  v3 = (_QWORD *)sub_4EB320(56, &unk_1326E41, 0);
  sub_521C40(v3);
  *(_QWORD *)(a1 + 16) = v3;
  v4 = (_QWORD *)sub_4EB320(224, &unk_1326E41, 0);
  sub_5292E0(v4);
  *(_QWORD *)(a1 + 56) = v4;
  sub_52FFF0(v4, 10);
  Recovered_ResultTextConstruct(&self, "NotificationProtocol");
  sub_521430(a1, &self, *(char **)(a1 + 56));
  Recovered_ResultTextDestroy(&self);
}

// N5storm2mm12RVClientCoreE, virtual slot 0
__int64 __fastcall sub_5215E0(_QWORD *a1)
{
  __int64 v2; // x0
  __int64 v3; // x0

  *a1 = ((char *)((__int64*)goff_18F9850) + 16);
  v2 = a1[2];
  if ( v2 != 0 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  v3 = a1[7];
  if ( v3 != 0 )
    v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  sub_4F4F60(v3);
  sub_521AD0(a1 + 8, a1[9]);
  sub_4F4330((__int64)(a1 + 3));
  return sub_4F49F0((__int64)a1);
}

// N5storm2mm12RVClientCoreE, virtual slot 1
__int64 __fastcall sub_521650(_QWORD *a1)
{
  __int64 v2; // x0
  __int64 v3; // x0

  *a1 = ((char *)((__int64*)goff_18F9850) + 16);
  v2 = a1[2];
  if ( v2 != 0 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  v3 = a1[7];
  if ( v3 != 0 )
    v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  sub_4F4F60(v3);
  sub_521AD0(a1 + 8, a1[9]);
  sub_4F4330((__int64)(a1 + 3));
  sub_4F49F0((__int64)a1);
  return sub_4EB340(a1);
}

__int64 sub_5222E0()
{
  __int64 v0; // x19
  __int64 result; // x0

  v0 = sub_4EB320(8, &unk_1326E41, 0);
  result = sub_4EB3D0(v0);
  *(_QWORD *)((__int64*)goff_18F9860) = v0;
  return result;
}

// N5storm2mm23JobBackEndServicesLoginE, virtual slot 12
void __fastcall sub_525F70(_DWORD *a1, __int64 a2)
{
  char v3; // w20
  RecoveredSdkResult self; // [xsp+8h] [xbp-48h] BYREF

  if ( a1[14] != 5 )
  {
    Recovered_ResultCopy(&self, (const RecoveredSdkResult *)(a2 + 72));
    v3 = sub_4F5FA0(&self);
    Recovered_ResultTextDestroy(&self.domain);
    if ( (v3 & 1) == 0 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 88LL))(a1);
  }
}

bool sub_526810()
{
  return *(_QWORD *)((__int64*)goff_18F98F0) == 0 || *(_QWORD *)(*(_QWORD *)((__int64*)goff_18F98F0) + 56LL) == 0;
}

// N5storm2mm17WebSocketEndPointE, virtual slot 6
int __fastcall sub_528E40(__int64 a1)
{
  unsigned __int64 v1; // x9
  unsigned __int64 v2; // x0

  v1 = atomic_load((unsigned __int64 *)(a1 + 160));
  if ( v1 == 0 )
    return 0;
  v2 = atomic_load((unsigned __int64 *)(a1 + 160));
  return (*(int (__fastcall **)(unsigned __int64))(*(_QWORD *)v2 + 24LL))(v2);
}

// N5storm2mm17NotificationEventE, virtual slot 1
__int64 __fastcall sub_529E10(RecoveredSdkText *a1)
{
  a1->data = (char *)(((char *)((__int64*)goff_18F9918) + 16));
  Recovered_ResultTextDestroy(a1 + 3);
  nullsub_79(&a1[1]);
  return sub_4EB340(a1);
}

// N5storm2mm17NotificationEventE, virtual slot 0
__int64 __fastcall sub_529E60(RecoveredSdkText *a1)
{
  a1->data = (char *)(((char *)((__int64*)goff_18F9918) + 16));
  Recovered_ResultTextDestroy(a1 + 3);
  return nullsub_79(&a1[1]);
}

// N5storm2mm22_DDL_NotificationEventE, virtual slot 1
__int64 __fastcall sub_529EA0(RecoveredSdkText *a1)
{
  a1->data = (char *)(((char *)((__int64*)goff_18F9918) + 16));
  Recovered_ResultTextDestroy(a1 + 3);
  nullsub_79(&a1[1]);
  return sub_4EB340(a1);
}

bool __fastcall sub_52A250(char *a1, const char *a2)
{
  __int64 v3; // x19
  char *v4; // x21
  __int64 v5; // t1
  __int64 v6; // x20
  _Bool v7; // w0
  __int64 v8; // x8
  RecoveredSdkText self; // [xsp+8h] [xbp-28h] BYREF

  Recovered_ResultTextConstruct(&self, a2);
  v5 = *(_QWORD *)(a1 + 56);
  v3 = a1 + 56;
  v4 = v5;
  if ( v5 == 0 )
    goto LABEL_11;
  v6 = v3;
  do
  {
    v7 = sub_4EB710(v4 + 32, &self);
    if ( (v7 & 1) != 0 )
      v8 = 8;
    else
      v8 = 0;
    if ( (v7 & 1) == 0 )
      v6 = v4;
    v4 = *(_QWORD *)(v4 + v8);
  }
  while ( v4 != 0 );
  if ( v6 == v3 || (sub_4EB710(&self, v6 + 32)) != 0 )
LABEL_11:
    v6 = v3;
  Recovered_ResultTextDestroy(&self);
  return v6 != v3;
}

void __fastcall sub_52B310(const RecoveredSdkResult *a1)
{
  __int64 v1; // x19
  RecoveredSdkResult self; // [xsp+8h] [xbp-38h] BYREF

  v1 = *(_QWORD *)((__int64*)goff_18F9940);
  if ( *(_QWORD *)((__int64*)goff_18F9940) != 0 )
  {
    Recovered_ResultCopy(&self, a1);
    sub_4ECFE0(v1, &self);
    Recovered_ResultTextDestroy(&self.domain);
  }
}

// N5storm2mm30IP2LocationProtocolAdminClientE, virtual slot 26
__int64 __fastcall sub_52B880(__int64 a1, __int64 a2)
{
  __int64 result; // x0

  result = *(_QWORD *)(a1 + 88);
  if ( result != 0 )
  {
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 24LL))(result);
    *(_QWORD *)(a1 + 88) = 0;
  }
  if ( a2 != 0 )
  {
    *(_QWORD *)(a1 + 88) = a2;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 16LL))(a2);
  }
  return result;
}

// N5storm2mm19LoginProtocolClientE, virtual slot 25
_QWORD *sub_52CA70()
{
  _QWORD *v0; // x19

  v0 = (_QWORD *)sub_4EB320(96, &unk_1326E41, 0);
  sub_52B270(v0, 1);
  *v0 = ((char *)((__int64*)goff_18F9948) + 16);
  return v0;
}

// N5storm2mm19ClientStreamManagerE, virtual slot 7
__int64 __fastcall sub_52CE20(__int64 a1, __int64 a2)
{
  __int64 result; // x0

  result = *(_QWORD *)(a1 + 56);
  if ( result != 0 )
  {
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 24LL))(result);
    *(_QWORD *)(a1 + 56) = 0;
  }
  if ( a2 != 0 )
  {
    *(_QWORD *)(a1 + 56) = a2;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 16LL))(a2);
  }
  return result;
}

void sub_52E880(_QWORD *a1, __int64 a2)
{  __int64 v5; // x8

  sub_51D8C0(a1, 0);
  v5 = ((__int64*)goff_18F99A8);
  a1[2] = a2;
  *a1 = v5 + 16;
  return;
}

void sub_52F3B0()
{
  __int64 v0; // x19
  RecoveredSdkText self; // [xsp+8h] [xbp-8h] BYREF

  v0 = sub_4EB320(32, &unk_1326E41, 0);
  Recovered_ResultTextConstruct(&self, "UseDistinctPortForStreamManager");
  sub_4F5150(v0, &self, 0);
  *((__int64*)goff_18F9A00) = v0;
  Recovered_ResultTextDestroy(&self);
}

void sub_52F420()
{
  __int64 *v0; // x20
  __int64 v1; // x19

  v0 = ((__int64*)goff_18F9A00);
  v1 = *((__int64*)goff_18F9A00);
  if ( *((__int64*)goff_18F9A00) != 0 )
  {
    sub_4F5220(*((__int64*)goff_18F9A00));
    sub_4EB340(v1);
  }
  *v0 = 0;
  return;
}

void sub_52FE00()
{
  __int64 v0; // x19
  __int64 v2; // x19
  __int64 v3; // x19
  __int64 v4; // x19

  v0 = *((__int64*)goff_18F9A10);
  if ( *((__int64*)goff_18F9A10) != 0 )
  {
    sub_50EA00(*((__int64*)goff_18F9A10));
    sub_4EB340(v0);
  }
  v2 = *((__int64*)goff_18F9A18);
  if ( *((__int64*)goff_18F9A18) != 0 )
  {
    sub_50EA00(*((__int64*)goff_18F9A18));
    sub_4EB340(v2);
  }
  v3 = *((__int64*)goff_18F9A20);
  if ( *((__int64*)goff_18F9A20) != 0 )
  {
    sub_50EA00(*((__int64*)goff_18F9A20));
    sub_4EB340(v3);
  }
  v4 = *((__int64*)goff_18F9A28);
  if ( *((__int64*)goff_18F9A28) != 0 )
  {
    sub_50EA00(*((__int64*)goff_18F9A28));
    { sub_4EB340(v4); return; }
  }
  return;
}

void __fastcall sub_52FF40(char *a1, int a2)
{
  __int64 *v4; // x8
  RecoveredSdkText self; // [xsp+8h] [xbp-18h] BYREF

  Recovered_ResultTextConstruct(&self, "<unknown>");
  sub_4F53C0(a1, &self);
  Recovered_ResultTextDestroy(&self);
  *(_DWORD *)(a1 + 56) = a2;
  v4 = ((__int64*)goff_18F9A30);
  *(_QWORD *)a1 = v4 + 2;
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 64) = 0;
  *(_BYTE *)(a1 + 72) = 0;
  *(_QWORD *)(a1 + 76) = 0;
}

bool __fastcall sub_52FFE0(__int64 a1, int a2)
{
  return (a2 & ~*(_DWORD *)(a1 + 56)) == 0;
}

__int64 __fastcall sub_5301D0(__int64 a1)
{
  unsigned int v2; // [xsp+Ch] [xbp-4h] BYREF

  sub_504170(a1, &v2, 4, 1);
  return v2;
}

int __fastcall sub_530200(__int64 a1, __int64 a2)
{
  unsigned int v4; // w20
  int v6; // [xsp+Ch] [xbp-14h] BYREF

  if ( (sub_4ED190(a2)) != 0 )
  {
    v6 = *(_DWORD *)(a2 + 112);
    v4 = 1;
    sub_504140(a1, &v6, 4, 1);
  }
  else
  {
    return 0;
  }
  return v4;
}

__int64 __fastcall sub_530360(__int64 a1, char a2, char **a3)
{
  _BYTE v6[4]; // [xsp+Ch] [xbp-14h] BYREF

  sub_5042B0(a1, *a3, 255);
  v6[0] = a2;
  return sub_504140(a1, v6, 1, 1);
}

__int64 __fastcall sub_5308A0(__int64 a1)
{
  __int64 *v2; // x8
  __int64 result; // x0

  sub_51D8C0(a1, 0);
  v2 = ((__int64*)goff_18F9A50);
  *(_QWORD *)a1 = v2 + 2;
  *(_DWORD *)(a1 + 24) = 0;
  result = sub_4F5C90(a1 + 40);
  *(_DWORD *)(a1 + 16) = 0;
  *(_BYTE *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 32) = 0;
  return result;
}

__int64 __fastcall sub_530A70(__int64 a1, __int64 a2)
{
  __int64 result; // x0

  result = *(_QWORD *)(a1 + 168);
  if ( result != 0 )
  {
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 24LL))(result);
    *(_QWORD *)(a1 + 168) = 0;
  }
  if ( a2 != 0 )
  {
    *(_QWORD *)(a1 + 168) = a2;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 16LL))(a2);
  }
  return result;
}

__int64 __fastcall sub_539400(_QWORD *a1, __int64 a2)
{
  __int64 result; // x0
  char **v5; // x21
  char **v6; // x20
  char *v7; // x8
  __int64 v8; // x8
  char *v9; // x9
  char **v10; // t1
  int v11; // [xsp+Ch] [xbp-14h] BYREF

  v11 = a1[2];
  result = sub_504140(a2, &v11, 4, 1);
  v5 = (char **)(a1 + 1);
  v6 = (char **)*a1;
  while ( v6 != v5 )
  {
    sub_539810(a2, v6 + 4);
    result = sub_504140(a2, v6 + 5, 2, 1);
    v7 = v6[1];
    if ( v7 != nullptr )
    {
      do
      {
        v6 = (char **)v7;
        v7 = *(char **)v7;
      }
      while ( v7 != nullptr );
    }
    else
    {
      v8 = (__int64)(v6 + 2);
      if ( *(char ***)v6[2] == v6 )
      {
        v6 = (char **)v6[2];
      }
      else
      {
        do
        {
          v9 = *(char **)v8;
          v10 = *(char ***)(*(_QWORD *)v8 + 16LL);
          v8 = *(_QWORD *)v8 + 16LL;
          v6 = v10;
        }
        while ( *v10 != v9 );
      }
    }
  }
  return result;
}

__int64 __fastcall sub_539DB0(__int64 a1, int *a2)
{
  int v7; // [xsp+Ch] [xbp-14h] BYREF
  _WORD v6[2]; // [xsp+8h] [xbp-18h] BYREF
  __int16 v5; // [xsp+4h] [xbp-1Ch] BYREF

  v7 = *a2;
  sub_504140(a1, &v7, 4, 1);
  v6[0] = *((_WORD *)a2 + 2);
  sub_504140(a1, v6, 2, 1);
  v5 = *((_WORD *)a2 + 3);
  sub_504140(a1, &v5, 2, 1);
  sub_504140(a1, a2 + 2, 2, 1);
  sub_504140(a1, (char *)a2 + 10, 2, 1);
  sub_504140(a1, a2 + 3, 2, 1);
  return sub_504140(a1, (char *)a2 + 14, 2, 1);
}

__int64 __fastcall sub_53A520(_QWORD *a1)
{
  sub_520FB0();
  *a1 = ((char *)((__int64*)goff_18F9A98) + 16);
  return sub_53CE50((__int64)(a1 + 3), 1);
}

__int64 __fastcall sub_53A610(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  return sub_53CF40((_BYTE *)(a1 + 24), a2, a3, a4, a5, a6, a7, a8, a9, a10);
}

int __fastcall sub_53A640(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5, __int64 a6)
{
  _BYTE v7[4]; // [xsp+Ch] [xbp-4h] BYREF

  v7[0] = a5 & 1;
  return sub_53DA80((_BYTE *)(a1 + 24), a2, a3, a4, (__int64)v7, a6) & 1;
}

int __fastcall sub_53A680(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8)
{
  int v9; // [xsp+Ch] [xbp-4h] BYREF

  v9 = a8;
  return sub_53DCE0((_BYTE *)(a1 + 24), a2, a3, a4, a5, a6, &v9, a7) & 1;
}

int __fastcall sub_53A790(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5, __int64 a6)
{
  int v7; // [xsp+Ch] [xbp-4h] BYREF

  v7 = a4;
  return sub_53EE90((_BYTE *)(a1 + 24), a2, a3, (__int64)&v7, a5, a6) & 1;
}

int __fastcall sub_53A7C0(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, __int64 a6)
{
  int v8; // [xsp+Ch] [xbp-4h] BYREF
  int v7; // [xsp+8h] [xbp-8h] BYREF

  v8 = a4;
  v7 = a5;
  return sub_53F100((_BYTE *)(a1 + 24), a2, a3, (__int64)&v8, (__int64)&v7, a6) & 1;
}

int __fastcall sub_53A800(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  int v6; // [xsp+Ch] [xbp-4h] BYREF

  v6 = a4;
  return sub_53F370((_BYTE *)(a1 + 24), a2, a3, (__int64)&v6, a5) & 1;
}

int __fastcall sub_53A830(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5, __int64 a6)
{
  int v7; // [xsp+Ch] [xbp-4h] BYREF

  v7 = a4;
  return sub_53F5C0((_BYTE *)(a1 + 24), a2, a3, (__int64)&v7, a5, a6) & 1;
}

int __fastcall sub_53A860(__int64 a1, __int64 a2, _QWORD *a3, char a4)
{
  _BYTE v5[4]; // [xsp+Ch] [xbp-4h] BYREF

  v5[0] = a4 & 1;
  return sub_53E6E0((_BYTE *)(a1 + 24), a2, a3, (__int64)v5) & 1;
}

void sub_53AFF0(__int64 a1, __int64 *a2, int a3)
{  __int64 v7; // x8
  __int64 v8; // x9

  *(_QWORD *)a1 = ((char *)((__int64*)goff_18F9AB0) + 16);
  sub_4FC710(a1 + 8);
  *(_DWORD *)(a1 + 24) = 0;
  *(_QWORD *)a1 = ((char *)((__int64*)goff_18F9AB8) + 16);
  v7 = *a2;
  v8 = a2[1];
  *(_DWORD *)(a1 + 24) = a3;
  *(_QWORD *)(a1 + 8) = v7;
  *(_QWORD *)(a1 + 16) = v8;
  return;
}

void sub_53B050(__int64 a1)
{  __int64 v3; // x8

  *(_QWORD *)a1 = ((char *)((__int64*)goff_18F9AB0) + 16);
  sub_4FC710(a1 + 8);
  v3 = ((__int64*)goff_18F9AB8);
  *(_DWORD *)(a1 + 24) = 0;
  *(_QWORD *)a1 = v3 + 16;
  return;
}

// N5storm2mm25MatchmakingProtocolClientE, virtual slot 25
_QWORD *sub_540F40()
{
  _QWORD *v0; // x19

  v0 = (_QWORD *)sub_4EB320(96, &unk_1326E41, 0);
  sub_52B270(v0, 1);
  *v0 = ((char *)((__int64*)goff_18F9AC0) + 16);
  return v0;
}

__int64 __fastcall sub_542FB0(_QWORD *a1)
{
  __int64 result; // x0

  *a1 = ((char *)((__int64*)goff_18F9AE8) + 16);
  sub_51B010(a1 + 1);
  result = sub_4EB3D0(a1 + 2);
  *a1 = ((char *)((__int64*)goff_18F9AF0) + 16);
  return result;
}

__int64 __fastcall sub_543390(__int64 a1)
{
  __int64 result; // x0

  *(_QWORD *)a1 = ((char *)((__int64*)goff_18F9AD8) + 16);
  sub_4EB3D0(a1 + 8);
  *(_DWORD *)(a1 + 16) = 0;
  sub_4FC710(a1 + 20);
  sub_4FC710(a1 + 36);
  sub_4EB3D0(a1 + 56);
  result = sub_51B010(a1 + 64);
  *(_QWORD *)a1 = ((char *)((__int64*)goff_18F9AE0) + 16);
  return result;
}

// N5storm2mm30MatchmakingNotificationHandlerE, virtual slot 2
__int64 __fastcall sub_543E90(__int64 a1, __int64 a2)
{
  _BYTE v3[4]; // [xsp+Ch] [xbp-4h] BYREF

  v3[0] = 0;
  return sub_543EC0(a1, a2, v3);
}

// N5storm2mm13MatchedAsHostE, virtual slot 0
void __fastcall sub_5465C0(RecoveredSdkText *a1)
{
  RecoveredSdkText *v2; // x20

  v2 = a1 + 2;
  sub_4DFF20(&a1[19], a1[20].data);
  sub_4DFFE0(&a1[16], a1[17].data);
  sub_4DDCC0(&a1[13], a1[14].data);
  sub_4DDCC0(&a1[10], a1[11].data);
  nullsub_79((char *)&a1[7].data + 4);
  Recovered_ResultTextDestroy(a1 + 6);
  nullsub_79(&a1[4]);
  Recovered_ResultTextDestroy(v2);
}

// N5storm2mm13MatchedAsPeerE, virtual slot 0
void __fastcall sub_546630(RecoveredSdkText *a1)
{
  RecoveredSdkText *v2; // x20

  v2 = a1 + 2;
  sub_4DFF20(&a1[19], a1[20].data);
  sub_4DFFE0(&a1[16], a1[17].data);
  sub_4DDCC0(&a1[13], a1[14].data);
  sub_4DDCC0(&a1[10], a1[11].data);
  nullsub_79((char *)&a1[7].data + 4);
  Recovered_ResultTextDestroy(a1 + 6);
  nullsub_79(&a1[4]);
  Recovered_ResultTextDestroy(v2);
}

// N5storm2mm14ProgressUpdateE, virtual slot 0
void __fastcall sub_546800(RecoveredSdkText *a1)
{
  a1->data = (char *)(((char *)((__int64*)goff_18F9B70) + 16));
  Recovered_ResultTextDestroy(a1 + 4);
  Recovered_ResultTextDestroy(a1 + 2);
}

// N5storm2mm10NotMatchedE, virtual slot 0
void __fastcall sub_546840(RecoveredSdkText *a1)
{
  a1->data = (char *)(((char *)((__int64*)goff_18F9B78) + 16));
  sub_4DDCC0(&a1[8], a1[9].data);
  nullsub_79((char *)&a1[5].data + 4);
  Recovered_ResultTextDestroy(a1 + 4);
  Recovered_ResultTextDestroy(a1 + 2);
}

// N5storm2mm12QoSRequestedE, virtual slot 0
void __fastcall sub_5469D0(RecoveredSdkText *a1)
{
  a1->data = (char *)(((char *)((__int64*)goff_18F9B88) + 16));
  sub_548310(&a1[3], a1[4].data);
  Recovered_ResultTextDestroy(a1 + 2);
}

// N5storm2mm15SessionMigratedE, virtual slot 0
void __fastcall sub_546A10(RecoveredSdkText *a1)
{
  RecoveredSdkText *v2; // x20

  v2 = a1 + 2;
  sub_4DFF20(&a1[14], a1[15].data);
  sub_4DFFE0(&a1[11], a1[12].data);
  sub_4DDCC0(&a1[8], a1[9].data);
  Recovered_ResultTextDestroy(a1 + 6);
  nullsub_79(&a1[4]);
  Recovered_ResultTextDestroy(v2);
}

// N5storm2mm13MatchedAsPeerE, virtual slot 1
void __fastcall sub_546A70(RecoveredSdkText *a1)
{
  RecoveredSdkText *v2; // x20

  v2 = a1 + 2;
  sub_4DFF20(&a1[19], a1[20].data);
  sub_4DFFE0(&a1[16], a1[17].data);
  sub_4DDCC0(&a1[13], a1[14].data);
  sub_4DDCC0(&a1[10], a1[11].data);
  nullsub_79((char *)&a1[7].data + 4);
  Recovered_ResultTextDestroy(a1 + 6);
  nullsub_79(&a1[4]);
  Recovered_ResultTextDestroy(v2);
  _ZdlPv(a1);
}

// N5storm2mm13MatchedAsHostE, virtual slot 1
void __fastcall sub_546AF0(RecoveredSdkText *a1)
{
  RecoveredSdkText *v2; // x20

  v2 = a1 + 2;
  sub_4DFF20(&a1[19], a1[20].data);
  sub_4DFFE0(&a1[16], a1[17].data);
  sub_4DDCC0(&a1[13], a1[14].data);
  sub_4DDCC0(&a1[10], a1[11].data);
  nullsub_79((char *)&a1[7].data + 4);
  Recovered_ResultTextDestroy(a1 + 6);
  nullsub_79(&a1[4]);
  Recovered_ResultTextDestroy(v2);
  _ZdlPv(a1);
}

// N5storm2mm10NotMatchedE, virtual slot 1
void __fastcall sub_546C10(RecoveredSdkText *a1)
{
  a1->data = (char *)(((char *)((__int64*)goff_18F9B78) + 16));
  sub_4DDCC0(&a1[8], a1[9].data);
  nullsub_79((char *)&a1[5].data + 4);
  Recovered_ResultTextDestroy(a1 + 4);
  Recovered_ResultTextDestroy(a1 + 2);
  _ZdlPv(a1);
}

// N5storm2mm14ProgressUpdateE, virtual slot 1
void __fastcall sub_546DF0(RecoveredSdkText *a1)
{
  a1->data = (char *)(((char *)((__int64*)goff_18F9B70) + 16));
  Recovered_ResultTextDestroy(a1 + 4);
  Recovered_ResultTextDestroy(a1 + 2);
  _ZdlPv(a1);
}

// N5storm2mm12QoSRequestedE, virtual slot 1
void __fastcall sub_546F30(RecoveredSdkText *a1)
{
  a1->data = (char *)(((char *)((__int64*)goff_18F9B88) + 16));
  sub_548310(&a1[3], a1[4].data);
  Recovered_ResultTextDestroy(a1 + 2);
  _ZdlPv(a1);
}

// N5storm2mm15SessionMigratedE, virtual slot 1
void __fastcall sub_546F70(RecoveredSdkText *a1)
{
  RecoveredSdkText *v2; // x20

  v2 = a1 + 2;
  sub_4DFF20(&a1[14], a1[15].data);
  sub_4DFFE0(&a1[11], a1[12].data);
  sub_4DDCC0(&a1[8], a1[9].data);
  Recovered_ResultTextDestroy(a1 + 6);
  nullsub_79(&a1[4]);
  Recovered_ResultTextDestroy(v2);
  _ZdlPv(a1);
}

__int64 __fastcall sub_548360(__int64 a1, __int64 a2)
{
  __int64 v2; // x19
  __int64 v3; // x20
  __int64 result; // x0

  *(_QWORD *)(a1 + 16) = 0;
  v2 = a1 + 16;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = a2;
  *(_QWORD *)(a1 + 8) = a1 + 16;
  *(_BYTE *)(a1 + 84) = 0;
  *(_DWORD *)(a1 + 80) = 0;
  *(_QWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 64) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 48) = 0;
  v3 = sub_4EB320(416, &unk_1326E41, 0);
  result = sub_51E060();
  *(_QWORD *)(v2 + 56) = v3;
  return result;
}

__int64 __fastcall sub_5483C0(_QWORD *a1)
{
  _QWORD *v2; // x23
  __int64 v3; // x21
  _QWORD *v4; // x8
  __int64 v5; // x8
  __int64 v6; // x9
  _QWORD *v7; // t1
  __int64 v8; // x0
  __int64 v9; // x0
  __int64 v10; // x1
  _QWORD *v12; // [xsp+8h] [xbp-28h] BYREF

  sub_5484D0((__int64)a1);
  sub_548600((__int64)a1);
  v12 = a1;
  v2 = (_QWORD *)a1[1];
  while ( v2 != a1 + 2 )
  {
    v3 = v2[5];
    (*(void (__fastcall **)(__int64, _QWORD **))(*(_QWORD *)v3 + 32LL))(v3, &v12);
    ((void (__fastcall *)(__int64))v2[6])(v3);
    v4 = (_QWORD *)v2[1];
    if ( v4 != nullptr )
    {
      do
      {
        v2 = v4;
        v4 = (_QWORD *)*v4;
      }
      while ( v4 != nullptr );
    }
    else
    {
      v5 = (__int64)(v2 + 2);
      if ( *(_QWORD **)v2[2] == v2 )
      {
        v2 = (_QWORD *)v2[2];
      }
      else
      {
        do
        {
          v6 = *(_QWORD *)v5;
          v7 = *(_QWORD **)(*(_QWORD *)v5 + 16LL);
          v5 = *(_QWORD *)v5 + 16LL;
          v2 = v7;
        }
        while ( *v7 != v6 );
      }
    }
  }
  v8 = a1[5];
  if ( v8 != 0 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 24LL))(v8);
    a1[5] = 0;
  }
  v9 = a1[9];
  a1[4] = 0;
  if ( v9 != 0 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
  v10 = a1[2];
  a1[9] = 0;
  a1[6] = 0;
  return sub_5490D0(a1 + 1, v10);
}

__int64 __fastcall sub_5487D0(__int64 a1)
{
  __int64 v2; // x0
  __int64 v3; // x20
  __int64 result; // x0

  sub_5484D0();
  v2 = *(_QWORD *)(a1 + 72);
  if ( v2 != 0 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  v3 = sub_4EB320(416, &unk_1326E41, 0);
  result = sub_51E060();
  *(_QWORD *)(a1 + 72) = v3;
  return result;
}

// N5storm2mm14JobFacadeRenewE, virtual slot 0
__int64 __fastcall sub_549ED0(_QWORD *a1)
{
  __int64 v2; // x0
  unsigned __int64 *v3; // x8
  unsigned __int64 v4; // x0
  unsigned int *v5; // x8
  unsigned int v6; // w9
  unsigned int v7; // w9

  *a1 = ((char *)((__int64*)goff_18F9BB8) + 16);
  v2 = a1[13];
  if ( v2 != 0 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  v3 = a1 + 12;
  v4 = __atomic_exchange_n(v3, 0, 5);
  if ( v4 != 0 )
  {
    v5 = (unsigned int *)(v4 + 8);
    v7 = __atomic_sub_fetch(v5, 1, 5);
    if ( v7 == 0 )
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return sub_4F4810((__int64)a1);
}

// N5storm2mm14JobFacadeRenewE, virtual slot 1
__int64 __fastcall sub_549F50(_QWORD *a1)
{
  __int64 v2; // x0
  unsigned __int64 *v3; // x8
  unsigned __int64 v4; // x0
  unsigned int *v5; // x8
  unsigned int v6; // w9
  unsigned int v7; // w9

  *a1 = ((char *)((__int64*)goff_18F9BB8) + 16);
  v2 = a1[13];
  if ( v2 != 0 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  v3 = a1 + 12;
  v4 = __atomic_exchange_n(v3, 0, 5);
  if ( v4 != 0 )
  {
    v5 = (unsigned int *)(v4 + 8);
    v7 = __atomic_sub_fetch(v5, 1, 5);
    if ( v7 == 0 )
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  sub_4F4810((__int64)a1);
  return sub_4EB340(a1);
}

// N6snappy15ByteArraySourceE, virtual slot 4
__int64 __fastcall sub_54BB60(__int64 result, __int64 a2)
{
  __int64 v2; // x9

  v2 = *(_QWORD *)(result + 16) - a2;
  *(_QWORD *)(result + 8) += a2;
  *(_QWORD *)(result + 16) = v2;
  return result;
}

__int64 __fastcall sub_54C020(__int64 result, __int64 a2)
{
  __int64 v2; // x8

  *(_DWORD *)(result + 8) = 0;
  *(_WORD *)(result + 12) = 0;
  v2 = ((char *)goff_18F9BF8 + 16);
  *(_QWORD *)(result + 16) = 0;
  *(_QWORD *)(result + 24) = a2;
  *(_QWORD *)result = v2;
  *(_QWORD *)(result + 32) = 0;
  *(_QWORD *)(result + 40) = result + 40;
  *(_QWORD *)(result + 48) = result + 40;
  *(_QWORD *)(result + 56) = 0;
  return result;
}

__int64 __fastcall sub_54CA50(__int64 a1)
{
  __int64 result; // x0

  result = *(_QWORD *)(a1 + 128);
  if ( result != a1 && result != 0 )
    return sub_37030(result);
  return result;
}

int __fastcall sub_54CA70(_BYTE *a1)
{
  char v1; // w10
  unsigned __int8 *v2; // x9
  unsigned int v3; // w8
  int v4; // t1

  v1 = *a1;
  if ( *a1 == 0 )
    return 0;
  v2 = a1 + 1;
  v3 = 0xFFFFFFFF;
  do
  {
    v3 = dword_1385494[(unsigned __int8)(v1 ^ v3)] ^ (v3 >> 8);
    v4 = *v2++;
    v1 = v4;
  }
  while ( v4 != 0 );
  return ~v3;
}

// N5storm10CoreBridgeE, virtual slot 0
void __fastcall sub_54CB80(_QWORD *result)
{
  __int64 v1; // x20
  _QWORD *v2; // x19

  v1 = result[1];
  v2 = result;
  *result = ((__int64 *)((__int64*)goff_18F9C08) + 2);
  if ( v1 != 0 )
  {
    sub_54DD50(v1);
    sub_57EDC0(v1, 0LL, &unk_1326E41, 0);
    v2[1] = 0;
  }
  v2[1] = 0;
  return;
}

// N5storm10CoreBridgeE, virtual slot 1
void __fastcall sub_54CBE0(_QWORD *a1)
{
  __int64 v1; // x20

  v1 = a1[1];
  *a1 = ((__int64 *)((__int64*)goff_18F9C08) + 2);
  if ( v1 != 0 )
  {
    sub_54DD50(v1);
    sub_57EDC0(v1, 0LL, &unk_1326E41, 0);
  }
  _ZdlPv(a1);
}

_QWORD *__fastcall sub_54FCB0(__int64 a1, __int64 a2)
{
  __int64 v4; // x21
  _QWORD *result; // x0
  __int64 v6; // x8
  __int64 v7; // x8

  v4 = a1 + 352;
  result = (_QWORD *)sub_56C9F0(24, 8, 1092624393, goff_18F9CE0, &unk_1326E41, 0);
  result[2] = a2;
  result[1] = v4;
  *result = 0;
  v6 = *(_QWORD *)(a1 + 352);
  *result = v6;
  *(_QWORD *)(v6 + 8) = result;
  v7 = *(_QWORD *)(a1 + 368) + 1LL;
  *(_QWORD *)(a1 + 352) = result;
  *(_QWORD *)(a1 + 368) = v7;
  return result;
}

_QWORD *__fastcall sub_552100(__int64 a1, __int64 a2)
{
  __int64 v4; // x21
  _QWORD *result; // x0
  __int64 v6; // x8
  __int64 v7; // x8

  v4 = a1 + 376;
  result = (_QWORD *)sub_56C9F0(24, 8, 1092624393, goff_18F9D50, &unk_1326E41, 0);
  result[2] = a2;
  result[1] = v4;
  *result = 0;
  v6 = *(_QWORD *)(a1 + 376);
  *result = v6;
  *(_QWORD *)(v6 + 8) = result;
  v7 = *(_QWORD *)(a1 + 392) + 1LL;
  *(_QWORD *)(a1 + 376) = result;
  *(_QWORD *)(a1 + 392) = v7;
  return result;
}

// N5storm19DynamicTypeRegistryE, virtual slot 3
__int64 __fastcall sub_5526F0(char *a1, unsigned int *a2)
{
  char *v2; // x19
  unsigned int v5; // w8
  char *v6; // x10
  __int64 v7; // x20
  __int64 v8; // t1
  char *v9; // x9
  unsigned int v10; // w11
  bool v11; // cf
  _BOOL4 v12; // w11
  __int64 v13; // x20

  v2 = (char *)(a1 + 64);
  std__recursive_mutex__lock((char *)(a1 + 64));
  v5 = *a2;
  v8 = *(_QWORD *)(a1 + 24);
  v7 = a1 + 24;
  v6 = v8;
  if ( v8 == 0 )
    goto LABEL_9;
  v9 = v7;
  do
  {
    v10 = *(_DWORD *)(v6 + 32);
    v11 = v10 >= v5;
    v12 = v10 < v5;
    if ( v11 )
      v9 = v6;
    v6 = *(_QWORD *)(v6 + 8LL * v12);
  }
  while ( v6 != 0 );
  if ( v9 != v7 && *(_DWORD *)(v9 + 32) <= v5 )
    v13 = *(_QWORD *)(v9 + 40);
  else
LABEL_9:
    v13 = 0;
  std__recursive_mutex__unlock(v2);
  return v13;
}

// N5storm19DynamicTypeRegistryE, virtual slot 2
bool __fastcall sub_552780(__int64 a1, unsigned int *a2)
{
  char *v2; // x19
  unsigned int v5; // w8
  __int64 v6; // x10
  __int64 v7; // x20
  __int64 v8; // t1
  __int64 v9; // x9
  unsigned int v10; // w11
  bool v11; // cf
  _BOOL4 v12; // w11
  _BOOL4 v13; // w20

  v2 = (char *)(a1 + 64);
  std__recursive_mutex__lock((char *)(a1 + 64));
  v5 = *a2;
  v8 = *(_QWORD *)(a1 + 24);
  v7 = a1 + 24;
  v6 = v8;
  if ( v8 == 0 )
    goto LABEL_9;
  v9 = v7;
  do
  {
    v10 = *(_DWORD *)(v6 + 32);
    v11 = v10 >= v5;
    v12 = v10 < v5;
    if ( v11 )
      v9 = v6;
    v6 = *(_QWORD *)(v6 + 8LL * v12);
  }
  while ( v6 != 0 );
  if ( v9 == v7 || *(_DWORD *)(v9 + 32) > v5 )
LABEL_9:
    v9 = v7;
  v13 = v9 != v7;
  std__recursive_mutex__unlock(v2);
  return v13;
}

_QWORD **__fastcall sub_554310(_QWORD **result, _QWORD *a2, _Bool a3)
{
  _QWORD **v3; // x8
  _QWORD **v4; // x8

  if ( !(result != nullptr) )
  {
    *a2 = 0;
  }
  else
  {
    if ( a3 )
    {
      v3 = (_QWORD **)*result;
      if ( *result == result || result[1] == result )
      {
        *a2 = result;
        return nullptr;
      }
      else
      {
        *a2 = v3;
        if ( v3 != nullptr && *result != result && result[1] != result )
        {
          *v3[1] = *v3;
          (*v3)[1] = v3[1];
          *v3 = v3;
          v3[1] = v3;
        }
      }
    }
    else
    {
      *a2 = result;
      v4 = (_QWORD **)*result;
      *result = nullptr;
      if ( v4 != nullptr )
      {
        result = v4;
        v4[1] = nullptr;
      }
      else
      {
        return nullptr;
      }
    }
  }
  return result;
}

__int64 __fastcall sub_5547A0(__int64 a1)
{
  _QWORD *v1; // x19
  __int64 v2; // x20
  __int64 i; // x22

  *(_QWORD *)(a1 - 16) = ((char *)((__int64*)goff_18F9C70) + 16);
  v1 = (_QWORD *)(a1 - 16);
  v2 = *(_QWORD *)(a1 - 8);
  *(_QWORD *)(a1 - 8) = 0;
  if ( v2 != 0 )
  {
    for ( i = 2208; i != 0; i -= 24 )
    {
      if ( (*(_BYTE *)(v2 + i - 24) & 1) != 0 )
        sub_56CA00(*(_QWORD *)(v2 + i - 8), &unk_1326E41, 0);
    }
    sub_57EDC0(v2, 0LL, &unk_1326E41, 0);
  }
  return sub_57D230(v1);
}

void __fastcall sub_5548C0(__int64 a1)
{
  _QWORD *v1; // x19
  __int64 v2; // x20
  __int64 i; // x22

  *(_QWORD *)(a1 - 16) = ((char *)((__int64*)goff_18F9C70) + 16);
  v1 = (_QWORD *)(a1 - 16);
  v2 = *(_QWORD *)(a1 - 8);
  *(_QWORD *)(a1 - 8) = 0;
  if ( v2 != 0 )
  {
    for ( i = 2208; i != 0; i -= 24 )
    {
      if ( (*(_BYTE *)(v2 + i - 24) & 1) != 0 )
        sub_56CA00(*(_QWORD *)(v2 + i - 8), &unk_1326E41, 0);
    }
    sub_57EDC0(v2, 0LL, &unk_1326E41, 0);
  }
  sub_57D230(v1);
  _ZdlPv(v1);
}

void __fastcall sub_554C80(_QWORD *a1)
{
  _QWORD *v1; // x19

  v1 = a1 - 3;
  sub_58C2A0(a1);
  _ZdlPv(v1);
}

// N5storm8security6AESGCME, virtual slot 1
void __fastcall sub_559C20(_QWORD *a1)
{
  _QWORD *v2; // x0

  *a1 = ((char *)((__int64*)goff_18F9DE0) + 16);
  sub_1E5980(a1 + 20);
  sub_57EF40(a1 + 41);
  v2 = (_QWORD *)a1[17];
  if ( v2 != a1 + 1 && v2 != nullptr )
    sub_37030(v2);
  _ZdlPv(a1);
}

_BYTE *__fastcall sub_55A030(_QWORD *a1)
{
  _BYTE *result; // x0

  result = (_BYTE *)sub_57D200(1, 1, 1092620291, 0LL, &unk_1326E41, 0);
  *result = 0;
  *a1 = result;
  return result;
}

__int64 __fastcall sub_55A080(__int64 *a1)
{
  __int64 result; // x0

  result = *a1;
  if ( result != 0 )
  {
    result = sub_57EDC0(result, 0LL, &unk_1326E41, 0);
    *a1 = 0;
  }
  return result;
}

_QWORD *__fastcall sub_55A0F0(__int64 a1, __int64 a2)
{
  _QWORD *result; // x0
  _QWORD *v3; // x19

  result = (_QWORD *)sub_561EB0(a1, a2);
  if ( result != nullptr )
  {
    v3 = result;
    result = (_QWORD *)sub_57D200(8, 8, 1092620291, 0LL, &unk_1326E41, 0);
    *result = v3;
  }
  return result;
}

// N5storm8CoreImpl10DelayEventE, virtual slot 5
__int64 sub_55BA70()
{
  __int64 result; // x0
  __int64 v1; // x8
  __int64 *v2; // x8

  result = sub_56C9F0(48, 8, 1092624387, 0LL, &unk_1326E41, 0);
  v1 = qword_1915908;
  *(_DWORD *)(result + 8) = -1;
  *(_QWORD *)(result + 16) = v1;
  *(_QWORD *)(result + 24) = 0;
  v2 = ((__int64*)goff_18F9C18);
  *(_QWORD *)result = v2 + 2;
  *(_QWORD *)(result + 40) = 0;
  return result;
}

// N5storm4core8internal28ProductImplNetworkStepResultE, virtual slot 5
__int64 __fastcall sub_55D420(__int64 a1)
{
  __int64 result; // x0
  __int64 *v3; // x9
  __int64 v4; // x8

  result = sub_56C9F0(64, 8, 1092624387, 0LL, &unk_1326E41, 0);
  *(_QWORD *)result = ((char *)goff_18EDE08 + 16);
  *(_DWORD *)(result + 8) = *(_DWORD *)(a1 + 8);
  *(_QWORD *)(result + 16) = *(_QWORD *)(a1 + 16);
  v3 = ((__int64*)goff_18EE7F0);
  *(_QWORD *)(result + 24) = *(_QWORD *)(a1 + 24);
  *(_QWORD *)result = v3 + 2;
  *(_DWORD *)(result + 32) = *(_DWORD *)(a1 + 32);
  *(_DWORD *)(result + 36) = *(_DWORD *)(a1 + 36);
  *(_QWORD *)(result + 40) = *(_QWORD *)(a1 + 40);
  *(_QWORD *)result = ((char *)goff_18F9D48 + 16);
  v4 = *(_QWORD *)(a1 + 48);
  *(_DWORD *)(result + 56) = *(_DWORD *)(a1 + 56);
  *(_QWORD *)(result + 48) = v4;
  return result;
}

void __fastcall sub_55DF60(_QWORD *result)
{
  __int64 v1; // x8
  _QWORD *v2; // x20
  _QWORD *v3; // x19
  _QWORD *v4; // x22

  if ( result[2] != 0 )
  {
    v1 = *result;
    v2 = (_QWORD *)result[1];
    *(_QWORD *)(*v2 + 8LL) = *(_QWORD *)(*result + 8LL);
    v3 = result;
    **(_QWORD **)(v1 + 8) = *v2;
    result[2] = 0;
    if ( v2 != result )
    {
      do
      {
        v4 = (_QWORD *)v2[1];
        sub_578410(v2 + 8);
        if ( (v2[5] & 1) != 0 )
          sub_56CA00(v2[7], &unk_1326E41, 0);
        if ( (v2[2] & 1) != 0 )
          sub_56CA00(v2[4], &unk_1326E41, 0);
        sub_56CA00(v2, &unk_1326E41, 0);
        v2 = v4;
      }
      while ( v4 != v3 );
    }
  }
  return;
}

// N5storm6common13NetworkHelper31NetworkInterfacesRecreatedEventE, virtual slot 5
__int64 __fastcall sub_55E1C0(__int64 a1)
{
  __int64 result; // x0
  __int64 *v3; // x9
  __int64 v4; // x8
  __int64 v5; // x9

  result = sub_56C9F0(48, 8, 1092624387, 0LL, &unk_1326E41, 0);
  *(_QWORD *)result = ((char *)goff_18EDE08 + 16);
  *(_DWORD *)(result + 8) = *(_DWORD *)(a1 + 8);
  v3 = ((__int64*)goff_18EE7F0);
  *(_QWORD *)(result + 16) = *(_QWORD *)(a1 + 16);
  v4 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)result = v3 + 2;
  *(_QWORD *)(result + 24) = v4;
  *(_DWORD *)(result + 32) = *(_DWORD *)(a1 + 32);
  v5 = goff_18F9DD0;
  *(_DWORD *)(result + 36) = *(_DWORD *)(a1 + 36);
  *(_QWORD *)(result + 40) = *(_QWORD *)(a1 + 40);
  *(_QWORD *)result = v5 + 16;
  return result;
}

void sub_55E7D0(__int64 result, __int64 *a2)
{
  __int64 v2; // x8
  __int64 v3; // x9
  __int64 v4; // x19
  unsigned __int64 *v5; // x10
  unsigned __int64 v6; // x11
  char *v7; // x20
  unsigned __int64 *v8; // x8
  unsigned __int64 v9; // x9
  __int64 (__fastcall *v10)(); // x9

  v2 = *a2;
  if ( *a2 != 0 )
  {
    v3 = a2[1];
    v4 = result;
    if ( v3 != 0 )
    {
      v5 = (unsigned __int64 *)(v3 + 8);
      v6 = __atomic_fetch_add(v5, 1, 0);
    }
    v7 = *(char **)(result + 40);
    *(_QWORD *)(result + 32) = v2;
    *(_QWORD *)(result + 40) = v3;
    if ( v7 != nullptr )
    {
      v8 = (unsigned __int64 *)((char *)v7 + 8);
      v9 = __atomic_fetch_sub(v8, 1, 5);
      if ( v9 == 0 )
      {
        (*(void (__fastcall **)(char *))(*(_QWORD *)v7 + 16LL))(v7);
        std____shared_weak_count____release_weak(v7);
      }
    }
    v10 = goff_18F9F00;
    *(__int64 (__fastcall **)())v4 = ((__int64*)goff_18F9EF8);
    *(_QWORD *)(v4 + 8) = 0;
    *(_QWORD *)(v4 + 16) = v10;
    *(_QWORD *)(v4 + 24) = 0;
  }
  return;
}

__int64 __fastcall sub_560980(__int64 *a1)
{
  __int64 i; // x8
  __int64 v2; // x22
  __int64 v4; // x21
  __int64 result; // x0

  v2 = a1[1];
  for ( i = a1[2]; i != v2; i = a1[2] )
  {
    a1[2] = i - 32;
    v4 = *(_QWORD *)(i - 24);
    *(_QWORD *)(i - 24) = 0;
    if ( v4 != 0 )
    {
      sub_58AEC0(v4);
      if ( (*(_BYTE *)(v4 + 144) & 1) != 0 )
        sub_56CA00(*(_QWORD *)(v4 + 160), &unk_1326E41, 0);
      sub_58A960(v4);
      sub_57EDC0(v4, 0LL, &unk_1326E41, 0);
    }
  }
  result = *a1;
  if ( *a1 != 0 )
    return sub_56CA00(result, &unk_1326E41, 0);
  return result;
}

__int64 *__fastcall sub_560A40(__int64 *a1, __int64 *a2)
{
  __int64 v2; // x8
  __int64 v3; // x22
  __int64 v4; // x8
  __int64 v5; // x21
  __int64 v8; // x21
  int v9; // w8
  __int64 v10; // x8

  v2 = *a1;
  *a1 = *a2;
  *a2 = v2;
  v3 = a1[1];
  a1[1] = 0;
  v4 = a2[1];
  a2[1] = 0;
  v5 = a1[1];
  a1[1] = v4;
  if ( v5 != 0 )
  {
    sub_58AEC0(v5);
    if ( (*(_BYTE *)(v5 + 144) & 1) != 0 )
      sub_56CA00(*(_QWORD *)(v5 + 160), &unk_1326E41, 0);
    sub_58A960(v5);
    sub_57EDC0(v5, 0LL, &unk_1326E41, 0);
  }
  v8 = a2[1];
  a2[1] = v3;
  if ( v8 != 0 )
  {
    sub_58AEC0(v8);
    if ( (*(_BYTE *)(v8 + 144) & 1) != 0 )
      sub_56CA00(*(_QWORD *)(v8 + 160), &unk_1326E41, 0);
    sub_58A960(v8);
    sub_57EDC0(v8, 0LL, &unk_1326E41, 0);
  }
  v9 = *((_DWORD *)a1 + 4);
  *((_DWORD *)a1 + 4) = *((_DWORD *)a2 + 4);
  *((_DWORD *)a2 + 4) = v9;
  v10 = a1[3];
  a1[3] = a2[3];
  a2[3] = v10;
  return a1;
}

__int64 __fastcall sub_5612E0(__int64 a1, __int64 a2, char a3)
{
  char v5; // w21
  __int64 result; // x0

  v5 = a3 & 1;
  sub_54C820(a1, 96);
  result = sub_54C810(a1 + 152);
  *(_WORD *)(a1 + 304) = 0;
  *(_QWORD *)(a1 + 312) = 0;
  *(_QWORD *)(a1 + 320) = a2;
  *(_BYTE *)(a1 + 328) = v5;
  *(_QWORD *)(a1 + 352) = 0;
  *(_QWORD *)(a1 + 360) = 0;
  *(_QWORD *)(a1 + 336) = 0;
  *(_QWORD *)(a1 + 344) = 0;
  return result;
}

__int64 __fastcall sub_562250(__int64 a1)
{
  char *v2; // x20

  v2 = (char *)(a1 + 72);
  std__condition_variable___condition_variable((char *)(a1 + 112));
  std__condition_variable___condition_variable((char *)(a1 + 104));
  std__mutex___mutex(v2);
  sub_56F3C0(a1 + 48, *(_QWORD *)(a1 + 56));
  sub_56F400(a1 + 24, *(_QWORD **)(a1 + 32));
  return sub_56F490(a1, *(_QWORD **)(a1 + 8));
}

__int64 *__fastcall sub_5625F0(char *a1, unsigned __int16 a2)
{
  char *v2; // x19
  char *v5; // x9
  __int64 v6; // x21
  __int64 v7; // t1
  char *v8; // x8
  unsigned int v9; // w10
  bool v10; // cf
  _BOOL4 v11; // w10
  __int64 *v12; // x20

  v2 = (char *)(a1 + 72);
  std__shared_timed_mutex__lock_shared((char *)(a1 + 72));
  v7 = *(_QWORD *)(a1 + 32);
  v6 = a1 + 32;
  v5 = v7;
  if ( v7 == 0 )
    goto LABEL_9;
  v8 = v6;
  do
  {
    v9 = *(unsigned __int16 *)(v5 + 32);
    v10 = v9 >= a2;
    v11 = v9 < a2;
    if ( v10 )
      v8 = v5;
    v5 = *(_QWORD *)(v5 + 8LL * v11);
  }
  while ( v5 != 0 );
  if ( v8 != v6 && *(unsigned __int16 *)(v8 + 32) <= (unsigned int)a2 )
    v12 = (__int64 *)(v8 + 40);
  else
LABEL_9:
    v12 = &qword_1915B90;
  std__shared_timed_mutex__unlock_shared(v2);
  return v12;
}

_QWORD *__fastcall sub_565730(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  _QWORD *v7; // x22
  __int64 *v8; // x8

  if ( a4 != 0 )
  {
    v7 = (_QWORD *)sub_57D200(296, 8, 1092657164, 0LL, &unk_1326E41, 0);
    sub_5669E0(v7, a1, a2);
    v8 = ((__int64*)goff_18F9FD8);
    *v7 = v8 + 2;
    v7[36] = a4;
    (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)a4 + 32LL))(a4, v7);
  }
  else
  {
    v7 = (_QWORD *)sub_57D200(288, 8, 1092657164, 0LL, &unk_1326E41, 0);
    sub_5669E0(v7, a1, a2);
  }
  return v7;
}

// N5storm13SocketFactoryE, virtual slot 2
_QWORD *__fastcall sub_5657F0(__int64 a1, __int64 a2, __int64 *a3, __int64 a4, __int64 a5)
{
  _QWORD *v8; // x22
  __int64 *v9; // x8

  if ( a5 != 0 )
  {
    v8 = (_QWORD *)sub_57D200(296, 8, 1092657164, 0LL, &unk_1326E41, 0);
    sub_5669E0(v8, a2, a3);
    v9 = ((__int64*)goff_18F9FD8);
    *v8 = v9 + 2;
    v8[36] = a5;
    (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)a5 + 32LL))(a5, v8);
  }
  else
  {
    v8 = (_QWORD *)sub_57D200(288, 8, 1092657164, 0LL, &unk_1326E41, 0);
    sub_5669E0(v8, a2, a3);
  }
  return v8;
}

// N5storm15SocketSchedulerE, virtual slot 0
__int64 __fastcall sub_565920(_QWORD *a1)
{
  char *v1; // x20
  unsigned __int64 *v3; // x8
  unsigned __int64 v4; // x9

  v1 = (char *)a1[8];
  *a1 = ((__int64 *)((__int64*)goff_18F9FE0) + 2);
  if ( v1 != nullptr )
  {
    v3 = (unsigned __int64 *)((char *)v1 + 8);
    v4 = __atomic_fetch_sub(v3, 1, 5);
    if ( v4 == 0 )
    {
      (*(void (__fastcall **)(char *))(*(_QWORD *)v1 + 16LL))(v1);
      std____shared_weak_count____release_weak(v1);
    }
  }
  sub_56F9A0(a1 + 4, a1[5]);
  return nullsub_1096(a1);
}

// N5storm15SocketSchedulerE, virtual slot 1
void __fastcall sub_5659A0(_QWORD *a1)
{
  char *v1; // x20
  unsigned __int64 *v3; // x8
  unsigned __int64 v4; // x9

  v1 = (char *)a1[8];
  *a1 = ((__int64 *)((__int64*)goff_18F9FE0) + 2);
  if ( v1 != nullptr )
  {
    v3 = (unsigned __int64 *)((char *)v1 + 8);
    v4 = __atomic_fetch_sub(v3, 1, 5);
    if ( v4 == 0 )
    {
      (*(void (__fastcall **)(char *))(*(_QWORD *)v1 + 16LL))(v1);
      std____shared_weak_count____release_weak(v1);
    }
  }
  sub_56F9A0(a1 + 4, a1[5]);
  nullsub_1096(a1);
  _ZdlPv(a1);
}

__int64 __fastcall sub_5664B0(_QWORD *a1)
{
  __int64 result; // x0

  *a1 = ((__int64 *)((__int64*)goff_18F9FE8) + 2);
  result = sub_554100(384, 16, 1092657164, &unk_1326E41, 0);
  a1[1] = result;
  return result;
}

// N5storm12SocketSelectE, virtual slot 0
__int64 __fastcall sub_566500(_QWORD *a1)
{
  __int64 v1; // x8

  v1 = a1[1];
  *a1 = ((__int64 *)((__int64*)goff_18F9FE8) + 2);
  return sub_554110(v1, &unk_1326E41, 0);
}

// N5storm12SocketSelectE, virtual slot 1
void __fastcall sub_566530(_QWORD *a1)
{
  *a1 = ((__int64 *)((__int64*)goff_18F9FE8) + 2);
  sub_554110(a1[1], &unk_1326E41, 0);
  _ZdlPv(a1);
}

// N5storm6SocketE, virtual slot 9
int __fastcall sub_567CB0(__int64 a1, __int64 a2)
{
  if ( (unsigned int)sub_567CE0(a1, (_DWORD *)a2, *(_QWORD *)(a2 + 176) + 8LL, **(const void ***)(a2 + 176)) == -1 )
    return 0xFFFFFFFFLL;
  else
    return 1;
}

__int64 __fastcall sub_56ABE0(__int64 result, unsigned int *a2)
{
  unsigned int v2; // w8
  __int64 v3; // x11
  __int64 v4; // x9
  unsigned int v5; // w12
  bool v6; // cf
  _BOOL4 v7; // w12

  if ( *(_QWORD *)(result + 80) == 0 )
  {
    v2 = *a2;
    if ( *a2 == -1 )
    {
      *(_QWORD *)(result + 80) = 0;
    }
    else
    {
      v3 = *(_QWORD *)(result + 64);
      if ( v3 != 0 )
      {
        v4 = result + 64;
        do
        {
          v5 = *(_DWORD *)(v3 + 32);
          v6 = v5 >= v2;
          v7 = v5 < v2;
          if ( v6 )
            v4 = v3;
          v3 = *(_QWORD *)(v3 + 8LL * v7);
        }
        while ( v3 != 0 );
        if ( v4 != result + 64 && *(_DWORD *)(v4 + 32) <= v2 )
          *(_QWORD *)(result + 80) = *(_QWORD *)(v4 + 40);
      }
    }
  }
  return result;
}

// N5storm5stats20StatsManager_NetworkE, virtual slot 0
__int64 __fastcall sub_56B3F0(__int64 a1)
{
  __int64 *v1; // x8

  v1 = ((__int64 *)((__int64*)goff_18FA008) + 18);
  *(_QWORD *)a1 = ((__int64 *)((__int64*)goff_18FA008) + 2);
  *(_QWORD *)(a1 + 24) = v1;
  *(_QWORD *)(a1 + 2680) = 0;
  *(_QWORD *)(a1 + 104) = 0;
  sub_577290((unsigned int *)(a1 + 24));
  return nullsub_1096(a1);
}

__int64 __fastcall sub_56B440(__int64 a1)
{
  __int64 *v1; // x8
  __int64 v2; // x19

  v1 = ((__int64 *)((__int64*)goff_18FA008) + 18);
  *(_QWORD *)(a1 - 24) = ((__int64 *)((__int64*)goff_18FA008) + 2);
  v2 = a1 - 24;
  *(_QWORD *)a1 = v1;
  *(_QWORD *)(a1 + 2656) = 0;
  *(_QWORD *)(a1 + 80) = 0;
  sub_577290((unsigned int *)a1);
  return nullsub_1096(v2);
}

// N5storm5stats20StatsManager_NetworkE, virtual slot 1
void __fastcall sub_56B490(void *a1)
{
  __int64 *v1; // x8

  v1 = ((__int64 *)((__int64*)goff_18FA008) + 18);
  *(_QWORD *)a1 = ((__int64 *)((__int64*)goff_18FA008) + 2);
  *((_QWORD *)a1 + 3) = v1;
  *((_QWORD *)a1 + 335) = 0;
  *((_QWORD *)a1 + 13) = 0;
  sub_577290((unsigned int *)a1 + 6);
  nullsub_1096(a1);
  _ZdlPv(a1);
}

void __fastcall sub_56B4E0(__int64 a1)
{
  __int64 *v1; // x8
  void *v2; // x19

  v1 = ((__int64 *)((__int64*)goff_18FA008) + 18);
  *(_QWORD *)(a1 - 24) = ((__int64 *)((__int64*)goff_18FA008) + 2);
  v2 = (void *)(a1 - 24);
  *(_QWORD *)a1 = v1;
  *(_QWORD *)(a1 + 2656) = 0;
  *(_QWORD *)(a1 + 80) = 0;
  sub_577290((unsigned int *)a1);
  nullsub_1096(v2);
  _ZdlPv(v2);
}

// N5storm4CoreE, virtual slot 2
__int64 __fastcall sub_56CBF0(_QWORD *a1)
{
  __int64 v2; // x0
  char *v3; // x20

  v2 = sub_5771D0( 0LL);
  if ( a1 != nullptr )
  {
    v3 = (char *)a1 + *(_QWORD *)(*a1 - 16LL);
    (*(void (__fastcall **)(_QWORD *))*a1)(a1);
    v2 = sub_57EDC0(v3, 0LL, &unk_1326E41, 0);
  }
  nullsub_2(v2);
  sub_36CB0();
  sub_37B00();
  return sub_377F0();
}

void sub_56D710(__int64 result, int *a2, int a3)
{
  int v3; // w8

  *(_QWORD *)result = ((__int64 *)((__int64*)goff_18FA070) + 2);
  v3 = *a2;
  *(_QWORD *)result = ((__int64 *)((__int64*)goff_18FA078) + 2);
  *(_DWORD *)(result + 8) = v3;
  *(_DWORD *)(result + 12) = a3;
  return;
}

// N5storm16CounterDataEventE, virtual slot 0
void __fastcall sub_56D990(_QWORD *result)
{
  _QWORD *v1; // x19
  _QWORD **v2; // x20
  _QWORD **v3; // x21

  v1 = result;
  v2 = (_QWORD **)result[6];
  *result = ((__int64 *)((__int64*)goff_18FA088) + 2);
  v3 = (_QWORD **)result[7];
  if ( v2 != v3 )
  {
    do
    {
      result = *v2;
      if ( *v2 != nullptr )
        result = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *))(*result + 8LL))(result);
      ++v2;
    }
    while ( v3 != v2 );
    v2 = (_QWORD **)v1[6];
  }
  if ( v2 != nullptr )
  {
    v1[7] = v2;
    { sub_37030(v2); return; }
  }
  return;
}

// N5storm16CounterDataEventE, virtual slot 1
__int64 __fastcall sub_56DA10(_QWORD *a1)
{
  _QWORD *v2; // x20
  _QWORD *v3; // x21

  v2 = (_QWORD *)a1[6];
  *a1 = ((__int64 *)((__int64*)goff_18FA088) + 2);
  v3 = (_QWORD *)a1[7];
  if ( v2 != v3 )
  {
    do
    {
      if ( *v2 != 0 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v2 + 8LL))(*v2);
      ++v2;
    }
    while ( v3 != v2 );
    v2 = (_QWORD *)a1[6];
  }
  if ( v2 != nullptr )
  {
    a1[7] = v2;
    sub_37030(v2);
  }
  return sub_37030(a1);
}

// N5storm5stats8outEvent12QOSStatisticE, virtual slot 1
__int64 __fastcall sub_56E080(_QWORD *a1)
{
  char *v1; // x20
  unsigned __int64 *v3; // x8
  unsigned __int64 v4; // x9
  __int64 v5; // x0

  v1 = (char *)a1[14];
  *a1 = ((__int64 *)((__int64*)goff_18FA098) + 2);
  if ( v1 != nullptr )
  {
    v3 = (unsigned __int64 *)((char *)v1 + 8);
    v4 = __atomic_fetch_sub(v3, 1, 5);
    if ( v4 == 0 )
    {
      (*(void (__fastcall **)(char *))(*(_QWORD *)v1 + 16LL))(v1);
      std____shared_weak_count____release_weak(v1);
      v5 = a1[10];
      if ( v5 == 0 )
        return sub_37030(a1);
      goto LABEL_6;
    }
  }
  v5 = a1[10];
  if ( v5 != 0 )
  {
LABEL_6:
    a1[11] = v5;
    sub_37030(v5);
  }
  return sub_37030(a1);
}

// N5storm17CounterDescriptorE, virtual slot 0
__int64 __fastcall sub_56EFD0(__int64 result)
{
  __int64 v1; // x19

  *(_QWORD *)result = ((__int64 *)((__int64*)goff_18FA068) + 2);
  v1 = result;
  if ( (*(_BYTE *)(result + 40) & 1) != 0 )
  {
    result = *(_QWORD *)(result + 56);
    if ( result != 0 )
      result = sub_37030(result);
  }
  if ( (*(_BYTE *)(v1 + 16) & 1) != 0 )
  {
    result = *(_QWORD *)(v1 + 32);
    if ( result != 0 )
      return sub_37030(result);
  }
  return result;
}

// N5storm18DynamicTypeFactoryINS_16CounterListEventEEE, virtual slot 2
_QWORD *sub_5703A0()
{
  _QWORD *v0; // x19
  __int64 *v1; // x0
  __int64 v2; // x8

  v0 = (_QWORD *)sub_36EA0(0x48u, 8u, 0, 1092624387);
  v1 = sub_593B50();
  *v0 = 0;
  v0[1] = 0;
  v2 = qword_1915B80;
  *((_DWORD *)v0 + 2) = -1;
  v0[2] = v2;
  v0[3] = 0;
  *v0 = ((__int64 *)((__int64*)goff_18FA080) + 2);
  sub_594400(v0 + 4, v1);
  v0[7] = 0;
  v0[8] = 0;
  v0[6] = 0;
  return v0;
}

// N5storm18DynamicTypeFactoryINS_16CounterDataEventEEE, virtual slot 2
_QWORD *sub_570710()
{
  _QWORD *v0; // x19
  __int64 *v1; // x0
  __int64 v2; // x8
  _BYTE v4[16]; // [xsp+0h] [xbp-20h] BYREF

  v0 = (_QWORD *)sub_36EA0(0x48u, 8u, 0, 1092624387);
  v1 = sub_593B50();
  sub_594400(v4, v1);
  *v0 = 0;
  v0[1] = 0;
  v2 = qword_1915B80;
  *((_DWORD *)v0 + 2) = -1;
  v0[2] = v2;
  v0[3] = 0;
  *v0 = ((__int64 *)((__int64*)goff_18FA088) + 2);
  sub_594400(v0 + 4, v4);
  v0[7] = 0;
  v0[8] = 0;
  v0[6] = 0;
  return v0;
}

__int64 __fastcall sub_572A30(__int64 *a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // x22
  char *v7; // x23
  unsigned __int64 *v8; // x8
  unsigned __int64 v9; // x9
  __int64 v10; // x22
  __int64 v11; // x0

  v3 = a1[1];
  a1[1] = 0;
  if ( v3 != 0 )
  {
    v7 = *(char **)(v3 + 16);
    if ( v7 != nullptr )
    {
      v8 = (unsigned __int64 *)((char *)v7 + 8);
      v9 = __atomic_fetch_sub(v8, 1, 5);
      if ( v9 == 0 )
      {
        (*(void (__fastcall **)(char *))(*(_QWORD *)v7 + 16LL))(v7);
        std____shared_weak_count____release_weak(v7);
      }
    }
    sub_57EDC0(v3, 0LL, &unk_1326E41, 0);
  }
  v10 = *a1;
  *a1 = 0;
  if ( v10 != 0 )
  {
    v11 = *(_QWORD *)(v10 + 176);
    *(_QWORD *)(v10 + 176) = 0;
    if ( v11 != 0 )
      sub_57EDC0(v11, 0LL, &unk_1326E41, 0);
    sub_578410(v10);
    sub_57EDC0(v10, 0LL, &unk_1326E41, 0);
  }
  return sub_57EDC0(a1, 0LL, a2, a3);
}

// NSt3__110__function6__funcIZN5storm8internal3tls11ThreadLocalIiEC1ERKiEUlvE_NS_9allocatorIS9_EEFPivEEE, virtual slot 2
__int64 __fastcall sub_573960(__int64 a1)
{
  __int64 result; // x0

  result = _Znwm(0x10u);
  *(_QWORD *)result = ((char *)goff_18FA1C8 + 16);
  *(_DWORD *)(result + 8) = *(_DWORD *)(a1 + 8);
  return result;
}

// NSt3__110__function6__funcIZN5storm8internal3tls11ThreadLocalIiEC1ERKiEUlvE_NS_9allocatorIS9_EEFPivEEE, virtual slot 6
_DWORD *__fastcall sub_5739E0(__int64 a1)
{
  int v1; // w19
  _DWORD *result; // x0

  v1 = *(_DWORD *)(a1 + 8);
  result = (_DWORD *)_Znwm(4u);
  *result = v1;
  return result;
}

__int64 __fastcall sub_577460(__int64 result, unsigned int a2)
{
  int v2; // w8

  if ( *(unsigned __int16 *)(result + 32) != (unsigned __int16)a2 )
  {
    v2 = *(unsigned __int8 *)(result + 41);
    *(_WORD *)(result + 32) = a2;
    if ( v2 == 28 || v2 == 2 )
      *(_WORD *)(result + 42) = __builtin_bswap32(a2) >> 16;
  }
  return result;
}

int __fastcall sub_5842F0(__int64 a1, _BYTE *a2, unsigned int a3, unsigned int a4, char a5)
{
  if ( a4 >= a3 )
    return sub_589530(a1, a2, a3, a5 & 1);
  else
    return 0;
}

__int64 __fastcall sub_584570(__int64 a1, __int64 a2)
{
  __int64 v4; // x8
  __int64 *v5; // x9
  __int64 *v6; // x8

  sub_57F070(a1, a2);
  v4 = ((char *)((__int64*)goff_18F58B0) + 192);
  v5 = ((__int64 *)((__int64*)goff_18EDE68) + 2);
  *(_QWORD *)a1 = ((char *)((__int64*)goff_18F58B0) + 16);
  *(_QWORD *)(a1 + 8) = v4;
  *(_QWORD *)(a1 + 32) = v5;
  sub_57F070(a1 + 40, a2 + 40);
  v6 = ((__int64 *)goff_18EDE70 + 24);
  *(_QWORD *)(a1 + 40) = ((__int64 *)goff_18EDE70 + 2);
  *(_QWORD *)(a1 + 48) = v6;
  *(_DWORD *)(a1 + 68) = *(_DWORD *)(a2 + 68);
  sub_57F1B0(a1 + 40, a1 + 8);
  return sub_2590F0((_QWORD *)(a1 + 72), a1 + 8, (_QWORD *)(a2 + 72));
}

// N5storm33NetPropertyTouchedBitsRetrievalOpE, virtual slot 3
__int64 __fastcall sub_584A90(__int64 a1, _BYTE *a2)
{
  __int64 v2; // x21
  _QWORD *v4; // x0
  __int64 v5; // x10
  unsigned __int64 v6; // x9
  unsigned __int64 v8; // x10
  __int64 result; // x0
  char v10; // w8
  __int64 v11; // x9

  v2 = *(_QWORD *)(a1 + 40);
  v4 = *(_QWORD **)(v2 - 16);
  v5 = v4[1] - *v4;
  v6 = *(unsigned int *)(v2 - 8);
  if ( (unsigned int)v6 < (unsigned int)((unsigned __int64)v5 >> 5) )
  {
    v8 = v5 >> 5;
    if ( v8 >= v6 )
    {
      if ( v8 > v6 )
        sub_58EB60((__int64)v4, *v4 + 32 * v6);
    }
    else
    {
      sub_58EBE0(v4, v6 - v8);
    }
  }
  result = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a2 + 136LL))(a2);
  v10 = a2[25];
  v11 = *(_QWORD *)(v2 - 16);
  *(_BYTE *)(v11 + 24) = result & 1;
  *(_BYTE *)(v11 + 25) = v10;
  if ( *(_BYTE *)(a1 + 24) != 0 )
    result = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a2 + 128LL))(a2);
  *(_QWORD *)(a1 + 40) -= 16LL;
  return result;
}

__int64 __fastcall sub_584D60(__int64 result)
{
  __int64 v1; // x19
  __int64 v2; // x20
  bool v3; // zf

  v1 = *(_QWORD *)result;
  v2 = *(_QWORD *)(result + 8);
  v3 = *(_QWORD *)result == v2;
  *(_WORD *)(result + 24) = 0;
  if ( !v3 )
  {
    do
    {
      result = sub_584D60(v1);
      v1 += 32;
    }
    while ( v2 != v1 );
  }
  return result;
}

__int64 __fastcall sub_585990(__int64 a1, _DWORD *a2, __int64 *a3, __int64 a4)
{
  __int64 v4; // x8
  __int64 *v5; // x10
  __int64 v6; // x11
  __int64 *v7; // x9
  __int64 *v8; // x8

  v4 = qword_1916FA8;
  v5 = ((__int64*)goff_18EE7F0);
  v6 = *a3;
  *(_DWORD *)(a1 + 8) = -1;
  v7 = goff_18FA5F8;
  *(_QWORD *)(a1 + 16) = v4;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)a1 = v5 + 2;
  v8 = v7 + 2;
  *(_DWORD *)(a1 + 32) = *a2;
  LODWORD(v7) = a2[1];
  *(_QWORD *)(a1 + 40) = v6;
  *(_QWORD *)a1 = v8;
  *(_DWORD *)(a1 + 36) = (_DWORD)v7;
  return sub_578210(a1 + 48, a4);
}

void sub_586090(int result)
{
  unsigned int v1; // w19
  char *v2; // x20

  if ( *(_QWORD *)((__int64*)goff_18FA620) != 3735936685LL )
  {
    v1 = result;
    v2 = (char *)sub_585CA0(result);
    std__mutex__lock(v2);
    *((_BYTE *)v2 + v1 + 296) = 0;
    { std__mutex__unlock(v2); return; }
  }
  return;
}

__int64 __fastcall sub_5882D0(__int64 a1, __int64 a2, unsigned int a3, char a4, __int64 a5)
{
  __int64 result; // x0
  __int64 v7; // x8

  result = sub_5771E0(a1, 0LL, a2, a3, a4 & 1, a5);
  *(_QWORD *)(a1 + 48) = 0;
  v7 = ((__int64*)goff_18FA678);
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)a1 = v7 + 16;
  *(_BYTE *)(a1 + 56) = 1;
  return result;
}

__int64 __fastcall sub_588560(__int64 *a1)
{
  __int64 result; // x0

  result = sub_57D200(48, 8, 1092624384, 0LL, &unk_1326E41, 0);
  *(_BYTE *)result = 1;
  *(_QWORD *)(result + 9) = 0;
  *(_QWORD *)(result + 1) = 0;
  *(_QWORD *)(result + 32) = 0;
  *(_QWORD *)(result + 25) = 0;
  *(_QWORD *)(result + 17) = 0;
  *(_BYTE *)(result + 8) = 1;
  *(_WORD *)(result + 9) = 0;
  *(_BYTE *)(result + 40) = 0;
  *a1 = result;
  return result;
}

void __fastcall sub_5885D0(_QWORD *result)
{
  __int64 v1; // x20
  _QWORD *v2; // x19

  v1 = *result;
  if ( *result != 0 )
  {
    v2 = result;
    std__mutex___mutex((char *)(v1 + 8));
    std__condition_variable___condition_variable((char *)v1);
    sub_57EDC0(v1, 0LL, &unk_1326E41, 0);
    *v2 = 0;
  }
  return;
}

_Bool __fastcall sub_589B10(__int64 a1)
{
  unsigned int v1; // w8
  unsigned int v2; // w9
  unsigned int v3; // w10

  v1 = *(_DWORD *)(a1 + 28);
  if ( (v1 & 7) != 0 )
  {
    v2 = 8 - (*(_DWORD *)(a1 + 28) & 7);
    v3 = *(_DWORD *)(a1 + 32);
    if ( v3 <= v1 )
      v3 = *(_DWORD *)(a1 + 28);
    if ( v3 - v1 < v2 )
      return 0;
    *(_DWORD *)(a1 + 28) = v2 + v1;
  }
  return 1;
}

_Bool __fastcall sub_589B60(__int64 a1)
{
  unsigned int v1; // w8
  unsigned int v2; // w9
  unsigned int v3; // w10

  v1 = *(_DWORD *)(a1 + 32);
  if ( (v1 & 7) != 0 )
  {
    v2 = 8 - (*(_DWORD *)(a1 + 32) & 7);
    v3 = *(_DWORD *)(a1 + 24);
    if ( v3 <= v1 )
      v3 = *(_DWORD *)(a1 + 32);
    if ( v3 - v1 < v2 )
      return 0;
    *(_DWORD *)(a1 + 32) = v2 + v1;
  }
  return 1;
}

__int64 __fastcall sub_58C210(__int64 a1, __int64 *a2)
{
  __int64 result; // x0
  unsigned int *v5; // x8
  unsigned int v6; // w9

  result = sub_58BBE0(*(_QWORD *)(a1 + 24));
  if ( (result & 1) == 0 )
  {
    result = sub_554100(3072, 16, 1092624384, &unk_1326E41, 0);
    *a2 = result;
    v5 = (unsigned int *)(a1 + 32);
    v6 = __atomic_fetch_add(v5, 1, 5);
  }
  return result;
}

// N5storm17NetPropertyBufferE, virtual slot 5
__int64 __fastcall sub_58C990(__int64 a1)
{
  __int64 v2; // x20

  v2 = sub_56C9F0(64, 8, 1092624384, 0LL, &unk_1326E41, 0);
  sub_583700(v2, a1);
  return v2;
}

// N5storm18NetPropertyEResultE, virtual slot 5
__int64 __fastcall sub_58D110(__int64 a1)
{
  __int64 v2; // x20
  __int64 v3; // x8
  __int64 *v4; // x9
  __int64 *v5; // x8

  v2 = sub_56C9F0(136, 8, 1092624384, 0LL, &unk_1326E41, 0);
  sub_57F070(v2, a1);
  v3 = ((char *)((__int64*)goff_18F58B0) + 192);
  v4 = ((__int64 *)((__int64*)goff_18EDE68) + 2);
  *(_QWORD *)v2 = ((char *)((__int64*)goff_18F58B0) + 16);
  *(_QWORD *)(v2 + 8) = v3;
  *(_QWORD *)(v2 + 32) = v4;
  sub_57F070(v2 + 40, a1 + 40);
  v5 = ((__int64 *)goff_18EDE70 + 24);
  *(_QWORD *)(v2 + 40) = ((__int64 *)goff_18EDE70 + 2);
  *(_QWORD *)(v2 + 48) = v5;
  *(_DWORD *)(v2 + 68) = *(_DWORD *)(a1 + 68);
  sub_57F1B0(v2 + 40, v2 + 8);
  sub_2590F0((_QWORD *)(v2 + 72), v2 + 8, (_QWORD *)(a1 + 72));
  return v2;
}

// N5storm10SystemTimeE, virtual slot 2
unsigned __int64 __fastcall sub_58F430(char *a1)
{
  return (unsigned __int64)(1000LL * nn__os__GetSystemTick(a1)) / *(_QWORD *)((__int64*)goff_18F13E8) / 0x3E8;
}

// N5storm18DynamicTypeFactoryINS_11ResultEventEEE, virtual slot 2
__int64 __fastcall sub_58FB00(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 result; // x0
  __int64 v4; // x8
  __int64 *v5; // x9

  result = sub_56C9F0(48, 8, 1092624387, 0LL, a2, a3);
  v4 = qword_1916FA8;
  *(_DWORD *)(result + 8) = -1;
  v5 = ((__int64*)goff_18EE7F0);
  *(_QWORD *)result = v5 + 2;
  *(_QWORD *)(result + 16) = v4;
  *(_QWORD *)(result + 24) = 0;
  *(_QWORD *)(result + 32) = 0;
  *(_QWORD *)(result + 40) = v4;
  return result;
}

// NSt3__110__function6__funcIZN5storm8internal3tls11ThreadLocalIbEC1ERKbEUlvE_NS_9allocatorIS9_EEFPbvEEE, virtual slot 2
__int64 __fastcall sub_590CA0(__int64 a1)
{
  __int64 result; // x0

  result = _Znwm(0x10u);
  *(_QWORD *)result = ((char *)((__int64*)goff_18FA640) + 16);
  *(_BYTE *)(result + 8) = *(_BYTE *)(a1 + 8);
  return result;
}

// NSt3__110__function6__funcIZN5storm8internal3tls11ThreadLocalIbEC1ERKbEUlvE_NS_9allocatorIS9_EEFPbvEEE, virtual slot 6
_BYTE *__fastcall sub_590D20(__int64 a1)
{
  char v1; // w19
  _BYTE *result; // x0

  v1 = *(_BYTE *)(a1 + 8);
  result = (_BYTE *)_Znwm(1u);
  *result = v1;
  return result;
}

// NSt3__110__function6__funcIZN5storm8internal3tls11ThreadLocalImEC1ERKmEUlvE_NS_9allocatorIS9_EEFPmvEEE, virtual slot 6
_QWORD *__fastcall sub_591420(__int64 a1)
{
  __int64 v1; // x19
  _QWORD *result; // x0

  v1 = *(_QWORD *)(a1 + 8);
  result = (_QWORD *)_Znwm(8u);
  *result = v1;
  return result;
}

__int64 __fastcall sub_5932F0(__int64 result)
{
  __int64 v1; // x19
  __int64 v2; // x20

  v1 = *(_QWORD *)(result + 48);
  v2 = *(_QWORD *)(result + 56);
  *(_BYTE *)(result + 75) = 1;
  *(_QWORD *)(result + 16) = -1;
  for ( *(_QWORD *)(result + 24) = -1; v1 != v2; v1 += 104 )
    result = sub_5932F0(v1);
  return result;
}

__int64 __fastcall sub_593420(__int64 a1)
{
  __int64 result; // x0
  __int64 v3; // x9

  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)a1 = 0;
  sub_54BC60();
  *(_QWORD *)a1 = ((__int64 *)((__int64*)goff_18F1700) + 2);
  result = sub_5771E0(a1 + 24, 0LL, &unk_1326E41, 0, 0, 0LL);
  v3 = ((char *)((__int64*)goff_18FA9D8) + 16);
  *(_QWORD *)a1 = v3;
  *(_QWORD *)(a1 + 24) = ((char *)((__int64*)goff_18FA9D8) + 96);
  *(_DWORD *)(a1 + 64) = -1;
  return result;
}

// N5storm9transport20ConnectionBasePacketE, virtual slot 0
__int64 __fastcall sub_595BE0(__int64 a1)
{
  __int64 *v2; // x8
  __int64 v3; // x0
  __int64 v4; // x8

  *(_QWORD *)a1 = ((char *)goff_18FAA08 + 16);
  sub_576000(a1 + 496);
  if ( (*(_BYTE *)(a1 + 464) & 1) != 0 )
    sub_56CA00(*(_QWORD *)(a1 + 480), &unk_1326E41, 0);
  v2 = ((__int64*)goff_18EDCD0);
  v3 = *(_QWORD *)(a1 + 392);
  *(_QWORD *)(a1 + 328) = v2 + 2;
  *(_QWORD *)(a1 + 336) = v2 + 24;
  *(_QWORD *)(a1 + 392) = 0;
  if ( v3 != 0 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  v4 = ((__int64*)goff_18FAA00);
  *(_QWORD *)a1 = v4 + 16;
  *(_WORD *)(a1 + 248) = 0;
  return sub_578410(a1 + 72);
}

// N5storm9transport20ConnectionBasePacketE, virtual slot 1
__int64 __fastcall sub_595C80(__int64 a1)
{
  __int64 *v2; // x8
  __int64 v3; // x0
  __int64 v4; // x8

  *(_QWORD *)a1 = ((char *)goff_18FAA08 + 16);
  sub_576000(a1 + 496);
  if ( (*(_BYTE *)(a1 + 464) & 1) != 0 )
    sub_56CA00(*(_QWORD *)(a1 + 480), &unk_1326E41, 0);
  v2 = ((__int64*)goff_18EDCD0);
  v3 = *(_QWORD *)(a1 + 392);
  *(_QWORD *)(a1 + 328) = v2 + 2;
  *(_QWORD *)(a1 + 336) = v2 + 24;
  *(_QWORD *)(a1 + 392) = 0;
  if ( v3 != 0 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  v4 = ((__int64*)goff_18FAA00);
  *(_QWORD *)a1 = v4 + 16;
  *(_WORD *)(a1 + 248) = 0;
  sub_578410(a1 + 72);
  return sub_56CA00(a1, &unk_1326E41, 0);
}

// N5storm19UDPEmulator_NetworkE, virtual slot 98
int __fastcall sub_599870(__int64 a1, __int64 a2)
{
  __int64 result; // x0
  char v4; // w20

  *(_DWORD *)(a1 + 72) = *(_DWORD *)a2;
  *(_BYTE *)(a1 + 298) = *(_BYTE *)(a2 + 4);
  *(_QWORD *)(a1 + 304) = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a1 + 312) = *(_QWORD *)(a2 + 16);
  result = *(_QWORD *)(a1 + 392);
  if ( result != 0 )
  {
    v4 = (*(char (__fastcall **)(__int64))(*(_QWORD *)result + 16LL))(result);
    *(_DWORD *)(a1 + 76) = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 392) + 240LL))(*(_QWORD *)(a1 + 392));
    return v4 & 1;
  }
  return result;
}

int __fastcall sub_5998E0(__int64 a1, __int64 a2)
{
  __int64 result; // x0
  char v4; // w20

  *(_DWORD *)(a1 + 40) = *(_DWORD *)a2;
  *(_BYTE *)(a1 + 266) = *(_BYTE *)(a2 + 4);
  *(_QWORD *)(a1 + 272) = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a1 + 280) = *(_QWORD *)(a2 + 16);
  result = *(_QWORD *)(a1 + 360);
  if ( result != 0 )
  {
    v4 = (*(char (__fastcall **)(__int64))(*(_QWORD *)result + 16LL))(result);
    *(_DWORD *)(a1 + 44) = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 360) + 240LL))(*(_QWORD *)(a1 + 360));
    return v4 & 1;
  }
  return result;
}

// N5storm9transport26LinkManagerRegular_NetworkE, virtual slot 24
__int64 __fastcall sub_5A1900(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // x9
  __int64 v7; // x3

  v5 = a1[22];
  if ( v5 != 0 && (v7 = *(_QWORD *)(v5 + 104)) != 0 )
    return (*(__int64 (__fastcall **)(_QWORD *, __int64, __int64, __int64, __int64, __int64, int))(*a1 + 200LL))(
             a1,
             a2,
             a5,
             v7,
             a3,
             a4,
             0);
  else
    return (unsigned int)*(__int64*)goff_18F1518;
}

__int64 *__fastcall sub_5A2FE0(__int64 a1, _BYTE *a2)
{
  char *v2; // x19
  __int64 **v5; // x0
  __int64 *v6; // x20

  v2 = (char *)(a1 + 3880);
  std__shared_timed_mutex__lock_shared((char *)(a1 + 3880));
  v5 = sub_5CE340((_QWORD *)(a1 + 112), a2);
  if ( v5 != nullptr )
    v6 = v5[5];
  else
    v6 = nullptr;
  std__shared_timed_mutex__unlock_shared(v2);
  return v6;
}

__int64 __fastcall sub_5A3980(__int64 a1, unsigned int *a2)
{
  char *v2; // x19
  unsigned __int64 v5; // x8
  __int64 v6; // x20

  v2 = (char *)(a1 + 3880);
  std__shared_timed_mutex__lock_shared((char *)(a1 + 3880));
  v5 = *a2;
  if ( (unsigned int)v5 <= 0x7F && (*(_QWORD *)(a1 + ((v5 >> 3) & 0x1FFFFFF8) + 152) & (1LL << v5)) != 0 )
    v6 = *(_QWORD *)(a1 + 16 * v5 + 704);
  else
    v6 = 0;
  std__shared_timed_mutex__unlock_shared(v2);
  return v6;
}

// N5storm9transport26LinkManagerRegular_NetworkE, virtual slot 20
__int64 __fastcall sub_5A8590(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // x0

  v5 = sub_5A2780(a1[13], a2);
  if ( v5 != 0 )
    return (*(__int64 (__fastcall **)(_QWORD *, __int64, __int64))(*a1 + 184LL))(a1, v5, a3);
  else
    return (unsigned int)*(__int64*)goff_18F1518;
}

// N5storm9transport26LinkManagerRegular_NetworkE, virtual slot 21
__int64 __fastcall sub_5A85F0(_QWORD *a1, unsigned int *a2, __int64 a3)
{
  __int64 v3; // x23
  unsigned __int64 v7; // x8
  __int64 v8; // x22

  v3 = a1[13];
  std__shared_timed_mutex__lock_shared((char *)(v3 + 3880));
  v7 = *a2;
  if ( (unsigned int)v7 <= 0x7F && (*(_QWORD *)(v3 + ((v7 >> 3) & 0x1FFFFFF8) + 152) & (1LL << v7)) != 0 )
  {
    v8 = *(_QWORD *)(v3 + 16 * v7 + 704);
    std__shared_timed_mutex__unlock_shared((char *)(v3 + 3880));
    if ( v8 != 0 )
      return (*(__int64 (__fastcall **)(_QWORD *, __int64, __int64))(*a1 + 184LL))(a1, v8, a3);
  }
  else
  {
    std__shared_timed_mutex__unlock_shared((char *)(v3 + 3880));
  }
  return (unsigned int)*(__int64*)goff_18F1518;
}

// N5storm9transport26LinkManagerRegular_NetworkE, virtual slot 22
__int64 __fastcall sub_5A86B0(_QWORD *a1, _BYTE *a2, __int64 a3)
{
  __int64 v3; // x23
  __int64 **v7; // x0
  __int64 *v8; // x22

  v3 = a1[13];
  std__shared_timed_mutex__lock_shared((char *)(v3 + 3880));
  v7 = sub_5CE340((_QWORD *)(v3 + 112), a2);
  if ( v7 != nullptr )
  {
    v8 = v7[5];
    std__shared_timed_mutex__unlock_shared((char *)(v3 + 3880));
    if ( v8 != nullptr )
      return (*(__int64 (__fastcall **)(_QWORD *, __int64 *, __int64))(*a1 + 184LL))(a1, v8, a3);
  }
  else
  {
    std__shared_timed_mutex__unlock_shared((char *)(v3 + 3880));
  }
  return (unsigned int)*(__int64*)goff_18F1518;
}

// N5storm14LinkBasePacketE, virtual slot 0
__int64 __fastcall sub_5AAD90(__int64 a1)
{
  __int64 *v2; // x8
  __int64 v3; // x0
  __int64 v4; // x8

  *(_QWORD *)a1 = ((char *)((__int64*)goff_18FABD0) + 16);
  if ( (*(_BYTE *)(a1 + 464) & 1) != 0 )
    sub_56CA00(*(_QWORD *)(a1 + 480), &unk_1326E41, 0);
  v2 = ((__int64*)goff_18EDCD0);
  v3 = *(_QWORD *)(a1 + 344);
  *(_QWORD *)(a1 + 280) = v2 + 2;
  *(_QWORD *)(a1 + 288) = v2 + 24;
  *(_QWORD *)(a1 + 344) = 0;
  if ( v3 != 0 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  v4 = ((__int64*)goff_18FAA00);
  *(_QWORD *)a1 = v4 + 16;
  *(_WORD *)(a1 + 248) = 0;
  return sub_578410(a1 + 72);
}

// N5storm14LinkBasePacketE, virtual slot 1
__int64 __fastcall sub_5AAE20(__int64 a1)
{
  __int64 *v2; // x8
  __int64 v3; // x0
  __int64 v4; // x8

  *(_QWORD *)a1 = ((char *)((__int64*)goff_18FABD0) + 16);
  if ( (*(_BYTE *)(a1 + 464) & 1) != 0 )
    sub_56CA00(*(_QWORD *)(a1 + 480), &unk_1326E41, 0);
  v2 = ((__int64*)goff_18EDCD0);
  v3 = *(_QWORD *)(a1 + 344);
  *(_QWORD *)(a1 + 280) = v2 + 2;
  *(_QWORD *)(a1 + 288) = v2 + 24;
  *(_QWORD *)(a1 + 344) = 0;
  if ( v3 != 0 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  v4 = ((__int64*)goff_18FAA00);
  *(_QWORD *)a1 = v4 + 16;
  *(_WORD *)(a1 + 248) = 0;
  sub_578410(a1 + 72);
  return sub_56CA00(a1, &unk_1326E41, 0);
}

bool __fastcall sub_5B55A0(__int64 a1, _DWORD *a2)
{
  char *v2; // x19
  unsigned __int64 v5; // x8
  __int64 v6; // x8
  _BOOL4 v7; // w20

  if ( *a2 == -1 )
  {
    return false;
  }
  else
  {
    v2 = (char *)(a1 + 4936);
    std__shared_timed_mutex__lock_shared((char *)(a1 + 4936));
    v5 = (unsigned int)*a2;
    v7 = (unsigned int)v5 <= 0x7F
      && (*(_QWORD *)(a1 + ((v5 >> 3) & 0x1FFFFFF8) + 216) & (1LL << v5)) != 0
      && (v6 = *(_QWORD *)(a1 + 24 * v5 + 776)) != 0
      && *(_QWORD *)(v6 + 8) != -1;
    std__shared_timed_mutex__unlock_shared(v2);
  }
  return v7;
}

bool __fastcall sub_5B5650(__int64 a1, _BYTE *a2)
{
  char *v2; // x19
  __int64 **v5; // x0
  __int64 *v6; // x8
  _BOOL4 v7; // w20

  if ( *a2 != 0 )
  {
    v2 = (char *)(a1 + 4936);
    std__shared_timed_mutex__lock_shared((char *)(a1 + 4936));
    v5 = sub_5D0AC0((_QWORD *)(a1 + 4872), a2);
    v7 = v5 != nullptr && (v6 = v5[6]) != nullptr && v6[1] != -1;
    std__shared_timed_mutex__unlock_shared(v2);
  }
  else
  {
    return false;
  }
  return v7;
}

