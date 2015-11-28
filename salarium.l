%{
	#include <stdio.h>
	#include "y.tab.h"
%}
%option nounput yylineno

%%

[\"].*[\"]						{yylval.strval=strdup(yytext);return STRING;}
"while"							{return WHILE;}
"do"							{return DO;}
"if"							{return IF;}
"else"							{return ELSE;}
"true"							{return TRUE;}
"null"							{return NULL_T;}
"false"							{return FALSE_T;}
"main"							{return MAIN;}
"void"							{return VOID;}
"return"						{return RETURN;}
"print"							{return PRINT;}
","								{return COMMA;}
"+"								{return PLUS;}
"-"								{return MINUS;}
"*"								{return MULT;}
"/"								{return DIV;}
"%"								{return MOD;}
"<="							{return LE;}
">="							{return GE;}
"=="							{return EQ;}
">"								{return GT;}
"<"								{return LT;}
"="								{return ASSIGN;}
":"								{return COLON;}
"!="							{return NE;}
"||"							{return OR;}
"&&"							{return AND;}
"!"								{return NOT;}
";"								{return SEMICOLON;}
([-]?[1-9][0-9]*)|0				{yylval.strval=strdup(yytext);return DIGITO;}
float|int|char\*    			{yylval.strval=strdup(yytext);return TYPE;}
[a-zA-Z][a-zA-Z0-9]*			{yylval.strval=strdup(yytext);return VAR;}
"{"								{return C_BRACKET_ABRE;}
"}"								{return C_BRACKET_CIERRA;}
"("								{return PARENTESIS_ABRE;}
")"								{return PARENTESIS_CIERRA;}
"."								{return DOT;}
[ \t\n]							;
.								{printf("unexpected character\n");}


%%

int yywrap(void)
{
	return 1;
}