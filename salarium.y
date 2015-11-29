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
%token WHILE IF ELSE DO FOREACH IN
%token PLUS MINUS MULT DIV MOD
%token ASSIGN GT LT GE LE EQ
%token AND OR NOT NE
%token TRUE FALSE_T NULL_T BREAK
%token COLON SEMICOLON COMMA DOT MINUSDEDUCTIONS
%token END RETURN

%token EMPLOYEE
%token SALARYFOR SHOW_EMPLOYEE GET_EMPLOYEE PRINT_ALL GET_NAME RAISE
%token NAME LASTNAME ANTIQUITY ID SALARY CATEGORY
%token CATEGORY_VAR
%token WEEK MONTH YEAR
%token TEN TWENTY

%token <strval> DIGITO
%token <strval> VAR
%token <strval> TYPE
%token <strval> STRING


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
%type <strval> Deductions
%type <strval> ReturnEmployee
%type <strval> FunctionOverEmployee
%type <strval> DigOrVar
%type <strval> VarOrFunc
%type <strval> CallFunction

%start Program

%%

Program 
	: Functions Main
		{ printf("%s%s\n", $1, $2); }
	| Main
		{ printf("%s\n", $1); }
	;

Functions
	: Functions Function
		{ $$ = concat_str( 3, $1, "\n", $2); }
	| Function
		{ $$ = $1; }
	;

CallFunction
	: VAR Parameters
		{ $$ = concat_str( 2 ,$1 ,$2 );}
	;

Function
	: TYPE VAR Parameters CodeBlock
		{ $$ = concat_str( 7, $1," ", $2, $3, "\n", $4, "\n"); }
	| VOID VAR Parameters CodeBlock
		{ $$ = concat_str( 7, "void ", " ",$2, $3, "\n", $4, "\n"); }
	| EMPLOYEE S_BRACKET_ABRE S_BRACKET_CIERRA VAR Parameters CodeBlock
		{ $$ = concat_str( 6, " struct Employee*", $4, $5, "\n", $6, "\n"); }
	| EMPLOYEE VAR Parameters CodeBlock
		{ $$ = concat_str( 6, " struct Employee ", $2, $3, "\n", $4, "\n"); }
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
	| DigOrVar
		{ $$ = $1; }
	| EMPLOYEE VAR
		{ $$ = concat_str( 2, "struct Employee ", $2);}
	| EMPLOYEE S_BRACKET_ABRE S_BRACKET_CIERRA VAR
		{ $$ = concat_str( 2, "struct Employee* ", $4);}
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
	| VAR DigOrVar ASSIGN Exp SEMICOLON Statement
		{ $$ = concat_str( 7, $1, "[", $2, "] = ", $4, ";\n", $6);}
	| EMPLOYEE VAR ASSIGN ReturnEmployee SEMICOLON Statement
		{ $$ = concat_str( 6, "struct Employee ", $2, " = ", $4, ";\n", $6); }
	| EMPLOYEE VAR S_BRACKET_ABRE DigOrVar S_BRACKET_CIERRA ASSIGN EmpValues SEMICOLON Statement
		{ $$ = concat_str( 8, "struct Employee ", $2, "[", $4, "] = {", $7, "};\n", $9); }
	| EMPLOYEE VAR S_BRACKET_ABRE DigOrVar S_BRACKET_CIERRA ASSIGN CallFunction SEMICOLON Statement
		{ $$ = concat_str( 8, "struct Employee ", $2, "[", $4, "] = ", $7, ";\n", $9); }
	| EMPLOYEE VAR ASSIGN CallFunction SEMICOLON Statement
		{ $$ = concat_str( 6, "struct Employee *", $2, " = ", $4, ";\n", $6); }
	| EMPLOYEE VAR S_BRACKET_ABRE DigOrVar S_BRACKET_CIERRA SEMICOLON Statement
		{ $$ = concat_str( 6, "struct Employee *", $2, " = malloc (",$4," * sizeof(struct Employee));\n", $7); } 
	| WHILE PARENTESIS_ABRE Exp PARENTESIS_CIERRA CodeBlock Statement
		{ $$ = concat_str( 6,"while ( ", $3, " )\n", $5, "\n", $6); }
	| IF PARENTESIS_ABRE Exp PARENTESIS_CIERRA CodeBlock Statement
		{ $$ = concat_str( 6, "if ( ", $3, " )\n", $5, "\n", $6) ; }
	| IF PARENTESIS_ABRE Exp PARENTESIS_CIERRA CodeBlock ELSE CodeBlock Statement
		{ $$ = concat_str( 9, "if ( ",  $3, " )\n", $5, "\n", "else\n", $7 , "\n", $8); }
	| DO CodeBlock WHILE PARENTESIS_ABRE Exp PARENTESIS_CIERRA SEMICOLON Statement
		{ $$ = concat_str( 7, "do\n", $2, "\n", "while ( ", $5, " );\n", $8); }
	| FOREACH IN VAR DO C_BRACKET_ABRE FunctionOverEmployee C_BRACKET_CIERRA SEMICOLON Statement
		{ $$ = concat_str( 10, "iterate(", $3, ", (int)sizeof(",$3,")/(int)sizeof(",$3,"[0]),", $6, ");", $9);}
	| RETURN Exp SEMICOLON
		{ $$ = concat_str( 3, "return ", $2, ";");}
	| BREAK SEMICOLON
		{ $$ = "break;\n"; }
	| 
		{ $$ = ""; }
	| GET_NAME VarOrFunc SEMICOLON Statement
		{ $$ = concat_str( 4,"getName(",$2,");\n", $4); }
	| RAISE TEN VarOrFunc SEMICOLON Statement
		{ $$ = concat_str( 4,"raise10(",$3,");\n", $5); }
	| RAISE TWENTY VarOrFunc SEMICOLON Statement
		{ $$ = concat_str( 4,"raise20(",$3,");\n", $5); }
	| RAISE CATEGORY_VAR VarOrFunc SEMICOLON Statement
		{ $$ = concat_str( 4,"raiseCategory(",$3,");\n", $5); }
	;

SpecialFunction
	: VAR SALARYFOR DIGITO TimeLapse
		{ $$ = concat_str( 7, " getSalary( ", $1, ", ", $3, ", ", $4, ")" );}
	| VAR SALARYFOR DIGITO TimeLapse MINUSDEDUCTIONS C_BRACKET_ABRE Deductions C_BRACKET_CIERRA
		{ $$ = concat_str( 8, " getSalary( ", $1, ", ", $3, ", ", $4, ") - ", $7 );}
	| SHOW_EMPLOYEE VAR
		{ $$ = concat_str( 3, "printEmployee( ", $2, ")" ); }
	| PRINT_ALL VarOrFunc
		{ $$ = concat_str( 7, "printAll(", $2, ", (int)sizeof(",$2,")/(int)sizeof(",$2,"[0]) )"); }
	| ReturnEmployee
		{ $$ = $1; }
	;

VarOrFunc
	: VAR
		{ $$ = $1; }
	| CallFunction
		{ $$ = $1; }

ReturnEmployee
	: NAME VAR COMMA LASTNAME VAR COMMA CATEGORY VAR COMMA ID DigOrVar COMMA ANTIQUITY DigOrVar COMMA SALARY DigOrVar
		{ $$ = concat_str( 13,"{ \"", $2, "\", \"", $5, "\", \"", $8, "\", ", $11, ", ", $14, ", ", $17, " }" ); }
	| GET_EMPLOYEE DigOrVar VAR
		{ $$ = concat_str( 9, "getEmployee( ", $3,", ", $2, ", (int)sizeof(",$3,")/(int)sizeof(",$3,"[0]) )"); }
	;

DigOrVar
	: DIGITO
		{ $$ = $1; }
	| VAR
		{ $$ = $1; }
	;

FunctionOverEmployee
	: GET_NAME SEMICOLON
		{ $$ = "getName"; }
	| RAISE TEN
		{ $$ = "raise10"; }
	| RAISE TWENTY
		{ $$ = "raise20"; }
	| RAISE CATEGORY_VAR SEMICOLON
		{ $$ = "raiseCategory"; }
	| SHOW_EMPLOYEE VAR
		{ $$ = concat_str( 3, "printEmployee( ", $2, ")" ); }
	;

Deductions
	:VAR ASSIGN AddExp COMMA Deductions
		{ $$ = concat_str(3, $3, " - ", $5); }
	| VAR ASSIGN AddExp
		{ $$ = $3; }
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
	| VAR DOT VAR
		{ $$ = concat_str(3, $1, ".", $3); }
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