%{
	#include <stdio.h>
	#include "employee.h"
	#include "specialFn.h"
	#include "y.tab.h"
%}
%option nounput yylineno

%%

[\"].*[\"]						{yylval.strval=strdup(yytext);return STRING;}
"salaryFor"						{return SALARYFOR;}
"showEmployee"					{return SHOW_EMPLOYEE;}
"week"|"weeks"					{return WEEK;}
"month"|"months"				{return MONTH;}
"year"|"years"					{return YEAR;}
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
"Employee"						{return EMPLOYEE;}
"name:"							{return NAME;}
"lastname:"						{return LASTNAME;}
"category:"						{return CATEGORY;}
"id:"							{return ID;}
"antiquity:"					{return ANTIQUITY;}
"salary:"						{return SALARY;}
"rank:"							{return RANK;}
"minusDeductions"				{return MINUSDEDUCTIONS;}
([-]?[1-9][0-9]*)|0|0.[0-9]+	{yylval.strval=strdup(yytext);return DIGITO;}
float|int|char\*				{yylval.strval=strdup(yytext);return TYPE;}
[a-zA-Z][a-zA-Z0-9]*			{yylval.strval=strdup(yytext);return VAR;}
"{"								{return C_BRACKET_ABRE;}
"}"								{return C_BRACKET_CIERRA;}
"["								{return S_BRACKET_ABRE;}
"]"								{return S_BRACKET_CIERRA;}
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