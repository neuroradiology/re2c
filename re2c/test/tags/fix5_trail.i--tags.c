/* Generated by re2c */
#include <stddef.h>
#include <stdio.h>

static void lex(const char *YYCURSOR)
{
    const char *YYMARKER, *p0, *p1, *p2, *p3;
    const char *yyt1;const char *yyt2;const char *yyt3;
    
{
	char yych;
	yych = *YYCURSOR;
	switch (yych) {
	case '0':
		yyt3 = YYCURSOR;
		goto yy4;
	case '1':
		yyt3 = YYCURSOR;
		goto yy5;
	default:	goto yy2;
	}
yy2:
	++YYCURSOR;
yy3:
	{ printf("error\n"); return; }
yy4:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case '0':
	case '1':	goto yy7;
	default:	goto yy3;
	}
yy5:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case '2':
		yyt2 = YYCURSOR;
		goto yy10;
	case '3':
		yyt2 = YYCURSOR;
		goto yy12;
	default:	goto yy3;
	}
yy6:
	++YYCURSOR;
	yych = *YYCURSOR;
yy7:
	switch (yych) {
	case '0':	goto yy6;
	case '1':	goto yy9;
	default:	goto yy8;
	}
yy8:
	YYCURSOR = YYMARKER;
	goto yy3;
yy9:
	yych = *++YYCURSOR;
	switch (yych) {
	case '2':
		yyt2 = YYCURSOR;
		goto yy10;
	case '3':
		yyt2 = YYCURSOR;
		goto yy12;
	default:	goto yy8;
	}
yy10:
	++YYCURSOR;
	yych = *YYCURSOR;
	switch (yych) {
	case '2':	goto yy10;
	case '3':	goto yy12;
	default:	goto yy8;
	}
yy12:
	++YYCURSOR;
	yyt1 = YYCURSOR;
	yych = *YYCURSOR;
	goto yy15;
yy13:
	YYCURSOR = yyt1;
	p2 = yyt2;
	p0 = yyt3;
	p3 = yyt1 - 1;
	p1 = yyt2 - 1;
	{
            printf("'%.*s', '%.*s', '%.*s', '%.*s', '%s'\n",
                p1 - p0, p0,
                p2 - p1, p1,
                p3 - p2, p2,
                YYCURSOR - p3, p3,
                YYCURSOR);
                return;
        }
yy14:
	++YYCURSOR;
	yych = *YYCURSOR;
yy15:
	switch (yych) {
	case '4':	goto yy14;
	default:	goto yy13;
	}
}

}

int main(int argc, char **argv)
{
    for (int i = 1; i < argc; ++i) {
        lex(argv[i]);
    }
    return 0;
}
