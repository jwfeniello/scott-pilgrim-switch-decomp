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
__int64 Recovered_ResultTextCopy();
__int64 _ZdlPv();
extern char goff_17C1000[];
extern char goff_18EC850[];
extern char goff_18EC898[];
extern char goff_18EC900[];
extern char goff_18EC9C8[];
extern char goff_18ECD78[];
extern char goff_18ED2D8[];
extern char goff_18ED2E8[];
extern char goff_18ED7C0[];
extern char goff_18ED910[];
extern char goff_18ED940[];
extern char goff_18EE150[];
extern char goff_18EE7F0[];
extern char goff_18F13E8[];
extern char goff_18F2FF8[];
extern char goff_18F3028[];
extern char goff_18F3038[];
extern char goff_18F3040[];
extern char goff_18F3630[];
extern char goff_18F42B0[];
extern char goff_18F4930[];
extern char goff_18F4A50[];
extern char goff_18F6CA0[];
extern char goff_18F6CA8[];
extern char goff_18F7038[];
extern char goff_18F7048[];
extern char goff_18F7058[];
extern char goff_18F7080[];
extern char goff_18F7088[];
extern char goff_18F7090[];
extern char goff_18F7098[];
extern char goff_18F70A0[];
extern char goff_18F87A8[];
extern char goff_18F87B0[];
extern char goff_18F9200[];
extern char goff_18F9238[];
extern char goff_18F92A0[];
extern char goff_18F92C8[];
extern char goff_18F92E0[];
extern char goff_18F92F0[];
extern char goff_18F92F8[];
extern char goff_18F94A0[];
extern char goff_18F94B0[];
extern char goff_18F9510[];
extern char goff_18F9538[];
extern char goff_18F9680[];
extern char goff_18F9800[];
extern char goff_18F9860[];
extern char goff_18F98F0[];
extern char goff_18F9BF8[];
extern char goff_18F9C08[];
extern char goff_18F9FE8[];
extern char goff_18FA008[];
extern char goff_18FA5F8[];
extern char goff_18FA678[];
extern char goff_18FAB60[];
extern char goff_18FADC0[];
extern char goff_18FB108[];
extern char goff_18FB2F0[];
extern char goff_18FB2F8[];
extern char goff_18FB310[];
extern char goff_18FB318[];
extern char goff_18FB348[];
extern char goff_18FB850[];
extern char goff_18FB858[];
extern char goff_18FB8A8[];
extern char goff_18FB8B8[];
extern char goff_18FB930[];
extern char goff_18FBA38[];
extern char goff_18FBA40[];
extern char goff_18FBA48[];
extern char goff_18FBAF8[];
extern char goff_18FBB00[];
extern char goff_18FC9B8[];
extern char goff_18FC9C0[];
extern char goff_18FC9E8[];
extern __attribute__((visibility("hidden"))) char hoff_17C1000[];
__int64 nn__mem__StandardAllocator__Allocate();
__int64 nn__os__ConvertToTimeSpan();
__int64 nn__os__GetSystemTick();
__attribute__((visibility("hidden"))) __int64 nullsub_1096();
__attribute__((visibility("hidden"))) __int64 nullsub_5();
__int64 printf();
__int64 pthread_mutex_destroy();
__int64 pthread_mutex_lock();
__int64 pthread_mutex_unlock();
extern __attribute__((visibility("hidden"))) __int64 qword_19148A0;
extern __attribute__((visibility("hidden"))) __int64 qword_1915428;
extern __attribute__((visibility("hidden"))) __int64 qword_19154A8;
extern __attribute__((visibility("hidden"))) __int64 qword_1915508;
extern __attribute__((visibility("hidden"))) __int64 qword_1916FA8;
extern __attribute__((visibility("hidden"))) __int64 qword_191A580;
__int64 std__condition_variable___condition_variable();
__int64 std__mutex___mutex();
__int64 std__recursive_mutex__lock();
__int64 std__recursive_mutex__unlock();
__attribute__((visibility("hidden"))) __int64 sub_160840();
__attribute__((visibility("hidden"))) __int64 sub_165640();
__attribute__((visibility("hidden"))) __int64 sub_1750D0();
__attribute__((visibility("hidden"))) __int64 sub_181380();
__attribute__((visibility("hidden"))) __int64 sub_1B2190();
__attribute__((visibility("hidden"))) __int64 sub_250();
__attribute__((visibility("hidden"))) __int64 sub_257280();
__attribute__((visibility("hidden"))) __int64 sub_257400();
__attribute__((visibility("hidden"))) __int64 sub_258AA0();
__attribute__((visibility("hidden"))) __int64 sub_25E200();
__attribute__((visibility("hidden"))) __int64 sub_25E630();
__attribute__((visibility("hidden"))) __int64 sub_267C90();
__attribute__((visibility("hidden"))) __int64 sub_268070();
__attribute__((visibility("hidden"))) __int64 sub_269C60();
__attribute__((visibility("hidden"))) __int64 sub_287220();
__attribute__((visibility("hidden"))) __int64 sub_2933F0();
__attribute__((visibility("hidden"))) __int64 sub_2A07D0();
__attribute__((visibility("hidden"))) __int64 sub_2A22F0();
__attribute__((visibility("hidden"))) __int64 sub_2BA320();
__attribute__((visibility("hidden"))) __int64 sub_2BC630();
__attribute__((visibility("hidden"))) __int64 sub_2BE370();
__attribute__((visibility("hidden"))) __int64 sub_2C3070();
__attribute__((visibility("hidden"))) __int64 sub_2C4070();
__attribute__((visibility("hidden"))) __int64 sub_2C4490();
__attribute__((visibility("hidden"))) __int64 sub_2F2530();
__attribute__((visibility("hidden"))) __int64 sub_33B6E0();
__attribute__((visibility("hidden"))) __int64 sub_33C4C0();
__attribute__((visibility("hidden"))) __int64 sub_33D920();
__attribute__((visibility("hidden"))) __int64 sub_33E470();
__attribute__((visibility("hidden"))) __int64 sub_33EB70();
__attribute__((visibility("hidden"))) __int64 sub_340FB0();
__attribute__((visibility("hidden"))) __int64 sub_34E770();
__attribute__((visibility("hidden"))) __int64 sub_352000();
__attribute__((visibility("hidden"))) __int64 sub_35B1C0();
__attribute__((visibility("hidden"))) __int64 sub_36EA0();
__attribute__((visibility("hidden"))) __int64 sub_37030();
__attribute__((visibility("hidden"))) __int64 sub_370A0();
__attribute__((visibility("hidden"))) __int64 sub_3759B0();
__attribute__((visibility("hidden"))) __int64 sub_37BB50();
__attribute__((visibility("hidden"))) __int64 sub_388D00();
__attribute__((visibility("hidden"))) __int64 sub_38E700();
__attribute__((visibility("hidden"))) __int64 sub_3B62B0();
__attribute__((visibility("hidden"))) __int64 sub_3BEA50();
__attribute__((visibility("hidden"))) __int64 sub_3CC950();
__attribute__((visibility("hidden"))) __int64 sub_3DEA60();
__attribute__((visibility("hidden"))) __int64 sub_3E1F70();
__attribute__((visibility("hidden"))) __int64 sub_3E28D0();
__attribute__((visibility("hidden"))) __int64 sub_435300();
__attribute__((visibility("hidden"))) __int64 sub_448860();
__attribute__((visibility("hidden"))) __int64 sub_44C780();
__attribute__((visibility("hidden"))) __int64 sub_44FF50();
__attribute__((visibility("hidden"))) __int64 sub_451610();
__attribute__((visibility("hidden"))) __int64 sub_453A80();
__attribute__((visibility("hidden"))) __int64 sub_48A400();
__attribute__((visibility("hidden"))) __int64 sub_48B5F0();
__attribute__((visibility("hidden"))) __int64 sub_4A7340();
__attribute__((visibility("hidden"))) __int64 sub_4EB320();
__attribute__((visibility("hidden"))) __int64 sub_4EB340();
__attribute__((visibility("hidden"))) __int64 sub_4EB3D0();
__attribute__((visibility("hidden"))) __int64 sub_4EC170();
__attribute__((visibility("hidden"))) __int64 sub_4ED030();
__attribute__((visibility("hidden"))) __int64 sub_4EDC80();
__attribute__((visibility("hidden"))) __int64 sub_4EE1B0();
__attribute__((visibility("hidden"))) __int64 sub_4EE340();
__attribute__((visibility("hidden"))) __int64 sub_4EF420();
__attribute__((visibility("hidden"))) __int64 sub_4EF450();
__attribute__((visibility("hidden"))) __int64 sub_4EF460();
__attribute__((visibility("hidden"))) __int64 sub_4EFA90();
__attribute__((visibility("hidden"))) __int64 sub_4F0040();
__attribute__((visibility("hidden"))) __int64 sub_4F02D0();
__attribute__((visibility("hidden"))) __int64 sub_4F61C0();
__attribute__((visibility("hidden"))) __int64 sub_4FAFD0();
__attribute__((visibility("hidden"))) __int64 sub_4FC1E0();
__attribute__((visibility("hidden"))) __int64 sub_4FC1F0();
__attribute__((visibility("hidden"))) __int64 sub_502D30();
__attribute__((visibility("hidden"))) __int64 sub_504040();
__attribute__((visibility("hidden"))) __int64 sub_504170();
__attribute__((visibility("hidden"))) __int64 sub_505D60();
__attribute__((visibility("hidden"))) __int64 sub_507E40();
__attribute__((visibility("hidden"))) __int64 sub_508970();
__attribute__((visibility("hidden"))) __int64 sub_5089B0();
__attribute__((visibility("hidden"))) __int64 sub_50EB70();
__attribute__((visibility("hidden"))) __int64 sub_50EF00();
__attribute__((visibility("hidden"))) __int64 sub_515C10();
__attribute__((visibility("hidden"))) __int64 sub_51E060();
__attribute__((visibility("hidden"))) __int64 sub_5208B0();
__attribute__((visibility("hidden"))) __int64 sub_52B270();
__attribute__((visibility("hidden"))) __int64 sub_53CF40();
__attribute__((visibility("hidden"))) __int64 sub_543EC0();
__attribute__((visibility("hidden"))) __int64 sub_5484D0();
__attribute__((visibility("hidden"))) __int64 sub_54C810();
__attribute__((visibility("hidden"))) __int64 sub_54C820();
__attribute__((visibility("hidden"))) __int64 sub_54DD50();
__attribute__((visibility("hidden"))) __int64 sub_554100();
__attribute__((visibility("hidden"))) __int64 sub_554110();
__attribute__((visibility("hidden"))) __int64 sub_561EB0();
__attribute__((visibility("hidden"))) __int64 sub_56C9F0();
__attribute__((visibility("hidden"))) __int64 sub_56CA00();
__attribute__((visibility("hidden"))) __int64 sub_56CA10();
__attribute__((visibility("hidden"))) __int64 sub_56F3C0();
__attribute__((visibility("hidden"))) __int64 sub_56F400();
__attribute__((visibility("hidden"))) __int64 sub_56F490();
__attribute__((visibility("hidden"))) __int64 sub_5771E0();
__attribute__((visibility("hidden"))) __int64 sub_577290();
__attribute__((visibility("hidden"))) __int64 sub_578210();
__attribute__((visibility("hidden"))) __int64 sub_578410();
__attribute__((visibility("hidden"))) __int64 sub_57D200();
__attribute__((visibility("hidden"))) __int64 sub_57EDC0();
__attribute__((visibility("hidden"))) __int64 sub_57EF40();
__attribute__((visibility("hidden"))) __int64 sub_583240();
__attribute__((visibility("hidden"))) __int64 sub_583700();
__attribute__((visibility("hidden"))) __int64 sub_58C2A0();
__attribute__((visibility("hidden"))) __int64 sub_58C7A0();
__attribute__((visibility("hidden"))) __int64 sub_592460();
__attribute__((visibility("hidden"))) __int64 sub_594410();
__attribute__((visibility("hidden"))) __int64 sub_5B87B0();
__attribute__((visibility("hidden"))) __int64 sub_5B8CF0();
__attribute__((visibility("hidden"))) __int64 sub_5BC360();
__attribute__((visibility("hidden"))) __int64 sub_5BCCC0();
__attribute__((visibility("hidden"))) __int64 sub_5C78D0();
__attribute__((visibility("hidden"))) __int64 sub_5F7870();
__attribute__((visibility("hidden"))) __int64 sub_6064E0();
__attribute__((visibility("hidden"))) __int64 sub_60A870();
__attribute__((visibility("hidden"))) __int64 sub_620B60();
__attribute__((visibility("hidden"))) __int64 sub_621EB0();
__attribute__((visibility("hidden"))) __int64 sub_62C760();
__attribute__((visibility("hidden"))) __int64 sub_6EEA10();
__attribute__((visibility("hidden"))) __int64 sub_7C4B0();
__attribute__((visibility("hidden"))) __int64 sub_C289D0();
extern __attribute__((visibility("hidden"))) char unk_1326E41;
extern __attribute__((visibility("hidden"))) char unk_191A588;

__int64 __fastcall sub_37B70(__int64 a1, __int64 a2, const char *a3)
{
  __int64 result; // x0

  if ( a3 != nullptr )
    return printf("%s", a3);
  return result;
}

__int64 __fastcall sub_51B70(char a1, int a2)
{
  pthread_mutex_t *v3; // x0

  v3 = (pthread_mutex_t *)(*(_QWORD *)goff_18EC898 + 32LL * a2);
  if ( (a1 & 1) != 0 )
    return pthread_mutex_lock(v3);
  else
    return pthread_mutex_unlock(v3);
}

__int64 __fastcall sub_524F0(__int64 a1)
{
  *(_QWORD *)a1 = ((__int64*)goff_18EC900) + 2;
  sub_160840(a1 + 64, *(_QWORD *)(a1 + 72));
  pthread_mutex_destroy((pthread_mutex_t *)(a1 + 24));
  return sub_37030(a1);
}

__int64 __fastcall sub_5AE10(_QWORD *a1)
{
  __int64 v2; // x8
  _QWORD *v3; // x20

  *a1 = ((__int64*)goff_18EC9C8) + 2;
  v3 = a1 + 2;
  v2 = a1[2];
  if ( v2 != 0 )
    sub_37030(v2 - *(unsigned int *)(v2 - 4));
  *v3 = 0;
  v3[1] = 0;
  return sub_37030(a1);
}

double __fastcall sub_B1640(unsigned __int64 *a1)
{
  unsigned __int64 v1; // x8
  __int64 v2; // x19
  __int64 SystemTick; // x0
  double result; // d0

  v1 = atomic_load(a1 + 19);
  v2 = *(_QWORD *)(v1 + 32);
  SystemTick = nn__os__GetSystemTick((char *)a1);
  result = (double)(unsigned __int64)nn__os__ConvertToTimeSpan(SystemTick) * 1000000000.0 / 1000000000.0;
  *(_QWORD *)(v2 + 40) = (unsigned __int64)result;
  return result;
}

_QWORD *__fastcall sub_E9450(__int64 a1)
{
  _QWORD *v2; // x20

  v2 = (_QWORD *)sub_36EA0(0x50u, 4u, 0, 1086324736);
  sub_165640(v2, a1);
  *v2 = ((__int64*)goff_18ED2D8) + 2;
  return v2;
}

__int64 __fastcall sub_EAEE0(__int64 a1)
{
  __int64 v2; // x20

  v2 = sub_36EA0(0x58u, 4u, 0, 1086324736);
  sub_165640(v2, a1);
  *(_QWORD *)v2 = ((__int64*)goff_18ED2E8) + 2;
  *(_DWORD *)(v2 + 80) = *(_DWORD *)(a1 + 80);
  return v2;
}

__int64 __fastcall sub_139D20(_QWORD *a1)
{
  _QWORD *v1; // x8

  v1 = (_QWORD *)goff_18ED7C0;
  *a1 = goff_18ECD78 + 16;
  if ( (_QWORD *)*v1 == a1 )
    *v1 = 0;
  sub_6EEA10(a1 + 36);
  return sub_181380(a1);
}

__int64 __fastcall sub_139D70(_QWORD *a1)
{
  _QWORD *v1; // x8

  v1 = (_QWORD *)goff_18ED7C0;
  *a1 = goff_18ECD78 + 16;
  if ( (_QWORD *)*v1 == a1 )
    *v1 = 0;
  sub_6EEA10(a1 + 36);
  sub_181380(a1);
  return sub_37030(a1);
}

__int64 __fastcall sub_15B160(_QWORD *a1)
{
  __int64 v2; // x8
  _QWORD *v3; // x20

  *a1 = ((__int64*)goff_18EC9C8) + 2;
  v3 = a1 + 2;
  v2 = a1[2];
  if ( v2 != 0 )
    sub_37030(v2 - *(unsigned int *)(v2 - 4));
  *v3 = 0;
  v3[1] = 0;
  return sub_37030(a1);
}

char *__fastcall sub_161AF0(__int64 a1)
{
  return sub_7C4B0(*(_QWORD *)(a1 + 96), (unsigned int)*((__int64*)goff_18ED940), 1);
}

__int64 __fastcall sub_175050(__int64 a1)
{
  *(_QWORD *)a1 = ((__int64*)goff_18EC850) + 2;
  sub_1750D0(a1 + 72, *(_QWORD *)(a1 + 80));
  return pthread_mutex_destroy((pthread_mutex_t *)(a1 + 32));
}

__int64 __fastcall sub_175090(__int64 a1)
{
  *(_QWORD *)a1 = ((__int64*)goff_18EC850) + 2;
  sub_1750D0(a1 + 72, *(_QWORD *)(a1 + 80));
  pthread_mutex_destroy((pthread_mutex_t *)(a1 + 32));
  return sub_37030(a1);
}

__int64 __fastcall sub_1B2110(__int64 a1)
{
  *(_QWORD *)a1 = ((__int64*)goff_18ED910) + 2;
  sub_1B2190(a1 + 72, *(_QWORD *)(a1 + 80));
  return pthread_mutex_destroy((pthread_mutex_t *)(a1 + 32));
}

__int64 __fastcall sub_1B2150(__int64 a1)
{
  *(_QWORD *)a1 = ((__int64*)goff_18ED910) + 2;
  sub_1B2190(a1 + 72, *(_QWORD *)(a1 + 80));
  pthread_mutex_destroy((pthread_mutex_t *)(a1 + 32));
  return sub_37030(a1);
}

__int64 __fastcall sub_257230(__int64 a1)
{
  sub_287220(a1 + 312, *(_QWORD *)(a1 + 320));
  sub_57EF40(a1 + 304);
  sub_257280(a1 + 200);
  sub_257400(a1 + 152);
  return sub_257400(a1 + 104);
}

__int64 __fastcall sub_257C10(__int64 a1)
{
  __int64 result; // x0

  result = sub_287220(a1 + 312, *(_QWORD *)(a1 + 320));
  *(_QWORD *)(a1 + 320) = 0;
  *(_QWORD *)(a1 + 328) = 0;
  *(_QWORD *)(a1 + 312) = a1 + 320;
  *(_DWORD *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 76) = 1065353216;
  return result;
}

__int64 __fastcall sub_26DDB0(_QWORD *a1, unsigned int a2)
{
  if ( a2 >= (unsigned __int64)((__int64)(a1[1] - *a1) >> 3) )
    return 0;
  else
    return *(_QWORD *)(*a1 + 8LL * a2);
}

unsigned int *__fastcall sub_27D5D0(__int64 a1)
{
  unsigned int *v1; // x19

  v1 = (unsigned int *)(a1 - 32);
  nullsub_1096(a1);
  return sub_577290(v1);
}

void __fastcall sub_27D600(__int64 a1)
{
  unsigned int *v1; // x19

  v1 = (unsigned int *)(a1 - 32);
  nullsub_1096(a1);
  sub_577290(v1);
  _ZdlPv(v1);
}

__int64 __fastcall sub_27F5A0(__int64 a1)
{
  __int64 v2; // x20

  v2 = sub_56C9F0(496, 8, 1092624384, 0LL, &unk_1326E41, 0);
  sub_25E630(v2, a1);
  return v2;
}

__int64 __fastcall sub_282B60(__int64 a1)
{
  __int64 v2; // x20

  v2 = sub_56C9F0(512, 8, 1092624384, 0LL, &unk_1326E41, 0);
  sub_268070(v2, a1);
  return v2;
}

__int64 __fastcall sub_283020(__int64 a1)
{
  __int64 v2; // x20

  v2 = sub_56C9F0(112, 8, 1092624387, 0LL, &unk_1326E41, 0);
  sub_269C60(v2, a1);
  return v2;
}

__int64 __fastcall sub_292940(__int64 a1)
{
  __int64 v2; // x20

  v2 = sub_56C9F0(64, 8, 1092624387, 0LL, &unk_1326E41, 0);
  sub_2933F0(v2, a1);
  return v2;
}

_QWORD *__fastcall sub_29AEB0(__int64 a1, __int64 a2, unsigned int a3)
{
  _QWORD *result; // x0

  result = (_QWORD *)sub_56C9F0(8, 8, 1092624384, 0LL, a2, a3);
  *result = ((__int64*)goff_18EE150) + 2;
  return result;
}

__int64 __fastcall sub_2A0030(__int64 a1)
{
  __int64 v2; // x20

  v2 = sub_56C9F0(192, 8, 1092624384, 0LL, &unk_1326E41, 0);
  sub_2A07D0(v2, a1);
  return v2;
}

__int64 __fastcall sub_2A1F60(__int64 a1)
{
  __int64 v2; // x20

  v2 = sub_56C9F0(56, 8, 1092624387, 0LL, &unk_1326E41, 0);
  sub_2A22F0(v2, a1);
  return v2;
}

__int64 __fastcall sub_2B21E0(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // x19
  __int64 (__fastcall **v4)(); // x0

  v3 = sub_56C9F0(288, 8, 1092624384, 0LL, a2, a3);
  v4 = sub_583240();
  sub_258AA0(v3, v4);
  return v3;
}

__int64 __fastcall sub_2B2230(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v5; // x20

  v5 = sub_56C9F0(288, 8, 1092624384, 0LL, a3, a4);
  sub_258AA0(v5, a2);
  return v5;
}

__int64 __fastcall sub_2B2F60(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // x19
  __int64 (__fastcall **v4)(); // x0

  v3 = sub_56C9F0(496, 8, 1092624384, 0LL, a2, a3);
  v4 = sub_583240();
  sub_25E200(v3, v4);
  return v3;
}

__int64 __fastcall sub_2B2FB0(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v5; // x20

  v5 = sub_56C9F0(496, 8, 1092624384, 0LL, a3, a4);
  sub_25E200(v5, a2);
  return v5;
}

__int64 __fastcall sub_2B3EA0(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // x19
  __int64 (__fastcall **v4)(); // x0

  v3 = sub_56C9F0(512, 8, 1092624384, 0LL, a2, a3);
  v4 = sub_583240();
  sub_267C90(v3, v4);
  return v3;
}

__int64 __fastcall sub_2B3EF0(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v5; // x20

  v5 = sub_56C9F0(512, 8, 1092624384, 0LL, a3, a4);
  sub_267C90(v5, a2);
  return v5;
}

__int64 __fastcall sub_2C4440(__int64 a1)
{
  _BYTE v3[960]; // [xsp+0h] [xbp-3D0h] BYREF

  sub_2C4070(a1);
  *(_DWORD *)(a1 + 952) = 0;
  sub_2C4070(v3);
  sub_2C4490(a1, (__int64)v3);
  return sub_C289D0((__int64)v3);
}

unsigned int *__fastcall sub_2D0580(__int64 a1)
{
  unsigned int *v1; // x19

  v1 = (unsigned int *)(a1 - 32);
  nullsub_1096(a1);
  return sub_577290(v1);
}

void __fastcall sub_2D05E0(__int64 a1)
{
  unsigned int *v1; // x19

  v1 = (unsigned int *)(a1 - 32);
  nullsub_1096(a1);
  sub_577290(v1);
  _ZdlPv(v1);
}

__int64 __fastcall sub_2DE240(__int64 a1, __int64 a2, __int64 a3)
{
  if ( a3 != 0 )
    sub_57EDC0(a3, 0LL, &unk_1326E41, 0);
  return 1;
}

unsigned int *__fastcall sub_2DF540(__int64 a1)
{
  unsigned int *v1; // x19

  v1 = (unsigned int *)(a1 - 32);
  nullsub_1096(a1);
  return sub_577290(v1);
}

void __fastcall sub_2DF5A0(__int64 a1)
{
  unsigned int *v1; // x19

  v1 = (unsigned int *)(a1 - 32);
  nullsub_1096(a1);
  sub_577290(v1);
  _ZdlPv(v1);
}

unsigned int *__fastcall sub_2E5C40(__int64 a1)
{
  unsigned int *v1; // x19

  v1 = (unsigned int *)(a1 - 32);
  nullsub_1096(a1);
  return sub_577290(v1);
}

void __fastcall sub_2E5CA0(__int64 a1)
{
  unsigned int *v1; // x19

  v1 = (unsigned int *)(a1 - 32);
  nullsub_1096(a1);
  sub_577290(v1);
  _ZdlPv(v1);
}

__int64 __fastcall sub_2EA000(__int64 a1)
{
  __int64 v2; // x20

  v2 = sub_56C9F0(96, 8, 1092624387, 0LL, &unk_1326E41, 0);
  sub_2BA320(v2, a1);
  return v2;
}

__int64 __fastcall sub_2EB690(__int64 a1)
{
  __int64 v2; // x20

  v2 = sub_56C9F0(192, 8, 1092624387, 0LL, &unk_1326E41, 0);
  sub_2BC630(v2, a1);
  return v2;
}

__int64 __fastcall sub_2EC200(__int64 a1)
{
  __int64 v2; // x20

  v2 = sub_56C9F0(96, 8, 1092624387, 0LL, &unk_1326E41, 0);
  sub_2BE370(v2, a1);
  return v2;
}

char *__fastcall sub_2F2070(__int64 a1)
{
  char *v2; // x20

  v2 = (char *)sub_56C9F0(96, 8, 1092624387, 0LL, &unk_1326E41, 0);
  sub_2F2530(v2, a1);
  return v2;
}

bool __fastcall sub_3121A0(char *a1, int a2)
{
  __int64 v2; // x8

  if ( a2 == -1 )
    return false;
  v2 = 2968;
  if ( (*(_BYTE *)(a1 + 24) & 2) == 0 )
    v2 = 100;
  return *(_DWORD *)(a1 + v2) == a2;
}

__int64 __fastcall sub_3121F0(char *a1)
{
  __int64 v1; // x8

  v1 = 2968;
  if ( (*(_BYTE *)(a1 + 24) & 2) == 0 )
    v1 = 100;
  return *(unsigned int *)(a1 + v1);
}

__int64 __fastcall sub_329F40(__int64 a1)
{
  __int64 v1; // x19

  v1 = a1 - 24;
  sub_577290((unsigned int *)(a1 + 8));
  return nullsub_1096(v1);
}

__int64 __fastcall sub_329F70(unsigned int *a1)
{
  unsigned int *v1; // x19

  v1 = a1 - 8;
  sub_577290(a1);
  return nullsub_1096(v1);
}

void __fastcall sub_329FD0(__int64 a1)
{
  void *v1; // x19

  v1 = (void *)(a1 - 24);
  sub_577290((unsigned int *)(a1 + 8));
  nullsub_1096(v1);
  _ZdlPv(v1);
}

void __fastcall sub_32A000(unsigned int *a1)
{
  unsigned int *v1; // x19

  v1 = a1 - 8;
  sub_577290(a1);
  nullsub_1096(v1);
  _ZdlPv(v1);
}

__int64 __fastcall sub_3559D0(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v8; // x0
  __int64 v9; // x1

  v8 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 848) + 56LL))(*(_QWORD *)(a1 + 848));
  return sub_352000(v8, v9, a1 + 80, a2, a3, a4);
}

_QWORD *__fastcall sub_35B470(_QWORD *a1)
{
  _QWORD *result; // x0

  *a1 = ((__int64*)goff_18F3630) + 2;
  sub_594410(a1 + 1);
  result = sub_594410(a1 + 3);
  a1[7] = 0;
  *(_QWORD *)((char *)a1 + 45) = 0;
  a1[5] = 0;
  return result;
}

char *__fastcall sub_35E240(__int64 a1)
{
  char *v2; // x20

  v2 = (char *)sub_56C9F0(96, 8, 1092624387, 0LL, &unk_1326E41, 0);
  sub_37BB50(v2, a1);
  return v2;
}

__int64 __fastcall sub_35EBB0(_QWORD *a1)
{
  *a1 = ((__int64*)goff_18F3040) + 2;
  nullsub_5(a1 + 8);
  return sub_56CA00(a1, &unk_1326E41, 0);
}

__int64 __fastcall sub_361840(_QWORD *a1)
{
  __int64 result; // x0

  *a1 = ((__int64*)goff_18F3028) + 2;
  nullsub_5(a1 + 10);
  result = a1[7];
  a1[7] = 0;
  if ( result != 0 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 8LL))(result);
  return result;
}

__int64 __fastcall sub_3623F0(_QWORD *a1)
{
  *a1 = ((__int64*)goff_18F3038) + 2;
  sub_578410(a1 + 18);
  return nullsub_5(a1 + 8);
}

__int64 __fastcall sub_362430(_QWORD *a1)
{
  *a1 = ((__int64*)goff_18F3038) + 2;
  sub_578410(a1 + 18);
  nullsub_5(a1 + 8);
  return sub_56CA00(a1, &unk_1326E41, 0);
}

__int64 __fastcall sub_36C1D0(_QWORD *a1)
{
  *a1 = ((__int64*)goff_18F2FF8) + 2;
  nullsub_5(a1 + 7);
  return sub_56CA00(a1, &unk_1326E41, 0);
}

char *__fastcall sub_3754F0(__int64 a1)
{
  char *v2; // x20

  v2 = (char *)sub_56C9F0(120, 8, 1092624387, 0LL, &unk_1326E41, 0);
  sub_3759B0(v2, a1);
  return v2;
}

__int64 __fastcall sub_37D4E0(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // x19

  v3 = sub_56C9F0(400, 8, 1092624384, 0LL, a2, a3);
  sub_33B6E0();
  return v3;
}

__int64 __fastcall sub_37D8D0(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // x19

  v3 = sub_56C9F0(376, 8, 1092624384, 0LL, a2, a3);
  sub_33C4C0();
  return v3;
}

__int64 __fastcall sub_37E3D0(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // x19

  v3 = sub_56C9F0(288, 8, 1092624384, 0LL, a2, a3);
  sub_33D920();
  return v3;
}

__int64 __fastcall sub_37E7A0(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // x19

  v3 = sub_56C9F0(240, 8, 1092624384, 0LL, a2, a3);
  sub_33E470();
  return v3;
}

__int64 __fastcall sub_37E920(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // x19

  v3 = sub_56C9F0(240, 8, 1092624384, 0LL, a2, a3);
  sub_33EB70();
  return v3;
}

__int64 __fastcall sub_380030(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // x19

  v3 = sub_56C9F0(216, 8, 1092624384, 0LL, a2, a3);
  sub_340FB0();
  return v3;
}

__int64 __fastcall sub_387520(__int64 result)
{
  __int64 v1; // x19

  v1 = *(_QWORD *)(result + 24);
  if ( v1 != 0 )
  {
    sub_34E770(*(_QWORD *)(result + 24));
    return sub_57EDC0(v1, 0LL, &unk_1326E41, 0);
  }
  return result;
}

__int64 __fastcall sub_38D710(_QWORD *a1)
{
  *a1 = goff_18F42B0 + 16;
  sub_592460(a1 + 34);
  sub_592460(a1 + 21);
  sub_592460(a1 + 8);
  return sub_35B1C0(a1);
}

void __fastcall sub_38D760(_QWORD *a1)
{
  *a1 = goff_18F42B0 + 16;
  sub_592460(a1 + 34);
  sub_592460(a1 + 21);
  sub_592460(a1 + 8);
  sub_35B1C0(a1);
  _ZdlPv(a1);
}

bool __fastcall sub_39F390(__int64 a1, unsigned int a2)
{
  __int64 v2; // x0
  __int64 v3; // x9
  __int64 v4; // t1
  __int64 v5; // x8
  unsigned int v6; // w10
  bool v7; // cf
  _BOOL4 v8; // w10

  v4 = *(_QWORD *)(a1 + 176);
  v2 = a1 + 176;
  v3 = v4;
  if ( v4 == 0 )
    goto LABEL_9;
  v5 = v2;
  do
  {
    v6 = *(_DWORD *)(v3 + 32);
    v7 = v6 >= a2;
    v8 = v6 < a2;
    if ( v7 )
      v5 = v3;
    v3 = *(_QWORD *)(v3 + 8LL * v8);
  }
  while ( v3 != 0 );
  if ( v5 == v2 || *(_DWORD *)(v5 + 32) > a2 )
LABEL_9:
    v5 = v2;
  return v5 != v2;
}

__int64 __fastcall sub_3B9BF0(__int64 result)
{
  __int64 *v1; // x8
  __int64 v2; // x8

  v1 = goff_18F4A50;
  *(_QWORD *)(result + 24) = 0;
  *(_DWORD *)(result + 56) = 0;
  *(_QWORD *)(result - 8) = v1 + 2;
  *(_QWORD *)result = v1 + 10;
  v2 = *(_QWORD *)(result + 32);
  if ( v2 != 0 )
  {
    *(_QWORD *)(result + 40) = v2;
    return sub_56CA00(v2, &unk_1326E41, 0);
  }
  return result;
}

__int64 __fastcall sub_3BDED0(__int64 result)
{
  __int64 v1; // x20
  __int64 v2; // x19

  v1 = *(_QWORD *)(result + 4280);
  if ( v1 != 0 && *(_DWORD *)(*(_QWORD *)(v1 + 152) + 28LL) != -1 )
  {
    v2 = result - 112;
    sub_5BC360(*(_QWORD *)(v1 + 152));
    sub_5BCCC0(*(_QWORD *)(v1 + 152));
    return sub_3B62B0(v2);
  }
  return result;
}

__int64 __fastcall sub_3BF750(__int64 a1, unsigned int a2)
{
  return *(_QWORD *)(a1 + 88) + 12LL * a2;
}

__int64 __fastcall sub_3C2550(__int64 a1, unsigned int a2)
{
  return *(unsigned __int8 *)(*(_QWORD *)(a1 + 112) + a2);
}

__int64 __fastcall sub_3C2DB0(__int64 a1)
{
  __int64 v2; // x20

  v2 = sub_56C9F0(112, 8, 1092624387, 0LL, &unk_1326E41, 0);
  sub_3E1F70(v2, a1);
  return v2;
}

char *__fastcall sub_3C41D0(__int64 a1)
{
  char *v2; // x20

  v2 = (char *)sub_56C9F0(96, 8, 1092624387, 0LL, &unk_1326E41, 0);
  sub_3E28D0(v2, a1);
  return v2;
}

__int64 __fastcall sub_3C5670(__int64 a1)
{
  __int64 v2; // x20

  v2 = sub_56C9F0(96, 8, 1092624387, 0LL, &unk_1326E41, 0);
  sub_38E700(v2, a1);
  return v2;
}

char *__fastcall sub_3CC4B0(__int64 a1)
{
  char *v2; // x20

  v2 = (char *)sub_56C9F0(96, 8, 1092624387, 0LL, &unk_1326E41, 0);
  sub_3CC950(v2, a1);
  return v2;
}

__int64 __fastcall sub_3DE9C0(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // x19
  __int64 (__fastcall **v4)(); // x0

  v3 = sub_56C9F0(472, 8, 1092624384, 0LL, a2, a3);
  v4 = sub_583240();
  sub_3DEA60(v3, (__int64)v4);
  return v3;
}

__int64 __fastcall sub_3DEA10(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v5; // x20

  v5 = sub_56C9F0(472, 8, 1092624384, 0LL, a3, a4);
  sub_3DEA60(v5, a2);
  return v5;
}

__int64 __fastcall sub_3E0A50(__int64 a1)
{
  return sub_58C7A0(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 17824LL), *(_QWORD *)(a1 + 32), (int *)goff_18F4930);
}

__int64 __fastcall sub_3F6FA0(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 result; // x0
  __int64 v6; // x8

  sub_3BEA50();
  result = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL * a3);
  if ( result != 0 )
  {
    v6 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 32LL) + 24LL) + 48LL);
    return sub_388D00(result, *(unsigned int *)(v6 + 704), *(unsigned __int8 *)(v6 + 708));
  }
  return result;
}

__int64 __fastcall sub_42FDC0(__int64 a1, unsigned int a2)
{
  return *(unsigned __int8 *)(*(_QWORD *)(a1 + 96) + a2);
}

__int64 __fastcall sub_435260(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // x19
  __int64 (__fastcall **v4)(); // x0

  v3 = sub_56C9F0(440, 8, 1092624384, 0LL, a2, a3);
  v4 = sub_583240();
  sub_435300(v3, (__int64)v4);
  return v3;
}

__int64 __fastcall sub_4352B0(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v5; // x20

  v5 = sub_56C9F0(440, 8, 1092624384, 0LL, a3, a4);
  sub_435300(v5, a2);
  return v5;
}

__int64 __fastcall sub_4487C0(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // x19
  __int64 (__fastcall **v4)(); // x0

  v3 = sub_56C9F0(744, 8, 1092624384, 0LL, a2, a3);
  v4 = sub_583240();
  sub_448860(v3, (__int64)v4);
  return v3;
}

__int64 __fastcall sub_448810(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v5; // x20

  v5 = sub_56C9F0(744, 8, 1092624384, 0LL, a3, a4);
  sub_448860(v5, a2);
  return v5;
}

__int64 __fastcall sub_44C6E0(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // x19
  __int64 (__fastcall **v4)(); // x0

  v3 = sub_56C9F0(400, 8, 1092624384, 0LL, a2, a3);
  v4 = sub_583240();
  sub_44C780(v3, (__int64)v4);
  return v3;
}

__int64 __fastcall sub_44C730(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v5; // x20

  v5 = sub_56C9F0(400, 8, 1092624384, 0LL, a3, a4);
  sub_44C780(v5, a2);
  return v5;
}

__int64 __fastcall sub_44FEB0(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // x19
  __int64 (__fastcall **v4)(); // x0

  v3 = sub_56C9F0(400, 8, 1092624384, 0LL, a2, a3);
  v4 = sub_583240();
  sub_44FF50(v3, (__int64)v4);
  return v3;
}

__int64 __fastcall sub_44FF00(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v5; // x20

  v5 = sub_56C9F0(400, 8, 1092624384, 0LL, a3, a4);
  sub_44FF50(v5, a2);
  return v5;
}

__int64 __fastcall sub_451570(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // x19
  __int64 (__fastcall **v4)(); // x0

  v3 = sub_56C9F0(664, 8, 1092624384, 0LL, a2, a3);
  v4 = sub_583240();
  sub_451610(v3, (__int64)v4);
  return v3;
}

__int64 __fastcall sub_4515C0(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v5; // x20

  v5 = sub_56C9F0(664, 8, 1092624384, 0LL, a3, a4);
  sub_451610(v5, a2);
  return v5;
}

__int64 __fastcall sub_4539E0(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // x19
  __int64 (__fastcall **v4)(); // x0

  v3 = sub_56C9F0(400, 8, 1092624384, 0LL, a2, a3);
  v4 = sub_583240();
  sub_453A80(v3, (__int64)v4);
  return v3;
}

__int64 __fastcall sub_453A30(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v5; // x20

  v5 = sub_56C9F0(400, 8, 1092624384, 0LL, a3, a4);
  sub_453A80(v5, a2);
  return v5;
}

__int64 sub_45EDC0()
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

_Bool __fastcall sub_475430(__int64 a1, _BYTE *a2, char a3)
{
  if ( *a2 == (a3 & 1) )
    return 0;
  *a2 = a3 & 1;
  return 1;
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
  *(_QWORD *)a1 = ((__int64*)goff_18F70A0) + 2;
  *(_BYTE *)(a1 + 64) = 0;
  return result;
}

_QWORD *__fastcall sub_489D40(__int64 a1)
{
  _QWORD *v2; // x20

  v2 = (_QWORD *)sub_56C9F0(56, 8, 1092624384, 0LL, &unk_1326E41, 0);
  sub_48A400(v2, a1);
  return v2;
}

_QWORD *__fastcall sub_48AF20(__int64 a1)
{
  _QWORD *v2; // x20

  v2 = (_QWORD *)sub_56C9F0(56, 8, 1092624384, 0LL, &unk_1326E41, 0);
  sub_48B5F0(v2, a1);
  return v2;
}

__int64 __fastcall sub_492DD0(_QWORD *a1)
{
  __int64 result; // x0

  *a1 = ((__int64*)goff_18F6CA8) + 2;
  result = sub_56CA10(a1);
  *((_QWORD *)goff_18F6CA0 + (unsigned int)result) = 0;
  return result;
}

void __fastcall sub_492E00(_QWORD *a1)
{
  *a1 = ((__int64*)goff_18F6CA8) + 2;
  *((_QWORD *)goff_18F6CA0 + (unsigned int)sub_56CA10(a1)) = 0;
  _ZdlPv(a1);
}

__int64 __fastcall sub_4A7A00(__int64 a1)
{
  __int64 v1; // x19

  v1 = a1 - 32;
  sub_4A7340(a1 - 32);
  return sub_56CA00(v1, &unk_1326E41, 0);
}

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

bool __fastcall sub_4CA330(__int64 a1, __int64 a2)
{
  return *(_QWORD *)(a2 + 32) != 0 && (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a1 + 208LL))(a1) != 0;
}

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

_QWORD *sub_4EB1F0()
{
  _QWORD *v0; // x19

  v0 = (_QWORD *)sub_4EB320(96, &unk_1326E41, 0);
  sub_52B270(v0, 1);
  *v0 = ((__int64*)goff_18F9200) + 2;
  return v0;
}

const char *__fastcall sub_4EB9F0(const char **a1)
{
  const char *result; // x0

  result = *a1;
  if ( result != nullptr )
    return (const char *)strlen(result);
  return result;
}

__int64 __fastcall sub_4EE150(pthread_mutex_t **a1)
{
  __int64 result; // x0

  pthread_mutex_destroy(*a1);
  result = sub_370A0(*a1, 5, &unk_1326E41, 0);
  *a1 = nullptr;
  return result;
}

__int64 __fastcall sub_4EE650(_QWORD *a1)
{
  *a1 = ((__int64*)goff_18F9238) + 2;
  return sub_4EE340(qword_19148A0, a1);
}

__int64 __fastcall sub_4EE670(_QWORD *a1)
{
  *a1 = ((__int64*)goff_18F9238) + 2;
  sub_4EE340(qword_19148A0, a1);
  return sub_4EB340(a1);
}

__int64 __fastcall sub_4EF480(_QWORD *a1, int a2)
{
  if ( a2 < 0 )
    return *a1 - -a2;
  else
    return *a1 + a2;
}

__int64 __fastcall sub_4EF8F0(unsigned int a1)
{
  return sub_4EFA90(goff_18F92A0, a1);
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

__int64 __fastcall sub_4FB070(__int64 a1, __int64 a2)
{
  _BYTE v4[200]; // [xsp+8h] [xbp-D8h] BYREF

  sub_4FAFD0(a2, v4);
  sub_4EC170(a1, v4);
  return a1;
}

__int64 __fastcall sub_502D10(__int64 a1, unsigned int a2, _Bool a3, int a4)
{
  *(_DWORD *)(a1 + 140) = a4;
  if ( a3 )
    return sub_502D30(a1, a2);
  *(_DWORD *)(a1 + 212) = a2;
  return a1;
}

__int64 __fastcall sub_505AE0(__int64 a1, int a2, int a3)
{
  __int64 result; // x0

  *(_QWORD *)a1 = ((__int64*)goff_18F94A0) + 2;
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

__int64 __fastcall sub_507B80(__int64 a1)
{
  return sub_507E40(a1 + 72, *(_QWORD *)(a1 + 80));
}

__int64 __fastcall sub_507C90(__int64 a1)
{
  if ( *((__int64*)goff_18F94B0) != 0 && *(_DWORD *)(*((__int64*)goff_18F94B0) + 24) == 1 )
    return 0x7FFFFFFF;
  else
    return *(unsigned int *)(a1 + 28);
}

bool sub_507CC0()
{
  return *((__int64*)goff_18F94B0) != 0 && *(_DWORD *)(*((__int64*)goff_18F94B0) + 24) == 1;
}

__int64 __fastcall sub_507D10(__int64 a1)
{
  if ( *((__int64*)goff_18F94B0) != 0 && *(_DWORD *)(*((__int64*)goff_18F94B0) + 24) == 1 )
    return 0x7FFFFFFF;
  else
    return *(unsigned int *)(a1 + 32);
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

__int64 sub_50BA60()
{
  __int64 *v0; // x19

  v0 = goff_18F9510;
  sub_515C10(goff_18F9510);
  return sub_250((__int64)goff_18F9538, (__int64)v0, (__int64)((void*)hoff_17C1000));
}

unsigned __int64 __fastcall sub_50EEF0(__int64 a1, int a2, __int64 a3)
{
  return sub_50EF00(a1, a3, a2);
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

__int64 sub_5191F0()
{
  __int64 v0; // x19
  __int64 result; // x0

  v0 = sub_4EB320(32, &unk_1326E41, 0);
  result = sub_4EE1B0(v0, 0x40000000);
  *(_QWORD *)((__int64*)goff_18F9680) = v0;
  return result;
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

__int64 sub_5222E0()
{
  __int64 v0; // x19
  __int64 result; // x0

  v0 = sub_4EB320(8, &unk_1326E41, 0);
  result = sub_4EB3D0(v0);
  *(_QWORD *)((__int64*)goff_18F9860) = v0;
  return result;
}

bool sub_526810()
{
  return *(_QWORD *)((__int64*)goff_18F98F0) == 0 || *(_QWORD *)(*(_QWORD *)((__int64*)goff_18F98F0) + 56LL) == 0;
}

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

__int64 __fastcall sub_543E90(__int64 a1, __int64 a2)
{
  _BYTE v3[4]; // [xsp+Ch] [xbp-4h] BYREF

  v3[0] = 0;
  return sub_543EC0(a1, a2, v3);
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
  v2 = goff_18F9BF8 + 16;
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

void __fastcall sub_54CBE0(_QWORD *a1)
{
  __int64 v1; // x20

  v1 = a1[1];
  *a1 = ((__int64*)goff_18F9C08) + 2;
  if ( v1 != 0 )
  {
    sub_54DD50(v1);
    sub_57EDC0(v1, 0LL, &unk_1326E41, 0);
  }
  _ZdlPv(a1);
}

void __fastcall sub_554C80(_QWORD *a1)
{
  _QWORD *v1; // x19

  v1 = a1 - 3;
  sub_58C2A0(a1);
  _ZdlPv(v1);
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

__int64 __fastcall sub_5664B0(_QWORD *a1)
{
  __int64 result; // x0

  *a1 = ((__int64*)goff_18F9FE8) + 2;
  result = sub_554100(384, 16, 1092657164, &unk_1326E41, 0);
  a1[1] = result;
  return result;
}

__int64 __fastcall sub_566500(_QWORD *a1)
{
  __int64 v1; // x8

  v1 = a1[1];
  *a1 = ((__int64*)goff_18F9FE8) + 2;
  return sub_554110(v1, &unk_1326E41, 0);
}

void __fastcall sub_566530(_QWORD *a1)
{
  *a1 = ((__int64*)goff_18F9FE8) + 2;
  sub_554110(a1[1], &unk_1326E41, 0);
  _ZdlPv(a1);
}

__int64 __fastcall sub_56B3F0(__int64 a1)
{
  __int64 *v1; // x8

  v1 = ((__int64*)goff_18FA008) + 18;
  *(_QWORD *)a1 = ((__int64*)goff_18FA008) + 2;
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

  v1 = ((__int64*)goff_18FA008) + 18;
  *(_QWORD *)(a1 - 24) = ((__int64*)goff_18FA008) + 2;
  v2 = a1 - 24;
  *(_QWORD *)a1 = v1;
  *(_QWORD *)(a1 + 2656) = 0;
  *(_QWORD *)(a1 + 80) = 0;
  sub_577290((unsigned int *)a1);
  return nullsub_1096(v2);
}

void __fastcall sub_56B490(void *a1)
{
  __int64 *v1; // x8

  v1 = ((__int64*)goff_18FA008) + 18;
  *(_QWORD *)a1 = ((__int64*)goff_18FA008) + 2;
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

  v1 = ((__int64*)goff_18FA008) + 18;
  *(_QWORD *)(a1 - 24) = ((__int64*)goff_18FA008) + 2;
  v2 = (void *)(a1 - 24);
  *(_QWORD *)a1 = v1;
  *(_QWORD *)(a1 + 2656) = 0;
  *(_QWORD *)(a1 + 80) = 0;
  sub_577290((unsigned int *)a1);
  nullsub_1096(v2);
  _ZdlPv(v2);
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

__int64 __fastcall sub_58C990(__int64 a1)
{
  __int64 v2; // x20

  v2 = sub_56C9F0(64, 8, 1092624384, 0LL, &unk_1326E41, 0);
  sub_583700(v2, a1);
  return v2;
}

unsigned __int64 __fastcall sub_58F430(char *a1)
{
  return (unsigned __int64)(1000LL * nn__os__GetSystemTick(a1)) / *(_QWORD *)((__int64*)goff_18F13E8) / 0x3E8;
}

bool __fastcall sub_5B68F0(__int64 a1)
{
  _BOOL8 result; // x0
  int v2; // w8

  result = true;
  if ( *(_BYTE *)(a1 + 316) == 0 )
  {
    v2 = *(_DWORD *)(a1 + 48);
    if ( v2 != 11 && v2 != 5 )
      return false;
  }
  return result;
}

__int64 __fastcall sub_5B8FD0(__int64 a1)
{
  __int64 v1; // x19

  v1 = a1 - 8;
  sub_5B8CF0(a1 - 8);
  return sub_56CA00(v1, &unk_1326E41, 0);
}

__int64 __fastcall sub_5BED50(unsigned int *a1)
{
  unsigned int *v1; // x19

  v1 = a1 - 6;
  sub_577290(a1);
  return nullsub_1096(v1);
}

void __fastcall sub_5BED80(unsigned int *a1)
{
  unsigned int *v1; // x19

  v1 = a1 - 6;
  sub_577290(a1);
  nullsub_1096(v1);
  _ZdlPv(v1);
}

__int64 __fastcall sub_5C05E0(__int64 a1)
{
  __int64 v2; // x20

  v2 = sub_56C9F0(504, 8, 1092624384, 0LL, &unk_1326E41, 0);
  sub_5C78D0(v2, a1);
  return v2;
}

__int64 __fastcall sub_5C0F70(__int64 a1)
{
  __int64 v2; // x0

  v2 = *(_QWORD *)(a1 + 392);
  if ( v2 != 0 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 232LL))(v2);
  else
    return a1 + 19088;
}

__int64 __fastcall sub_5C0FE0(__int64 a1)
{
  __int64 v2; // x0

  v2 = *(_QWORD *)(a1 + 360);
  if ( v2 != 0 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 232LL))(v2);
  else
    return a1 + 19056;
}

__int64 __fastcall sub_5C13E0(_QWORD *a1)
{
  _QWORD *v2; // x1
  __int64 v3; // x8
  __int64 v4; // x0

  *a1 = ((__int64*)goff_18FADC0) + 2;
  v2 = a1 + 26;
  v3 = a1[26];
  if ( v3 != 0 )
  {
    v4 = *(_QWORD *)(v3 + 40);
    if ( v4 != 0 )
      (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v4 + 64LL))(v4, v2);
  }
  return sub_578410(a1 + 4);
}

__int64 __fastcall sub_5C1720(_QWORD *a1)
{
  _QWORD *v2; // x1
  __int64 v3; // x8
  __int64 v4; // x0

  *a1 = ((__int64*)goff_18FAB60) + 2;
  v2 = a1 + 26;
  v3 = a1[26];
  if ( v3 != 0 )
  {
    v4 = *(_QWORD *)(v3 + 40);
    if ( v4 != 0 )
      (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v4 + 64LL))(v4, v2);
  }
  return sub_578410(a1 + 4);
}

__int64 __fastcall sub_5C2180(__int64 a1)
{
  __int64 v2; // x20

  v2 = sub_56C9F0(1232, 16, 1092624384, 0LL, &unk_1326E41, 0);
  sub_5B87B0(v2, a1);
  return v2;
}

__int64 __fastcall sub_5F6500(__int64 result)
{
  if ( result != 0 )
    return sub_554110(result - 8, &unk_1326E41, 0);
  return result;
}

__int64 __fastcall sub_5F66C0(char a1)
{
  char *v1; // x20

  v1 = (char *)goff_18FB850;
  std__recursive_mutex__lock((char *)goff_18FB850);
  *(char*)goff_18FB858 = a1;
  return std__recursive_mutex__unlock(v1);
}

__int64 __fastcall sub_601BF0(_QWORD *a1)
{
  __int64 result; // x0

  *a1 = ((__int64*)goff_18FBA40) + 2;
  sub_5F7870(a1 + 5);
  result = a1[4];
  a1[4] = 0;
  if ( result != 0 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 8LL))(result);
  return result;
}

__int64 __fastcall sub_601D50(_QWORD *a1)
{
  __int64 result; // x0

  *a1 = ((__int64*)goff_18FBA38) + 2;
  sub_5F7870(a1 + 5);
  result = a1[4];
  a1[4] = 0;
  if ( result != 0 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 8LL))(result);
  return result;
}

__int64 __fastcall sub_601DA0(__int64 a1)
{
  *(_QWORD *)a1 = ((__int64*)goff_18FB348) + 2;
  if ( (*(_BYTE *)(a1 + 368) & 1) != 0 )
    sub_56CA00(*(_QWORD *)(a1 + 384), &unk_1326E41, 0);
  sub_578410(a1 + 184);
  return sub_578410(a1 + 8);
}

__int64 __fastcall sub_601E00(_QWORD *a1)
{
  __int64 result; // x0

  *a1 = ((__int64*)goff_18FBA48) + 2;
  sub_5F7870(a1 + 5);
  result = a1[4];
  a1[4] = 0;
  if ( result != 0 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 8LL))(result);
  return result;
}

__int64 __fastcall sub_6043D0(_QWORD *a1)
{
  *a1 = ((__int64*)goff_18FBB00) + 2;
  sub_578410(a1 + 6);
  return sub_56CA00(a1, &unk_1326E41, 0);
}

__int64 __fastcall sub_604CD0(__int64 a1)
{
  __int64 v2; // x20

  v2 = sub_56C9F0(448, 8, 1092624387, 0LL, &unk_1326E41, 0);
  sub_621EB0(v2, a1);
  return v2;
}

__int64 __fastcall sub_605BD0(_QWORD *a1)
{
  *a1 = ((__int64*)goff_18FB8A8) + 2;
  sub_5F7870(a1 + 8);
  return sub_56CA00(a1, &unk_1326E41, 0);
}

__int64 __fastcall sub_606620(__int64 a1)
{
  sub_6064E0();
  return sub_56CA00(a1, &unk_1326E41, 0);
}

__int64 __fastcall sub_6071B0(_QWORD *a1)
{
  *a1 = ((__int64*)goff_18FB8B8) + 2;
  sub_5F7870(a1 + 7);
  return sub_56CA00(a1, &unk_1326E41, 0);
}

__int64 __fastcall sub_6075C0(__int64 a1)
{
  *(_QWORD *)a1 = ((__int64*)goff_18FB930) + 2;
  sub_620B60(a1 + 32, *(_QWORD **)(a1 + 40));
  return sub_56CA00(a1, &unk_1326E41, 0);
}

__int64 __fastcall sub_607D50(_QWORD *a1)
{
  __int64 v2; // x0

  *a1 = ((__int64*)goff_18FBA38) + 2;
  sub_5F7870(a1 + 5);
  v2 = a1[4];
  a1[4] = 0;
  if ( v2 != 0 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  return sub_56CA00(a1, &unk_1326E41, 0);
}

__int64 __fastcall sub_608170(_QWORD *a1)
{
  __int64 v2; // x0

  *a1 = ((__int64*)goff_18FBA40) + 2;
  sub_5F7870(a1 + 5);
  v2 = a1[4];
  a1[4] = 0;
  if ( v2 != 0 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  return sub_56CA00(a1, &unk_1326E41, 0);
}

__int64 __fastcall sub_608590(_QWORD *a1)
{
  __int64 v2; // x0

  *a1 = ((__int64*)goff_18FBA48) + 2;
  sub_5F7870(a1 + 5);
  v2 = a1[4];
  a1[4] = 0;
  if ( v2 != 0 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  return sub_56CA00(a1, &unk_1326E41, 0);
}

__int64 __fastcall sub_60A940(__int64 a1)
{
  sub_60A870();
  return sub_56CA00(a1, &unk_1326E41, 0);
}

__int64 __fastcall sub_60E1B0(_QWORD *a1)
{
  *a1 = ((__int64*)goff_18FB108) + 2;
  sub_578410(a1 + 4);
  return sub_56CA00(a1, &unk_1326E41, 0);
}

__int64 __fastcall sub_60E4F0(_QWORD *a1)
{
  *a1 = ((__int64*)goff_18FB108) + 2;
  sub_578410(a1 + 4);
  return sub_56CA00(a1, &unk_1326E41, 0);
}

__int64 __fastcall sub_60E860(_QWORD *a1)
{
  *a1 = ((__int64*)goff_18FB108) + 2;
  sub_578410(a1 + 4);
  return sub_56CA00(a1, &unk_1326E41, 0);
}

__int64 __fastcall sub_60EBB0(_QWORD *a1)
{
  *a1 = ((__int64*)goff_18FB108) + 2;
  sub_578410(a1 + 4);
  return sub_56CA00(a1, &unk_1326E41, 0);
}

__int64 __fastcall sub_610F50(_QWORD *a1)
{
  __int64 v2; // x0

  *a1 = ((__int64*)goff_18FB2F0) + 2;
  v2 = a1[5];
  if ( v2 != 0 )
  {
    a1[6] = v2;
    sub_56CA00(v2, &unk_1326E41, 0);
  }
  return sub_56CA00(a1, &unk_1326E41, 0);
}

__int64 __fastcall sub_611AB0(_QWORD *a1)
{
  __int64 v2; // x0

  *a1 = ((__int64*)goff_18FB2F8) + 2;
  v2 = a1[27];
  if ( v2 != 0 )
  {
    a1[28] = v2;
    sub_56CA00(v2, &unk_1326E41, 0);
  }
  return sub_578410(a1 + 5);
}

__int64 __fastcall sub_613A80(_QWORD *a1)
{
  *a1 = ((__int64*)goff_18FB310) + 2;
  sub_578410(a1 + 4);
  return sub_56CA00(a1, &unk_1326E41, 0);
}

__int64 __fastcall sub_614020(_QWORD *a1)
{
  *a1 = ((__int64*)goff_18FB318) + 2;
  sub_578410(a1 + 4);
  return sub_56CA00(a1, &unk_1326E41, 0);
}

void __fastcall sub_620F70(_QWORD *a1)
{
  *a1 = ((__int64*)goff_18FBAF8) + 2;
  if ( (a1[1] & 1) != 0 )
    sub_56CA00(a1[3], &unk_1326E41, 0);
  _ZdlPv(a1);
}

__int64 __fastcall sub_62CA70(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, unsigned int a7)
{
  return sub_62C760(a1, a2, a3, a4, a5, a6, "1.1", a7);
}

void sub_62E290()
{
  _QWORD *v0; // x9

  v0 = goff_18FC9B8;
  *(_QWORD *)goff_18FC9E8 = 0;
  *v0 = 0;
  *(_QWORD *)goff_18FC9C0 = 0;
}

_DWORD *__fastcall sub_6317B0(_DWORD *result, unsigned int a2)
{
  *result = 514;
  result[1] = __builtin_bswap32(a2);
  return result;
}

__int64 __fastcall sub_6317C0(__int64 result, __int64 a2)
{
  *(_WORD *)result = 772;
  *(_BYTE *)(result + 2) = *(_BYTE *)(a2 + 9);
  *(_BYTE *)(result + 3) = *(_BYTE *)(a2 + 8);
  *(_BYTE *)(result + 4) = *(_BYTE *)(a2 + 10);
  *(_BYTE *)(result + 5) = 0;
  *(_WORD *)(result + 6) = 0;
  *(_QWORD *)(result + 8) = __builtin_bswap64(*(_QWORD *)a2);
  return result;
}

__int64 __fastcall sub_631E20(unsigned __int64 a1, unsigned __int64 a2)
{
  if ( qword_191A580 != 0 )
    return nn__mem__StandardAllocator__Allocate((char *)&unk_191A588, a1, a2);
  else
    return 0;
}

