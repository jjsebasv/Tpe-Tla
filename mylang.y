%{
	
	#include <stdio.h>
	#include <string.h>
	#include <stdlib.h>
	#include <stdbool.h>
	#include <stdarg.h>

	char* string_concat(int argc, ...);
%}

%token DIGITO
%token SUMA RESTA MULT
%token PARENTESIS_ABRE PARENTESIS_CIERRA

%type <strval> Expr
%type <strval> Termino
%type <strval> Factor


%start Program

%%

Program 
	: Expr  
		{ printf(“%d\n”, $1); }
	;

Expr
	: Expr SUMA Termino
		{ $$ = $1 + $3; }
	| Termino
		{	$$ = $1; }
	;

Termino 
	: Termino MULT Factor 
		{ $$ = $1 * $3; }
	| Factor
		{ $$ = $1; }
	;

Factor
	: PARENTESIS_ABRE Expr PARENTESIS_CIERRA 
		{ $$ = $2; }
	| DIGITO
		{ $$ = $1; }
	; 

%%

main() {
	yyparse();
}