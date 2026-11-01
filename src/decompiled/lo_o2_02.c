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
extern __attribute__((visibility("hidden"))) int dword_1372C60[];
extern __attribute__((visibility("hidden"))) int dword_1915530;
extern __attribute__((visibility("hidden"))) int dword_1915534;
extern char goff_17C1000[];
extern char goff_181E218[];
extern char goff_1825D70[];
extern char goff_1825DF0[];
extern char goff_1825F80[];
extern char goff_1828498[];
extern char goff_1828A50[];
extern char goff_1828FD0[];
extern char goff_182AE70[];
extern char goff_182B3F0[];
extern char goff_18EC9E8[];
extern char goff_18EDE08[];
extern char goff_18EE7F0[];
extern char goff_18F13E8[];
extern char goff_18F2D20[];
extern char goff_18F5B50[];
extern char goff_18F6C58[];
extern char goff_18F6C68[];
extern char goff_18F6C80[];
extern char goff_18F6C88[];
extern char goff_18F6C90[];
extern char goff_18F6CA0[];
extern char goff_18F6CA8[];
extern char goff_18F6DF8[];
extern char goff_18F6E20[];
extern char goff_18F6F00[];
extern char goff_18F7000[];
extern char goff_18F7008[];
extern char goff_18F7038[];
extern char goff_18F7048[];
extern char goff_18F7058[];
extern char goff_18F7080[];
extern char goff_18F7088[];
extern char goff_18F7090[];
extern char goff_18F7098[];
extern char goff_18F70A0[];
extern char goff_18F70B0[];
extern char goff_18F70E8[];
extern char goff_18F79D8[];
extern char goff_18F7A68[];
extern char goff_18F7AD8[];
extern char goff_18F86F0[];
extern char goff_18F87A0[];
extern char goff_18F87A8[];
extern char goff_18F87B0[];
extern char goff_18F88D8[];
extern char goff_18F8B68[];
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
extern char goff_18F9858[];
extern char goff_18F9860[];
extern char goff_18F9868[];
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
extern __attribute__((visibility("hidden"))) char hoff_17C1000[];
extern __attribute__((visibility("hidden"))) char hoff_181E218[];
extern __attribute__((visibility("hidden"))) char hoff_1825D70[];
extern __attribute__((visibility("hidden"))) char hoff_1825DF0[];
extern __attribute__((visibility("hidden"))) char hoff_1825F80[];
extern __attribute__((visibility("hidden"))) char hoff_1828498[];
extern __attribute__((visibility("hidden"))) char hoff_1828A50[];
extern __attribute__((visibility("hidden"))) char hoff_1828FD0[];
extern __attribute__((visibility("hidden"))) char hoff_182AE70[];
extern __attribute__((visibility("hidden"))) char hoff_182B3F0[];
__int64 nn__os__GetSystemTick();
__attribute__((visibility("hidden"))) __int64 nullsub_1576();
__attribute__((visibility("hidden"))) __int64 nullsub_1627();
__attribute__((visibility("hidden"))) __int64 nullsub_1682();
__attribute__((visibility("hidden"))) __int64 nullsub_79();
__int64 pthread_mutex_destroy();
extern __attribute__((visibility("hidden"))) __int64 qword_1914470;
extern __attribute__((visibility("hidden"))) __int64 qword_19148A0;
extern __attribute__((visibility("hidden"))) __int64 qword_19153D0;
extern __attribute__((visibility("hidden"))) __int64 qword_1915428;
extern __attribute__((visibility("hidden"))) __int64 qword_19154A8;
extern __attribute__((visibility("hidden"))) __int64 qword_1915508;
__int64 srand();
__int64 std____libcpp_thread_yield();
__int64 std____shared_weak_count____release_weak();
__int64 std__mutex___mutex();
__attribute__((visibility("hidden"))) __int64 sub_250();
__attribute__((visibility("hidden"))) __int64 sub_25ECB0();
__attribute__((visibility("hidden"))) __int64 sub_2B8B20();
__attribute__((visibility("hidden"))) __int64 sub_2C2960();
__attribute__((visibility("hidden"))) __int64 sub_2C3070();
__attribute__((visibility("hidden"))) __int64 sub_36EA0();
__attribute__((visibility("hidden"))) __int64 sub_37030();
__attribute__((visibility("hidden"))) __int64 sub_370A0();
__attribute__((visibility("hidden"))) __int64 sub_418470();
__attribute__((visibility("hidden"))) __int64 sub_4655D0();
__attribute__((visibility("hidden"))) __int64 sub_467120();
__attribute__((visibility("hidden"))) __int64 sub_483450();
__attribute__((visibility("hidden"))) __int64 sub_483BF0();
__attribute__((visibility("hidden"))) __int64 sub_48A400();
__attribute__((visibility("hidden"))) __int64 sub_48B5F0();
__attribute__((visibility("hidden"))) __int64 sub_496940();
__attribute__((visibility("hidden"))) __int64 sub_49FDC0();
__attribute__((visibility("hidden"))) __int64 sub_4A34C0();
__attribute__((visibility("hidden"))) __int64 sub_4A7340();
__attribute__((visibility("hidden"))) __int64 sub_4B1930();
__attribute__((visibility("hidden"))) __int64 sub_4B1AC0();
__attribute__((visibility("hidden"))) __int64 sub_4C3990();
__attribute__((visibility("hidden"))) __int64 sub_4C9920();
__attribute__((visibility("hidden"))) __int64 sub_4CA100();
__attribute__((visibility("hidden"))) __int64 sub_4D44F0();
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
__attribute__((visibility("hidden"))) __int64 sub_4EC750();
__attribute__((visibility("hidden"))) __int64 sub_4ECFE0();
__attribute__((visibility("hidden"))) __int64 sub_4ED030();
__attribute__((visibility("hidden"))) _Bool sub_4ED190();
__attribute__((visibility("hidden"))) __int64 sub_4ED6D0();
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
__attribute__((visibility("hidden"))) __int64 sub_4FA630();
__attribute__((visibility("hidden"))) __int64 sub_4FABF0();
__attribute__((visibility("hidden"))) __int64 sub_4FAED0();
__attribute__((visibility("hidden"))) __int64 sub_4FAFD0();
__attribute__((visibility("hidden"))) __int64 sub_4FB800();
__attribute__((visibility("hidden"))) __int64 sub_4FB9D0();
__attribute__((visibility("hidden"))) __int64 sub_4FBCC0();
__attribute__((visibility("hidden"))) __int64 sub_4FBEF0();
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
__attribute__((visibility("hidden"))) __int64 sub_518330();
__attribute__((visibility("hidden"))) __int64 sub_518380();
__attribute__((visibility("hidden"))) __int64 sub_518840();
__attribute__((visibility("hidden"))) __int64 sub_518850();
__attribute__((visibility("hidden"))) __int64 sub_518FE0();
__attribute__((visibility("hidden"))) __int64 sub_5190B0();
__attribute__((visibility("hidden"))) __int64 sub_519620();
__attribute__((visibility("hidden"))) __int64 sub_51A630();
__attribute__((visibility("hidden"))) __int64 sub_51A700();
__attribute__((visibility("hidden"))) __int64 sub_51B010();
__attribute__((visibility("hidden"))) __int64 sub_51D180();
__attribute__((visibility("hidden"))) __int64 sub_51D650();
__attribute__((visibility("hidden"))) __int64 sub_51D670();
__attribute__((visibility("hidden"))) __int64 sub_51D8C0();
__attribute__((visibility("hidden"))) __int64 sub_51E060();
__attribute__((visibility("hidden"))) __int64 sub_51F450();
__attribute__((visibility("hidden"))) __int64 sub_51F7E0();
__attribute__((visibility("hidden"))) __int64 sub_520530();
__attribute__((visibility("hidden"))) __int64 sub_520750();
__attribute__((visibility("hidden"))) __int64 sub_520840();
__attribute__((visibility("hidden"))) __int64 sub_5208B0();
__attribute__((visibility("hidden"))) __int64 sub_520FB0();
__attribute__((visibility("hidden"))) __int64 sub_521430();
__attribute__((visibility("hidden"))) __int64 sub_521AD0();
__attribute__((visibility("hidden"))) __int64 sub_521C40();
__attribute__((visibility("hidden"))) __int64 sub_522170();
__attribute__((visibility("hidden"))) __int64 sub_5292E0();
__attribute__((visibility("hidden"))) __int64 sub_529F50();
__attribute__((visibility("hidden"))) __int64 sub_52B170();
__attribute__((visibility("hidden"))) __int64 sub_52B270();
__attribute__((visibility("hidden"))) __int64 sub_52FFF0();
__attribute__((visibility("hidden"))) __int64 sub_530A10();
__attribute__((visibility("hidden"))) __int64 sub_530AD0();
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
__attribute__((visibility("hidden"))) __int64 sub_5436F0();
__attribute__((visibility("hidden"))) __int64 sub_543EC0();
__attribute__((visibility("hidden"))) __int64 sub_548310();
__attribute__((visibility("hidden"))) __int64 sub_548360();
__attribute__((visibility("hidden"))) __int64 sub_5483C0();
__attribute__((visibility("hidden"))) __int64 sub_5484D0();
__attribute__((visibility("hidden"))) __int64 sub_5490B0();
__attribute__((visibility("hidden"))) __int64 sub_54C050();
__attribute__((visibility("hidden"))) __int64 sub_56C9F0();
__attribute__((visibility("hidden"))) __int64 sub_56CA00();
__attribute__((visibility("hidden"))) __int64 sub_56CA10();
__attribute__((visibility("hidden"))) _Bool sub_576540();
__attribute__((visibility("hidden"))) __int64 sub_5771E0();
__attribute__((visibility("hidden"))) __int64 sub_577290();
__attribute__((visibility("hidden"))) __int64 sub_57D200();
__attribute__((visibility("hidden"))) __int64 sub_57EDC0();
__attribute__((visibility("hidden"))) __int64 sub_57EF80();
__attribute__((visibility("hidden"))) __int64 sub_57EF90();
__attribute__((visibility("hidden"))) __int64 sub_57EFA0();
__attribute__((visibility("hidden"))) __int64 sub_57F030();
__attribute__((visibility("hidden"))) __int64 sub_57F040();
__attribute__((visibility("hidden"))) int sub_57F110();
__attribute__((visibility("hidden"))) __int64 sub_5859F0();
__attribute__((visibility("hidden"))) __int64 sub_58B010();
__attribute__((visibility("hidden"))) __int64 sub_593BB0();
__attribute__((visibility("hidden"))) __int64 sub_5B50D0();
__attribute__((visibility("hidden"))) __int64 sub_792D0();
__attribute__((visibility("hidden"))) __int64 sub_C289D0();
__int64 time();
extern __attribute__((visibility("hidden"))) char unk_1326E41;
__int64 x0();

// N5storm4echo20ProductEchoImpl_MainE, virtual slot 0
__int64 __fastcall sub_315E00(_QWORD *a1)
{
  __int64 v2; // x8
  _QWORD *v3; // x20
  _QWORD *v4; // x22
  __int64 v5; // x0
  _QWORD *v6; // x23
  __int64 v7; // x0
  __int64 v8; // x0
  __int64 v9; // x0

  v2 = ((char *)((__int64*)goff_18F2D20) + 136);
  *a1 = ((char *)((__int64*)goff_18F2D20) + 16);
  a1[8] = v2;
  v3 = a1 + 8;
  std__mutex___mutex((char *)(a1 + 303));
  v4 = (_QWORD *)a1[300];
  if ( v4 != nullptr )
  {
    do
    {
      v5 = v4[3];
      v6 = (_QWORD *)*v4;
      v4[3] = 0;
      if ( v5 != 0 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
      sub_56CA00(v4, &unk_1326E41, 0);
      v4 = v6;
    }
    while ( v6 != nullptr );
  }
  v7 = a1[298];
  a1[298] = 0;
  if ( v7 != 0 )
    sub_56CA00(v7, &unk_1326E41, 0);
  sub_C289D0((__int64)(a1 + 150));
  sub_C289D0((__int64)(a1 + 30));
  v8 = a1[26];
  if ( v8 != 0 )
  {
    a1[27] = v8;
    sub_56CA00(v8, &unk_1326E41, 0);
  }
  v9 = a1[19];
  if ( v9 != 0 )
  {
    a1[20] = v9;
    sub_56CA00(v9, &unk_1326E41, 0);
  }
  sub_577290(v3);
  return sub_54C050(a1);
}

// N5storm4echo23ObjectManagerDemux_MainE, virtual slot 0
_QWORD *__fastcall sub_4140D0(_QWORD *result)
{
  _QWORD *v1; // x19
  __int64 v2; // x22
  __int64 v3; // x21

  v1 = result;
  v2 = 32;
  *result = ((char *)((__int64*)goff_18F5B50) + 16);
  do
  {
    v3 = v1[v2];
    v1[v2] = 0;
    if ( v3 != 0 )
    {
      sub_418470(v3);
      result = (_QWORD *)sub_57EDC0(v3, 0LL, &unk_1326E41, 0);
    }
    --v2;
  }
  while ( v2 != 0 );
  return result;
}

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

// N5storm28SimpleLanMatchmakingStrategyE, virtual slot 24
void __fastcall sub_45EEF0(__int64 a1, __int64 a2)
{
  __int64 v2; // x0
  __int64 v4; // x0

  if ( a2 != 0 )
  {
    v2 = *(_QWORD *)(a2 + 24);
    *(_QWORD *)(a2 + 24) = 0;
    if ( v2 != 0 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
    v4 = *(_QWORD *)(a2 + 16);
    *(_QWORD *)(a2 + 16) = 0;
    if ( v4 != 0 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
    sub_57EDC0(a2, 0LL, &unk_1326E41, 0);
  }
}

// N5storm28SimpleLanMatchmakingStrategyE, virtual slot 76
__int64 __fastcall sub_45EF60(_QWORD *a1, __int64 a2)
{
  __int64 v4; // x19
  __int64 v5; // x8
  __int64 v6; // x0
  __int64 v7; // x8
  __int64 v8; // x0
  __int64 result; // x0
  __int64 v10; // x0
  __int64 v11; // x0
  __int64 v12; // [xsp+8h] [xbp-18h] BYREF

  v4 = (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 176LL))(a1);
  v5 = (*(__int64 (__fastcall **)(_QWORD, void *, int))(**(_QWORD **)(a2 + 40) + 40LL))(
         *(_QWORD *)(a2 + 40),
         &unk_1326E41,
         0);
  v6 = *(_QWORD *)(v4 + 16);
  *(_QWORD *)(v4 + 16) = v5;
  if ( v6 != 0 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
  v7 = (*(__int64 (__fastcall **)(_QWORD, void *, int))(**(_QWORD **)(a2 + 48) + 40LL))(
         *(_QWORD *)(a2 + 48),
         &unk_1326E41,
         0);
  v8 = *(_QWORD *)(v4 + 24);
  *(_QWORD *)(v4 + 24) = v7;
  if ( v8 != 0 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
  result = a1[12];
  if ( result != 0 )
  {
    v12 = v4;
    result = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)result + 48LL))(result, &v12);
    if ( (result & 1) == 0 )
    {
      v10 = *(_QWORD *)(v4 + 24);
      *(_QWORD *)(v4 + 24) = 0;
      if ( v10 != 0 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
      v11 = *(_QWORD *)(v4 + 16);
      *(_QWORD *)(v4 + 16) = 0;
      if ( v11 != 0 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
      return sub_57EDC0(v4, 0LL, &unk_1326E41, 0);
    }
  }
  return result;
}

// N5storm27SimpleNoMatchmakingStrategyE, virtual slot 22
__int64 sub_460470()
{
  char *result; // x0

  result = sub_57D200(40, 8, 1092677632, 0LL, &unk_1326E41, 0);
  *(_DWORD *)(result + 7) = 0;
  *(_QWORD *)result = 0;
  *(_DWORD *)(result + 12) = -1;
  *(_QWORD *)(result + 16) = 0;
  *(_QWORD *)(result + 24) = 0;
  *(_QWORD *)(result + 32) = 0;
  return result;
}

// N5storm27SimpleNoMatchmakingStrategyE, virtual slot 23
__int64 __fastcall sub_4604C0(__int64 a1, __int64 a2)
{
  __int64 v3; // x0
  __int64 v4; // x19
  __int64 v5; // x8
  __int64 v6; // x0
  __int64 v7; // x8
  __int64 v8; // x0

  v3 = sub_57D200(40, 8, 1092677632, 0LL, &unk_1326E41, 0);
  *(_DWORD *)(v3 + 7) = 0;
  *(_QWORD *)v3 = 0;
  *(_DWORD *)(v3 + 12) = -1;
  v4 = v3;
  *(_QWORD *)(v3 + 24) = 0;
  *(_QWORD *)(v3 + 32) = 0;
  *(_QWORD *)(v3 + 16) = 0;
  *(_DWORD *)(v3 + 12) = *(_DWORD *)(a2 + 12);
  v5 = (*(__int64 (__fastcall **)(_QWORD, void *, int))(**(_QWORD **)(a2 + 16) + 40LL))(
         *(_QWORD *)(a2 + 16),
         &unk_1326E41,
         0);
  v6 = *(_QWORD *)(v4 + 16);
  *(_QWORD *)(v4 + 16) = v5;
  if ( v6 != 0 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
  v7 = (*(__int64 (__fastcall **)(_QWORD, void *, int))(**(_QWORD **)(a2 + 24) + 40LL))(
         *(_QWORD *)(a2 + 24),
         &unk_1326E41,
         0);
  v8 = *(_QWORD *)(v4 + 24);
  *(_QWORD *)(v4 + 24) = v7;
  if ( v8 != 0 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
  return v4;
}

// N5storm27SimpleNoMatchmakingStrategyE, virtual slot 24
void __fastcall sub_4605A0(__int64 a1, __int64 a2)
{
  __int64 v2; // x0
  __int64 v4; // x0

  if ( a2 != 0 )
  {
    v2 = *(_QWORD *)(a2 + 24);
    *(_QWORD *)(a2 + 24) = 0;
    if ( v2 != 0 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
    v4 = *(_QWORD *)(a2 + 16);
    *(_QWORD *)(a2 + 16) = 0;
    if ( v4 != 0 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
    sub_57EDC0(a2, 0LL, &unk_1326E41, 0);
  }
}

void __fastcall sub_464570(__int64 a1)
{  __int64 *v3; // x8

  sub_5771E0((_QWORD *)a1, 0LL, (__int64)&unk_1326E41, 0, 0, 0LL);
  v3 = ((__int64*)goff_18F6C58);
  *(_QWORD *)a1 = v3 + 2;
  *(_QWORD *)(a1 + 32) = 0;
  *(_WORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 56) = 0;
  return;
}

void sub_464C50(__int64 result)
{
  __int64 *v1; // x8

  *(_WORD *)(result + 8) = 0;
  v1 = ((__int64*)goff_18F6C80);
  *(_QWORD *)(result + 16) = 0;
  *(_QWORD *)(result + 24) = 0;
  *(_QWORD *)result = v1 + 2;
  *(_BYTE *)(result + 32) = 0;
  *(_QWORD *)(result + 40) = 0;
  *(_BYTE *)(result + 48) = 0;
  return;
}

__int64 __fastcall sub_467070(__int64 a1, __int64 a2)
{
  __int64 result; // x0
  __int64 v5; // x8
  __int64 v6; // x8

  result = sub_2B8B20(a1 + 288);
  if ( (result & 1) != 0 )
  {
    v5 = (*(__int64 (__fastcall **)(_QWORD, void *, int))(**(_QWORD **)(a2 + 32) + 40LL))(
           *(_QWORD *)(a2 + 32),
           &unk_1326E41,
           0);
    result = *(_QWORD *)(a1 + 264);
    *(_QWORD *)(a1 + 264) = v5;
    if ( result != 0 )
      result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 8LL))(result);
  }
  if ( *(_QWORD *)(a1 + 272) != 0 )
  {
    v6 = (*(__int64 (__fastcall **)(_QWORD, void *, int))(**(_QWORD **)(a2 + 32) + 40LL))(
           *(_QWORD *)(a2 + 32),
           &unk_1326E41,
           0);
    result = *(_QWORD *)(a1 + 272);
    *(_QWORD *)(a1 + 272) = v6;
    if ( result != 0 )
      return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 8LL))(result);
  }
  return result;
}

__int64 __fastcall sub_46FC70(_QWORD *a1)
{
  _QWORD *v2; // x0
  _QWORD *v3; // x21
  __int64 v4; // x0
  __int64 v5; // x0
  char *v6; // x0
  char *v7; // x0
  __int64 v8; // x0
  _QWORD *v9; // x23
  _QWORD *v10; // x21
  char *v11; // x22
  unsigned __int64 *v12; // x8
  unsigned __int64 v13; // x9
  __int64 result; // x0

  v2 = (_QWORD *)a1[16];
  if ( v2 != nullptr )
  {
    do
    {
      v3 = (_QWORD *)*v2;
      sub_56CA00(v2, &unk_1326E41, 0);
      v2 = v3;
    }
    while ( v3 != nullptr );
  }
  v4 = a1[14];
  a1[14] = 0;
  if ( v4 != 0 )
    sub_56CA00(v4, &unk_1326E41, 0);
  v5 = a1[13];
  a1[13] = 0;
  if ( v5 != 0 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  v6 = (char *)a1[12];
  if ( v6 != nullptr )
    std____shared_weak_count____release_weak(v6);
  v7 = (char *)a1[10];
  if ( v7 != nullptr )
    std____shared_weak_count____release_weak(v7);
  v8 = a1[6];
  if ( v8 != 0 )
  {
    a1[7] = v8;
    sub_56CA00(v8, &unk_1326E41, 0);
  }
  v9 = (_QWORD *)a1[3];
  while ( v9 != nullptr )
  {
    v10 = v9;
    v9 = (_QWORD *)*v9;
    v11 = (char *)v10[4];
    if ( v11 != nullptr )
    {
      v12 = (unsigned __int64 *)((char *)v11 + 8);
      v13 = __atomic_fetch_sub(v12, 1, 5);
      if ( v13 == 0 )
      {
        (*(void (__fastcall **)(char *))(*(_QWORD *)v11 + 16LL))(v11);
        std____shared_weak_count____release_weak(v11);
      }
    }
    sub_56CA00(v10, &unk_1326E41, 0);
  }
  result = a1[1];
  a1[1] = 0;
  if ( result != 0 )
    return sub_56CA00(result, &unk_1326E41, 0);
  return result;
}

__int64 __fastcall sub_474440(__int64 a1)
{
  __int64 v2; // x8

  sub_5771E0((_QWORD *)a1, 0LL, (__int64)&unk_1326E41, 0, 0, 0LL);
  *(_QWORD *)(a1 + 32) = 0;
  *(_WORD *)(a1 + 40) = 0;
  v2 = goff_18F6F00;
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 56) = 0;
  *(_BYTE *)(a1 + 80) = 0;
  *(_QWORD *)a1 = v2 + 16;
  *(_QWORD *)(a1 + 64) = 0;
  *(_QWORD *)(a1 + 72) = 0;
  return sub_57EFA0(a1 + 88);
}

__int64 __fastcall sub_475240(__int64 a1, __int64 a2)
{
  __int64 v2; // x19
  __int64 v5; // x0
  __int64 v6; // x0
  __int64 v7; // x20
  __int64 v9; // [xsp+8h] [xbp-18h] BYREF

  v2 = a1 + 88;
  sub_57F030(a1 + 88);
  v5 = *(_QWORD *)(a1 + 64);
  v9 = a2;
  v6 = sub_496940(v5, &v9);
  if ( v6 != 0 )
    v7 = *(_QWORD *)(v6 + 24);
  else
    v7 = 0;
  sub_57F040(v2);
  return v7;
}

// N5storm24SimpleConnectionStateNnxE, virtual slot 7
_Bool __fastcall sub_475430(__int64 a1, _BYTE *a2, char a3)
{
  if ( *a2 == (a3 & 1) )
    return 0;
  *a2 = a3 & 1;
  return 1;
}

// N5storm13SimpleContextE, virtual slot 0
__int64 __fastcall sub_47AAD0(__int64 a1)
{
  __int64 result; // x0

  *(_QWORD *)(a1 + 16) = ((__int64 *)goff_18F7000 + 2);
  result = sub_56CA10(a1);
  *((_QWORD *)goff_18F7008 + (unsigned int)result) = 0;
  return result;
}

__int64 __fastcall sub_47AB00(__int64 a1)
{
  __int64 result; // x0

  *(_QWORD *)(a1 + 8) = ((__int64 *)goff_18F7000 + 2);
  result = sub_56CA10(a1);
  *((_QWORD *)goff_18F7008 + (unsigned int)result) = 0;
  return result;
}

__int64 __fastcall sub_47AB30(_QWORD *a1)
{
  __int64 result; // x0

  *a1 = ((__int64 *)goff_18F7000 + 2);
  result = sub_56CA10(a1);
  *((_QWORD *)goff_18F7008 + (unsigned int)result) = 0;
  return result;
}

// N5storm13SimpleContextE, virtual slot 1
void __fastcall sub_47AB60(_QWORD *a1)
{
  a1[2] = ((__int64 *)goff_18F7000 + 2);
  *((_QWORD *)goff_18F7008 + (unsigned int)sub_56CA10(a1)) = 0;
  _ZdlPv(a1);
}

void __fastcall sub_47ABA0(__int64 a1)
{
  void *v1; // x19

  v1 = (void *)(a1 - 8);
  *(_QWORD *)(a1 + 8) = ((__int64 *)goff_18F7000 + 2);
  *((_QWORD *)goff_18F7008 + (unsigned int)sub_56CA10(a1)) = 0;
  _ZdlPv(v1);
}

__int64 __fastcall sub_47BB20(__int64 a1)
{
  __int64 v1; // x0

  v1 = sub_2C3070(a1, goff_18F7038);
  if ( v1 != 0 )
    return v1 + 32;
  else
    return 0;
}

__int64 __fastcall sub_47BB80(__int64 a1)
{
  __int64 v1; // x0

  v1 = sub_2C3070(a1, goff_18F7048);
  if ( v1 != 0 )
    return v1 + 32;
  else
    return 0;
}

__int64 __fastcall sub_47BEB0(__int64 a1)
{
  __int64 v1; // x0

  v1 = sub_2C3070(a1, goff_18F7058);
  if ( v1 != 0 )
    return v1 + 32;
  else
    return 0;
}

__int64 __fastcall sub_47C020(__int64 a1)
{
  __int64 result; // x0

  result = sub_2C3070(a1, goff_18F7080);
  if ( result != 0 )
    return *(_BYTE *)(result + 26) != 0;
  return result;
}

__int64 __fastcall sub_47C050(__int64 a1)
{
  __int64 v1; // x0

  v1 = sub_2C3070(a1, goff_18F7088);
  if ( v1 != 0 )
    return v1 + 32;
  else
    return 0;
}

__int64 __fastcall sub_47C080(__int64 a1)
{
  __int64 v1; // x0

  v1 = sub_2C3070(a1, goff_18F7090);
  if ( v1 != 0 )
    return v1 + 32;
  else
    return 0;
}

__int64 __fastcall sub_47C140(__int64 a1)
{
  __int64 result; // x0

  result = sub_2C3070(a1, goff_18F7098);
  if ( result != 0 )
    return *(_BYTE *)(result + 26) != 0;
  return result;
}

_QWORD *__fastcall sub_47C170(__int64 a1)
{
  _QWORD *result; // x0

  result = sub_5771E0((_QWORD *)a1, 0LL, (__int64)&unk_1326E41, 0, 0, 0LL);
  *(_QWORD *)(a1 + 32) = 0;
  *(_WORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 56) = 0;
  *(_QWORD *)a1 = ((__int64 *)((__int64*)goff_18F70A0) + 2);
  *(_BYTE *)(a1 + 64) = 0;
  return result;
}

// N5storm35SimpleMatchmakingMatchedAsHostEventE, virtual slot 5
__int64 __fastcall sub_47CA50(__int64 a1)
{
  __int64 result; // x0
  __int64 v3; // x9

  result = sub_56C9F0(48, 8, 1092624387, 0LL, &unk_1326E41, 0);
  *(_QWORD *)result = ((char *)goff_18EDE08 + 16);
  *(_DWORD *)(result + 8) = *(_DWORD *)(a1 + 8);
  *(_QWORD *)(result + 16) = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(result + 24) = *(_QWORD *)(a1 + 24);
  *(_QWORD *)result = ((__int64 *)goff_18F70B0 + 2);
  v3 = *(_QWORD *)(a1 + 40);
  *(_QWORD *)(result + 32) = *(_QWORD *)(a1 + 32);
  *(_QWORD *)(result + 40) = v3;
  return result;
}

// N5storm35SimpleMatchmakingMatchedAsPeerEventE, virtual slot 5
__int64 __fastcall sub_47CDB0(__int64 a1)
{
  __int64 result; // x0
  __int64 *v3; // x9
  __int64 v4; // x8
  __int64 v5; // x8
  __int64 v6; // x9

  result = sub_56C9F0(56, 8, 1092624387, 0LL, &unk_1326E41, 0);
  *(_QWORD *)result = ((char *)goff_18EDE08 + 16);
  *(_DWORD *)(result + 8) = *(_DWORD *)(a1 + 8);
  v3 = goff_18F70E8;
  *(_QWORD *)(result + 16) = *(_QWORD *)(a1 + 16);
  v4 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)result = v3 + 2;
  *(_QWORD *)(result + 24) = v4;
  v5 = *(_QWORD *)(a1 + 32);
  v6 = *(_QWORD *)(a1 + 40);
  *(_DWORD *)(result + 48) = *(_DWORD *)(a1 + 48);
  *(_QWORD *)(result + 32) = v5;
  *(_QWORD *)(result + 40) = v6;
  return result;
}

// N5storm31SimpleUbiServicesControllerBase20ServerConnectedEventE, virtual slot 5
__int64 __fastcall sub_47F6B0(__int64 a1)
{
  __int64 result; // x0
  __int64 *v3; // x9
  __int64 v4; // x8
  __int64 *v5; // x9

  result = sub_56C9F0(48, 8, 1092624387, 0LL, &unk_1326E41, 0);
  *(_QWORD *)result = ((char *)goff_18EDE08 + 16);
  *(_DWORD *)(result + 8) = *(_DWORD *)(a1 + 8);
  v3 = ((__int64*)goff_18EE7F0);
  *(_QWORD *)(result + 16) = *(_QWORD *)(a1 + 16);
  v4 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)result = v3 + 2;
  *(_QWORD *)(result + 24) = v4;
  *(_DWORD *)(result + 32) = *(_DWORD *)(a1 + 32);
  v5 = ((__int64*)goff_18F6C88);
  *(_DWORD *)(result + 36) = *(_DWORD *)(a1 + 36);
  *(_QWORD *)(result + 40) = *(_QWORD *)(a1 + 40);
  *(_QWORD *)result = v5 + 2;
  return result;
}

// N5storm31SimpleUbiServicesControllerBase23ServerDisconnectedEventE, virtual slot 5
__int64 __fastcall sub_47FA30(__int64 a1)
{
  __int64 result; // x0
  __int64 *v3; // x9
  __int64 v4; // x8
  __int64 *v5; // x9

  result = sub_56C9F0(48, 8, 1092624387, 0LL, &unk_1326E41, 0);
  *(_QWORD *)result = ((char *)goff_18EDE08 + 16);
  *(_DWORD *)(result + 8) = *(_DWORD *)(a1 + 8);
  v3 = ((__int64*)goff_18EE7F0);
  *(_QWORD *)(result + 16) = *(_QWORD *)(a1 + 16);
  v4 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)result = v3 + 2;
  *(_QWORD *)(result + 24) = v4;
  *(_DWORD *)(result + 32) = *(_DWORD *)(a1 + 32);
  v5 = ((__int64*)goff_18F6C90);
  *(_DWORD *)(result + 36) = *(_DWORD *)(a1 + 36);
  *(_QWORD *)(result + 40) = *(_QWORD *)(a1 + 40);
  *(_QWORD *)result = v5 + 2;
  return result;
}

// N5storm23SimpleSandboxController23ServerDisconnectedEventE, virtual slot 5
__int64 __fastcall sub_483950(__int64 a1)
{
  __int64 result; // x0
  __int64 *v3; // x9
  __int64 v4; // x8
  __int64 *v5; // x9

  result = sub_56C9F0(48, 8, 1092624387, 0LL, &unk_1326E41, 0);
  *(_QWORD *)result = ((char *)goff_18EDE08 + 16);
  *(_DWORD *)(result + 8) = *(_DWORD *)(a1 + 8);
  v3 = ((__int64*)goff_18EE7F0);
  *(_QWORD *)(result + 16) = *(_QWORD *)(a1 + 16);
  v4 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)result = v3 + 2;
  *(_QWORD *)(result + 24) = v4;
  *(_DWORD *)(result + 32) = *(_DWORD *)(a1 + 32);
  v5 = goff_18F6C68;
  *(_DWORD *)(result + 36) = *(_DWORD *)(a1 + 36);
  *(_QWORD *)(result + 40) = *(_QWORD *)(a1 + 40);
  *(_QWORD *)result = v5 + 2;
  return result;
}

// N5storm4echo9voicechat7inEvent13PeerConnectedE, virtual slot 5
__int64 __fastcall sub_487590(__int64 a1)
{
  __int64 result; // x0
  __int64 v3; // x8

  result = sub_56C9F0(48, 8, 1092624387, 0LL, &unk_1326E41, 0);
  *(_QWORD *)result = ((char *)goff_18EDE08 + 16);
  *(_DWORD *)(result + 8) = *(_DWORD *)(a1 + 8);
  *(_QWORD *)(result + 16) = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(result + 24) = *(_QWORD *)(a1 + 24);
  *(_QWORD *)result = ((char *)((__int64*)goff_18F6DF8) + 16);
  v3 = *(_QWORD *)(a1 + 32);
  *(_DWORD *)(result + 40) = *(_DWORD *)(a1 + 40);
  *(_QWORD *)(result + 32) = v3;
  return result;
}

// N5storm4echo9voicechat7inEvent8PeerGoneE, virtual slot 5
__int64 __fastcall sub_487F90(__int64 a1)
{
  __int64 result; // x0
  __int64 v3; // x8

  result = sub_56C9F0(48, 8, 1092624387, 0LL, &unk_1326E41, 0);
  *(_QWORD *)result = ((char *)goff_18EDE08 + 16);
  *(_DWORD *)(result + 8) = *(_DWORD *)(a1 + 8);
  *(_QWORD *)(result + 16) = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(result + 24) = *(_QWORD *)(a1 + 24);
  *(_QWORD *)result = ((__int64 *)goff_18F6E20 + 2);
  v3 = *(_QWORD *)(a1 + 32);
  *(_DWORD *)(result + 40) = *(_DWORD *)(a1 + 40);
  *(_QWORD *)(result + 32) = v3;
  return result;
}

// N5storm16NetPropertyLocalINSt3__13mapINS_32SimpleMatchmakingSessionMetadata30MatchmakingSessionMetadataKeysEiNS1_4lessIS4_EENS_9AllocatorINS1_4pairIKS4_iEELi1092677632ELj0EEEEEEE, virtual slot 5
_QWORD *__fastcall sub_489D40(__int64 a1)
{
  _QWORD *v2; // x20

  v2 = (_QWORD *)sub_56C9F0(56, 8, 1092624384, 0LL, &unk_1326E41, 0);
  sub_48A400(v2, a1);
  return v2;
}

// N5storm16NetPropertyLocalINSt3__13mapINS_32SimpleMatchmakingSessionMetadata30MatchmakingSessionMetadataKeysEdNS1_4lessIS4_EENS_9AllocatorINS1_4pairIKS4_dEELi1092677632ELj0EEEEEEE, virtual slot 5
_QWORD *__fastcall sub_48AF20(__int64 a1)
{
  _QWORD *v2; // x20

  v2 = (_QWORD *)sub_56C9F0(56, 8, 1092624384, 0LL, &unk_1326E41, 0);
  sub_48B5F0(v2, a1);
  return v2;
}

// NSt3__110__function6__funcIZN5storm21SimplePunchController37GetPunchServerAddressFromProvisioningERKNS_12basic_stringIcNS_11char_traitsIcEENS2_9AllocatorIcLi1092620295ELj0EEEEENS3_10ServerTypeEE3$_0NS_9allocatorISD_EEFvbjSB_EEE, virtual slot 2
_QWORD *__fastcall sub_4922C0(__int64 a1)
{
  _QWORD *result; // x0
  __int64 v3; // x9

  result = (_QWORD *)_Znwm(0x18u);
  *result = ((void*)hoff_181E218);
  v3 = *(_QWORD *)(a1 + 16);
  result[1] = *(_QWORD *)(a1 + 8);
  result[2] = v3;
  return result;
}

// N5storm14SingletonClassINS_9stargroup11GroupBridgeEEE, virtual slot 0
__int64 __fastcall sub_492DD0(_QWORD *a1)
{
  __int64 result; // x0

  *a1 = ((__int64 *)((__int64*)goff_18F6CA8) + 2);
  result = sub_56CA10(a1);
  *((_QWORD *)goff_18F6CA0 + (unsigned int)result) = 0;
  return result;
}

// N5storm14SingletonClassINS_9stargroup11GroupBridgeEEE, virtual slot 1
void __fastcall sub_492E00(_QWORD *a1)
{
  *a1 = ((__int64 *)((__int64*)goff_18F6CA8) + 2);
  *((_QWORD *)goff_18F6CA0 + (unsigned int)sub_56CA10(a1)) = 0;
  _ZdlPv(a1);
}

__int64 __fastcall sub_493C50(__int64 result)
{
  __int64 v1; // x19
  __int64 v2; // x0
  __int64 v3; // x0

  v1 = *(_QWORD *)(result + 24);
  if ( v1 != 0 )
  {
    v2 = *(_QWORD *)(v1 + 24);
    *(_QWORD *)(v1 + 24) = 0;
    if ( v2 != 0 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
    v3 = *(_QWORD *)(v1 + 8);
    *(_QWORD *)(v1 + 8) = 0;
    if ( v3 != 0 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
    return sub_57EDC0(v1, 0LL, &unk_1326E41, 0);
  }
  return result;
}

// N5storm14SingletonClassINS_13SimpleContextEEE, virtual slot 0
__int64 __fastcall sub_498640(_QWORD *a1)
{
  __int64 result; // x0

  *a1 = ((__int64 *)goff_18F7000 + 2);
  result = sub_56CA10(a1);
  *((_QWORD *)goff_18F7008 + (unsigned int)result) = 0;
  return result;
}

// N5storm14SingletonClassINS_13SimpleContextEEE, virtual slot 1
void __fastcall sub_498670(_QWORD *a1)
{
  *a1 = ((__int64 *)goff_18F7000 + 2);
  *((_QWORD *)goff_18F7008 + (unsigned int)sub_56CA10(a1)) = 0;
  _ZdlPv(a1);
}

void sub_49A120(__int64 result)
{
  _QWORD *v1; // x22
  __int64 v2; // x20
  _QWORD *v3; // x19
  __int64 v4; // x21
  __int64 v5; // x23
  __int64 i; // x22
  void (__fastcall **v7)(__int64); // t1
  _QWORD *v8; // x22
  __int64 v9; // x21
  __int64 v10; // x23
  __int64 j; // x22
  void (__fastcall **v12)(__int64); // t1

  v1 = *(_QWORD **)(result + 1192);
  if ( v1 != nullptr )
  {
    v2 = result + 1128;
    v3 = (_QWORD *)result;
    sub_57EF80(result + 1128);
    v4 = v3[142];
    v5 = v3[143];
    if ( v4 != v5 )
    {
      do
      {
        sub_4B1930(v1, v4);
        v4 += 48;
      }
      while ( v5 != v4 );
      v4 = v3[142];
      for ( i = v3[143]; i != v4; (*v7)(i) )
      {
        v7 = *(void (__fastcall ***)(__int64))(i - 48);
        i -= 48;
      }
    }
    v3[143] = v4;
    sub_57EF90(v2);
    v8 = (_QWORD *)v3[149];
    sub_57EF80(v3 + 145);
    v9 = v3[146];
    v10 = v3[147];
    if ( v9 != v10 )
    {
      do
      {
        sub_4B1930(v8, v9);
        v9 += 48;
      }
      while ( v10 != v9 );
      v9 = v3[146];
      for ( j = v3[147]; j != v9; (*v12)(j) )
      {
        v12 = *(void (__fastcall ***)(__int64))(j - 48);
        j -= 48;
      }
    }
    v3[147] = v9;
    { sub_57EF90(v3 + 145); return; }
  }
  return;
}

__int64 __fastcall sub_49B090(__int64 a1, __int64 a2, int a3)
{
  __int64 v6; // x22
  __int64 i; // x23
  __int64 v8; // x20
  __int64 j; // x21
  unsigned __int64 v10; // x8
  unsigned __int64 v11; // x8

  sub_57EF80(a2);
  v6 = *(_QWORD *)(a2 + 8);
  for ( i = *(_QWORD *)(a2 + 16); v6 != i; v6 += 48 )
  {
    *(_DWORD *)(v6 + 40) = a3;
    sub_4B1AC0(*(_QWORD *)(a1 + 1192), v6);
  }
  sub_57EF90(a2);
  sub_57EF80(a2);
  v8 = *(_QWORD *)(a2 + 8);
  for ( j = *(_QWORD *)(a2 + 16); v8 != j; v8 += 48 )
  {
    while ( 1 )
    {
      v10 = atomic_load((unsigned __int64 *)(v8 + 16));
      if ( v10 == 0 )
      {
        v11 = atomic_load((unsigned __int64 *)(v8 + 24));
        if ( v11 == 0 )
          break;
      }
      std____libcpp_thread_yield();
    }
  }
  return sub_57EF90(a2);
}

__int64 __fastcall sub_49B300(__int64 a1, __int64 a2, int a3)
{
  __int64 v6; // x22
  __int64 i; // x23
  __int64 v8; // x20
  __int64 j; // x21
  unsigned __int64 v10; // x8
  unsigned __int64 v11; // x8

  sub_57EF80(a2);
  v6 = *(_QWORD *)(a2 + 8);
  for ( i = *(_QWORD *)(a2 + 16); v6 != i; v6 += 48 )
  {
    *(_DWORD *)(v6 + 40) = a3;
    sub_4B1AC0(*(_QWORD *)(a1 + 1192), v6);
  }
  sub_57EF90(a2);
  sub_57EF80(a2);
  v8 = *(_QWORD *)(a2 + 8);
  for ( j = *(_QWORD *)(a2 + 16); v8 != j; v8 += 48 )
  {
    while ( 1 )
    {
      v10 = atomic_load((unsigned __int64 *)(v8 + 16));
      if ( v10 == 0 )
      {
        v11 = atomic_load((unsigned __int64 *)(v8 + 24));
        if ( v11 == 0 )
          break;
      }
      std____libcpp_thread_yield();
    }
  }
  return sub_57EF90(a2);
}

_QWORD *__fastcall sub_49BA80(__int64 a1, __int64 a2)
{
  __int64 v4; // x21
  _QWORD *result; // x0
  __int64 v6; // x8
  __int64 v7; // x8

  v4 = a1 + 32;
  result = (_QWORD *)sub_56C9F0(24, 8, 1092677632, goff_18F79D8, &unk_1326E41, 0);
  result[2] = a2;
  result[1] = v4;
  *result = 0;
  v6 = *(_QWORD *)(a1 + 32);
  *result = v6;
  *(_QWORD *)(v6 + 8) = result;
  v7 = *(_QWORD *)(a1 + 48) + 1LL;
  *(_QWORD *)(a1 + 32) = result;
  *(_QWORD *)(a1 + 48) = v7;
  return result;
}

// N5storm22SimpleGlobalController20GlobalControllerTaskE, virtual slot 2
__int64 __fastcall sub_49BFC0(char *a1)
{
  unsigned __int64 v2; // x20
  __int64 result; // x0

  v2 = (unsigned __int64)(1000LL * nn__os__GetSystemTick(a1)) / *(_QWORD *)((__int64*)goff_18F13E8) / 0x3E8;
  (*(void (__fastcall **)(char *))(*(_QWORD *)a1 + 24LL))(a1);
  result = sub_58B010((char *)v2);
  *((_DWORD *)a1 + 9) = result;
  return result;
}

__int64 __fastcall sub_49D9E0(__int64 a1)
{
  __int64 v1; // x29
  __int64 v2; // x30
  char *v3; // x8
  unsigned int v4; // w9
  int v5; // t1
  __int64 result; // x0
  int v7 __attribute__((aligned(8)));
  __int64 v8; // [xsp+10h] [xbp-10h]
  __int64 v9; // [xsp+18h] [xbp-8h]

  v3 = "sObjectMulticastingEnabled";
  v4 = 587065670;
  do
  {
    v5 = (unsigned __int8)*v3++;
    v4 = dword_1372C60[(unsigned __int8)v4 ^ v5] ^ (v4 >> 8);
  }
  while ( v3 < "" );
  v8 = v1;
  v9 = v2;
  v7 = ~v4;
  result = sub_25ECB0(a1, &v7);
  if ( result != 0 )
    return *(_BYTE *)(result + 26) != 0;
  return result;
}

// N5storm22SimpleObjectControllerE, virtual slot 110
__int64 __fastcall sub_4A0120(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // [xsp+8h] [xbp-8h] BYREF

  v7 = 0;
  return sub_49FDC0(a1, a2, a3, a4, a5, &v7, 0, a6, 0LL);
}

__int64 __fastcall sub_4A1E30(__int64 a1)
{
  __int64 v1; // x8
  __int64 v2; // x10
  __int64 v3; // x19

  v1 = ((__int64*)goff_18F7A68);
  v2 = ((char *)((__int64*)goff_18F7A68) + 1072);
  *(_QWORD *)(a1 - 104) = ((char *)((__int64*)goff_18F7A68) + 16);
  v3 = a1 - 104;
  *(_QWORD *)(a1 - 16) = v2;
  *(_QWORD *)(a1 - 8) = v1 + 1200;
  *(_QWORD *)a1 = v1 + 1264;
  sub_577290((unsigned int *)(a1 + 8));
  return sub_483450(v3);
}

void __fastcall sub_4A1F90(__int64 a1)
{
  __int64 v1; // x8
  __int64 v2; // x10
  void *v3; // x19

  v1 = ((__int64*)goff_18F7A68);
  v2 = ((char *)((__int64*)goff_18F7A68) + 1072);
  *(_QWORD *)(a1 - 104) = ((char *)((__int64*)goff_18F7A68) + 16);
  v3 = (void *)(a1 - 104);
  *(_QWORD *)(a1 - 16) = v2;
  *(_QWORD *)(a1 - 8) = v1 + 1200;
  *(_QWORD *)a1 = v1 + 1264;
  sub_577290((unsigned int *)(a1 + 8));
  sub_483450(v3);
  _ZdlPv(v3);
}

// N5storm23SimpleSessionControllerE, virtual slot 113
__int64 __fastcall sub_4A3070(__int64 a1, int a2)
{
  _QWORD *v2; // x9
  _QWORD *v3; // x8
  __int64 result; // x0
  _QWORD *v5; // x10
  __int64 v6; // x10
  __int64 v7; // x11
  _QWORD *v8; // t1

  v2 = *(_QWORD **)(a1 + 1072);
  v3 = (_QWORD *)(a1 + 1080);
  while ( v2 != v3 )
  {
    result = v2[4];
    if ( *(_DWORD *)(*(_QWORD *)(result + 48) + 12LL) == a2 )
      return result;
    v5 = (_QWORD *)v2[1];
    if ( v5 != nullptr )
    {
      do
      {
        v2 = v5;
        v5 = (_QWORD *)*v5;
      }
      while ( v5 != nullptr );
    }
    else
    {
      v6 = (__int64)(v2 + 2);
      if ( *(_QWORD **)v2[2] == v2 )
      {
        v2 = (_QWORD *)v2[2];
      }
      else
      {
        do
        {
          v7 = *(_QWORD *)v6;
          v8 = *(_QWORD **)(*(_QWORD *)v6 + 16LL);
          v6 = *(_QWORD *)v6 + 16LL;
          v2 = v8;
        }
        while ( *v8 != v7 );
      }
    }
  }
  return 0;
}

__int64 __fastcall sub_4A3680(__int64 a1)
{
  __int64 v2; // x0
  __int64 v3; // x20
  __int64 v6; // [xsp+8h] [xbp-18h] BYREF
  __int64 v5; // [xsp+0h] [xbp-20h] BYREF

  v2 = *(_QWORD *)(a1 + 32);
  if ( v2 != 0 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
    *(_QWORD *)(a1 + 32) = 0;
  }
  v3 = sub_56C9F0(48, 8, 1092624387, 0LL, &unk_1326E41, 0);
  v6 = 4293967313LL;
  v5 = qword_1914470;
  sub_5859F0(v3, &v6, &v5);
  *(_QWORD *)(a1 + 32) = v3;
  return sub_4A34C0(a1);
}

__int64 __fastcall sub_4A3720(__int64 a1)
{
  __int64 v2; // x0
  __int64 v3; // x20
  __int64 v6; // [xsp+8h] [xbp-18h] BYREF
  __int64 v5; // [xsp+0h] [xbp-20h] BYREF

  v2 = *(_QWORD *)(a1 + 32);
  if ( v2 != 0 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
    *(_QWORD *)(a1 + 32) = 0;
  }
  v3 = sub_56C9F0(48, 8, 1092624387, 0LL, &unk_1326E41, 0);
  v6 = 4293967321LL;
  v5 = qword_1914470;
  sub_5859F0(v3, &v6, &v5);
  *(_QWORD *)(a1 + 32) = v3;
  return sub_4A34C0(a1);
}

// N5storm23SimpleSessionControllerE, virtual slot 100
__int64 __fastcall sub_4A5990(__int64 result, __int64 a2)
{
  __int64 v3; // x20
  __int64 v4; // x0
  _QWORD *v5; // x21
  _QWORD *v6; // x20
  _QWORD *v7; // x8
  __int64 v8; // x8
  __int64 v9; // x9
  _QWORD *v10; // t1

  v3 = result;
  if ( *(_BYTE *)(result + 1456) != 0 )
  {
    v4 = sub_4655D0();
    result = sub_467120(v4, a2);
  }
  v5 = *(_QWORD **)(v3 + 1072);
  v6 = (_QWORD *)(v3 + 1080);
  while ( v5 != v6 )
  {
    result = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v5[4] + 936LL))(v5[4], a2);
    v7 = (_QWORD *)v5[1];
    if ( v7 != nullptr )
    {
      do
      {
        v5 = v7;
        v7 = (_QWORD *)*v7;
      }
      while ( v7 != nullptr );
    }
    else
    {
      v8 = (__int64)(v5 + 2);
      if ( *(_QWORD **)v5[2] == v5 )
      {
        v5 = (_QWORD *)v5[2];
      }
      else
      {
        do
        {
          v9 = *(_QWORD *)v8;
          v10 = *(_QWORD **)(*(_QWORD *)v8 + 16LL);
          v8 = *(_QWORD *)v8 + 16LL;
          v5 = v10;
        }
        while ( *v10 != v9 );
      }
    }
  }
  return result;
}

// N5storm23SimpleSessionControllerE, virtual slot 101
__int64 __fastcall sub_4A60B0(__int64 a1, _QWORD *a2)
{
  _QWORD *v4; // x21
  __int64 result; // x0

  v4 = (_QWORD *)sub_56C9F0(352, 8, 1092624384, 0LL, &unk_1326E41, 0);
  sub_593BB0(v4, a2);
  result = *(_QWORD *)(a1 + 1160);
  *(_QWORD *)(a1 + 1160) = v4;
  if ( result != 0 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 8LL))(result);
  return result;
}

__int64 __fastcall sub_4A6F80(__int64 a1)
{
  __int64 v1; // x29
  __int64 v2; // x30
  char *v3; // x8
  unsigned int v4; // w9
  int v5; // t1
  __int64 result; // x0
  int v7 __attribute__((aligned(8)));
  __int64 v8; // [xsp+10h] [xbp-10h]
  __int64 v9; // [xsp+18h] [xbp-8h]

  v3 = "sObjectMulticastingEnabled";
  v4 = 587065670;
  do
  {
    v5 = (unsigned __int8)*v3++;
    v4 = dword_1372C60[(unsigned __int8)v4 ^ v5] ^ (v4 >> 8);
  }
  while ( v3 < "" );
  v8 = v1;
  v9 = v2;
  v7 = ~v4;
  result = sub_2C3070(a1, &v7);
  if ( result != 0 )
    return *(_BYTE *)(result + 26) != 0;
  return result;
}

__int64 __fastcall sub_4A7A00(__int64 a1)
{
  __int64 v1; // x19

  v1 = a1 - 32;
  sub_4A7340(a1 - 32);
  return sub_56CA00(v1, &unk_1326E41, 0);
}

// N5storm20SimpleSessionHandlerE, virtual slot 153
void sub_4ADA70(__int64 result, __int64 a2)
{
  __int64 v2; // x8
  __int64 v3; // x19
  __int64 v4; // x1
  __int64 v5; // x0
  __int64 v6; // x0
  __int64 v7; // x9
  __int64 v8; // x8

  v2 = *(_QWORD *)(result + 48);
  if ( *(_DWORD *)(a2 + 52) == *(_DWORD *)(v2 + 12) )
  {
    v3 = result;
    if ( *(_DWORD *)(result + 56) != -1 )
    {
      v4 = *(_QWORD *)(a2 + 56);
      v5 = *(_QWORD *)(v2 + 16);
      if ( v5 != 0 )
      {
        { sub_2C2960(v5, v4); return; }
      }
      else
      {
        v6 = (*(__int64 (__fastcall **)(__int64, void *, int))(*(_QWORD *)v4 + 40LL))(v4, &unk_1326E41, 0);
        v7 = *(_QWORD *)(v3 + 48);
        v8 = v6;
        result = *(_QWORD *)(v7 + 16);
        *(_QWORD *)(v7 + 16) = v8;
        if ( result != 0 )
          { (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 8LL))(result); return; }
      }
    }
  }
  return;
}

// N5storm20SimpleSessionHandlerE, virtual slot 156
__int64 __fastcall sub_4ADDF0(__int64 a1, __int64 a2)
{
  __int64 v3; // x1
  __int64 v4; // x0
  __int64 v5; // x0
  __int64 v6; // x9
  __int64 v7; // x8
  __int64 v8; // x0

  *(_DWORD *)(a1 + 60) = *(_DWORD *)(a2 + 56);
  v3 = *(_QWORD *)(a2 + 64);
  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 24LL);
  if ( v4 != 0 )
  {
    sub_5B50D0(v4, v3);
  }
  else
  {
    v5 = (*(__int64 (__fastcall **)(__int64, void *, int))(*(_QWORD *)v3 + 40LL))(v3, &unk_1326E41, 0);
    v6 = *(_QWORD *)(a1 + 48);
    v7 = v5;
    v8 = *(_QWORD *)(v6 + 24);
    *(_QWORD *)(v6 + 24) = v7;
    if ( v8 != 0 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
  }
  *(_BYTE *)(*(_QWORD *)(a1 + 48) + 4LL) = 0;
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 1616LL))(a1);
}

// N5storm20SimpleSessionHandlerE, virtual slot 169
__int64 __fastcall sub_4AE650(__int64 a1, __int64 a2)
{
  _QWORD *v2; // x21
  _QWORD *v3; // x8
  _QWORD *v6; // x11
  __int64 (__fastcall *v9)(); // [xsp+18h] [xbp-18h] BYREF
  __int64 v8; // [xsp+8h] [xbp-28h] BYREF

  v2 = *(_QWORD **)(a2 + 48);
  v3 = (_QWORD *)v2[1];
  *(_QWORD *)(a1 + 224) = v3;
  if ( v3 != nullptr )
  {
    v9 = goff_18F7AD8;
    v8 = a1 + 224;
    v6 = (_QWORD *)v3[11];
    if ( (unsigned __int64)v6 >= v3[12] )
    {
      sub_4C3990((char *)(v3 + 10), &v9, &v8);
    }
    else
    {
      *v6 = goff_18F7AD8;
      v6[1] = a1 + 224;
      v3[11] += 16LL;
    }
  }
  v2[6] = a1;
  v2[5] = *(_QWORD *)(a1 + 48);
  return (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 64) + 384LL))(*(_QWORD *)(a1 + 64), a2);
}

// N5storm19SimpleObjectHandlerE, virtual slot 93
bool __fastcall sub_4B4120(__int64 a1, unsigned int a2)
{
  __int64 v2; // x0
  __int64 v3; // x9
  __int64 v4; // t1
  __int64 v5; // x8
  unsigned int v6; // w10
  bool v7; // cf
  _BOOL4 v8; // w10

  v4 = *(_QWORD *)(a1 + 136);
  v2 = a1 + 136;
  v3 = v4;
  if ( v4 == 0 )
    goto LABEL_9;
  v5 = v2;
  do
  {
    v6 = *(_DWORD *)(v3 + 28);
    v7 = v6 >= a2;
    v8 = v6 < a2;
    if ( v7 )
      v5 = v3;
    v3 = *(_QWORD *)(v3 + 8LL * v8);
  }
  while ( v3 != 0 );
  if ( v5 == v2 || *(_DWORD *)(v5 + 28) > a2 )
LABEL_9:
    v5 = v2;
  return v5 != v2;
}

__int64 __fastcall sub_4B6D30(__int64 a1)
{
  __int64 result; // x0

  result = *(_QWORD *)(a1 + 24);
  if ( result != 0 )
    return sub_57EDC0(result, 0LL, &unk_1326E41, 0);
  return result;
}

__int64 __fastcall sub_4B7880(__int64 a1)
{
  __int64 result; // x0

  result = *(_QWORD *)(a1 + 24);
  if ( result != 0 )
    return sub_57EDC0(result, 0LL, &unk_1326E41, 0);
  return result;
}

__int64 __fastcall sub_4B83E0(__int64 a1)
{
  __int64 result; // x0

  result = *(_QWORD *)(a1 + 24);
  if ( result != 0 )
    return sub_57EDC0(result, 0LL, &unk_1326E41, 0);
  return result;
}

__int64 __fastcall sub_4BA700(__int64 a1)
{
  __int64 result; // x0

  result = *(_QWORD *)(a1 + 24);
  if ( result != 0 )
    return sub_57EDC0(result, 0LL, &unk_1326E41, 0);
  return result;
}

// NSt3__110__function6__funcIZN5storm20SimpleSessionHandler18AttachFinalHandlerERNS2_19SimpleResultRelayerEE4$_27NS_9allocatorIS6_EEFvvEEE, virtual slot 2
_QWORD *__fastcall sub_4C6B00(__int64 a1)
{
  _QWORD *result; // x0
  __int64 v3; // x9

  result = (_QWORD *)_Znwm(0x18u);
  *result = ((void*)hoff_1825D70);
  v3 = *(_QWORD *)(a1 + 16);
  result[1] = *(_QWORD *)(a1 + 8);
  result[2] = v3;
  return result;
}

// NSt3__110__function6__funcIZN5storm16SimpleThreadPoolC1EmNS2_15BasicStringViewIcNS_11char_traitsIcEEEEiE4$_34NS_9allocatorIS8_EEFvvEEE, virtual slot 2
_QWORD *__fastcall sub_4C7CB0(__int64 a1)
{
  _QWORD *result; // x0
  __int64 v3; // x9

  result = (_QWORD *)_Znwm(0x18u);
  *result = ((void*)hoff_1825DF0);
  v3 = *(_QWORD *)(a1 + 16);
  result[1] = *(_QWORD *)(a1 + 8);
  result[2] = v3;
  return result;
}

// NSt3__110__function6__funcIZN5storm23SimpleObjectHandlerImpl15SetFinalHandlerERNS2_19SimpleResultRelayerEE4$_37NS_9allocatorIS6_EEFvvEEE, virtual slot 2
_QWORD *__fastcall sub_4C8B20(__int64 a1)
{
  _QWORD *result; // x0
  __int64 v3; // x9

  result = (_QWORD *)_Znwm(0x18u);
  *result = ((void*)hoff_1825F80);
  v3 = *(_QWORD *)(a1 + 16);
  result[1] = *(_QWORD *)(a1 + 8);
  result[2] = v3;
  return result;
}

// N5storm27SimpleIP2LocationControllerE, virtual slot 106
__int64 __fastcall sub_4C9490(__int64 a1)
{
  __int64 result; // x0
  int v3; // w9

  result = *(_QWORD *)(a1 + 144);
  v3 = *(_DWORD *)(result + 16);
  if ( (unsigned int)(v3 - 2) <= 2 )
  {
    *(_BYTE *)(a1 + 296) = v3 == 2;
    return sub_4ED030(result);
  }
  return result;
}

// N5storm30SimpleStormMatchmakingStrategyE, virtual slot 0
__int64 __fastcall sub_4C9C60(_QWORD *a1)
{
  __int64 v1; // x20

  v1 = a1[67];
  *a1 = ((__int64 *)goff_18F86F0 + 2);
  if ( v1 != 0 )
  {
    sub_4C9920(v1);
    sub_57EDC0(v1, 0LL, &unk_1326E41, 0);
    a1[67] = 0;
  }
  sub_4D44F0(a1 + 68, a1[69]);
  return sub_483BF0((__int64)a1);
}

// N5storm30SimpleStormMatchmakingStrategyE, virtual slot 1
void __fastcall sub_4C9CD0(_QWORD *a1)
{
  __int64 v1; // x20

  v1 = a1[67];
  *a1 = ((__int64 *)goff_18F86F0 + 2);
  if ( v1 != 0 )
  {
    sub_4C9920(v1);
    sub_57EDC0(v1, 0LL, &unk_1326E41, 0);
    a1[67] = 0;
  }
  sub_4D44F0(a1 + 68, a1[69]);
  sub_483BF0((__int64)a1);
  _ZdlPv(a1);
}

// N5storm30SimpleStormMatchmakingStrategyE, virtual slot 22
__int64 sub_4C9FC0()
{
  __int64 result; // x0

  result = sub_57D200(40, 8, 1092677632, 0LL, &unk_1326E41, 0);
  *(_QWORD *)result = 0;
  *(_QWORD *)(result + 8) = 0;
  *(_QWORD *)(result + 24) = 0;
  *(_QWORD *)(result + 32) = 0;
  *(_QWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 12) = -1;
  return result;
}

// N5storm30SimpleStormMatchmakingStrategyE, virtual slot 23
__int64 __fastcall sub_4CA010(__int64 a1, __int64 a2)
{
  __int64 v3; // x0
  __int64 v4; // x20
  __int64 v5; // x8
  __int64 v6; // x0
  __int64 v7; // x8
  __int64 v8; // x0

  v3 = sub_57D200(40, 8, 1092677632, 0LL, &unk_1326E41, 0);
  *(_DWORD *)(v3 + 7) = 0;
  *(_QWORD *)v3 = 0;
  *(_DWORD *)(v3 + 12) = -1;
  v4 = v3;
  *(_QWORD *)(v3 + 24) = 0;
  *(_QWORD *)(v3 + 32) = 0;
  *(_QWORD *)(v3 + 16) = 0;
  *(_DWORD *)(v3 + 12) = *(_DWORD *)(a2 + 12);
  v5 = (*(__int64 (__fastcall **)(_QWORD, void *, int))(**(_QWORD **)(a2 + 16) + 40LL))(
         *(_QWORD *)(a2 + 16),
         &unk_1326E41,
         0);
  v6 = *(_QWORD *)(v4 + 16);
  *(_QWORD *)(v4 + 16) = v5;
  if ( v6 != 0 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
  v7 = (*(__int64 (__fastcall **)(_QWORD, void *, int))(**(_QWORD **)(a2 + 24) + 40LL))(
         *(_QWORD *)(a2 + 24),
         &unk_1326E41,
         0);
  v8 = *(_QWORD *)(v4 + 24);
  *(_QWORD *)(v4 + 24) = v7;
  if ( v8 != 0 )
    v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
  sub_4CA100(v8, v4, *(_QWORD *)(a2 + 32));
  return v4;
}

// N5storm30SimpleStormMatchmakingStrategyE, virtual slot 24
__int64 __fastcall sub_4CA1E0(__int64 result, __int64 a2)
{
  __int64 v3; // x0
  __int64 v4; // x0

  if ( a2 != 0 )
  {
    sub_4CA100(result, a2, 0LL);
    v3 = *(_QWORD *)(a2 + 24);
    *(_QWORD *)(a2 + 24) = 0;
    if ( v3 != 0 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
    v4 = *(_QWORD *)(a2 + 16);
    *(_QWORD *)(a2 + 16) = 0;
    if ( v4 != 0 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
    return sub_57EDC0(a2, 0LL, &unk_1326E41, 0);
  }
  return result;
}

// N5storm30SimpleStormMatchmakingStrategyE, virtual slot 27
void __fastcall sub_4CA2C0(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // x21

  v3 = *(_QWORD *)(a2 + 32);
  if ( v3 == 0 )
  {
    v3 = sub_57D200(160, 8, 1092677632, 0LL, &unk_1326E41, 0);
    sub_5436F0((_QWORD *)v3);
    *(_QWORD *)(a2 + 32) = v3;
  }
  *(_DWORD *)(v3 + 12) = a3;
}

// N5storm30SimpleStormMatchmakingStrategyE, virtual slot 28
bool __fastcall sub_4CA330(__int64 a1, __int64 a2)
{
  return *(_QWORD *)(a2 + 32) != 0 && (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a1 + 208LL))(a1) != 0;
}

// N5storm30SimpleStormMatchmakingStrategyE, virtual slot 39
__int64 __fastcall sub_4CAB80(__int64 result, int a2)
{
  __int64 v2; // x8

  *(_BYTE *)(*(_QWORD *)(result + 536) + 80LL) = 1;
  v2 = *(_QWORD *)(result + 536);
  if ( a2 == 0 )
    a2 = *(_DWORD *)(v2 + 84);
  *(_DWORD *)(v2 + 84) = a2;
  return result;
}

// N5storm30SimpleStormMatchmakingStrategyE, virtual slot 76
__int64 __fastcall sub_4CDAF0(_QWORD *a1, __int64 a2)
{
  __int64 v4; // x19
  __int64 v5; // x8
  __int64 v6; // x0
  __int64 v7; // x8
  __int64 v8; // x0
  __int64 result; // x0
  __int64 v10; // x0
  __int64 v11; // x0
  __int64 v12; // [xsp+8h] [xbp-18h] BYREF

  v4 = (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 176LL))(a1);
  v5 = (*(__int64 (__fastcall **)(_QWORD, void *, int))(**(_QWORD **)(a2 + 40) + 40LL))(
         *(_QWORD *)(a2 + 40),
         &unk_1326E41,
         0);
  v6 = *(_QWORD *)(v4 + 16);
  *(_QWORD *)(v4 + 16) = v5;
  if ( v6 != 0 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
  v7 = (*(__int64 (__fastcall **)(_QWORD, void *, int))(**(_QWORD **)(a2 + 48) + 40LL))(
         *(_QWORD *)(a2 + 48),
         &unk_1326E41,
         0);
  v8 = *(_QWORD *)(v4 + 24);
  *(_QWORD *)(v4 + 24) = v7;
  if ( v8 != 0 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
  result = a1[12];
  if ( result != 0 )
  {
    v12 = v4;
    result = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)result + 48LL))(result, &v12);
    if ( (result & 1) == 0 )
    {
      v10 = *(_QWORD *)(v4 + 24);
      *(_QWORD *)(v4 + 24) = 0;
      if ( v10 != 0 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
      v11 = *(_QWORD *)(v4 + 16);
      *(_QWORD *)(v4 + 16) = 0;
      if ( v11 != 0 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
      return sub_57EDC0(v4, 0LL, &unk_1326E41, 0);
    }
  }
  return result;
}

__int64 __fastcall sub_4CEEE0(__int64 a1, __int64 a2)
{
  __int64 result; // x0
  int v4; // [xsp+Ch] [xbp-4h] BYREF

  result = *(_QWORD *)(a2 + 288);
  if ( result != 0 )
  {
    v4 = *(_DWORD *)(a1 + 24);
    return (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)result + 48LL))(result, &v4);
  }
  return result;
}

// N5storm27SimpleSandboxController_SMME, virtual slot 115
__int64 __fastcall sub_4D3D00(__int64 a1, __int64 a2)
{
  __int64 v4; // x0
  _QWORD *v5; // x21
  __int64 v6; // x21
  _BYTE v8[176]; // [xsp+0h] [xbp-D0h] BYREF

  sub_530A10(v8, 0LL);
  v4 = sub_5490B0(*(_QWORD *)(a1 + 136));
  sub_51F450(v4, (__int64)v8);
  sub_4ED6D0((__int64)v8, 0xFFFFFFFF);
  v5 = *(_QWORD **)(a1 + 136);
  *(_QWORD *)(a1 + 136) = 0;
  if ( v5 != nullptr )
  {
    sub_5483C0(v5);
    sub_37030(v5);
  }
  v6 = sub_36EA0(0x58u, 4u, 0, 1086324736);
  sub_548360(v6, a2);
  *(_QWORD *)(a1 + 136) = v6;
  return sub_530AD0((__int64)v8);
}

// NSt3__110__function6__funcIZN5storm30SimpleStormMatchmakingStrategy22CancelRendezVousTicketEPNS2_19SimpleResultRelayerERNS2_7HandlerEjE3$_6NS_9allocatorIS8_EEFNS2_7EResultERNS2_13SimpleAsyncOpEEEE, virtual slot 2
_QWORD *__fastcall sub_4DBF00(__int64 a1)
{
  _QWORD *result; // x0
  __int64 v3; // x9

  result = (_QWORD *)_Znwm(0x18u);
  *result = ((void*)hoff_1828498);
  v3 = *(_QWORD *)(a1 + 16);
  result[1] = *(_QWORD *)(a1 + 8);
  result[2] = v3;
  return result;
}

// N5storm2mm7helpers38SimpleRdvStorePlayerProfileCallContextE, virtual slot 1
void __fastcall sub_4DC750(_QWORD *a1)
{
  __int64 v1; // x20
  __int64 v3; // x0
  __int64 v4; // x0

  v1 = a1[2];
  *a1 = ((char *)goff_18F8B68 + 16);
  if ( v1 != 0 )
  {
    v3 = *(_QWORD *)(v1 + 24);
    *(_QWORD *)(v1 + 24) = 0;
    if ( v3 != 0 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
    v4 = *(_QWORD *)(v1 + 16);
    *(_QWORD *)(v1 + 16) = 0;
    if ( v4 != 0 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
    sub_57EDC0(v1, 0LL, &unk_1326E41, 0);
  }
  _ZdlPv(a1);
}

// N5storm2mm7helpers38SimpleRdvStorePlayerProfileCallContextE, virtual slot 0
void __fastcall sub_4DC7D0(_QWORD *result)
{
  __int64 v1; // x20
  _QWORD *v2; // x19
  __int64 v3; // x0
  __int64 v4; // x0

  v1 = result[2];
  *result = ((char *)goff_18F8B68 + 16);
  if ( v1 != 0 )
  {
    v2 = result;
    v3 = *(_QWORD *)(v1 + 24);
    *(_QWORD *)(v1 + 24) = 0;
    if ( v3 != 0 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
    v4 = *(_QWORD *)(v1 + 16);
    *(_QWORD *)(v1 + 16) = 0;
    if ( v4 != 0 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
    sub_57EDC0(v1, 0LL, &unk_1326E41, 0);
    v2[2] = 0;
  }
  return;
}

// N5storm7helpers39SimpleMatchmakingGenericCallContextBaseE, virtual slot 1
void __fastcall sub_4DC850(_QWORD *a1)
{
  __int64 v1; // x20
  __int64 v3; // x0
  __int64 v4; // x0

  v1 = a1[2];
  *a1 = ((char *)goff_18F8B68 + 16);
  if ( v1 != 0 )
  {
    v3 = *(_QWORD *)(v1 + 24);
    *(_QWORD *)(v1 + 24) = 0;
    if ( v3 != 0 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
    v4 = *(_QWORD *)(v1 + 16);
    *(_QWORD *)(v1 + 16) = 0;
    if ( v4 != 0 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
    sub_57EDC0(v1, 0LL, &unk_1326E41, 0);
  }
  _ZdlPv(a1);
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

void sub_50BAA0()
{
  __int64 v0; // x20
  __int64 v1; // x20
  __int64 v2; // x19
  unsigned int v3; // w0
  RecoveredSdkText self; // [xsp+8h] [xbp-18h] BYREF

  v0 = sub_4EB320(32, &unk_1326E41, 0);
  Recovered_ResultTextConstruct(&self, "UDPPeerPackageTokenBucketEnabled");
  sub_4F5150(v0, &self, 0);
  *(_QWORD *)((__int64*)goff_18F9540) = v0;
  Recovered_ResultTextDestroy(&self);
  v1 = sub_4EB320(32, &unk_1326E41, 0);
  Recovered_ResultTextConstruct(&self, "UDPPeerPackageTokenBucketRate");
  sub_4F5150(v1, &self, 40);
  *(_QWORD *)((__int64*)goff_18F9548) = v1;
  Recovered_ResultTextDestroy(&self);
  v2 = sub_4EB320(32, &unk_1326E41, 0);
  Recovered_ResultTextConstruct(&self, "UDPPeerPackageTokenBucketCapacity");
  sub_4F5150(v2, &self, 100);
  *(_QWORD *)((__int64*)goff_18F9550) = v2;
  Recovered_ResultTextDestroy(&self);
  v3 = time(nullptr);
  srand(v3);
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

int __fastcall sub_516F80(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v11; // [xsp+78h] [xbp-18h] BYREF
  int v10; // [xsp+74h] [xbp-1Ch] BYREF
  _QWORD v9[4]; // [xsp+50h] [xbp-40h] BYREF
  _BYTE v8[24]; // [xsp+38h] [xbp-58h] BYREF
  _QWORD v7[4]; // [xsp+18h] [xbp-78h] BYREF
  _BYTE v6[24]; // [xsp+0h] [xbp-90h] BYREF

  v11 = a3;
  v10 = 0;
  sub_4FB9D0(v9, 1024);
  sub_518330(v8, v9);
  v7[0] = sub_4FAED0(a2);
  sub_518840(v8, v7, 8, 1);
  sub_518840(v8, &v11, 8, 1);
  sub_4FB9D0(v7, 1024);
  (*(void (__fastcall **)(_QWORD, _QWORD *, _QWORD *))(**(_QWORD **)(a1 + 16) + 16LL))(*(_QWORD *)(a1 + 16), v9, v7);
  sub_518330(v6, v7);
  sub_518850(v6, &v10, 4, 1);
  LODWORD(a2) = v10;
  sub_518380(v6);
  sub_4FBEF0(v7);
  sub_518380(v8);
  sub_4FBEF0(v9);
  return (unsigned int)a2;
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

// N5storm2mm16ProtocolRegistryE, virtual slot 0
__int64 __fastcall sub_521C70(_QWORD *a1)
{
  _QWORD *v2; // x21
  _QWORD *v3; // x19
  _QWORD *v4; // x22
  __int64 v5; // x0
  _QWORD *v6; // x8
  __int64 v7; // x8
  __int64 v8; // x9
  _QWORD *v9; // t1
  _QWORD *v10; // x20
  _QWORD *v11; // x23
  _QWORD *v12; // t1
  _QWORD *v13; // x22
  __int64 v14; // x0
  _QWORD *v15; // x8
  __int64 v16; // x8
  __int64 v17; // x9
  _QWORD *v18; // t1

  *a1 = ((char *)((__int64*)goff_18F9858) + 16);
  v2 = a1 + 2;
  v3 = a1 + 1;
  v4 = (_QWORD *)a1[1];
  while ( v4 != v2 )
  {
    v5 = v4[5];
    if ( v5 != 0 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    v6 = (_QWORD *)v4[1];
    if ( v6 != nullptr )
    {
      do
      {
        v4 = v6;
        v6 = (_QWORD *)*v6;
      }
      while ( v6 != nullptr );
    }
    else
    {
      v7 = (__int64)(v4 + 2);
      if ( *(_QWORD **)v4[2] == v4 )
      {
        v4 = (_QWORD *)v4[2];
      }
      else
      {
        do
        {
          v8 = *(_QWORD *)v7;
          v9 = *(_QWORD **)(*(_QWORD *)v7 + 16LL);
          v7 = *(_QWORD *)v7 + 16LL;
          v4 = v9;
        }
        while ( *v9 != v8 );
      }
    }
  }
  v12 = (_QWORD *)a1[4];
  v10 = a1 + 4;
  v11 = v12;
  v13 = v10 + 1;
  while ( v11 != v13 )
  {
    v14 = v11[5];
    if ( v14 != 0 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
    v15 = (_QWORD *)v11[1];
    if ( v15 != nullptr )
    {
      do
      {
        v11 = v15;
        v15 = (_QWORD *)*v15;
      }
      while ( v15 != nullptr );
    }
    else
    {
      v16 = (__int64)(v11 + 2);
      if ( *(_QWORD **)v11[2] == v11 )
      {
        v11 = (_QWORD *)v11[2];
      }
      else
      {
        do
        {
          v17 = *(_QWORD *)v16;
          v18 = *(_QWORD **)(*(_QWORD *)v16 + 16LL);
          v16 = *(_QWORD *)v16 + 16LL;
          v11 = v18;
        }
        while ( *v18 != v17 );
      }
    }
  }
  sub_522170(v10, *v13);
  return sub_522170(v3, *v2);
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

// N5storm2mm23JobBackEndServicesLoginE, virtual slot 0
__int64 __fastcall sub_522600(RecoveredSdkText *a1)
{
  char *data; // x0
  __int64 v3; // x21
  unsigned __int64 *v4; // x8
  unsigned __int64 v5; // x0
  unsigned int *v6; // x8
  unsigned int v7; // w9
  unsigned int v8; // w9
  unsigned __int64 *v9; // x8
  unsigned __int64 v10; // x0
  unsigned int *v11; // x8
  unsigned int v12; // w9
  unsigned int v13; // w9

  a1->data = (char *)(((char *)goff_18F9868 + 16));
  data = a1[116].data;
  if ( data != nullptr )
  {
    (*(void (__fastcall **)(char *))(*(_QWORD *)data + 24LL))(data);
    a1[116].data = nullptr;
  }
  Recovered_ResultTextDestroy(a1 + 145);
  v3 = ((__int64*)goff_18EC9E8);
  a1[140].data = (char *)(((char *)((__int64*)goff_18EC9E8) + 16));
  v4 = (unsigned __int64 *)&a1[142];
  v5 = __atomic_exchange_n(v4, 0, 5);
  if ( v5 != 0 )
  {
    v6 = (unsigned int *)(v5 + 8);
    v8 = __atomic_sub_fetch(v6, 1, 5);
    if ( v8 == 0 )
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  sub_792D0(&a1[140].data);
  a1[137].data = (char *)(v3 + 16);
  v9 = (unsigned __int64 *)&a1[139];
  v10 = __atomic_exchange_n(v9, 0, 5);
  if ( v10 != 0 )
  {
    v11 = (unsigned int *)(v10 + 8);
    v13 = __atomic_sub_fetch(v11, 1, 5);
    if ( v13 == 0 )
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  sub_792D0(&a1[137].data);
  Recovered_ResultTextDestroy(a1 + 135);
  Recovered_ResultTextDestroy(a1 + 134);
  sub_4F8720(&a1[119]);
  Recovered_ResultTextDestroy(a1 + 113);
  sub_4F8720(&a1[97]);
  sub_4EC750((__int64)&a1[79]);
  sub_4FA630(&a1[75], a1[76].data);
  Recovered_ResultTextDestroy(a1 + 74);
  Recovered_ResultTextDestroy(a1 + 72);
  Recovered_ResultTextDestroy(a1 + 71);
  sub_4F8720(&a1[58]);
  sub_4F8720(&a1[45]);
  Recovered_ResultTextDestroy(a1 + 43);
  sub_530AD0(&a1[18]);
  return sub_51D180(a1);
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

__int64 __fastcall sub_52B010(__int64 a1, __int64 a2)
{
  __int64 result; // x0
  _BYTE *v5; // x22
  __int64 v6; // x20
  _QWORD *v7; // x23
  _QWORD *v8; // x21
  _QWORD *v9; // x8
  __int64 v10; // x8
  __int64 v11; // x9
  _QWORD *v12; // t1
  int v14; // [xsp+Ch] [xbp-24h] BYREF
  int v13; // [xsp+8h] [xbp-28h] BYREF

  result = sub_529F50(a2, &v14, &v13);
  if ( v14 == *(_DWORD *)(a1 + 64) && v13 == *(_DWORD *)(a1 + 68) )
  {
    v5 = (_BYTE *)goff_18F88D8;
    v6 = a1 + 8;
    if ( *(char*)goff_18F88D8 == 0 )
      result = sub_4EE210(a1 + 8);
    v7 = *(_QWORD **)(a1 + 40);
    v8 = (_QWORD *)(a1 + 48);
    while ( v7 != v8 )
    {
      result = sub_52B170((const char **)v7[4], a2);
      v9 = (_QWORD *)v7[1];
      if ( v9 != nullptr )
      {
        do
        {
          v7 = v9;
          v9 = (_QWORD *)*v9;
        }
        while ( v9 != nullptr );
      }
      else
      {
        v10 = (__int64)(v7 + 2);
        if ( *(_QWORD **)v7[2] == v7 )
        {
          v7 = (_QWORD *)v7[2];
        }
        else
        {
          do
          {
            v11 = *(_QWORD *)v10;
            v12 = *(_QWORD **)(*(_QWORD *)v10 + 16LL);
            v10 = *(_QWORD *)v10 + 16LL;
            v7 = v12;
          }
          while ( *v12 != v11 );
        }
      }
    }
    if ( *v5 == 0 )
      return sub_4EE230(v6);
  }
  return result;
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

