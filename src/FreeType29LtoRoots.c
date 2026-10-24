/* Stand-in for the game's FreeType call sites in an LTO build (bitcode, linked with
 * FreeType). The game calls a few API functions and LTO inlines small ones into
 * those callers. These wrappers model that; the real call sites, argument values
 * and call counts are not reconstructed. */
#include <ft2build.h>
#include FT_FREETYPE_H
#include FT_GLYPH_H
#include FT_STROKER_H
#include FT_OUTLINE_H
long call_FT_Init_FreeType(long a,long b,long c,long d,long e){ return ((long(*)(long,long,long,long,long))FT_Init_FreeType)(a,b,c,d,e); }
long call_FT_Done_FreeType(long a,long b,long c,long d,long e){ return ((long(*)(long,long,long,long,long))FT_Done_FreeType)(a,b,c,d,e); }
long call_FT_New_Memory_Face(long a,long b,long c,long d,long e){ return ((long(*)(long,long,long,long,long))FT_New_Memory_Face)(a,b,c,d,e); }
long call_FT_Done_Face(long a,long b,long c,long d,long e){ return ((long(*)(long,long,long,long,long))FT_Done_Face)(a,b,c,d,e); }
long call_FT_Set_Char_Size(long a,long b,long c,long d,long e){ return ((long(*)(long,long,long,long,long))FT_Set_Char_Size)(a,b,c,d,e); }
long call_FT_Set_Pixel_Sizes(long a,long b,long c,long d,long e){ return ((long(*)(long,long,long,long,long))FT_Set_Pixel_Sizes)(a,b,c,d,e); }
long call_FT_Get_Char_Index(long a,long b,long c,long d,long e){ return ((long(*)(long,long,long,long,long))FT_Get_Char_Index)(a,b,c,d,e); }
long call_FT_Load_Glyph(long a,long b,long c,long d,long e){ return ((long(*)(long,long,long,long,long))FT_Load_Glyph)(a,b,c,d,e); }
long call_FT_Load_Char(long a,long b,long c,long d,long e){ return ((long(*)(long,long,long,long,long))FT_Load_Char)(a,b,c,d,e); }
long call_FT_Render_Glyph(long a,long b,long c,long d,long e){ return ((long(*)(long,long,long,long,long))FT_Render_Glyph)(a,b,c,d,e); }
long call_FT_Get_Kerning(long a,long b,long c,long d,long e){ return ((long(*)(long,long,long,long,long))FT_Get_Kerning)(a,b,c,d,e); }
long call_FT_Get_Glyph(long a,long b,long c,long d,long e){ return ((long(*)(long,long,long,long,long))FT_Get_Glyph)(a,b,c,d,e); }
long call_FT_Glyph_To_Bitmap(long a,long b,long c,long d,long e){ return ((long(*)(long,long,long,long,long))FT_Glyph_To_Bitmap)(a,b,c,d,e); }
long call_FT_Done_Glyph(long a,long b,long c,long d,long e){ return ((long(*)(long,long,long,long,long))FT_Done_Glyph)(a,b,c,d,e); }
long call_FT_Glyph_Copy(long a,long b,long c,long d,long e){ return ((long(*)(long,long,long,long,long))FT_Glyph_Copy)(a,b,c,d,e); }
long call_FT_Stroker_New(long a,long b,long c,long d,long e){ return ((long(*)(long,long,long,long,long))FT_Stroker_New)(a,b,c,d,e); }
long call_FT_Stroker_Set(long a,long b,long c,long d,long e){ return ((long(*)(long,long,long,long,long))FT_Stroker_Set)(a,b,c,d,e); }
long call_FT_Stroker_Done(long a,long b,long c,long d,long e){ return ((long(*)(long,long,long,long,long))FT_Stroker_Done)(a,b,c,d,e); }
long call_FT_Glyph_Stroke(long a,long b,long c,long d,long e){ return ((long(*)(long,long,long,long,long))FT_Glyph_Stroke)(a,b,c,d,e); }
long call_FT_Glyph_StrokeBorder(long a,long b,long c,long d,long e){ return ((long(*)(long,long,long,long,long))FT_Glyph_StrokeBorder)(a,b,c,d,e); }
long call_FT_Outline_Embolden(long a,long b,long c,long d,long e){ return ((long(*)(long,long,long,long,long))FT_Outline_Embolden)(a,b,c,d,e); }
long call_FT_Select_Charmap(long a,long b,long c,long d,long e){ return ((long(*)(long,long,long,long,long))FT_Select_Charmap)(a,b,c,d,e); }
long call_FT_Glyph_Get_CBox(long a,long b,long c,long d,long e){ return ((long(*)(long,long,long,long,long))FT_Glyph_Get_CBox)(a,b,c,d,e); }
long call_FT_Outline_Translate(long a,long b,long c,long d,long e){ return ((long(*)(long,long,long,long,long))FT_Outline_Translate)(a,b,c,d,e); }
long call_FT_Set_Transform(long a,long b,long c,long d,long e){ return ((long(*)(long,long,long,long,long))FT_Set_Transform)(a,b,c,d,e); }
void ft_entry(void) {}
