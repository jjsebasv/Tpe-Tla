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


%start Business

%%

Business 
	: WhileTrucho  
		{ printf(“%d\n”, $1); }
	;

WhileTrucho
	: DO DOUBLE DIGITO WHILE MINOR DIGITO
		{ $$ = concat_str( 5, "int ans = ", $3,
		 ";\n do {\n ans *= 2; \n}\n while( ans <", $6, ");\n return ans;\n" );}
	;  

Function 
	: PrintNames HEADCOUNT SEMICOLON
		{ $$ = concat_str( 5, "int i = 0;\n for( i; ", $2,
		 "[i] != null; i++){\n printf('%s\n', ", $2, "[i] -> name );\n}");}
	| SpecialFunc OVER HEADCOUNT SEMICOLON
		{ $$ = concat_str( 5,"int i = 0;\n for( i; ", $3,
		 "[i] != null; i++){\n", $1, "(", $3 ,"[i]);\n}");}
	;

SpecialFunc
	: ADD_TEN_BONUS
		{ $$ = $1; }
	;   

Variables
	: Variables Variable SEMICOLON 
		{ $$ = concat_str(3, $1, $2, ";\n"); }
	| Variable SEMICOLON
		{ $$ = concat_str(2, $1, ";\n"); }
	;

Variable 
	: TYPE NAME
		{ $$ = concat_str( 3, $1, " ~_", $2); }
	;

Functions
	: Functions Function
		{ $$ = concat_str( 3, $1, "\n", $2); }
	| Function
		{ $$ = $1; }
	;

Function
	: TYPE NAME Parameters Bloque
		{ $$ = concat_str(7, $1, " ~_", $2, $3, "\n", $4, "\n"); }
	| VOID NAME Parameters Bloque
		{ $$ = concat_str(7, "void "," ~_", $2, $3, "\n", $4, "\n"); }

	;

Parameters
	: OPEN_PARENTHESIS Variable_1 CLOSE_PARENTHESIS
		{ $$ = concat_str( 3, "( ", $2, " )"); }
	;

Variable_1
	: Variable Variable_2
		{ $$ = concat_str( 2, $1, $2); }
	|
		{ $$ = ""; }  
	;

Variable_2
	: Variable_2 COMMA Variable 
		{ $$ = concat_str( 3, $1,", ", $3); }
	|
		{ $$ = ""; }  
	;

Bloque
	: OPEN_C_BRACKET Statement CLOSE_C_BRACKET
		{ $$ = concat_str( 3, "{\n", $2, "\n}"); }
	;

Statement
	: Variable SEMICOLON Statement
		{ $$ = concat_str( 3, $1, ";\n",  $3); }
	| Expression SEMICOLON Statement
		{ $$ = concat_str( 3, $1, ";\n", $3); }
	| Variable OP_ASSIGN Expression SEMICOLON Statement
		{ $$ = concat_str( 5, $1, " = ", $3, ";\n", $5); }
	| NAME OP_ASSIGN Expression SEMICOLON Statement
		{ $$ = concat_str( 6, "~_", $1, " = ", $3, ";\n", $5); }
	| WHILE_TOKEN OPEN_PARENTHESIS Expression CLOSE_PARENTHESIS Bloque Statement
		{ $$ = concat_str( 6,"while ( ", $3, " )\n", $5, "\n", $6); }
	| FOR_TOKEN OPEN_PARENTHESIS ForExp SEMICOLON Expression SEMICOLON ForExp CLOSE_PARENTHESIS Bloque Statement
		{ $$ = concat_str( 10, "for ( ", $3, " ; ", $5, " ; ", $7, " )\n", $9, "\n", $10); }
	| IF_TOKEN OPEN_PARENTHESIS Expression CLOSE_PARENTHESIS Bloque Statement
		{ $$ = concat_str( 6, "if ( ", $3, " )\n", $5, "\n", $6) ; }
	| IF_TOKEN OPEN_PARENTHESIS Expression CLOSE_PARENTHESIS Bloque ELSE_TOKEN Bloque Statement
		{ $$ = concat_str( 9, "if ( ",  $3, " )\n", $5, "\n", "else\n", $7 , "\n", $8); }
	| SWITCH_TOKEN OPEN_PARENTHESIS Expression CLOSE_PARENTHESIS OPEN_C_BRACKET Cases CLOSE_C_BRACKET Statement
		{ $$ = concat_str( 6, "switch ( ", $3, " )\n{\n", $6, "\n}", $8); }
	| DO_TOKEN Bloque WHILE_TOKEN OPEN_PARENTHESIS Expression CLOSE_PARENTHESIS SEMICOLON Statement
		{ $$ = concat_str( 7, "do\n", $2, "\n", "while ( ", $5, " );\n", $8); }
	| RETURN_TOKEN Expression SEMICOLON
		{ $$ = concat_str( 3, "return ", $2, ";");}
	| BREAK_TOKEN SEMICOLON
		{ $$ = "break;\n"; }
	| 
		{ $$ = ""; }
	;

ForExp 
	: Expression
		{ $$ = $1; }
	| NAME OP_ASSIGN Expression 
		{ $$ = concat_str( 4, "~_", $1, " = ", $3); }
	| 
		{ $$ = ""; }
	;

Expression
	: ConditionalOrExpression
		{ $$ = $1; }
	;

MultiplicativeExpression
	: Term
		{ $$ = $1; }
	| MultiplicativeExpression OP_MULT Term
		{ $$ = concat_str(3, $1, " * ", $3); }
	| MultiplicativeExpression OP_DIV Term
		{ $$ = concat_str(3, $1, " / ", $3); }
	| MultiplicativeExpression OP_MOD Term
		{ $$ = concat_str(3, $1, " % ", $3); }
	;

AdditiveExpression
	: MultiplicativeExpression
		{ $$ = $1; }
    | AdditiveExpression OP_PLUS MultiplicativeExpression
    	{ $$ = concat_str(3, $1, " + ", $3); }
	| AdditiveExpression OP_MINUS MultiplicativeExpression
		{ $$ = concat_str(3, $1, " - ", $3); }
    ;

RelationalExpression
	: AdditiveExpression
		{ $$ = $1; }
    | RelationalExpression OP_LT AdditiveExpression
    	{ $$ = concat_str(3, $1, " < ", $3); }
	| RelationalExpression OP_GT AdditiveExpression
		{ $$ = concat_str(3, $1, " > ", $3); }
	| RelationalExpression OP_LE AdditiveExpression
		{ $$ = concat_str(3, $1, " <= ", $3); }
	| RelationalExpression OP_GE AdditiveExpression
		{ $$ = concat_str(3, $1, " >= ", $3); }
	;

EqualityExpression
	: RelationalExpression
		{ $$ = $1; }
    | EqualityExpression OP_EQ RelationalExpression
    	{ $$ = concat_str(3, $1, " == ", $3); }
    | EqualityExpression OP_NE RelationalExpression
    	{ $$ = concat_str(3, $1, " != ", $3); }
    ;

ConditionalAndExpression
	: EqualityExpression
		{ $$ = $1; }
	| ConditionalAndExpression OP_AND EqualityExpression
		{ $$ = concat_str(3, $1, " && ", $3); }
	;

ConditionalOrExpression
	: ConditionalAndExpression
		{ $$ = $1; }
	| ConditionalOrExpression OP_OR ConditionalAndExpression
		{ $$ = concat_str(3, $1, " || ", $3); }
	;

Value_1
	: Expression Value_2
		{ $$ = concat_str( 2, $1, $2); }
	| 
		{ $$ = ""; }
	;

Value_2
	: Value_2 COMMA Expression 
		{ $$ = concat_str( 3, $1, ", ", $3); }
	| 
		{ $$ = ""; }
	;

Term
	: NAME
		{ $$ = concat_str(2, "~_", $1); }
	| NUMBER
		{ $$ = $1; }
	| TRUE_TOKEN
		{ $$ = "true"; }
	| FALSE_TOKEN
		{ $$ = "false"; }
	| STRING
		{ $$ = $1; }
	| NULL_TOKEN
		{ $$ = "null"; }
	| NAME DOT NAME OPEN_PARENTHESIS Value_1 CLOSE_PARENTHESIS
		{ $$ = concat_str( 6, $1, "_", $3, "( ", $5, " )"); }
	| NAME OPEN_PARENTHESIS Value_1 CLOSE_PARENTHESIS
		{ $$ = concat_str( 4, $1, "( ", $3, " )"); }
	| OPEN_PARENTHESIS Expression CLOSE_PARENTHESIS
		{ $$ = concat_str( 3, "( ", $2, " )"); }
	;


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