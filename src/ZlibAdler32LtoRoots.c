/* Stand-in root for an LTO build of the adler32 that FreeType ships (zlib 1.1.4's, src/gzip/adler32.c): the copies
 * in Gear (0xa85030) and Fire (0xf81250) are byte for byte the one in FreeType's LTO build. The native keep object
 * references adler32 so the link keeps it out of line; who calls it in Gear and Fire is not reconstructed. */
typedef int zlib_adler32_lto_roots;
