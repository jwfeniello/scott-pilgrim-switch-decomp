/* Native (non-LTO) reference that keeps adler32 alive as a link root. */
extern char adler32[];
void* zlib_adler32_keep(void) { return adler32; }
