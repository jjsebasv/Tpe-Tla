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

%token PARENTESIS_ABRE PARENTESIS_CIERRA C_BRACKET_ABRE C_BRACKET_CIERRA S_BRACKET_ABRE S_BRACKET_CIERRA
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
%type <strval> Exp
%type <strval> AddExp
%type <strval> EqExp
%type <strval> MultExp
%type <strval> RelExp
%type <strval> CondAndExp
%type <strval> CondOrExp
%type <strval> FirstVal
%type <strval> CommaVal
%type <strval> Term
%type <strval> EmpValues

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
	| Exp SEMICOLON Statement
		{ $$ = concat_str( 3, $1, ";\n", $3); }
	| SpecialFunction SEMICOLON Statement
		{ $$ = concat_str( 3, $1, ";\n", $3); }
	| Variable ASSIGN SpecialFunction SEMICOLON Statement
		{ $$ = concat_str( 5, $1, " = ", $3 , ";\n", $5); }
	| Variable ASSIGN Exp SEMICOLON Statement
		{ $$ = concat_str( 5, $1, " = ", $3, ";\n", $5); }
	| VAR ASSIGN Exp SEMICOLON Statement
		{ $$ = concat_str( 5, $1, " = ", $3, ";\n", $5); }
	| EMPLOYEE VAR ASSIGN SpecialFunction SEMICOLON Statement
		{ $$ = concat_str( 6, "struct Employee ", $2, " = ", $4, ";\n", $6); }
	| EMPLOYEE VAR S_BRACKET_ABRE DIGITO S_BRACKET_CIERRA ASSIGN EmpValues SEMICOLON Statement
		{ $$ = concat_str( 8, "struct Employee ", $2, "[", $4, "] = {", $7, "};\n", $9); }
	| WHILE PARENTESIS_ABRE Exp PARENTESIS_CIERRA CodeBlock Statement
		{ $$ = concat_str( 6,"while ( ", $3, " )\n", $5, "\n", $6); }
	| IF PARENTESIS_ABRE Exp PARENTESIS_CIERRA CodeBlock Statement
		{ $$ = concat_str( 6, "if ( ", $3, " )\n", $5, "\n", $6) ; }
	| IF PARENTESIS_ABRE Exp PARENTESIS_CIERRA CodeBlock ELSE CodeBlock Statement
		{ $$ = concat_str( 9, "if ( ",  $3, " )\n", $5, "\n", "else\n", $7 , "\n", $8); }
	| DO CodeBlock WHILE PARENTESIS_ABRE Exp PARENTESIS_CIERRA SEMICOLON Statement
		{ $$ = concat_str( 7, "do\n", $2, "\n", "while ( ", $5, " );\n", $8); }
	| RETURN Exp SEMICOLON
		{ $$ = concat_str( 3, "return ", $2, ";");}
	| BREAK SEMICOLON
		{ $$ = "break;\n"; }
	| 
		{ $$ = ""; }
	;

SpecialFunction
	: NAME VAR COMMA LASTNAME VAR COMMA CATEGORY VAR COMMA ID DIGITO COMMA ANTIQUITY DIGITO COMMA SALARY DIGITO
		{ $$ = concat_str( 13,"{ \"", $2, "\", \"", $5, "\", \"", $8, "\", ", $11, ", ", $14, ", ", $17, " }" ); }
	| VAR SALARYFOR DIGITO TimeLapse
		{ $$ = concat_str( 7, " getSalary( ", $1, ", ", $3, ", ", $4, ")" );}
	| SHOW_EMPLOYEE VAR
		{ $$ = concat_str( 3, "printEmployee( ", $2, ")" ); }
	; 

EmpValues
	: VAR COMMA EmpValues
		{ $$ = concat_str(3 , $1, " , ", $3); }
	| VAR
		{ $$ = $1; }

TimeLapse
	: WEEK
		{ $$ = "\"WEEK\""; }
	| MONTH
		{ $$ = "\"MONTH\""; }
	| YEAR
		{ $$ = "\"YEAR\""; }
	;

Exp
	: CondOrExp
		{ $$ = $1; }
	;

MultExp
	: Term
		{ $$ = $1; }
	| MultExp MULT Term
		{ $$ = concat_str(3, $1, " * ", $3); }
	| MultExp DIV Term
		{ $$ = concat_str(3, $1, " / ", $3); }
	| MultExp MOD Term
		{ $$ = concat_str(3, $1, " % ", $3); }
	;

AddExp
	: MultExp
		{ $$ = $1; }
    | AddExp PLUS MultExp
    	{ $$ = concat_str(3, $1, " + ", $3); }
	| AddExp MINUS MultExp
		{ $$ = concat_str(3, $1, " - ", $3); }
    ;

RelExp
	: AddExp
		{ $$ = $1; }
    | RelExp LT AddExp
    	{ $$ = concat_str(3, $1, " < ", $3); }
	| RelExp GT AddExp
		{ $$ = concat_str(3, $1, " > ", $3); }
	| RelExp LE AddExp
		{ $$ = concat_str(3, $1, " <= ", $3); }
	| RelExp GE AddExp
		{ $$ = concat_str(3, $1, " >= ", $3); }
	;

EqExp
	: RelExp
		{ $$ = $1; }
    | EqExp EQ RelExp
    	{ $$ = concat_str(3, $1, " == ", $3); }
    | EqExp NE RelExp
    	{ $$ = concat_str(3, $1, " != ", $3); }
    ;

CondAndExp
	: EqExp
		{ $$ = $1; }
	| CondAndExp AND EqExp
		{ $$ = concat_str(3, $1, " && ", $3); }
	;

CondOrExp
	: CondAndExp
		{ $$ = $1; }
	| CondOrExp OR CondAndExp
		{ $$ = concat_str(3, $1, " || ", $3); }
	;

FirstVal
	: Exp CommaVal
		{ $$ = concat_str( 2, $1, $2); }
	| 
		{ $$ = ""; }
	;

CommaVal
	: CommaVal COMMA Exp 
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
	| VAR S_BRACKET_ABRE VAR S_BRACKET_CIERRA DOT VAR
		{ $$ = concat_str( 5, $1, "[", $3, "].", $6 ); }
	| VAR S_BRACKET_ABRE DIGITO S_BRACKET_CIERRA DOT VAR
		{ $$ = concat_str( 5, $1, "[", $3, "].", $6 ); }
	| VAR PARENTESIS_ABRE FirstVal PARENTESIS_CIERRA
		{ $$ = concat_str( 4, $1, "( ", $3, " )"); }
	| PARENTESIS_ABRE Exp PARENTESIS_CIERRA
		{ $$ = concat_str( 3, "( ", $2, " )"); }
	;

Main 
	: TYPE MAIN PARENTESIS_ABRE VOID PARENTESIS_CIERRA CodeBlock
		{ $$ = concat_str(3 , $1, " main ()\n", $6 ); }
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