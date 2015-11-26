%{
	
	#include <stdio.h>
	#include <string.h>
	#include <stdlib.h>
	#include <stdbool.h>
	#include <stdarg.h>

	char* string_concat(int argc, ...);
%}

%token DIGITO

%type <strval> Expr
%type <strval> Termino
%type <strval> Factor


%start Program

%%

Program 
	: Expr ‘\n’ 
		{ printf(“%d\n”, $1); }
	;

Expr
	: Expr ‘+’ Termino
		{ $$ = $1 + $3; }
	| Termino
		{	$$ = $1; }
	;

Termino 
	: Termino ‘*’ Factor 
		{ $$ = $1 * $3; }
	| Factor
		{ $$ = $1; }
	;

Factor
	: ‘(‘ Expr ‘)’ 
		{ $$ = $2; }
	| DIGITO
		{ $$ = $1; }
	; 
