%{
	
	#include <stdio.h>
	#include <string.h>
	#include <stdlib.h>
	#include <stdbool.h>
	#include <stdarg.h>

	char* string_concat(int argc, ...);

%}

%union {
	char* strval;
}

%token PARENTESIS_ABRE PARENTESIS_CIERRA C_BRACKET_ABRE C_BRACKET_CIERRA
%token MAIN VOID
%token WHILE IF ELSE DO
%token PLUS MINUS MULT DIV MOD
%token ASSIGN GT LT GE LE EQ
%token AND OR NOT NE
%token TRUE FALSE_T NULL_T BREAK
%token COLON SEMICOLON COMMA DOT
%token MAIN
%token VOID
%token END RETURN
%token SALARYFOR MONTH NAME SALARY RANK ID LASTNAME


%token EMPLOYEE
%token <strval> DIGITO
%token <strval> VAR
%token <strval> TYPE
%token <strval> STRING

%token SALARYFOR SHOW_EMPLOYEE
%token <strval> NAME LASTNAME ANTIQUITY ID SALARY CATEGORY
%token <strval> WEEK MONTH YEAR QUOTATION_MARK

%type <strval> SpecialFunction
%type <strval> NewEmployee
%type <strval> TimeLapse

%type <strval> Variable
%type <strval> FirstVariable
%type <strval> CommaVariable
%type <strval> Functions
%type <strval> Function
%type <strval> Parameters
%type <strval> CodeBlock
%type <strval> Statement
%type <strval> Main
%type <strval> Expression
%type <strval> AdditiveExpression
%type <strval> EqualityExpression
%type <strval> MultiplicativeExpression
%type <strval> RelationalExpression
%type <strval> ConditionalAndExpression
%type <strval> ConditionalOrExpression
%type <strval> Value_1
%type <strval> Value_2
%type <strval> Term
%type <strval> Var_Str

%start Program

%%

Program 
	: Functions Main
		{ printf("%s%s%s\n", $1, "\'", $2); }
	| Main
		{ printf("%s\n", $1); }
	;

Functions
	: Functions Function
		{ $$ = concat_str( 3, $1, "\n", $2); }
	| Function
		{ $$ = $1; }
	;

Function
	: TYPE VAR Parameters CodeBlock
		{ $$ = concat_str(7, $1," ", $2, $3, "\n", $4, "\n"); }
	| VOID VAR Parameters CodeBlock
		{ $$ = concat_str(7, "void ", " ",$2, $3, "\n", $4, "\n"); }
	;

Parameters
	: PARENTESIS_ABRE FirstVariable PARENTESIS_CIERRA
		{ $$ = concat_str( 3, "( ", $2, " )"); }
	;

FirstVariable
	: Variable CommaVariable
		{ $$ = concat_str( 2, $1, $2); }
	|
		{ $$ = ""; }  
	;

CommaVariable
	: CommaVariable COMMA Variable 
		{ $$ = concat_str( 3, $1,", ", $3); }
	|
		{ $$ = ""; }  
	;

Variable 
	: TYPE VAR
		{ $$ = concat_str( 3, $1, " ", $2); }
	;

CodeBlock
	: C_BRACKET_ABRE Statement C_BRACKET_CIERRA
		{ $$ = concat_str( 3, "{\n", $2, "\n}"); }
	;

Statement
	: Variable SEMICOLON Statement 
		{ $$ = concat_str( 3, $1, ";\n",  $3); }
	| Expression SEMICOLON Statement
		{ $$ = concat_str( 3, $1, ";\n", $3); }
	| SpecialFunction SEMICOLON Statement
		{ $$ = concat_str( 3, $1, ";\n, $3"); }
	| Variable ASSIGN Expression SEMICOLON Statement
		{ $$ = concat_str( 5, $1, " = ", $3, ";\n", $5); }
	| VAR ASSIGN Expression SEMICOLON Statement
		{ $$ = concat_str( 5, $1, " = ", $3, ";\n", $5); }
	| EMPLOYEE VAR ASSIGN SpecialFunction SEMICOLON Statement
		{ $$ = concat_str( 5, "struct Employee ", $2, " = ", $4, ";\n", $6); }
	| WHILE PARENTESIS_ABRE Expression PARENTESIS_CIERRA CodeBlock Statement
		{ $$ = concat_str( 6,"while ( ", $3, " )\n", $5, "\n", $6); }
	| IF PARENTESIS_ABRE Expression PARENTESIS_CIERRA CodeBlock Statement
		{ $$ = concat_str( 6, "if ( ", $3, " )\n", $5, "\n", $6) ; }
	| IF PARENTESIS_ABRE Expression PARENTESIS_CIERRA CodeBlock ELSE CodeBlock Statement
		{ $$ = concat_str( 9, "if ( ",  $3, " )\n", $5, "\n", "else\n", $7 , "\n", $8); }
	| DO CodeBlock WHILE PARENTESIS_ABRE Expression PARENTESIS_CIERRA SEMICOLON Statement
		{ $$ = concat_str( 7, "do\n", $2, "\n", "while ( ", $5, " );\n", $8); }
	| RETURN Expression SEMICOLON
		{ $$ = concat_str( 3, "return ", $2, ";");}
	| BREAK SEMICOLON
		{ $$ = "break;\n"; }
	| 
		{ $$ = ""; }
	;

SpecialFunction
	: NAME Var_Str COMMA LASTNAME Var_Str COMMA CATEGORY Var_Str COMMA ID DIGITO COMMA ANTIQUITY DIGITO COMMA SALARY DIGITO
		{ $$ = concat_str( 13,"newEmployee( ", $2, ", ", $5, ", ", $8, ", ", $11, ", ", $14, ", ", $17, ")" ); }
	| NAME Var_Str COMMA NAME
		{ $$ = $2; }
	| VAR SALARYFOR DIGITO TimeLapse
		{ $$ = concat_str( 7, " getSalary( ", $1, ", ", $3, ", ", $4, ");\n" );}
	| SHOW_EMPLOYEE VAR
		{ $$ = concat_str( 3, " printEmployee( ", $2, ");\n");}
	;

Var_Str
	: MULT VAR MULT
		{ $$ = concat_str(3, "\"", $2, "\""); }
	;

NewEmployee
	: NAME STRING COMMA LASTNAME STRING COMMA CATEGORY STRING COMMA ID DIGITO COMMA ANTIQUITY DIGITO COMMA SALARY DIGITO
		{ $$ = concat_str( 13,"newEmployee( ", $2, ", ", $5, ", ", $8, ", ", $11, ", ", $14, ", ", $17, ");" ); }
	;

TimeLapse
	: WEEK
		{ $$ = $1; }
	| MONTH
		{ $$ = $1; }
	| YEAR
		{ $$ = $1; }
	;

Expression
	: ConditionalOrExpression
		{ $$ = $1; }
	;

MultiplicativeExpression
	: Term
		{ $$ = $1; }
	| MultiplicativeExpression MULT Term
		{ $$ = concat_str(3, $1, " * ", $3); }
	| MultiplicativeExpression DIV Term
		{ $$ = concat_str(3, $1, " / ", $3); }
	| MultiplicativeExpression MOD Term
		{ $$ = concat_str(3, $1, " % ", $3); }
	;

AdditiveExpression
	: MultiplicativeExpression
		{ $$ = $1; }
    | AdditiveExpression PLUS MultiplicativeExpression
    	{ $$ = concat_str(3, $1, " + ", $3); }
	| AdditiveExpression MINUS MultiplicativeExpression
		{ $$ = concat_str(3, $1, " - ", $3); }
    ;

RelationalExpression
	: AdditiveExpression
		{ $$ = $1; }
    | RelationalExpression LT AdditiveExpression
    	{ $$ = concat_str(3, $1, " < ", $3); }
	| RelationalExpression GT AdditiveExpression
		{ $$ = concat_str(3, $1, " > ", $3); }
	| RelationalExpression LE AdditiveExpression
		{ $$ = concat_str(3, $1, " <= ", $3); }
	| RelationalExpression GE AdditiveExpression
		{ $$ = concat_str(3, $1, " >= ", $3); }
	;

EqualityExpression
	: RelationalExpression
		{ $$ = $1; }
    | EqualityExpression EQ RelationalExpression
    	{ $$ = concat_str(3, $1, " == ", $3); }
    | EqualityExpression NE RelationalExpression
    	{ $$ = concat_str(3, $1, " != ", $3); }
    ;

ConditionalAndExpression
	: EqualityExpression
		{ $$ = $1; }
	| ConditionalAndExpression AND EqualityExpression
		{ $$ = concat_str(3, $1, " && ", $3); }
	;

ConditionalOrExpression
	: ConditionalAndExpression
		{ $$ = $1; }
	| ConditionalOrExpression OR ConditionalAndExpression
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
	: VAR
		{ $$ = $1; }
	| DIGITO
		{ $$ = $1; }
	| TRUE
		{ $$ = "true"; }
	| FALSE_T
		{ $$ = "FALSE_T"; }
	| STRING
		{ $$ = $1; }
	| NULL_T
		{ $$ = "NULL_T"; }
	| VAR PARENTESIS_ABRE Value_1 PARENTESIS_CIERRA
		{ $$ = concat_str( 4, $1, "( ", $3, " )"); }
	| PARENTESIS_ABRE Expression PARENTESIS_CIERRA
		{ $$ = concat_str( 3, "( ", $2, " )"); }
	;

Main 
	: TYPE MAIN PARENTESIS_ABRE VOID PARENTESIS_CIERRA CodeBlock
		{ $$ = concat_str(4,"#include \"includer.h\"\n", $1, "main ()\n",$6); }
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

void yyerror (char const *s) {
  		fprintf (stderr, "%s\n", s);
}

main() {
	yyparse();
}