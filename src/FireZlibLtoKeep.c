/* Native (non-LTO) references that keep the zlib entry points alive as link roots. */
extern char inflateInit2_[];
extern char inflate[];
extern char inflateEnd[];
extern char inflateReset[];
extern char adler32[];
void* fire_zlib_keep[] = { inflateInit2_, inflate, inflateEnd, inflateReset, adler32 };
void fire_zlib_entry(void) {}
