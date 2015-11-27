%{
	#include <stdio.h>
	#include "y.tab.h"
%}

%%

"forEach"						{return FOR_EACH;}
"while"							{return WHILE;}
"if"							{return IF;}
"do"							{return DO;}
"else"							{return ELSE;}
"Business" 						{return BUSINESS;}
"true"							{return TRUE;}
"null"							{return NULL;}
"false"							{return FALSE;}
"print"							{return PRINT;}
"void"							{return VOID;}
"case"							{return CASE;}
"default"						{return DEFAULT;}
"main"							{return MAIN;}
"return"						{return RETURN;}
"switch"						{return SWITCH;}
"break"							{return BREAK;}
"in"							{return IN;}
"Employee"						{return EMPLOYEE;}
"name"							{return NAME;}
"lastname"						{return LASTNAME;}
"id"							{return ID;}
"rank"							{return RANK;}
"salary"						{return SALARY;}
"antiquity"						{return ANTIQUITY;}
"Headcount"						{return HEADCOUNT;}
"salaryFor"						{return SALARYFOR;}
"month"							{return MONTH;}
"year"							{return YEAR;}
"week"							{return WEEK;}
"minusDeductions"				{return MINUSDEDUCTION;}
"+"								{return SUMA;}
"-"								{return RESTA;}
"*"								{return MULT;}
"/"								{return OP_DIV;}
"%"								{return OP_MOD;}
"<="							{return OP_LE;}
">="							{return OP_GE;}
"=="							{return OP_EQ;}
">"								{return OP_GT;}
"<"								{return OP_LT;}
"="								{return OP_ASSIGN;}
":"								{return COLON;}
"!="							{return OP_NE;}
"||"							{return OP_OR;}
"&&"							{return OP_AND;}
"!"								{return NOT;}
float|int|char\*    			{yylval.strval=strdup(yytext);return TYPE;}
[a-zA-Z][a-zA-Z0-9]*			{yylval.strval=strdup(yytext);return NAME;}
([-]?[1-9][0-9]*)|0				{yylval.strval=strdup(yytext);return DIGITO;}
"{"								{return OPEN_C_BRACKET;}
"}"								{return CLOSE_C_BRACKET;}
"["								{return OPEN_S_BRACKET;}
"]"								{return CLOSE_S_BRACKET;}
"("								{return PARENTESIS_ABRE;}
")"								{return PARENTESIS_CIERRA;}
";"								{return SEMICOLON;}
"."								{return DOT;}
","								{return COMMA;}
[ \t\n]							;
.								{printf("unexpected character\n");}


%%

int yywrap(void)
{
	return 1;
}