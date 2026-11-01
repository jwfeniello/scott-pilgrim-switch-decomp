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
__int64 BYREF();
__int64 _ZdlPv();
extern char byte_14EE226[];
extern char byte_1925158;
extern int dword_191CD00;
extern int dword_1924C7C;
extern int dword_1924D70;
extern int dword_194AFA4;
__int64 nn__hid__StopLrAssignmentMode();
__int64 nn__os__DestroyThread();
__int64 nn__os__FinalizeEvent();
__int64 nn__os__FinalizeMutex();
__int64 nn__os__GetSystemTick();
__int64 nn__os__LockMutex();
__int64 nn__os__TimedWaitEvent();
__int64 nn__os__UnlockMutex();
__int64 nn__os__WaitEvent();
extern void* off_1846B10[];
extern void* off_184A5A0[];
extern void* off_1852338[];
extern void* off_1853918[];
extern void* off_1860598[];
extern void* off_1869DA0[];
extern void* off_186A640[];
extern void* off_186E3F0[];
extern void* off_186E4D8[];
extern void* off_186E808[];
extern void* off_189B308[];
extern void* off_189BB80[];
extern void* off_18ABA68[];
extern void* off_18B55F8[];
extern void* off_18B57D8[];
extern void* off_18B59A0[];
extern void* off_18BD718[];
extern void* off_18CC600[];
extern void* off_18CC608[];
extern void* off_18D7DE8[];
extern void* off_18D8720[];
extern void* off_18D87A0[];
extern void* off_18DC448[];
extern void* off_18DC550[];
extern void* off_18DCA68[];
extern void* off_18DCCE0[];
extern void* off_18DF750[];
extern __int64 qword_18D2318[];
extern __int64 qword_191C9C8;
extern __int64 qword_191CD10;
extern __int64 qword_191DCE8;
extern __int64 qword_19205E0;
extern __int64 qword_1924BC0;
extern __int64 qword_1925160;
extern __int64 qword_1925168;
extern __int64 qword_1925338;
extern __int64 qword_1926BB8;
extern __int64 qword_192AE78;
extern __int64 qword_1935058;
extern __int64 qword_19351A8;
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
extern __int64 qword_1948D70;
extern __int64 qword_1948D78;
extern __int64 qword_195B4B0;
extern __int64 qword_195B648;
extern __int64 qword_195B660;
extern __int64 qword_195B668;
extern __int64 qword_195B670;
__int64 sub_3EFD0();
__int64 sub_47A560();
_Bool sub_576540();
_Bool sub_57F110();
__int64 sub_676160();
__int64 sub_6764E0();
__int64 sub_67EDD0();
__int64 sub_680A00();
__int64 sub_68ED40();
__int64 sub_68F0E0();
__int64 sub_68F5B0();
__int64 sub_6C9DB0();
__int64 sub_6D5470();
__int64 sub_6D55A0();
__int64 sub_6D8810();
__int64 sub_6EA720();
__int64 sub_6F5B80();
__int64 sub_722190();
__int64 sub_737070();
__int64 sub_76BC40();
__int64 sub_76C240();
__int64 sub_7725E0();
__int64 sub_7731C0();
__int64 sub_774B50();
__int64 sub_777710();
__int64 sub_778670();
__int64 sub_7A1420();
__int64 sub_7B58C0();
__int64 sub_7B59B0();
__int64 sub_7CACB0();
__int64 sub_7F4BA0();
__int64 sub_7FB9F0();
__int64 sub_80F840();
__int64 sub_8E1580();
__int64 sub_9A9F10();
__int64 sub_9AA9D0();
__int64 sub_9AAC30();
__int64 sub_A187B0();
__int64 sub_A803E0();
__int64 sub_A84740();
__int64 sub_A945D0();
__int64 sub_A972B0();
__int64 sub_AB5630();
__int64 sub_AB5740();
__int64 sub_AD8A30();
__int64 sub_AE1780();
__int64 sub_AE3ED0();
__int64 sub_AE6DD0();
__int64 sub_AFF620();
__int64 sub_B19960();
__int64 sub_BC97A0();
__int64 sub_BFFE20();
__int64 sub_C3C8C0();
__int64 sub_CD5D80();
__int64 sub_CD6DF0();
__int64 sub_CF6830();
__int64 sub_CF8C60();
__int64 sub_D1C450();
__int64 sub_D1C780();
__int64 sub_D310A0();
__int64 sub_D359B0();
__int64 sub_D3C490();
__int64 sub_D7C620();
__int64 sub_D7DE10();
__int64 sub_DC1790();
__int64 sub_DCEA60();
_Bool sub_DD1160();
__int64 sub_DFCCB0();
__int64 sub_DFD150();
__int64 sub_DFD2C0();
_Bool sub_E08C10();

// N4Onyx11CommandImplIFNS_11BasicStringIcEEvEEE, virtual slot 0
__int64 __fastcall sub_6E4F90(__int64 a1, __int64 a2)
{
  int v2; // w2

  v2 = *(_DWORD *)(a2 + 24);
  if ( v2 != 0 )
    return sub_BFFE20("Wrong number of arguments. Need %d found %d.", 0, v2);
  else
    return (*(__int64 (**)(void))(a1 + 8))();
}

void __fastcall sub_6F58E0(__int64 a1)
{
  unsigned int *v2; // x0
  unsigned int *v3; // x8
  unsigned int v4; // w9
  unsigned int v5; // w9

  v2 = *(unsigned int **)(a1 + 120);
  if ( v2 != nullptr )
  {
    v3 = v2 + 2;
    v5 = __atomic_sub_fetch(v3, 1, 0);
    if ( v5 == 0 )
      (*(void (__fastcall **)(unsigned int *))(*(_QWORD *)v2 + 8LL))(v2);
  }
  if ( (*(_BYTE *)(a1 + 96) & 1) != 0 )
  {
    _ZdlPv(*(void **)(a1 + 112));
    if ( (*(_BYTE *)(a1 + 72) & 1) == 0 )
    {
LABEL_8:
      if ( (*(_BYTE *)(a1 + 48) & 1) == 0 )
        goto LABEL_9;
      goto LABEL_14;
    }
  }
  else if ( (*(_BYTE *)(a1 + 72) & 1) == 0 )
  {
    goto LABEL_8;
  }
  _ZdlPv(*(void **)(a1 + 88));
  if ( (*(_BYTE *)(a1 + 48) & 1) == 0 )
  {
LABEL_9:
    if ( (*(_BYTE *)(a1 + 24) & 1) == 0 )
      goto LABEL_10;
    goto LABEL_15;
  }
LABEL_14:
  _ZdlPv(*(void **)(a1 + 64));
  if ( (*(_BYTE *)(a1 + 24) & 1) == 0 )
  {
LABEL_10:
    if ( (*(_BYTE *)a1 & 1) == 0 )
      return;
LABEL_16:
    _ZdlPv(*(void **)(a1 + 16));
    return;
  }
LABEL_15:
  _ZdlPv(*(void **)(a1 + 40));
  if ( (*(_BYTE *)a1 & 1) != 0 )
    goto LABEL_16;
}

// N11ubiservices11AsyncResultINS_13StatsProfilesEE14InternalResultE, virtual slot 1
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

// N4Onyx4Fire12FireRendererE, virtual slot 15
__int64 __fastcall sub_73D0B0(__int64 a1)
{
  __int64 v1; // x8
  int v2; // w9

  ++*(_DWORD *)(a1 + 20);
  v1 = qword_191DCE8;
  *(_DWORD *)(qword_191DCE8 + 440) &= 0xFFFC3FFF;
  v2 = *(_DWORD *)(v1 + 460) | 0x40;
  *(_DWORD *)(v1 + 460) = v2;
  *(_DWORD *)(v1 + 464) = *(_DWORD *)(a1 + 20);
  *(_DWORD *)(v1 + 460) = v2 & 0x8000007F | 0x7F988C00;
  *(_BYTE *)(a1 + 16) = 1;
  *(float *)(a1 + 24) = *(float *)(a1 + 28) + 0.01f;
  return 0;
}

// N4Onyx4Fire12FireRendererE, virtual slot 17
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

// N4Onyx4Fire12FireRendererE, virtual slot 19
__int64 __fastcall sub_73D1D0(__int64 a1)
{
  float v1; // s0

  *(_DWORD *)(qword_191DCE8 + 460) = *(_DWORD *)(qword_191DCE8 + 460) & 0xFFFFFFBE | 1;
  v1 = *(float *)(a1 + 24) + 0.01f;
  *(_BYTE *)(a1 + 17) = 0;
  *(float *)(a1 + 28) = v1;
  return 0;
}

// N4Onyx4Fire11FireFactoryE, virtual slot 2
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

__int64 sub_74C820()
{
  __int64 v0; // x0
  __int64 v1; // x19

  v0 = sub_676160(qword_191C9C8, 129449108);
  v1 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v0 + 16LL))(v0, 144);
  sub_6764E0();
  *(_QWORD *)v1 = off_186E808;
  *(_QWORD *)(v1 + 96) = v1 + 88;
  *(_QWORD *)(v1 + 104) = 0;
  *(_QWORD *)(v1 + 80) = 0;
  *(_QWORD *)(v1 + 88) = v1 + 88;
  *(_DWORD *)(v1 + 112) = 0;
  *(_DWORD *)(v1 + 120) = 0;
  *(_QWORD *)(v1 + 128) = qword_1935058 + 80;
  return v1;
}

__int64 sub_74C910()
{
  __int64 v0; // x0
  __int64 v1; // x19
  __int64 v3; // x8

  v0 = sub_676160(qword_191C9C8, 129449108);
  v1 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v0 + 16LL))(v0, 192);
  sub_6764E0();
  *(_BYTE *)(v1 + 96) = 0;
  *(_QWORD *)(v1 + 80) = 0;
  *(_QWORD *)(v1 + 88) = 0;
  *(_DWORD *)(v1 + 100) = 0;
  *(_QWORD *)(v1 + 104) = 0;
  *(_QWORD *)v1 = off_186E4D8;
  *(_QWORD *)(v1 + 128) = 0;
  *(_QWORD *)(v1 + 136) = 0;
  v3 = qword_1935058 + 80;
  *(_QWORD *)(v1 + 112) = qword_1935058 + 80;
  *(_QWORD *)(v1 + 120) = 0;
  *(_QWORD *)(v1 + 168) = 0;
  *(_QWORD *)(v1 + 176) = 0;
  *(_QWORD *)(v1 + 152) = v3;
  *(_QWORD *)(v1 + 160) = 0;
  return v1;
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

__int64 sub_74E580()
{
  __int64 v0; // x0
  __int64 v1; // x19
  __int64 v3; // x8

  v0 = sub_676160(qword_191C9C8, 129449108);
  v1 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v0 + 16LL))(v0, 280);
  sub_BC97A0();
  *(_BYTE *)(v1 + 184) = 0;
  *(_QWORD *)(v1 + 160) = 0;
  *(_QWORD *)(v1 + 168) = 0;
  *(_QWORD *)(v1 + 176) = 0;
  *(_QWORD *)v1 = off_186A640;
  *(_QWORD *)(v1 + 208) = 0;
  *(_QWORD *)(v1 + 216) = 0;
  v3 = qword_1935058 + 80;
  *(_QWORD *)(v1 + 192) = qword_1935058 + 80;
  *(_QWORD *)(v1 + 200) = 0;
  *(_DWORD *)(v1 + 232) = 0;
  *(_QWORD *)(v1 + 176) = v1;
  *(_QWORD *)(v1 + 240) = v3;
  *(_QWORD *)(v1 + 248) = 0;
  *(_QWORD *)(v1 + 256) = 0;
  *(_QWORD *)(v1 + 264) = 0;
  return v1;
}

__int64 sub_74EE40()
{
  __int64 v0; // x0
  __int64 v1; // x19
  __int64 v2; // x9

  v0 = sub_676160(qword_191C9C8, 129449108);
  v1 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v0 + 16LL))(v0, 240);
  sub_BC97A0();
  *(_QWORD *)(v1 + 168) = 0;
  *(_QWORD *)(v1 + 176) = 0;
  *(_QWORD *)(v1 + 184) = 0;
  v2 = qword_1935058;
  *(_QWORD *)v1 = off_1869DA0;
  *(_QWORD *)(v1 + 200) = 0;
  *(_QWORD *)(v1 + 208) = 0;
  *(_QWORD *)(v1 + 160) = v2 + 80;
  *(_BYTE *)(v1 + 220) = 0;
  *(_DWORD *)(v1 + 216) = 0;
  *(_DWORD *)(v1 + 231) = 0;
  *(_QWORD *)(v1 + 224) = 0;
  return v1;
}

__int64 sub_754A60()
{
  __int64 v0; // x0
  __int64 v1; // x19

  v0 = sub_676160(qword_191C9C8, 129449108);
  v1 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v0 + 16LL))(v0, 120);
  sub_6764E0();
  *(_QWORD *)v1 = &off_1860598;
  *(_QWORD *)(v1 + 108) = 0;
  *(_OWORD *)(v1 + 76) = 0u;
  *(_DWORD *)(v1 + 80) = -1;
  *(_OWORD *)(v1 + 92) = 0u;
  return v1;
}

__int64 sub_75B9E0()
{
  __int64 v0; // x0
  __int64 v1; // x19

  v0 = sub_676160(qword_191C9C8, 429100959);
  v1 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v0 + 16LL))(v0, 720);
  sub_7FB9F0();
  *(_QWORD *)(v1 + 704) = 0;
  *(_QWORD *)v1 = off_1853918;
  *(_OWORD *)(v1 + 688) = 0u;
  *(int32x2_t *)(v1 + 712) = vdup_n_s32(0x3E8u);
  return v1;
}

// NSt3__110__function6__funcIZN4SPTG17WorldMapNavigator17LaunchLevel_StateEjE4$_61NS_9allocatorIS4_EEFbvEEE, virtual slot 6
bool __fastcall sub_77D240(char *a1)
{
  __int64 v1; // x19
  float v2; // s0

  v1 = *((_QWORD *)a1 + 1);
  v2 = (double)(unsigned __int64)(1000000 * (nn__os__GetSystemTick(a1) - qword_195B648) / qword_195B670
                                - *(_QWORD *)(v1 + 752))
     / 1000000.0;
  return v2 > 5.0;
}

// N5storm15TNetPropertyRefINS_15NetPropertyNullEE7RefTypeE, virtual slot 19
bool __fastcall sub_7838B0(__int64 a1, __int64 a2)
{
  return (sub_576540()) != 0 && *(_DWORD *)(a1 + 28) == *(_DWORD *)(a2 + 28);
}

// N5storm15NetPropertyPairINS_18NetPropertyIntegerINS_8StringIdENS_14NumericalTraitIS2_NS_15MaxValueFunctorIS2_Lm0EEELh0ELb0ELb0ENS_19DefaultValueFunctorIS2_Lm0EEEEEEENS_15TNetPropertyRefINS_15NetPropertyNullEEEEE, virtual slot 19
_Bool __fastcall sub_784230(__int64 a1, __int64 a2)
{
  if ( (sub_576540()) != 0 && (sub_57F110(a1 + 40, a2 + 40)) != 0 )
    return sub_57F110(a1 + 80, a2 + 80);
  else
    return 0;
}

// N5storm18NetPropertyIntegerINS_8StringIdENS_14NumericalTraitIS1_NS_15MaxValueFunctorIS1_Lm0EEELh0ELb0ELb0ENS_19DefaultValueFunctorIS1_Lm0EEEEEEE, virtual slot 19
bool __fastcall sub_7848E0(__int64 a1, __int64 a2)
{
  return (sub_576540()) != 0 && *(_DWORD *)(a1 + 28) == *(_DWORD *)(a2 + 28);
}

// N5storm17NetPropertyVectorINS_15NetPropertyPairINS_18NetPropertyIntegerINS_8StringIdENS_14NumericalTraitIS3_NS_15MaxValueFunctorIS3_Lm0EEELh0ELb0ELb0ENS_19DefaultValueFunctorIS3_Lm0EEEEEEENS_15TNetPropertyRefINS_15NetPropertyNullEEEEELm0EE10VectorSizeE, virtual slot 19
bool __fastcall sub_786AE0(__int64 a1, __int64 a2)
{
  return (sub_576540()) != 0
      && *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL) - **(_QWORD **)(a1 + 32) == *(_QWORD *)(*(_QWORD *)(a2 + 32) + 8LL)
                                                                           - **(_QWORD **)(a2 + 32);
}

// N5storm18NetPropertyIntegerIhNS_14NumericalTraitIhNS_15MaxValueFunctorIhLm0EEELh0ELb1ELb0ENS_19DefaultValueFunctorIhLm0EEEEEEE, virtual slot 19
bool __fastcall sub_788FE0(__int64 a1, __int64 a2)
{
  return (sub_576540()) != 0 && *(unsigned __int8 *)(a1 + 26) == *(unsigned __int8 *)(a2 + 26);
}

// N5storm18NetPropertyIntegerIjNS_14NumericalTraitIjNS_15MaxValueFunctorIjLm0EEELh0ELb1ELb0ENS_19DefaultValueFunctorIjLm0EEEEEEE, virtual slot 19
bool __fastcall sub_789720(__int64 a1, __int64 a2)
{
  return (sub_576540()) != 0 && *(_DWORD *)(a1 + 28) == *(_DWORD *)(a2 + 28);
}

// N5storm18NetPropertyIntegerIbNS_14NumericalTraitIbNS_15MaxValueFunctorIbLm0EEELh0ELb0ELb0ENS_19DefaultValueFunctorIbLm0EEEEEEE, virtual slot 19
bool __fastcall sub_78A150(__int64 a1, __int64 a2)
{
  return (sub_576540()) != 0 && *(unsigned __int8 *)(a1 + 26) == *(unsigned __int8 *)(a2 + 26);
}

// N5storm18NetPropertyIntegerItNS_14NumericalTraitItNS_15MaxValueFunctorItLm0EEELh0ELb1ELb0ENS_19DefaultValueFunctorItLm0EEEEEEE, virtual slot 19
bool __fastcall sub_78A8A0(__int64 a1, __int64 a2)
{
  return (sub_576540()) != 0 && *(unsigned __int16 *)(a1 + 26) == *(unsigned __int16 *)(a2 + 26);
}

__int64 __fastcall sub_79EA30(__int64 a1, __int64 a2)
{
  unsigned int v2; // w19
  __int64 result; // x0

  v2 = *(_DWORD *)(*(_QWORD *)(a2 + 8) + 5384LL);
  if ( qword_1924BC0 == 0
    || *(_BYTE *)(qword_1924BC0 + 224) == 0
    || *(_DWORD *)((result = sub_777710(a1 + 136)) + 6188) == v2 )
  {
    sub_680A00(a1 + 144);
    return sub_7A1420(a1, 10, v2);
  }
  return result;
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

__int64 __fastcall sub_7C9610(__int64 result)
{
  __int64 v1; // x8
  char v2; // w11

  if ( *(_BYTE *)(result + 224) == 0 )
  {
    *(_BYTE *)(result + 224) = 1;
    *(_DWORD *)(result + 352) = 0;
    v1 = qword_1924BC0;
    if ( qword_1924BC0 != 0 )
      *(_BYTE *)(qword_1924BC0 + 208) = 0;
    v2 = byte_1925158;
    byte_1925158 = 1;
    if ( (v2 & 1) == 0 )
    {
      dword_1924D70 = 0;
      qword_1925160 = 0;
      if ( v1 != 0 )
        v1 = *(_QWORD *)(v1 + 296);
      qword_1925168 = v1;
    }
    return sub_7CACB0();
  }
  return result;
}

// N4SPTG12NetworkPhaseE, virtual slot 3
__int64 __fastcall sub_7CB640(__int64 result)
{
  qword_1924BC0 = 0;
  *(_DWORD *)(result + 56) &= ~2u;
  return result;
}

// N4SPTG12NetworkPhaseE, virtual slot 7
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

// N4SPTG12NetworkPhaseE, virtual slot 15
bool __fastcall sub_7CBBB0(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 56) & 1) == 0 )
    return false;
  if ( qword_1924BC0 != 0 )
    return *(_BYTE *)(qword_1924BC0 + 224) != 0;
  return false;
}

// N11ubiservices11AsyncResultINS_3MapINS_9ProfileIdENS_11ProfileInfoEEEE14InternalResultE, virtual slot 1
__int64 __fastcall sub_7F5620(__int64 a1)
{
  *(_QWORD *)a1 = off_1852338;
  sub_7F4BA0(a1 + 16, *(_QWORD **)(a1 + 24));
  return sub_3EFD0(a1);
}

// N4SPTG8WorldMapE, virtual slot 2
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

// N4SPTG15SelectCharacterE, virtual slot 39
__int64 __fastcall sub_81ADE0(char *a1)
{
  __int64 result; // x0
  __int64 v3; // x8
  __int64 v4; // x19
  __int64 v5; // x8

  nn__hid__StopLrAssignmentMode(a1);
  result = sub_7725E0((__int64)a1 + 688);
  v4 = result + 80;
  v3 = *(_QWORD *)(result + 80);
  if ( v3 == 0 || (v5 = *(_QWORD *)(v3 + 8)) == 0 )
  {
    sub_67EDD0(qword_191CD10, 794088402, v4);
    result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)v4 + 8LL) + 16LL))(*(_QWORD *)(*(_QWORD *)v4 + 8LL));
    v5 = *(_QWORD *)(*(_QWORD *)v4 + 8LL);
  }
  *(_BYTE *)(v5 + 1825) = 1;
  return result;
}

// N4SPTG14PauseMenuMovieE, virtual slot 2
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

// N4SPTG15LobbyScreenMenuE, virtual slot 30
__int64 __fastcall sub_8340A0(__int64 result)
{
  __int64 v1; // x8
  __int64 v2; // x8
  __int64 v3; // x19

  v1 = *(_QWORD *)(result + 688);
  if ( v1 != 0 && (v2 = *(_QWORD *)(v1 + 8)) != 0 )
  {
    *(_BYTE *)(v2 + 541) = 0;
  }
  else
  {
    v3 = result + 688;
    sub_67EDD0(qword_191CD10, 432006661, result + 688);
    result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)v3 + 8LL) + 16LL))(*(_QWORD *)(*(_QWORD *)v3 + 8LL));
    *(_BYTE *)(*(_QWORD *)(*(_QWORD *)v3 + 8LL) + 541LL) = 0;
  }
  return result;
}

// N4Onyx9Component7ComposeIN4SPTG16SPTG_AIComponentENS_4Meta10CollectionINS0_10Dependency9SingletonINS2_14FlashMenuPhaseENS4_4NullEEENS7_INS2_15SwitchLevelGateES9_EES9_S9_S9_S9_S9_S9_S9_S9_S9_S9_EEEE, virtual slot 7
__int64 __fastcall sub_862600(_DWORD *a1)
{
  int v1; // w9

  v1 = dword_1924C7C++;
  a1[19] = v1;
  return (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 128LL))(a1);
}

// N4SPTG30ControllerDisconnectionMessageE, virtual slot 24
bool sub_873430()
{
  return qword_1924BC0 == 0 || *(_BYTE *)(qword_1924BC0 + 224) == 0;
}

// N4SPTG29PadControllerStrategyStandardE, virtual slot 5
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

// N4SPTG25AnimationInfoHolderSwitchE, virtual slot 15
__int64 __fastcall sub_8CD980(__int64 a1, float a2)
{
  __int64 v2; // x8
  __int64 v3; // x19
  __int64 v5; // x0
  __int64 result; // x0

  v3 = a1 + 80;
  v2 = *(_QWORD *)(a1 + 80);
  if ( v2 == 0 || (v5 = *(_QWORD *)(v2 + 8)) == 0 )
  {
    sub_67EDD0(qword_191CD10, 1998299886, v3);
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)v3 + 8LL) + 16LL))(*(_QWORD *)(*(_QWORD *)v3 + 8LL));
    v5 = *(_QWORD *)(*(_QWORD *)v3 + 8LL);
  }
  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 128LL))(v5);
  *(float *)(result + 8) = a2;
  return result;
}

// N4SPTG18WaitForButtonPressE, virtual slot 15
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

// N4SPTG27SetPopupBoxVisibilityActionE, virtual slot 18
__int64 __fastcall sub_911A30(__int64 a1)
{
  _DWORD *v2; // x0

  v2 = (_DWORD *)sub_6EA720(a1 + 160);
  return sub_778670(v2, (_DWORD *)(a1 + 168), 0, 0);
}

// N4Onyx9Component7ComposeIN4SPTG28SetFlashMenuVisibilityActionENS_4Meta10CollectionINS0_10Dependency4WeakINS2_19ActorActionSequenceENS4_4NullEEENS6_9SingletonINS2_19LevelWindowAccessorES9_EENSB_INS_12Localization12LocalizationES9_EES9_S9_S9_S9_S9_S9_S9_S9_S9_EEEE, virtual slot 18
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

__int64 __fastcall sub_91BCE0(__int64 a1)
{
  __int64 v2; // x20
  __int64 v3; // x0
  __int64 v4; // x0
  __int64 v5; // x0
  __int64 result; // x0
  __int64 *v7; // x20
  char v8; // w8
  __int64 v9; // x9

  v2 = sub_7B59B0(a1 + 176);
  v3 = *(_QWORD *)(v2 + 120);
  if ( (v3 == 0
     || ((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 408LL))(v3) & 1) != 0
     || *(_BYTE *)(v2 + 128) != 0)
    && ((v4 = *(_QWORD *)(v2 + 136)) == 0
     || ((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 408LL))(v4) & 1) != 0
     || *(_BYTE *)(v2 + 144) != 0)
    && ((v5 = *(_QWORD *)(v2 + 152)) == 0
     || ((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 408LL))(v5) & 1) != 0
     || *(_BYTE *)(v2 + 160) != 0)
    && ((result = *(_QWORD *)(v2 + 168)) == 0
     || ((result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 408LL))(result)) & 1) != 0
     || *(_BYTE *)(v2 + 176) != 0) )
  {
    if ( *(_BYTE *)(*(_QWORD *)(a1 + 312) + 64LL) != 0 )
      return result;
    v7 = (__int64 *)(a1 + 312);
    result = sub_80F840(a1 + 200);
    v8 = 1;
  }
  else
  {
    result = sub_80F840(a1 + 200);
    v8 = 0;
    v7 = (__int64 *)(a1 + 312);
  }
  v9 = *v7;
  *(_BYTE *)(v9 + 64) = v8;
  *(_BYTE *)(v9 + 65) = 0;
  return result;
}

__int64 __fastcall sub_91C570(__int64 a1)
{
  __int64 v1; // x20
  __int64 v3; // x0
  int v4; // w21
  __int64 result; // x0
  __int64 v6; // x8
  __int64 v7; // x20
  __int64 v8; // x9
  __int64 *v9; // x8
  __int64 *v10; // x9
  __int64 v11; // x10
  __int64 v12; // t1
  int v13; // w8

  v1 = a1 + 216;
  *(_DWORD *)(a1 + 300) = *(_DWORD *)(*(_QWORD *)(a1 + 288) + 480LL);
  sub_777710(a1 + 216);
  v3 = sub_777710(v1);
  v4 = *(_DWORD *)(a1 + 300);
  result = sub_7725E0(v3 + 120);
  v7 = result + 80;
  v6 = *(_QWORD *)(result + 80);
  if ( v6 == 0 || (v8 = *(_QWORD *)(v6 + 8)) == 0 )
  {
    sub_67EDD0(qword_191CD10, 794088402, v7);
    result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)v7 + 8LL) + 16LL))(*(_QWORD *)(*(_QWORD *)v7 + 8LL));
    v8 = *(_QWORD *)(*(_QWORD *)v7 + 8LL);
  }
  v9 = *(__int64 **)(v8 + 152);
  v10 = *(__int64 **)(v8 + 160);
  if ( v9 == v10 )
    goto LABEL_10;
  while ( 1 )
  {
    v12 = *v9++;
    v11 = v12;
    if ( *(_DWORD *)(v12 + 480) == v4 )
      break;
    if ( v10 == v9 )
      goto LABEL_10;
  }
  if ( v11 == 0 )
LABEL_10:
    v13 = 6;
  else
    v13 = *(_DWORD *)(v11 + 520);
  *(_DWORD *)(a1 + 304) = v13;
  return result;
}

// N4SPTG19DodgeBallModeActionE, virtual slot 8
__int64 __fastcall sub_91F1A0(__int64 a1)
{
  __int64 result; // x0
  __int64 v2; // x8
  __int64 v3; // x19
  __int64 v4; // x8

  result = sub_774B50(a1 + 208);
  v3 = result + 80;
  v2 = *(_QWORD *)(result + 80);
  if ( v2 == 0 || (v4 = *(_QWORD *)(v2 + 8)) == 0 )
  {
    sub_67EDD0(qword_191CD10, 1743956557, v3);
    result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)v3 + 8LL) + 16LL))(*(_QWORD *)(*(_QWORD *)v3 + 8LL));
    v4 = *(_QWORD *)(*(_QWORD *)v3 + 8LL);
  }
  *(_BYTE *)(v4 + 185) = 0;
  return result;
}

// N4SPTG19DodgeBallModeActionE, virtual slot 15
__int64 __fastcall sub_91FB80(__int64 a1)
{
  __int64 result; // x0
  __int64 v3; // x8
  __int64 v4; // x20
  __int64 v5; // x8

  result = sub_774B50(a1 + 208);
  v4 = result + 80;
  v3 = *(_QWORD *)(result + 80);
  if ( v3 == 0 || (v5 = *(_QWORD *)(v3 + 8)) == 0 )
  {
    sub_67EDD0(qword_191CD10, 1743956557, v4);
    result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)v4 + 8LL) + 16LL))(*(_QWORD *)(*(_QWORD *)v4 + 8LL));
    v5 = *(_QWORD *)(*(_QWORD *)v4 + 8LL);
  }
  *(_BYTE *)(v5 + 185) = 0;
  *(_WORD *)(a1 + 152) = 256;
  return result;
}

// N4SPTG20CycleAnimationActionE, virtual slot 14
__int64 __fastcall sub_920430(__int64 a1)
{
  __int64 v1; // x8
  __int64 v2; // x20
  __int64 v4; // x0
  __int64 result; // x0

  v2 = a1 + 160;
  v1 = *(_QWORD *)(a1 + 160);
  *(_WORD *)(a1 + 152) = 1;
  *(_DWORD *)(a1 + 188) = 0;
  if ( v1 == 0 || (v4 = *(_QWORD *)(v1 + 8)) == 0 )
  {
    sub_67EDD0(qword_191CD10, 1160278366, v2);
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)v2 + 8LL) + 16LL))(*(_QWORD *)(*(_QWORD *)v2 + 8LL));
    if ( *(_QWORD *)v2 != 0 )
      v4 = *(_QWORD *)(*(_QWORD *)v2 + 8LL);
    else
      v4 = 0;
  }
  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 128LL))(v4);
  *(_DWORD *)(a1 + 184) = *(_DWORD *)(result + 8);
  return result;
}

// N4SPTG29ActiveNotCharacterActorActionE, virtual slot 7
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

// N4SPTG21ControllableNegaScottE, virtual slot 160
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

// N4SPTG18ControllableKnivesE, virtual slot 160
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

__int64 __fastcall sub_9A9E70(__int64 a1)
{
  __int64 v2; // x8
  __int64 v3; // x20
  __int64 v4; // x0

  sub_9A9F10(*(_QWORD *)(a1 + 240), *(unsigned int *)(a1 + 232));
  *(_BYTE *)(a1 + 253) = 1;
  sub_680A00(a1 + 104);
  v3 = a1 + 120;
  v2 = *(_QWORD *)(a1 + 120);
  if ( v2 == 0 || (v4 = *(_QWORD *)(v2 + 8)) == 0 )
  {
    sub_67EDD0(qword_191CD10, 427495160, a1 + 120);
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)v3 + 8LL) + 16LL))(*(_QWORD *)(*(_QWORD *)v3 + 8LL));
    if ( *(_QWORD *)v3 != 0 )
      v4 = *(_QWORD *)(*(_QWORD *)v3 + 8LL);
    else
      v4 = 0;
  }
  sub_9AA9D0(v4);
  return sub_9AAC30(*(_QWORD *)(a1 + 240), *(unsigned int *)(a1 + 232));
}

// N4SPTG10BaseBossAIE, virtual slot 7
__int64 __fastcall sub_A14960(_DWORD *a1)
{
  int v1; // w9

  v1 = dword_1924C7C++;
  a1[19] = v1;
  return (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 128LL))(a1);
}

// N4SPTG22SuperFightingRobotHandE, virtual slot 16
__int64 __fastcall sub_A29360(_QWORD *a1)
{
  __int64 result; // x0
  __int64 v3; // x8
  __int64 v4; // x19
  __int64 v5; // x8
  __int64 v6; // x19
  __int64 v7; // t1
  __int64 v8; // x0

  result = sub_A187B0(a1);
  v3 = a1[11];
  if ( v3 != 0 )
  {
    v4 = *(_QWORD *)(v3 + 8);
    if ( v4 != 0 )
    {
      v7 = *(_QWORD *)(v4 + 88);
      v6 = v4 + 88;
      v5 = v7;
      if ( v7 == 0 || (v8 = *(_QWORD *)(v5 + 8)) == 0 )
      {
        sub_67EDD0(qword_191CD10, 36693834, v6);
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)v6 + 8LL) + 16LL))(*(_QWORD *)(*(_QWORD *)v6 + 8LL));
        if ( *(_QWORD *)v6 != 0 )
          v8 = *(_QWORD *)(*(_QWORD *)v6 + 8LL);
        else
          v8 = 0;
      }
      return sub_68F5B0(v8, 0);
    }
  }
  return result;
}

// N4Gear13AsynchGenericE, virtual slot 12
__int64 sub_A7E210()
{
  int v1; // [xsp+Ch] [xbp-4h] BYREF

  v1 = 4;
  (*(__int64(**)())off_189B308)(0, &v1);
  return 0xFFFFFFFFLL;
}

// N4Gear13AsynchGenericE, virtual slot 13
__int64 sub_A7E240()
{
  int v1; // [xsp+Ch] [xbp-4h] BYREF

  v1 = 4;
  (*(__int64(**)())off_189B308)(0, &v1);
  return 0xFFFFFFFFLL;
}

// N4Gear13AsynchGenericE, virtual slot 14
__int64 sub_A7E270()
{
  int v1; // [xsp+Ch] [xbp-4h] BYREF

  v1 = 4;
  (*(__int64(**)())off_189B308)(0, &v1);
  return 0xFFFFFFFFLL;
}

// N4Gear6ThreadE, virtual slot 5
__int64 __fastcall sub_A7F040(__int64 a1, int a2)
{
  __int64 v2; // x0

  v2 = *(_QWORD *)(a1 + 200) + 8LL;
  if ( a2 != -1 )
    return nn__os__TimedWaitEvent(v2, 1000000LL * a2);
  nn__os__WaitEvent(v2);
  return 1;
}

// N4Gear10AsynchFileE, virtual slot 3
_Bool __fastcall sub_A822A0(_QWORD *a1, unsigned __int64 *a2)
{
  unsigned __int64 v2; // x9
  unsigned __int64 v3; // x8
  __int64 v5; // x20
  void (__fastcall *v6)(_QWORD, __int64, _QWORD *, __int64); // x8
  int v8; // [xsp+Ch] [xbp-14h] BYREF

  v2 = *a2;
  v3 = a1[41];
  if ( *a2 <= v3 )
  {
    a1[40] = v2;
    return 1;
  }
  if ( v2 == -1 )
  {
    a1[40] = v3;
    return 1;
  }
  v5 = a1[4];
  *(_DWORD *)(v5 + 204) = 2;
  v8 = 2;
  (*(__int64(**)())off_189B308)(0, &v8);
  v6 = *(void (__fastcall **)(_QWORD, __int64, _QWORD *, __int64))(v5 + 184);
  if ( v6 != nullptr )
    v6(*(_QWORD *)(v5 + 192), v5, a1, 2);
  return 0;
}

// N4Gear22AsynchPlatformSpecificE, virtual slot 2
_Bool __fastcall sub_A84B20(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  char v5; // [xsp+Ch] [xbp-4h] BYREF

  *a4 = 169;
  return sub_E08C10(qword_195B660, a2, &v5);
}

// N4Gear4ZLibE, virtual slot 6
__int64 __fastcall sub_A8A040(__int64 a1)
{
  return (unsigned int)(*(_DWORD *)(a1 + 24) - *(_DWORD *)(*(_QWORD *)(a1 + 16) + 32LL));
}

__int64 __fastcall sub_A8CED0(__int64 (__fastcall **a1)(_QWORD, __int64), unsigned int a2, __int64 a3)
{
  return (*a1)(a2, a3);
}

// N4Gear13MemAllocFixedE, virtual slot 4
__int64 __fastcall sub_A94C00(__int64 a1, __int64 a2, unsigned int a3)
{
  if ( a2 == 0 )
    return (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 16LL))(a1, a3);
  if ( a3 != 0 )
    return a2;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 48LL))(a1);
  return 0;
}

// N4Gear13MemAllocFixedE, virtual slot 5
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

// N4Gear19MemDefaultAllocatorE, virtual slot 18
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

// N4Gear10DiskDeviceE, virtual slot 7
_Bool __fastcall sub_A988F0(__int64 a1, __int64 a2)
{
  __int64 v2; // x19
  __int64 v3; // x0
  _BYTE v5[4]; // [xsp+Ch] [xbp-14h] BYREF

  v2 = qword_195B660;
  v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 40LL))(a2);
  return sub_E08C10(v2, v3, v5);
}

// N4Gear10DiskDeviceE, virtual slot 12
__int64 sub_A98A50()
{
  int v1; // [xsp+Ch] [xbp-4h] BYREF

  v1 = 4;
  (*(__int64(**)())off_189B308)(0, &v1);
  return 0xFFFFFFFFLL;
}

// N4Gear10DiskDeviceE, virtual slot 13
__int64 sub_A98A80()
{
  int v1; // [xsp+Ch] [xbp-4h] BYREF

  v1 = 4;
  (*(__int64(**)())off_189B308)(0, &v1);
  return 0xFFFFFFFFLL;
}

// N4Gear10DiskDeviceE, virtual slot 14
__int64 sub_A98AB0()
{
  int v1; // [xsp+Ch] [xbp-4h] BYREF

  v1 = 4;
  (*(__int64(**)())off_189B308)(0, &v1);
  return 0xFFFFFFFFLL;
}

// N4Gear8DiskFileE, virtual slot 2
_Bool __fastcall sub_A99290(__int64 a1, _QWORD *a2)
{
  unsigned int v4; // w20
  unsigned int v5; // w0
  __int64 v7; // x8

  v4 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 304) + 64LL))(*(_QWORD *)(a1 + 304));
  v5 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 304) + 80LL))(*(_QWORD *)(a1 + 304));
  if ( v5 < v4 )
    return 0;
  v7 = v5 - v4;
  *a2 = v7;
  return 1;
}

// N4Gear22DiskDevicePathIteratorE, virtual slot 3
__int64 sub_A99630()
{
  int v1; // [xsp+Ch] [xbp-4h] BYREF

  v1 = 4;
  return (*(__int64(**)())off_189B308)(0, &v1);
}

// N4Gear10KeyboardEEE, virtual slot 8
__int64 __fastcall sub_AA3990(__int64 a1, unsigned __int8 a2)
{
  return byte_14EE226[a2];
}

// N4Gear9GamePadEEE, virtual slot 7
__int64 __fastcall sub_AA41A0(__int64 a1, int a2)
{
  return a1 + 8LL * a2 + 20;
}

// N4Gear9GamePadEEE, virtual slot 10
__int64 __fastcall sub_AA41D0(__int64 a1, int a2)
{
  return a1 + 12LL * a2 + 36;
}

// N4Gear9GamePadEEE, virtual slot 17
__int64 __fastcall sub_AA4240(__int64 a1, unsigned int a2)
{
  return a1 + 12LL * a2 + 100;
}

// N4Gear9GamePadEEE, virtual slot 18
__int64 __fastcall sub_AA4250(__int64 a1, unsigned int a2)
{
  return a1 + 12LL * a2 + 124;
}

// N4Gear9GamePadEEE, virtual slot 28
__int64 __fastcall sub_AA4330(__int64 result, unsigned int a2, _DWORD *a3)
{
  __int64 v3; // x8

  v3 = result + 8LL * a2;
  *(_DWORD *)(v3 + 148) = *a3;
  *(_DWORD *)(v3 + 152) = a3[1];
  return result;
}

// N4Gear9GamePadEEE, virtual slot 29
__int64 __fastcall sub_AA4350(__int64 result, unsigned int a2, _DWORD *a3)
{
  __int64 v3; // x8

  v3 = result + 8LL * a2;
  *(_DWORD *)(v3 + 164) = *a3;
  *(_DWORD *)(v3 + 168) = a3[1];
  return result;
}

// N4Gear9GamePadEEE, virtual slot 48
__int64 __fastcall sub_AA5290(__int64 a1)
{
  _BOOL8 v2; // x1

  v2 = (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1) - 6 > 3;
  return (*(__int64 (__fastcall **)(__int64, _BOOL8))(*(_QWORD *)a1 + 376LL))(a1, v2);
}

// N4Gear9GamePadEEE, virtual slot 49
__int64 __fastcall sub_AA52D0(__int64 a1)
{
  _BOOL8 v2; // x1

  v2 = (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1) - 6 < 4;
  return (*(__int64 (__fastcall **)(__int64, _BOOL8))(*(_QWORD *)a1 + 376LL))(a1, v2);
}

// N4Gear19MemDefaultAllocatorE, virtual slot 1
void __fastcall sub_AA8750(_QWORD *a1)
{
  *a1 = off_189BB80;
  qword_1926BB8 = -1;
  sub_A945D0((__int64)a1);
  _ZdlPv(a1);
}

// N4Gear10MemSysPageE, virtual slot 1
void __fastcall sub_AA8A40(void *a1)
{
  qword_192AE78 = -1;
  _ZdlPv(a1);
}

// N4Gear10MemSysPageE, virtual slot 5
bool __fastcall sub_AA8AE0(__int64 a1, unsigned __int8 a2)
{
  return a2 < 4u;
}

// N4Gear19TimeFilteredGamePadE, virtual slot 65
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

// N4Gear19TimeFilteredGamePadE, virtual slot 71
__int64 __fastcall sub_AABD20(__int64 a1, unsigned __int8 a2)
{
  int v2; // w8

  v2 = *(_DWORD *)(a1 + 4LL * a2 + 328);
  if ( v2 == -1 )
    return 0xFFFFFFFFLL;
  else
    return (unsigned int)(*(_DWORD *)(a1 + 440) - v2);
}

// N4Gear19TimeFilteredGamePadE, virtual slot 91
bool __fastcall sub_AAC540(float *a1)
{
  float *v2; // x0

  v2 = (float *)(*(__int64 (__fastcall **)(float *))(*(_QWORD *)a1 + 176LL))(a1);
  return *v2 != a1[23] || v2[1] != a1[24];
}

// N4Gear20TimeFilteredKeyboardE, virtual slot 10
__int64 __fastcall sub_AAD170(char *a1, unsigned int a2)
{
  char *v4; // x21
  __int64 result; // x0
  __int64 v6; // x8
  char *v7; // x9

  v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 160LL))(a1);
  result = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 8) + 80LL))(*(_QWORD *)(a1 + 8), a2);
  v6 = 0;
  v7 = a1 + 308;
  *(_DWORD *)(a1 + 1336) = a2;
  do
  {
    if ( *(_BYTE *)(v4 + 4 + v6) != 0 )
    {
      if ( *(_BYTE *)(v7 + v6 - 256) != 0 && *(_DWORD *)(v7 + 4 * v6) == -1 )
        *(_DWORD *)(v7 + 4 * v6) = *(_DWORD *)(a1 + 1336);
    }
    else
    {
      *(_DWORD *)(v7 + 4 * v6) = -1;
    }
    ++v6;
  }
  while ( v6 != 256 );
  return result;
}

// N4Gear20TimeFilteredKeyboardE, virtual slot 11
__int64 __fastcall sub_AAD200(__int64 a1, unsigned int a2)
{
  const void *v4; // x0

  *(_DWORD *)(a1 + 1332) = *(_DWORD *)(a1 + 1336);
  v4 = (const void *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 160LL))(a1);
  memcpy((void *)(a1 + 48), v4, 0x104u);
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 8) + 88LL))(*(_QWORD *)(a1 + 8), a2);
}

// N4Gear20TimeFilteredKeyboardE, virtual slot 22
bool __fastcall sub_AAD2C0(__int64 a1, __int64 a2, unsigned int a3)
{
  int v5; // w8

  v5 = *(_DWORD *)(a1
                 + 4LL
                 * (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 40) + 64LL))(*(_QWORD *)(a1 + 40))
                 + 308);
  return v5 != -1 && *(_DWORD *)(a1 + 1332) - v5 < a3 && *(_DWORD *)(a1 + 1336) - v5 >= a3;
}

// N4Gear20TimeFilteredKeyboardE, virtual slot 28
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

// N4Gear17TimeFilteredMouseE, virtual slot 24
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

// N4Gear17TimeFilteredMouseE, virtual slot 30
__int64 __fastcall sub_AADED0(__int64 a1, unsigned __int8 a2)
{
  int v2; // w8

  v2 = *(_DWORD *)(a1 + 4LL * a2 + 56);
  if ( v2 == -1 )
    return 0xFFFFFFFFLL;
  else
    return (unsigned int)(*(_DWORD *)(a1 + 92) - v2);
}

// N4Gear21MemAllocFixedWithFreeE, virtual slot 4
__int64 __fastcall sub_AAE590(__int64 a1, __int64 a2, unsigned int a3)
{
  if ( a2 == 0 )
    return (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 16LL))(a1, a3);
  if ( a3 != 0 )
    return a2;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 48LL))(a1);
  return 0;
}

// N4Gear21MemAllocFixedWithFreeE, virtual slot 5
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

// N4Gear12AsynchStreamE, virtual slot 3
__int64 __fastcall sub_AB55D0(__int64 a1)
{
  char *v2; // x0
  __int64 v3; // x8
  __int64 v4; // x9

  sub_AB5630(a1, 0);
  v2 = *(char **)(a1 + 40);
  if ( v2 != nullptr )
  {
    sub_A803E0(v2);
    *(_QWORD *)(a1 + 40) = 0;
  }
  v3 = *(_QWORD *)(a1 + 32);
  if ( v3 != 0 )
  {
    *(_QWORD *)(a1 + 40) = v3;
    v4 = *(_QWORD *)(v3 + 32);
    *(_QWORD *)(v3 + 32) = 0;
    *(_QWORD *)(a1 + 32) = v4;
    LODWORD(v4) = *(_DWORD *)v3;
    *(_DWORD *)(a1 + 16) = *(_DWORD *)v3;
    *(_QWORD *)(a1 + 8) = *(_QWORD *)(v3 + 24);
    *(_DWORD *)(a1 + 48) -= v4;
  }
  return sub_AB5740(a1);
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

// N4Onyx23GameplayMaterialHandlerE, virtual slot 14
__int64 __fastcall sub_AC6B10(__int64 a1)
{
  __int64 v1; // x8
  __int64 v2; // x19
  __int64 result; // x0

  v2 = a1 + 80;
  v1 = *(_QWORD *)(a1 + 80);
  if ( v1 == 0 || (result = *(_QWORD *)(v1 + 8)) == 0 )
  {
    sub_67EDD0(qword_191CD10, 1044721973, v2);
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)v2 + 8LL) + 16LL))(*(_QWORD *)(*(_QWORD *)v2 + 8LL));
    if ( *(_QWORD *)v2 != 0 )
      return *(_QWORD *)(*(_QWORD *)v2 + 8LL);
    else
      return 0;
  }
  return result;
}

// N4Onyx23GameplayMaterialHandlerE, virtual slot 15
__int64 __fastcall sub_AC6B80(__int64 a1)
{
  __int64 v1; // x8
  __int64 v2; // x19
  __int64 result; // x0

  v2 = a1 + 80;
  v1 = *(_QWORD *)(a1 + 80);
  if ( v1 == 0 || (result = *(_QWORD *)(v1 + 8)) == 0 )
  {
    sub_67EDD0(qword_191CD10, 1044721973, v2);
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)v2 + 8LL) + 16LL))(*(_QWORD *)(*(_QWORD *)v2 + 8LL));
    if ( *(_QWORD *)v2 != 0 )
      return *(_QWORD *)(*(_QWORD *)v2 + 8LL);
    else
      return 0;
  }
  return result;
}

// N4SPTG22SpriteAnimationPrinterE, virtual slot 13
__int64 __fastcall sub_ACCE10(_QWORD *a1)
{
  __int64 v1; // x8
  _QWORD *v2; // x20
  __int64 v4; // x0
  __int64 v5; // x0

  v2 = a1 + 10;
  v1 = a1[10];
  if ( v1 == 0 || (v4 = *(_QWORD *)(v1 + 8)) == 0 )
  {
    sub_67EDD0(qword_191CD10, 1160278366, v2);
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*v2 + 8LL) + 16LL))(*(_QWORD *)(*v2 + 8LL));
    v4 = *(_QWORD *)(*v2 + 8LL);
  }
  v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 120LL))(v4);
  return (*(__int64 (__fastcall **)(_QWORD *, __int64))(*a1 + 112LL))(a1, v5);
}

// N4Onyx7Physics9SimulatorE, virtual slot 15
void __fastcall sub_ACEB90(__int64 a1, __int64 a2)
{
  __int64 v2; // x8
  _QWORD *v3; // x9
  _QWORD *v5; // x21

  v2 = *(_QWORD *)(a2 + 16);
  if ( v2 != 0 )
  {
    v3 = *(_QWORD **)(a2 + 32);
    v5 = v3;
    do
    {
      if ( (*(_BYTE *)(*v5 + 56LL) & 1) != 0 )
      {
        (*(void (__fastcall **)(_QWORD, float))(*(_QWORD *)*v5 + 104LL))(*v5, *(float *)&dword_191CD00);
        v3 = *(_QWORD **)(a2 + 32);
        v2 = *(_QWORD *)(a2 + 16);
      }
      ++v5;
    }
    while ( v5 != &v3[v2] );
  }
}

// N4Onyx6ButtonE, virtual slot 14
__int64 __fastcall sub_AD89A0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // x8
  __int64 v4; // x21
  __int64 v7; // x0

  v4 = a1 + 200;
  v3 = *(_QWORD *)(a1 + 200);
  if ( v3 == 0 || (v7 = *(_QWORD *)(v3 + 8)) == 0 )
  {
    sub_67EDD0(qword_191CD10, 429100959, v4);
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)v4 + 8LL) + 16LL))(*(_QWORD *)(*(_QWORD *)v4 + 8LL));
    if ( *(_QWORD *)v4 != 0 )
      v7 = *(_QWORD *)(*(_QWORD *)v4 + 8LL);
    else
      v7 = 0;
  }
  return sub_AD8A30(v7, a2, a3);
}

__int64 __fastcall sub_AE3DA0(__int64 a1)
{
  __int64 v1; // x8
  unsigned __int64 v3; // x8
  unsigned int v4; // w20
  __int64 result; // x0

  v1 = *(_QWORD *)(a1 + 144);
  if ( v1 != 0 )
  {
    v3 = 0;
    v4 = 1;
    while ( (sub_AE1780(*(_QWORD *)(*(_QWORD *)(a1 + 160) + 8 * v3)) & 1) == 0 )
    {
      v3 = v4++;
      if ( *(_QWORD *)(a1 + 144) <= v3 )
      {
        LOBYTE(v1) = 0;
        goto LABEL_7;
      }
    }
    LOBYTE(v1) = 1;
  }
LABEL_7:
  *(_BYTE *)(a1 + 168) = v1;
  result = sub_AE3ED0(a1);
  *(_BYTE *)(a1 + 169) = result & 1;
  return result;
}

// N4SPTG16BoundaryGraphicsE, virtual slot 24
__int64 __fastcall sub_AFF5B0(__int64 a1, __int64 a2)
{
  __int64 v2; // x8
  __int64 v3; // x20
  __int64 v5; // x1

  v3 = a1 + 144;
  v2 = *(_QWORD *)(a1 + 144);
  if ( v2 == 0 || (v5 = *(_QWORD *)(v2 + 8)) == 0 )
  {
    sub_67EDD0(qword_191CD10, 996313107, v3);
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)v3 + 8LL) + 16LL))(*(_QWORD *)(*(_QWORD *)v3 + 8LL));
    if ( *(_QWORD *)v3 != 0 )
      v5 = *(_QWORD *)(*(_QWORD *)v3 + 8LL);
    else
      v5 = 0;
  }
  return sub_AFF620(a2, v5);
}

// N4Onyx8Graphics8Particle13GraphicSource21GraphicSourceTriangleE, virtual slot 16
__int64 __fastcall sub_B147A0(__int64 a1)
{
  __int64 v1; // x8
  __int64 v2; // x19
  __int64 result; // x0

  v2 = a1 + 120;
  v1 = *(_QWORD *)(a1 + 120);
  if ( v1 == 0 || (result = *(_QWORD *)(v1 + 8)) == 0 )
  {
    sub_67EDD0(qword_191CD10, 996313107, v2);
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)v2 + 8LL) + 16LL))(*(_QWORD *)(*(_QWORD *)v2 + 8LL));
    if ( *(_QWORD *)v2 != 0 )
      return *(_QWORD *)(*(_QWORD *)v2 + 8LL);
    else
      return 0;
  }
  return result;
}

// N4Onyx8Graphics26ParticleRenderUnitTriangleE, virtual slot 6
__int64 __fastcall sub_B15360(__int64 a1, unsigned int a2)
{
  __int64 v2; // x8
  __int64 v3; // x20
  __int64 v4; // x9

  v2 = qword_191DCE8;
  v3 = qword_191DCE8 + 9160;
  v4 = *(_QWORD *)(a1 + 24);
  if ( *(_QWORD *)(qword_191DCE8 + 9176) != v4 )
  {
    *(_QWORD *)(qword_191DCE8 + 576) = v4;
    *(_DWORD *)(v2 + 9184) = 0;
    *(_QWORD *)(v2 + 9176) = v4;
  }
  sub_6D5470(
    v3,
    *(_QWORD *)(*(_QWORD *)(a1 + 48) + 80LL),
    *(unsigned int *)(*(_QWORD *)(a1 + 48) + 108LL),
    *(unsigned int *)(*(_QWORD *)(a1 + 48) + 168LL));
  return sub_6D55A0(v3, 4, 0, a2);
}

// N4Onyx8Graphics8Particle13GraphicSource17GraphicSourceQuadE, virtual slot 16
__int64 __fastcall sub_B17B90(__int64 a1)
{
  __int64 v1; // x8
  __int64 v2; // x19
  __int64 result; // x0

  v2 = a1 + 120;
  v1 = *(_QWORD *)(a1 + 120);
  if ( v1 == 0 || (result = *(_QWORD *)(v1 + 8)) == 0 )
  {
    sub_67EDD0(qword_191CD10, 996313107, v2);
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)v2 + 8LL) + 16LL))(*(_QWORD *)(*(_QWORD *)v2 + 8LL));
    if ( *(_QWORD *)v2 != 0 )
      return *(_QWORD *)(*(_QWORD *)v2 + 8LL);
    else
      return 0;
  }
  return result;
}

// N4Onyx8Graphics22ParticleRenderUnitQuadE, virtual slot 6
__int64 __fastcall sub_B17C10(__int64 a1, unsigned int a2)
{
  __int64 v2; // x8
  __int64 v3; // x20
  __int64 v4; // x9

  v2 = qword_191DCE8;
  v3 = qword_191DCE8 + 9160;
  v4 = *(_QWORD *)(a1 + 24);
  if ( *(_QWORD *)(qword_191DCE8 + 9176) != v4 )
  {
    *(_QWORD *)(qword_191DCE8 + 576) = v4;
    *(_DWORD *)(v2 + 9184) = 0;
    *(_QWORD *)(v2 + 9176) = v4;
  }
  sub_6D5470(
    v3,
    *(_QWORD *)(*(_QWORD *)(a1 + 48) + 80LL),
    *(unsigned int *)(*(_QWORD *)(a1 + 48) + 108LL),
    *(unsigned int *)(*(_QWORD *)(a1 + 48) + 168LL));
  return sub_6D55A0(v3, 7, 0, a2);
}

// N4Onyx8Graphics8Particle13GraphicSource17GraphicSourceMeshE, virtual slot 17
__int64 __fastcall sub_B18AE0(__int64 a1)
{
  __int64 v1; // x8
  __int64 v2; // x19
  __int64 result; // x0

  v2 = a1 + 120;
  v1 = *(_QWORD *)(a1 + 120);
  if ( v1 == 0 || (result = *(_QWORD *)(v1 + 8)) == 0 )
  {
    sub_67EDD0(qword_191CD10, 2092626935, v2);
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)v2 + 8LL) + 16LL))(*(_QWORD *)(*(_QWORD *)v2 + 8LL));
    if ( *(_QWORD *)v2 != 0 )
      return *(_QWORD *)(*(_QWORD *)v2 + 8LL);
    else
      return 0;
  }
  return result;
}

// N4Onyx8Graphics8Particle7Emitter13EmitterSimpleE, virtual slot 16
__int64 __fastcall sub_B1B9A0(__int64 a1, __int64 a2)
{
  __int64 v2; // x8
  __int64 v3; // x20
  __int64 v5; // x0

  v3 = a1 + 88;
  v2 = *(_QWORD *)(a1 + 88);
  if ( v2 == 0 || (v5 = *(_QWORD *)(v2 + 8)) == 0 )
  {
    sub_67EDD0(qword_191CD10, 1125278855, v3);
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)v3 + 8LL) + 16LL))(*(_QWORD *)(*(_QWORD *)v3 + 8LL));
    v5 = *(_QWORD *)(*(_QWORD *)v3 + 8LL);
  }
  return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 112LL))(v5, a2);
}

// N4Onyx8Graphics8Particle7Emitter15EmitterInstanceE, virtual slot 15
_DWORD *__fastcall sub_B1ECC0(__int64 a1, _DWORD *a2)
{
  __int64 v2; // x8
  __int64 v3; // x20
  __int64 v5; // x0
  _DWORD *result; // x0

  v3 = a1 + 144;
  v2 = *(_QWORD *)(a1 + 144);
  if ( v2 == 0 || (v5 = *(_QWORD *)(v2 + 8)) == 0 )
  {
    sub_67EDD0(qword_191CD10, 885883645, v3);
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)v3 + 8LL) + 16LL))(*(_QWORD *)(*(_QWORD *)v3 + 8LL));
    v5 = *(_QWORD *)(*(_QWORD *)v3 + 8LL);
  }
  result = (_DWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 136LL))(v5);
  *a2 = *result;
  a2[1] = result[1];
  a2[2] = result[2];
  a2[3] = result[3];
  a2[4] = result[4];
  a2[5] = result[5];
  return result;
}

// N4Onyx8Graphics8Particle6Effect16EffectWorldSpaceE, virtual slot 14
bool __fastcall sub_B20AB0(__int64 a1, __int64 a2)
{
  float v2; // s0
  float v3; // s1

  v2 = *(float *)(a2 + 112);
  v3 = *(float *)(a1 + 76);
  return v2 > v3 || vabds_f32(v2, v3) <= 0.000002f;
}

// N4Onyx8Graphics8Particle20VolumeSphereGraphicsE, virtual slot 15
float __fastcall sub_B2C540(__int64 a1, float *a2)
{
  __int64 v2; // x8
  __int64 v4; // x8
  __int64 v5; // x20
  float result; // s0

  v2 = *(_QWORD *)(a1 + 264);
  if ( v2 == 0 || (v4 = *(_QWORD *)(v2 + 8)) == 0 )
  {
    v5 = a1 + 264;
    sub_67EDD0(qword_191CD10, 1150781289, a1 + 264);
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)v5 + 8LL) + 16LL))(*(_QWORD *)(*(_QWORD *)v5 + 8LL));
    v4 = *(_QWORD *)(*(_QWORD *)v5 + 8LL);
  }
  result = fabsf(*(float *)(v4 + 80));
  *a2 = result;
  a2[1] = result;
  a2[2] = result;
  return result;
}

// N4Onyx8Graphics7Details15MorphRenderUnitE, virtual slot 4
__int64 __fastcall sub_B3FC50(unsigned int *a1)
{
  return sub_6D55A0(qword_191DCE8 + 9160, a1[14], a1[12], a1[10]);
}

// N4Onyx8Graphics14MeshRenderUnitE, virtual slot 4
__int64 __fastcall sub_B50C20(__int64 a1)
{
  __int64 v1; // x20
  __int64 v2; // x8
  __int64 v3; // x20
  __int64 v4; // t1
  __int64 v6; // x0

  v1 = *(_QWORD *)(a1 + 40);
  v4 = *(_QWORD *)(v1 + 224);
  v3 = v1 + 224;
  v2 = v4;
  if ( v4 == 0 || (v6 = *(_QWORD *)(v2 + 8)) == 0 )
  {
    sub_67EDD0(qword_191CD10, 2092626935, v3);
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)v3 + 8LL) + 16LL))(*(_QWORD *)(*(_QWORD *)v3 + 8LL));
    if ( *(_QWORD *)v3 != 0 )
      v6 = *(_QWORD *)(*(_QWORD *)v3 + 8LL);
    else
      v6 = 0;
  }
  return sub_B19960(v6, *(unsigned int *)(a1 + 48));
}

// N4Onyx8Graphics15RawMeshGraphicsE, virtual slot 15
__int64 __fastcall sub_B54FE0(__int64 result, _DWORD *a2)
{
  __int64 v2; // x8
  __int64 v3; // x20
  __int64 v5; // x8

  v3 = result + 144;
  v2 = *(_QWORD *)(result + 144);
  if ( v2 == 0 || (v5 = *(_QWORD *)(v2 + 8)) == 0 )
  {
    sub_67EDD0(qword_191CD10, 2084631537, v3);
    result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)v3 + 8LL) + 16LL))(*(_QWORD *)(*(_QWORD *)v3 + 8LL));
    v5 = *(_QWORD *)v3;
    if ( *(_QWORD *)v3 != 0 )
      v5 = *(_QWORD *)(v5 + 8);
  }
  *a2 = *(_DWORD *)(v5 + 88);
  a2[1] = *(_DWORD *)(v5 + 92);
  a2[2] = *(_DWORD *)(v5 + 96);
  a2[3] = *(_DWORD *)(v5 + 100);
  a2[4] = *(_DWORD *)(v5 + 104);
  a2[5] = *(_DWORD *)(v5 + 108);
  return result;
}

// N4Onyx21RenderSurfaceSelectorE, virtual slot 13
__int64 __fastcall sub_B5FEF0(__int64 a1)
{
  return sub_6D8810(qword_191DCE8 + 9192, *(_QWORD *)(a1 + 96));
}

// N4Onyx8Graphics18OrthographicCameraE, virtual slot 13
float __fastcall sub_B90AA0(float *a1)
{
  return (float)(a1[55] - a1[54]) / (float)(a1[57] - a1[56]);
}

// N4Onyx8Graphics18OrthographicCameraE, virtual slot 20
float __fastcall sub_B91240(__int64 a1, float a2, __int64 a3, float *a4)
{
  return (float)((float)(*(float *)(a1 + 220) - *(float *)(a1 + 216)) / *a4) * a2;
}

// N4Onyx9Collision14SphereGraphicsE, virtual slot 15
__int64 __fastcall sub_B956E0(__int64 result, _DWORD *a2)
{
  __int64 v2; // x8
  __int64 v4; // x8
  __int64 v5; // x20
  int v6; // w8

  v2 = *(_QWORD *)(result + 264);
  if ( v2 == 0 || (v4 = *(_QWORD *)(v2 + 8)) == 0 )
  {
    v5 = result + 264;
    sub_67EDD0(qword_191CD10, 1812577950, result + 264);
    result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)v5 + 8LL) + 16LL))(*(_QWORD *)(*(_QWORD *)v5 + 8LL));
    v4 = *(_QWORD *)(*(_QWORD *)v5 + 8LL);
  }
  v6 = *(_DWORD *)(v4 + 156);
  *a2 = v6;
  a2[1] = v6;
  a2[2] = v6;
  return result;
}

// N4Onyx9Collision22AxisAlignedBoxGraphicsE, virtual slot 15
__int64 __fastcall sub_B97FB0(__int64 result, _DWORD *a2)
{
  __int64 v2; // x8
  _DWORD *v4; // x8
  __int64 v5; // x20

  v2 = *(_QWORD *)(result + 264);
  if ( v2 == 0 || (v4 = *(_DWORD **)(v2 + 8)) == nullptr )
  {
    v5 = result + 264;
    sub_67EDD0(qword_191CD10, 910253381, result + 264);
    result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)v5 + 8LL) + 16LL))(*(_QWORD *)(*(_QWORD *)v5 + 8LL));
    v4 = *(_DWORD **)(*(_QWORD *)v5 + 8LL);
  }
  *a2 = v4[39];
  a2[1] = v4[40];
  a2[2] = v4[41];
  return result;
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

// N4Onyx20EventDeactivateStoreE, virtual slot 2
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

// N4Onyx18EventActivateStoreE, virtual slot 2
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

// N4Onyx10AIDirectorE, virtual slot 15
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

// N4Onyx12ActionPlayerE, virtual slot 13
__int64 __fastcall sub_BCC920(__int64 a1)
{
  __int64 v1; // x8
  __int64 v2; // x19
  __int64 result; // x0

  v2 = a1 + 80;
  v1 = *(_QWORD *)(a1 + 80);
  if ( v1 != 0 )
  {
    result = *(_QWORD *)(v1 + 8);
    if ( result != 0 )
      return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 104LL))(result);
  }
  sub_67EDD0(qword_191CD10, 309210931, v2);
  result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)v2 + 8LL) + 16LL))(*(_QWORD *)(*(_QWORD *)v2 + 8LL));
  if ( *(_QWORD *)v2 != 0 )
  {
    result = *(_QWORD *)(*(_QWORD *)v2 + 8LL);
    if ( result != 0 )
      return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 104LL))(result);
  }
  return result;
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

// N4Onyx7Details15ZLibStreamProxyE, virtual slot 6
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

// N5storm18NetPropertyIntegerImNS_14NumericalTraitImNS_15MaxValueFunctorImLm0EEELh0ELb1ELb0ENS_19DefaultValueFunctorImLm0EEEEEEE, virtual slot 19
bool __fastcall sub_C251E0(__int64 a1, __int64 a2)
{
  return (sub_576540()) != 0 && *(_QWORD *)(a1 + 32) == *(_QWORD *)(a2 + 32);
}

// N5storm17NetPropertyVectorINS_18NetPropertyIntegerIbNS_14NumericalTraitIbNS_15MaxValueFunctorIbLm0EEELh0ELb0ELb0ENS_19DefaultValueFunctorIbLm0EEEEEEELm26EE10VectorSizeE, virtual slot 19
bool __fastcall sub_C2DD40(__int64 a1, __int64 a2)
{
  return (sub_576540()) != 0
      && *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL) - **(_QWORD **)(a1 + 32) == *(_QWORD *)(*(_QWORD *)(a2 + 32) + 8LL)
                                                                           - **(_QWORD **)(a2 + 32);
}

// N5storm17NetPropertyVectorINS_18NetPropertyDecimalIfNS_14NumericalTraitIfNS_15MaxValueFunctorIfLm0EEELh0ELb0ELb0ENS_19DefaultValueFunctorIfLm0EEEEEEELm7EE10VectorSizeE, virtual slot 19
bool __fastcall sub_C300F0(__int64 a1, __int64 a2)
{
  return (sub_576540()) != 0
      && *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL) - **(_QWORD **)(a1 + 32) == *(_QWORD *)(*(_QWORD *)(a2 + 32) + 8LL)
                                                                           - **(_QWORD **)(a2 + 32);
}

// N5storm17NetPropertyVectorINS_18NetPropertyIntegerIbNS_14NumericalTraitIbNS_15MaxValueFunctorIbLm0EEELh0ELb0ELb0ENS_19DefaultValueFunctorIbLm0EEEEEEELm7EE10VectorSizeE, virtual slot 19
bool __fastcall sub_C31AE0(__int64 a1, __int64 a2)
{
  return (sub_576540()) != 0
      && *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL) - **(_QWORD **)(a1 + 32) == *(_QWORD *)(*(_QWORD *)(a2 + 32) + 8LL)
                                                                           - **(_QWORD **)(a2 + 32);
}

// N5storm17NetPropertyVectorINS0_INS_18NetPropertyIntegerIbNS_14NumericalTraitIbNS_15MaxValueFunctorIbLm0EEELh0ELb0ELb0ENS_19DefaultValueFunctorIbLm0EEEEEEELm7EEELm4EE10VectorSizeE, virtual slot 19
bool __fastcall sub_C33840(__int64 a1, __int64 a2)
{
  return (sub_576540()) != 0
      && *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL) - **(_QWORD **)(a1 + 32) == *(_QWORD *)(*(_QWORD *)(a2 + 32) + 8LL)
                                                                           - **(_QWORD **)(a2 + 32);
}

// N5storm19StormManagerGeneric23ControllerEventObserverE, virtual slot 99
void __fastcall sub_C3F310(__int64 a1, __int64 a2)
{
  *(_QWORD *)(qword_19351A8 + 40) = *(_QWORD *)(a2 + 32);
}

// NSt3__110__function6__funcIZN5EE_US13StormInstance25DoWaitForStormMatchmakingENS_8functionIFvbjEEEE3$_3NS_9allocatorIS7_EEFbvEEE, virtual slot 6
__int64 __fastcall sub_C48C90(__int64 a1)
{
  __int64 v1; // x20
  unsigned __int64 v3; // x8
  unsigned __int64 v4; // x9
  unsigned __int64 v5; // x10
  __int64 result; // x0

  v1 = *(_QWORD *)(a1 + 24);
  v3 = 1000000 * (nn__os__GetSystemTick((char *)a1) - qword_195B648) / qword_195B670 - *(_QWORD *)(a1 + 8);
  v4 = *(unsigned int *)(a1 + 16);
  if ( *(_BYTE *)(v1 + 600) == 0 )
  {
    if ( v3 > v4 )
      return 1;
    return sub_47A560(*(_QWORD *)(qword_19351A8 + 240));
  }
  v5 = *(unsigned int *)(a1 + 32);
  result = v3 >= v5;
  if ( v3 <= v4 && v3 >= v5 )
    return sub_47A560(*(_QWORD *)(qword_19351A8 + 240));
  return result;
}

// NSt3__110__function6__funcIZN5EE_US13StormInstance18CancelCurrentStateEvE4$_21NS_9allocatorIS4_EEFvvEEE, virtual slot 6
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

// NSt3__110__function6__funcIZZN5EE_US13StormInstance17TryStopQuickmatchENS_8functionIFvbEEEENK4$_14clERN5storm13SimpleAsyncOpEEUlvE_NS_9allocatorISB_EEFvvEEE, virtual slot 6
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

// NSt3__110__function6__funcIZZN5EE_US13StormInstance17TryStopQuickmatchENS_8functionIFvbEEEENK4$_13clERN5storm13SimpleAsyncOpEEUlvE_NS_9allocatorISB_EEFvvEEE, virtual slot 6
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

// NSt3__110__function6__funcIZZN5EE_US13StormInstance17TryStopQuickmatchENS_8functionIFvbEEEENK4$_12clERN5storm13SimpleAsyncOpEEUlvE_NS_9allocatorISB_EEFvvEEE, virtual slot 6
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

// NSt3__110__function6__funcIZZN5EE_US13StormInstance17TryStopQuickmatchENS_8functionIFvbEEEENK4$_11clERN5storm13SimpleAsyncOpEEUlvE_NS_9allocatorISB_EEFvvEEE, virtual slot 6
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

// NSt3__110__function6__funcIZZN5EE_US13StormInstance17TryStopQuickmatchENS_8functionIFvbEEEENK4$_10clERN5storm13SimpleAsyncOpEEUlvE_NS_9allocatorISB_EEFvvEEE, virtual slot 6
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

// N4Onyx7Details20FunctionInternalHookINS_14MemberFunctionINS_9SharedPtrINS0_6WorkerENS_8Policies13RefCountedPtrENS5_17DefaultStoragePtrEEEFvvEEEEE, virtual slot 2
long double __fastcall sub_C58D50(__int64 a1)
{
  __int64 v2; // x0
  unsigned int *v3; // x8
  unsigned int v4; // w9
  long double result; // q0

  v2 = sub_A972B0(qword_1935058 + 80, 48);
  *(_QWORD *)v2 = &off_18BD718;
  *(_QWORD *)(v2 + 8) = 0;
  *(_QWORD *)(v2 + 16) = *(_QWORD *)(a1 + 16);
  v3 = *(unsigned int **)(a1 + 24);
  *(_QWORD *)(v2 + 24) = v3;
  v4 = __atomic_fetch_add(v3, 1, 0);
  result = *(long double *)(a1 + 32);
  *(long double *)(v2 + 32) = result;
  *(_QWORD *)(v2 + 8) = *(_QWORD *)(a1 + 8);
  return result;
}

__int64 __fastcall sub_C5E610(__int64 result, _DWORD *a2)
{
  __int64 v2; // x8
  __int64 v3; // x20
  __int64 v5; // x8

  v3 = result + 80;
  v2 = *(_QWORD *)(result + 80);
  if ( v2 == 0 || (v5 = *(_QWORD *)(v2 + 8)) == 0 )
  {
    sub_67EDD0(qword_191CD10, 1555380724, v3);
    result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)v3 + 8LL) + 16LL))(*(_QWORD *)(*(_QWORD *)v3 + 8LL));
    v5 = *(_QWORD *)(*(_QWORD *)v3 + 8LL);
  }
  *a2 = *(_DWORD *)(v5 + 216);
  return result;
}

__int64 __fastcall sub_C5E680(__int64 result, _DWORD *a2)
{
  __int64 v2; // x8
  __int64 v3; // x20
  __int64 v5; // x8

  v3 = result + 80;
  v2 = *(_QWORD *)(result + 80);
  if ( v2 == 0 || (v5 = *(_QWORD *)(v2 + 8)) == 0 )
  {
    sub_67EDD0(qword_191CD10, 1555380724, v3);
    result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)v3 + 8LL) + 16LL))(*(_QWORD *)(*(_QWORD *)v3 + 8LL));
    v5 = *(_QWORD *)(*(_QWORD *)v3 + 8LL);
  }
  *(_DWORD *)(v5 + 216) = *a2;
  return result;
}

void __fastcall sub_C5E6F0(__int64 a1, float *a2)
{
  __int64 v2; // x8
  __int64 v3; // x20
  __int64 v5; // x0

  v3 = a1 + 80;
  v2 = *(_QWORD *)(a1 + 80);
  if ( v2 == 0 || (v5 = *(_QWORD *)(v2 + 8)) == 0 )
  {
    sub_67EDD0(qword_191CD10, 1555380724, v3);
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)v3 + 8LL) + 16LL))(*(_QWORD *)(*(_QWORD *)v3 + 8LL));
    v5 = *(_QWORD *)(*(_QWORD *)v3 + 8LL);
  }
  *a2 = (*(float (__fastcall **)(__int64))(*(_QWORD *)v5 + 104LL))(v5);
}

__int64 __fastcall sub_C5E760(__int64 result, _DWORD *a2)
{
  __int64 v2; // x8
  __int64 v3; // x20
  __int64 v5; // x8

  v3 = result + 80;
  v2 = *(_QWORD *)(result + 80);
  if ( v2 == 0 || (v5 = *(_QWORD *)(v2 + 8)) == 0 )
  {
    sub_67EDD0(qword_191CD10, 1555380724, v3);
    result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)v3 + 8LL) + 16LL))(*(_QWORD *)(*(_QWORD *)v3 + 8LL));
    v5 = *(_QWORD *)(*(_QWORD *)v3 + 8LL);
  }
  *(_DWORD *)(v5 + 220) = *a2;
  return result;
}

__int64 __fastcall sub_C5EC40(__int64 a1, __int64 a2)
{
  __int64 v2; // x8
  __int64 v3; // x20
  __int64 v5; // x0

  v3 = a1 + 80;
  v2 = *(_QWORD *)(a1 + 80);
  if ( v2 == 0 || (v5 = *(_QWORD *)(v2 + 8)) == 0 )
  {
    sub_67EDD0(qword_191CD10, 36693834, v3);
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)v3 + 8LL) + 16LL))(*(_QWORD *)(*(_QWORD *)v3 + 8LL));
    if ( *(_QWORD *)v3 != 0 )
      v5 = *(_QWORD *)(*(_QWORD *)v3 + 8LL);
    else
      v5 = 0;
  }
  return sub_6C9DB0(v5, a2);
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

// N4Onyx25ProximitySpawnPointLocker19ProximityActionLockE, virtual slot 3
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

// N4Onyx25ProximitySpawnPointLocker21ProximityActionUnlockE, virtual slot 3
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

// N4Onyx29KeyboardInputButtonDescriptorE, virtual slot 0
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

// N4Onyx26MouseInputButtonDescriptorE, virtual slot 0
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

// N4Onyx28GamepadInputButtonDescriptorE, virtual slot 0
__int64 __fastcall sub_C87230(__int64 a1, __int64 a2)
{
  __int64 result; // x0
  int v5; // [xsp+Ch] [xbp-14h] BYREF

  v5 = *(unsigned __int8 *)(a1 + 8);
  *(_QWORD *)a2 += (*(unsigned int (__fastcall **)(_QWORD, int *, __int64))(**(_QWORD **)(a2 + 8) + 48LL))(
                     *(_QWORD *)(a2 + 8),
                     &v5,
                     4);
  *(_BYTE *)(a1 + 8) = v5;
  result = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a2 + 8) + 48LL))(
             *(_QWORD *)(a2 + 8),
             a1 + 12,
             4);
  *(_QWORD *)a2 += (unsigned int)result;
  return result;
}

// N4Onyx7Details20SkyBoxFaceRenderUnitE, virtual slot 4
__int64 __fastcall sub_C8FB20(__int64 a1)
{
  return sub_6D55A0(qword_191DCE8 + 9160, 7, (unsigned int)(4 * *(_DWORD *)(a1 + 48)), 1);
}

// N4Onyx15SkyBoxComponentE, virtual slot 21
__int64 __fastcall sub_C91290(__int64 a1, __int64 a2)
{
  __int64 v4; // x21

  v4 = a1 + 200;
  sub_AE6DD0(a2, a1 + 256, 0);
  sub_AE6DD0(a2, v4, 0);
  sub_AE6DD0(a2, a1 + 424, 0);
  sub_AE6DD0(a2, a1 + 480, 0);
  sub_AE6DD0(a2, a1 + 368, 0);
  return sub_AE6DD0(a2, a1 + 312, 0);
}

__int64 __fastcall sub_CA4350(__int64 a1)
{
  __int64 v1; // x8
  __int64 v2; // x20
  __int64 v4; // x21
  __int64 v5; // x1

  v2 = a1 + 88;
  v1 = *(_QWORD *)(a1 + 88);
  if ( v1 == 0 || (v4 = *(_QWORD *)(v1 + 8)) == 0 )
  {
    sub_67EDD0(qword_191CD10, 36693834, v2);
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)v2 + 8LL) + 16LL))(*(_QWORD *)(*(_QWORD *)v2 + 8LL));
    if ( *(_QWORD *)v2 != 0 )
      v4 = *(_QWORD *)(*(_QWORD *)v2 + 8LL);
    else
      v4 = 0;
  }
  v5 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 152) + 8LL) + 136LL))(*(_QWORD *)(*(_QWORD *)(a1 + 152) + 8LL));
  return sub_68F0E0(v4, v5, 0);
}

__int64 __fastcall sub_CA5A50(__int64 a1)
{
  __int64 v1; // x8
  __int64 v2; // x20
  __int64 v4; // x21
  __int64 v5; // x1

  v2 = a1 + 88;
  v1 = *(_QWORD *)(a1 + 88);
  if ( v1 == 0 || (v4 = *(_QWORD *)(v1 + 8)) == 0 )
  {
    sub_67EDD0(qword_191CD10, 36693834, v2);
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)v2 + 8LL) + 16LL))(*(_QWORD *)(*(_QWORD *)v2 + 8LL));
    if ( *(_QWORD *)v2 != 0 )
      v4 = *(_QWORD *)(*(_QWORD *)v2 + 8LL);
    else
      v4 = 0;
  }
  v5 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 152) + 8LL) + 136LL))(*(_QWORD *)(*(_QWORD *)(a1 + 152) + 8LL));
  return sub_68F0E0(v4, v5, 0);
}

// N4Onyx26LinearWaypointLinkGraphicsE, virtual slot 25
__int64 __fastcall sub_CA9B80(__int64 a1)
{
  __int64 v1; // x8
  __int64 v2; // x8
  __int64 *v3; // x19

  v1 = *(_QWORD *)(a1 + 384);
  if ( v1 == 0 || (v2 = *(_QWORD *)(v1 + 8)) == 0 )
  {
    v3 = (__int64 *)(a1 + 384);
    sub_67EDD0(qword_191CD10, 1717866888, a1 + 384);
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*v3 + 8) + 16LL))(*(_QWORD *)(*v3 + 8));
    v2 = *v3;
    if ( *v3 != 0 )
      return *(_QWORD *)(v2 + 8);
  }
  return v2;
}

__int64 __fastcall sub_CB4BF0(__int64 a1)
{
  __int64 v1; // x8
  __int64 v2; // x20
  __int64 v4; // x21
  __int64 v5; // x1

  v2 = a1 + 88;
  v1 = *(_QWORD *)(a1 + 88);
  if ( v1 == 0 || (v4 = *(_QWORD *)(v1 + 8)) == 0 )
  {
    sub_67EDD0(qword_191CD10, 36693834, v2);
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)v2 + 8LL) + 16LL))(*(_QWORD *)(*(_QWORD *)v2 + 8LL));
    if ( *(_QWORD *)v2 != 0 )
      v4 = *(_QWORD *)(*(_QWORD *)v2 + 8LL);
    else
      v4 = 0;
  }
  v5 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 168) + 8LL) + 136LL))(*(_QWORD *)(*(_QWORD *)(a1 + 168) + 8LL));
  return sub_68F0E0(v4, v5, 0);
}

__int64 __fastcall sub_CB7900(__int64 a1)
{
  __int64 v1; // x8
  __int64 v2; // x20
  __int64 v4; // x21
  __int64 v5; // x1

  v2 = a1 + 88;
  v1 = *(_QWORD *)(a1 + 88);
  if ( v1 == 0 || (v4 = *(_QWORD *)(v1 + 8)) == 0 )
  {
    sub_67EDD0(qword_191CD10, 36693834, v2);
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)v2 + 8LL) + 16LL))(*(_QWORD *)(*(_QWORD *)v2 + 8LL));
    if ( *(_QWORD *)v2 != 0 )
      v4 = *(_QWORD *)(*(_QWORD *)v2 + 8LL);
    else
      v4 = 0;
  }
  v5 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 144) + 8LL) + 136LL))(*(_QWORD *)(*(_QWORD *)(a1 + 144) + 8LL));
  return sub_68F0E0(v4, v5, 0);
}

// N4Onyx26BezierWaypointLinkGraphicsE, virtual slot 25
__int64 __fastcall sub_CBF6C0(__int64 a1)
{
  __int64 v1; // x8
  __int64 v2; // x8
  __int64 *v3; // x19

  v1 = *(_QWORD *)(a1 + 384);
  if ( v1 == 0 || (v2 = *(_QWORD *)(v1 + 8)) == 0 )
  {
    v3 = (__int64 *)(a1 + 384);
    sub_67EDD0(qword_191CD10, 598232325, a1 + 384);
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*v3 + 8) + 16LL))(*(_QWORD *)(*v3 + 8));
    v2 = *v3;
    if ( *v3 != 0 )
      return *(_QWORD *)(v2 + 8);
  }
  return v2;
}

// N4Onyx8Gameplay8Circuits10Properties7Details40StaticMemberVariablePropertyRegistrationINS1_14ComputeCircuitEfEE, virtual slot 4
__int64 __fastcall sub_CC00B0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _BYTE v7[4]; // [xsp+Ch] [xbp-14h] BYREF

  (*(void (__fastcall **)(__int64, __int64, _BYTE *))(*(_QWORD *)a4 + 40LL))(a4, a3, v7);
  (*(void (__fastcall **)(__int64, __int64, _BYTE *))(*(_QWORD *)a1 + 48LL))(a1, a2, v7);
  return 1;
}

// N4Onyx8Gameplay8Circuits10Properties7Details40StaticMemberVariablePropertyRegistrationINS1_14CompareCircuitEbEE, virtual slot 4
__int64 __fastcall sub_CC01A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _BYTE v7[4]; // [xsp+Ch] [xbp-14h] BYREF

  (*(void (__fastcall **)(__int64, __int64, _BYTE *))(*(_QWORD *)a4 + 40LL))(a4, a3, v7);
  (*(void (__fastcall **)(__int64, __int64, _BYTE *))(*(_QWORD *)a1 + 48LL))(a1, a2, v7);
  return 1;
}

// N4Onyx8Gameplay8Circuits10Properties7Details40StaticMemberVariablePropertyRegistrationINS1_29LerpedVector3PublisherCircuitEbEE, virtual slot 7
__int64 __fastcall sub_CC0220(char *result, char *a2, _BYTE *a3)
{
  *(_BYTE *)(a2 + *(unsigned int *)(result + 28)) = *a3;
  return result;
}

// N4Onyx8Gameplay8Circuits10Properties7Details40StaticMemberVariablePropertyRegistrationINS1_29LerpedVector3PublisherCircuitEbEE, virtual slot 8
__int64 __fastcall sub_CC0230(char *result, char *a2, _BYTE *a3)
{
  *a3 = *(_BYTE *)(a2 + *(unsigned int *)(result + 28));
  return result;
}

// N4Onyx8Gameplay8Circuits10Properties7Details40StaticMemberVariablePropertyRegistrationINS1_25LerpedU32PublisherCircuitEbEE, virtual slot 7
__int64 __fastcall sub_CC0460(char *result, char *a2, _BYTE *a3)
{
  *(_BYTE *)(a2 + *(unsigned int *)(result + 28)) = *a3;
  return result;
}

// N4Onyx8Gameplay8Circuits10Properties7Details40StaticMemberVariablePropertyRegistrationINS1_25LerpedU32PublisherCircuitEbEE, virtual slot 8
__int64 __fastcall sub_CC0470(char *result, char *a2, _BYTE *a3)
{
  *a3 = *(_BYTE *)(a2 + *(unsigned int *)(result + 28));
  return result;
}

// N4Onyx8Gameplay8Circuits10Properties7Details40StaticMemberVariablePropertyRegistrationINS1_13SwitchCircuitEjEE, virtual slot 4
__int64 __fastcall sub_CC04B0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _BYTE v7[4]; // [xsp+Ch] [xbp-14h] BYREF

  (*(void (__fastcall **)(__int64, __int64, _BYTE *))(*(_QWORD *)a4 + 40LL))(a4, a3, v7);
  (*(void (__fastcall **)(__int64, __int64, _BYTE *))(*(_QWORD *)a1 + 48LL))(a1, a2, v7);
  return 1;
}

// N4Onyx8Gameplay8Circuits10Properties7Details40StaticMemberVariablePropertyRegistrationINS1_25LerpedU32PublisherCircuitEjEE, virtual slot 7
__int64 __fastcall sub_CC0530(char *result, char *a2, _DWORD *a3)
{
  *(_DWORD *)(a2 + *(unsigned int *)(result + 28)) = *a3;
  return result;
}

// N4Onyx8Gameplay8Circuits10Properties7Details40StaticMemberVariablePropertyRegistrationINS1_25LerpedU32PublisherCircuitEjEE, virtual slot 8
__int64 __fastcall sub_CC0540(char *result, char *a2, _DWORD *a3)
{
  *a3 = *(_DWORD *)(a2 + *(unsigned int *)(result + 28));
  return result;
}

// N4Onyx8Gameplay8Circuits10Properties7Details40StaticMemberVariablePropertyRegistrationINS1_25LerpedF32PublisherCircuitEbEE, virtual slot 7
__int64 __fastcall sub_CC05E0(char *result, char *a2, _BYTE *a3)
{
  *(_BYTE *)(a2 + *(unsigned int *)(result + 28)) = *a3;
  return result;
}

// N4Onyx8Gameplay8Circuits10Properties7Details40StaticMemberVariablePropertyRegistrationINS1_25LerpedF32PublisherCircuitEbEE, virtual slot 8
__int64 __fastcall sub_CC05F0(char *result, char *a2, _BYTE *a3)
{
  *a3 = *(_BYTE *)(a2 + *(unsigned int *)(result + 28));
  return result;
}

// N4Onyx8Gameplay8Circuits10Properties7Details40StaticMemberVariablePropertyRegistrationINS1_25LerpedF32PublisherCircuitEfEE, virtual slot 7
__int64 __fastcall sub_CC0640(char *result, char *a2, _DWORD *a3)
{
  *(_DWORD *)(a2 + *(unsigned int *)(result + 28)) = *a3;
  return result;
}

// N4Onyx8Gameplay8Circuits10Properties7Details40StaticMemberVariablePropertyRegistrationINS1_25LerpedF32PublisherCircuitEfEE, virtual slot 8
__int64 __fastcall sub_CC0650(char *result, char *a2, _DWORD *a3)
{
  *a3 = *(_DWORD *)(a2 + *(unsigned int *)(result + 28));
  return result;
}

// N4Onyx8Gameplay8Circuits10Properties7Details40StaticMemberVariablePropertyRegistrationINS1_27LerpedColorPublisherCircuitEbEE, virtual slot 7
__int64 __fastcall sub_CC0770(char *result, char *a2, _BYTE *a3)
{
  *(_BYTE *)(a2 + *(unsigned int *)(result + 28)) = *a3;
  return result;
}

// N4Onyx8Gameplay8Circuits10Properties7Details40StaticMemberVariablePropertyRegistrationINS1_27LerpedColorPublisherCircuitEbEE, virtual slot 8
__int64 __fastcall sub_CC0780(char *result, char *a2, _BYTE *a3)
{
  *a3 = *(_BYTE *)(a2 + *(unsigned int *)(result + 28));
  return result;
}

// N4Onyx8Gameplay8Circuits10Properties7Details40StaticMemberVariablePropertyRegistrationINS1_27LerpedColorPublisherCircuitENS_8Graphics5ColorEEE, virtual slot 8
__int64 __fastcall sub_CC0850(char *result, char *a2, _DWORD *a3)
{
  *a3 = *(_DWORD *)(a2 + *(unsigned int *)(result + 28));
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

// 9TImaAdpcm, virtual slot 11
float __fastcall sub_D757A0(_DWORD *a1)
{
  if ( a1[2] == 2 )
    return -2.0;
  else
    return (float)(unsigned int)a1[19] / (float)(unsigned int)a1[7];
}

// 4TPCM, virtual slot 11
float __fastcall sub_D76130(_DWORD *a1)
{
  if ( a1[2] == 2 )
    return -2.0;
  else
    return (float)(unsigned int)a1[23] / (float)(unsigned int)a1[7];
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

// 16CDataBlockMemory, virtual slot 2
_DWORD *__fastcall sub_DA59F0(_DWORD *result, int a2)
{
  result[7] = 0;
  result[8] = 0;
  result[5] = a2;
  return result;
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

// N2EE10RenderLoopE, virtual slot 2
__int64 __fastcall sub_DF2220(__int64 a1, char a2)
{
  sub_DFD150(a1);
  if ( (a2 & 1) != 0 )
    sub_DFCCB0(a1);
  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 1272) + 16LL))(*(_QWORD *)(a1 + 1272), 1);
  return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 728) + 40LL))(*(_QWORD *)(a1 + 728));
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

