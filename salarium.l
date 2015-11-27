%{
	#include <stdio.h>
	#include "y.tab.h"
%}

%%

[0-9]+				{return DIGITO;}
"+"					{return SUMA;}
"-"					{return RESTA;}
"*"					{return MULT;}
"("					{return PARENTESIS_ABRE;}
")"					{return PARENTESIS_CIERRA;}

%%

int yywrap(void)
{
	return 1;
}