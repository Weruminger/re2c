re2c: warning: naked default case (stray code units: [0x00-`][a][b-0xFF]), better add default rule * [-Wnaked-default]
/* Generated by re2c */
#line 1 "input2.re"

#line 5 "<stdout>"
{
	YYCTYPE yych;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case 'a':	goto yy3;
	default:	goto yy2;
	}
yy2:
yy3:
	++YYCURSOR;
	if ((YYLIMIT - YYCURSOR) < 2) YYFILL(2);
	yych = *YYCURSOR;
	switch (yych) {
	case 'a':	goto yy3;
	case 'b':	goto yy5;
	default:	goto yy2;
	}
yy5:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'b':	goto yy6;
	default:	goto yy2;
	}
yy6:
	++YYCURSOR;
#line 3 "input2.re"
	{ return 1; }
#line 34 "<stdout>"
}
#line 5 "input2.re"
