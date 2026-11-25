/* Fire's copy of zlib 1.1.4's inflate side, modelled with the copy FreeType ships (src/gzip), included into one
 * translation unit the way FreeType's ftgzip.c does, but without FreeType's headers: zmemcpy is then FreeType's
 * ft_memcpy with no prototype, so the length goes over as an unsigned int, as Fire's calls to its own copy routine
 * (0xec21a0) do. The functions are made external so the LTO link keeps them; the entry points are kept alive by
 * the native keep object. Which of Fire's functions call in is not reconstructed. */
#define MY_ZCALLOC
#include <zlib.h>
#undef  SLOW
#define SLOW  1
#define NO_INFLATE_MASK
#include <zutil.h>
#include <inftrees.h>
#include <infblock.h>
#include <infcodes.h>
#include <infutil.h>
#undef  NO_INFLATE_MASK
#include <zutil.c>
#include <inftrees.c>
#include <infutil.c>
#include <infcodes.c>
#include <infblock.c>
#include <inflate.c>
#include <adler32.c>
