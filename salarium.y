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
	; 

Type
	: Employee 
	
	| Headcounts
	;

Function 
	: forEach Type IN Type OPEN_CBRACKET ToDo CLSE_CBRACKET
		{ }
	| DO Function WHILE Expresion
		{ $$ = concat_str( 7, "do\n", $2, "\n", "while ( ", $5, " );\n", $8); }
	| Iterate HEADCOUNT DO Function SEMICOLON
		{ $$ = concat_str( 8, "int i;\n for (i = 0", $2, ";", $2, "[i] != null i++) {\n", $4, "\n}";}
	;   

Expresion
	: OPEN_PARENTHESIS Term CLOSE_PARENTHESIS
		{ $$ = $2; }
	| OPEN_PARENTHESIS Expresion CLOSE_PARENTHESIS
		{ $$ = $2; }
	| Expresion MINOR Expresion
		{ $$ = concat_str(3, $1, "<", $3); }
	| Expresion MAJOR Expresion
		{ $$ = contat_str(3, $1, ">", $3); }
	;

Statement
	| WHILE OPEN_PARENTHESIS Expresion CLOSE_PARENTHESIS Bloque Statement
		{ $$ = concat_str( 6,"while ( ", $3, " )\n", $5, "\n", $6); }
	| FOR OPEN_PARENTHESIS Expresion SEMICOLON Expresion SEMICOLON Expresion CLOSE_PARENTHESIS Bloque Statement
		{ $$ = concat_str( 10, "for ( ", $3, " ; ", $5, " ; ", $7, " )\n", $9, "\n", $10); }
	| IF OPEN_PARENTHESIS Expresion CLOSE_PARENTHESIS Bloque Statement
		{ $$ = concat_str( 6, "if ( ", $3, " )\n", $5, "\n", $6) ; }
	| IF OPEN_PARENTHESIS Expresion CLOSE_PARENTHESIS Bloque ELSE Bloque Statement
		{ $$ = concat_str( 9, "if ( ",  $3, " )\n", $5, "\n", "else\n", $7 , "\n", $8); }
	| SWITCH OPEN_PARENTHESIS Expresion CLOSE_PARENTHESIS OPEN_C_BRACKET Cases CLOSE_C_BRACKET Statement
		{ $$ = concat_str( 6, "switch ( ", $3, " )\n{\n", $6, "\n}", $8); }
	| DO Bloque WHILE OPEN_PARENTHESIS Expresion CLOSE_PARENTHESIS SEMICOLON Statement
		{ $$ = concat_str( 7, "do\n", $2, "\n", "while ( ", $5, " );\n", $8); }
	| RETURN Expresion SEMICOLON
		{ $$ = concat_str( 3, "return ", $2, ";");}
	| BREAK SEMICOLON
		{ $$ = "break;\n"; }
	| 
		{ $$ = ""; }
	;

Term
	: Term PLUS Term
		{ $$ = $1 + $3; }
	| Term MINUS Term
		{ $$ = $1 - $3; }
	| Term MULT Term
		{ $$ = $1 * $3; }
	| Term DIV Term
		{ $$ = $1 / $3; }
	|





forEach Employee in Headcounts

ForEach : 





%%

char* 
concat_str(int argc, ...){
	
   char * ans = NULL;
   char ** args = (char **)malloc(argc*sizeof(char *));

   int size = 0, i;

   va_list ap;
   va_start(ap, argc);
   
   for(i = 0; i < argc; i++)
   {
      args[i] = va_arg(ap, char *);
      size += strlen(args[i]);
   }

   ans = (char *)malloc((size+1)*sizeof(char)); // size+1 para el '\0'

   for(i = 0; i < argc; i++)
      sprintf(ans, "%s%s", ans, args[i]);

   va_end(ap);
   return ans;
}

main() {
	yyparse();
}