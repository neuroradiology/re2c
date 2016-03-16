/* Generated by re2c */
#line 1 "unicode_group_Zs.x--encoding-policy(fail).re"
#include <stdio.h>
#include "utf16.h"
#define YYCTYPE unsigned short
bool scan(const YYCTYPE * start, const YYCTYPE * const limit)
{
	__attribute__((unused)) const YYCTYPE * YYMARKER; // silence compiler warnings when YYMARKER is not used
#	define YYCURSOR start
Zs:
	
#line 13 "unicode_group_Zs.x--encoding-policy(fail).c"
{
	YYCTYPE yych;
	yych = *YYCURSOR;
	if (yych <= 0x180E) {
		if (yych <= 0x00A0) {
			if (yych == ' ') goto yy4;
			if (yych >= 0x00A0) goto yy4;
		} else {
			if (yych == 0x1680) goto yy4;
			if (yych >= 0x180E) goto yy4;
		}
	} else {
		if (yych <= 0x202F) {
			if (yych <= 0x1FFF) goto yy2;
			if (yych <= 0x200A) goto yy4;
			if (yych >= 0x202F) goto yy4;
		} else {
			if (yych <= 0x205F) {
				if (yych >= 0x205F) goto yy4;
			} else {
				if (yych == 0x3000) goto yy4;
			}
		}
	}
yy2:
	++YYCURSOR;
#line 13 "unicode_group_Zs.x--encoding-policy(fail).re"
	{ return YYCURSOR == limit; }
#line 42 "unicode_group_Zs.x--encoding-policy(fail).c"
yy4:
	++YYCURSOR;
#line 12 "unicode_group_Zs.x--encoding-policy(fail).re"
	{ goto Zs; }
#line 47 "unicode_group_Zs.x--encoding-policy(fail).c"
}
#line 14 "unicode_group_Zs.x--encoding-policy(fail).re"

}
static const unsigned int chars_Zs [] = {0x20,0x20,  0xa0,0xa0,  0x1680,0x1680,  0x180e,0x180e,  0x2000,0x200a,  0x202f,0x202f,  0x205f,0x205f,  0x3000,0x3000,  0x0,0x0};
static unsigned int encode_utf16 (const unsigned int * ranges, unsigned int ranges_count, unsigned short * s)
{
	unsigned short * const s_start = s;
	for (unsigned int i = 0; i < ranges_count; i += 2)
		for (unsigned int j = ranges[i]; j <= ranges[i + 1]; ++j)
		{
			if (j <= re2c::utf16::MAX_1WORD_RUNE)
				*s++ = j;
			else
			{
				*s++ = re2c::utf16::lead_surr(j);
				*s++ = re2c::utf16::trail_surr(j);
			}
		}
	return s - s_start;
}

int main ()
{
	YYCTYPE * buffer_Zs = new YYCTYPE [38];
	unsigned int buffer_len = encode_utf16 (chars_Zs, sizeof (chars_Zs) / sizeof (unsigned int), buffer_Zs);
	if (!scan (reinterpret_cast<const YYCTYPE *> (buffer_Zs), reinterpret_cast<const YYCTYPE *> (buffer_Zs + buffer_len)))
		printf("test 'Zs' failed\n");
	delete [] buffer_Zs;
	return 0;
}