#ifndef lint
static const char yysccsid[] = "@(#)yaccpar	1.9 (Berkeley) 02/21/93";
#endif

#define YYBYACC 1
#define YYMAJOR 1
#define YYMINOR 9
#define YYPATCH 20140101

#define YYEMPTY        (-1)
#define yyclearin      (yychar = YYEMPTY)
#define yyerrok        (yyerrflag = 0)
#define YYRECOVERING() (yyerrflag != 0)

#define YYPREFIX "yy"

#define YYPURE 0

#line 2 "salarium.y"
	
	#include <stdio.h>
	#include <string.h>
	#include <stdlib.h>
	#include <stdbool.h>
	#include <stdarg.h>

	char* string_concat(int argc, ...);

#line 13 "salarium.y"
#ifdef YYSTYPE
#undef  YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
#endif
#ifndef YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
typedef union {
	char* strval;
} YYSTYPE;
#endif /* !YYSTYPE_IS_DECLARED */
#line 40 "y.tab.c"

/* compatibility with bison */
#ifdef YYPARSE_PARAM
/* compatibility with FreeBSD */
# ifdef YYPARSE_PARAM_TYPE
#  define YYPARSE_DECL() yyparse(YYPARSE_PARAM_TYPE YYPARSE_PARAM)
# else
#  define YYPARSE_DECL() yyparse(void *YYPARSE_PARAM)
# endif
#else
# define YYPARSE_DECL() yyparse(void)
#endif

/* Parameters sent to lex. */
#ifdef YYLEX_PARAM
# define YYLEX_DECL() yylex(void *YYLEX_PARAM)
# define YYLEX yylex(YYLEX_PARAM)
#else
# define YYLEX_DECL() yylex(void)
# define YYLEX yylex()
#endif

/* Parameters sent to yyerror. */
#ifndef YYERROR_DECL
#define YYERROR_DECL() yyerror(const char *s)
#endif
#ifndef YYERROR_CALL
#define YYERROR_CALL(msg) yyerror(msg)
#endif

extern int YYPARSE_DECL();

#define PARENTESIS_ABRE 257
#define PARENTESIS_CIERRA 258
#define C_BRACKET_ABRE 259
#define C_BRACKET_CIERRA 260
#define MAIN 261
#define VOID 262
#define WHILE 263
#define IF 264
#define ELSE 265
#define DO 266
#define PLUS 267
#define MINUS 268
#define MULT 269
#define DIV 270
#define MOD 271
#define ASSIGN 272
#define GT 273
#define LT 274
#define GE 275
#define LE 276
#define EQ 277
#define AND 278
#define OR 279
#define NOT 280
#define NE 281
#define TRUE 282
#define FALSE_T 283
#define NULL_T 284
#define BREAK 285
#define COLON 286
#define SEMICOLON 287
#define COMMA 288
#define DOT 289
#define END 290
#define RETURN 291
#define SALARYFOR 292
#define MONTH 293
#define NAME 294
#define SALARY 295
#define RANK 296
#define ID 297
#define LASTNAME 298
#define EMPLOYEE 299
#define DIGITO 300
#define VAR 301
#define TYPE 302
#define STRING 303
#define SHOW_EMPLOYEE 304
#define ANTIQUITY 305
#define CATEGORY 306
#define WEEK 307
#define YEAR 308
#define QUOTATION_MARK 309
#define YYERRCODE 256
static const short yylhs[] = {                           -1,
    0,    0,    7,    7,    8,    8,    9,    5,    5,    6,
    6,    4,   10,   11,   11,   11,   11,   11,   11,   11,
   11,   11,   11,   11,   11,   11,    1,    1,    1,    1,
   23,    2,    3,    3,    3,   13,   16,   16,   16,   16,
   14,   14,   14,   17,   17,   17,   17,   17,   15,   15,
   15,   18,   18,   19,   19,   20,   20,   21,   21,   22,
   22,   22,   22,   22,   22,   22,   22,   12,
};
static const short yylen[] = {                            2,
    2,    1,    2,    1,    4,    4,    3,    2,    0,    3,
    0,    2,    3,    3,    3,    3,    5,    5,    6,    6,
    6,    8,    8,    3,    2,    0,   17,    4,    4,    2,
    3,   17,    1,    1,    1,    1,    1,    3,    3,    3,
    1,    3,    3,    1,    3,    3,    3,    3,    1,    3,
    3,    1,    3,    1,    3,    2,    0,    3,    0,    1,
    1,    1,    1,    1,    1,    4,    3,    6,
};
static const short yydefred[] = {                         0,
    0,    0,    0,    0,    4,    2,    0,    0,    0,    3,
    1,    0,    0,    0,    0,    0,   11,    0,    0,    6,
    0,    5,   12,    0,    7,    0,    0,    0,    0,   62,
   63,   65,    0,    0,    0,    0,   61,    0,   64,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
   37,    0,    0,    0,    0,    0,    0,    0,   25,    0,
    0,    0,    0,    0,    0,    0,   30,    0,    0,    0,
   13,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,   68,   10,   67,    0,    0,
    0,   24,    0,    0,    0,   59,    0,    0,    0,   16,
    0,   14,   15,    0,    0,    0,    0,   38,   39,   40,
    0,    0,    0,    0,    0,    0,    0,    0,    0,   31,
   28,    0,    0,    0,    0,   66,    0,   34,   33,   35,
   29,    0,    0,    0,    0,    0,    0,    0,   18,   17,
   20,    0,   21,    0,    0,   19,   58,    0,    0,    0,
   22,   23,    0,    0,    0,    0,    0,    0,    0,    0,
    0,   27,
};
static const short yydgoto[] = {                          3,
   41,    0,  131,   42,   18,   24,    4,    5,   13,   20,
   43,    6,   44,   45,   46,   47,   48,   49,   50,   97,
  125,   51,   62,
};
static const short yysindex[] = {                      -257,
 -288, -251,    0, -257,    0,    0, -242, -236, -242,    0,
    0, -267, -221, -211, -221, -224,    0, -193, -135,    0,
 -168,    0,    0, -192,    0, -254, -162, -156, -221,    0,
    0,    0, -182, -254, -161, -194,    0, -249,    0, -191,
 -164, -253, -130, -155, -198, -261, -133, -216, -152, -144,
    0, -221, -267, -115, -114, -254, -254, -120,    0, -141,
 -150, -136, -117, -254, -254, -143,    0, -135, -254, -135,
    0, -135, -254, -254, -254, -254, -254, -254, -254, -254,
 -254, -254, -254, -254, -254,    0,    0,    0, -100,  -98,
  -95,    0, -106, -276, -277,    0,  -83, -102, -282,    0,
 -101,    0,    0, -133, -133, -216, -216,    0,    0,    0,
 -198, -198, -198, -198, -261, -152, -221, -221, -254,    0,
    0, -161, -105,  -93,  -99,    0, -135,    0,    0,    0,
    0, -135, -135, -185,  -63,  -92, -135, -254,    0,    0,
    0, -221,    0,  -90,  -87,    0,    0, -135, -135, -161,
    0,    0,  -72,  -65,  -62,  -47,  -54,  -46,  -36,  -42,
  -45,    0,
};
static const short yyrindex[] = {                         0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    1,    0,    0,    0,    0,    0,    0,    2,    0,
    0,    0,    0,    3,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,  101,    0,    0,
    0,    0,    0,    0,   -9, -203,  -75, -225, -154, -246,
    0,    0,    0,  -97,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    5,    0,    0,    0,    2,    0,    2,
    0,    2,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,  -53,  -31,  -70,  -48,    0,    0,    0,
   13,   35,   57,   79, -167, -134,    0,    0,    0,    0,
    0,    0,    0,    0,   15,    0,    2,    0,    0,    0,
    0,    2,    2,    2,    0,    0,    2,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    2,    2,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,
};
static const short yygindex[] = {                         0,
  163,    0,    0,   -5,    0,    0,    0,  256,  265,  -15,
  -66,  271,  -25,    6,  192,   19,   -2,  195,    0,    0,
    0,   62,  -86,
};
#define YYTABLESIZE 388
static const short yytable[] = {                         22,
   55,  100,   26,  102,    1,  103,   17,   64,   60,    8,
  128,   36,    7,   58,   12,   75,   35,  121,   69,   76,
   14,  122,   65,  123,  129,  130,   40,   30,   31,   32,
   89,   90,   49,   70,   16,  136,   86,   19,   96,   98,
   36,   36,   66,  101,    2,   37,   54,   87,   39,    9,
   21,   49,   49,   49,   52,   49,   80,   81,   82,   83,
  139,   49,   49,  153,   25,  140,  141,  143,   73,   74,
  146,   26,  106,  107,   52,   52,   23,   27,   28,  142,
   29,  151,  152,   52,   52,  111,  112,  113,  114,   52,
   53,  104,  105,  135,   56,   53,   30,   31,   32,   33,
   57,  133,  134,   54,   59,   34,   63,   61,   35,   67,
   53,   53,  147,   36,   37,   38,   16,   39,   40,   53,
   53,   26,   68,   55,   54,   84,  148,   27,   28,   71,
   29,   72,   54,   54,   85,   77,   78,   79,  108,  109,
  110,   64,   91,   88,   55,   92,   30,   31,   32,   33,
   93,   94,   55,   55,   95,   34,   99,  117,   35,  118,
   60,  119,  120,   36,   37,   38,   16,   39,   40,   60,
   60,   60,   60,   60,  126,   60,   60,   60,   60,   60,
   60,   60,   41,   60,  127,  132,   66,   50,  138,   60,
   60,   41,   41,  137,  144,  145,  149,   41,   41,   41,
   41,   41,   41,   41,   42,   41,   50,   50,   50,   51,
   50,   41,   41,   42,   42,  154,   50,   50,  150,   42,
   42,   42,   42,   42,   42,   42,   43,   42,   51,   51,
   51,  155,   51,   42,   42,   43,   43,  156,   51,   51,
  157,   43,   43,   43,   43,   43,   43,   43,   44,   43,
  158,  160,  161,  159,  162,   43,   43,  124,    9,   10,
    8,   26,   57,   44,   44,   44,   44,   44,   44,   44,
   46,   44,   56,   15,   11,  115,    0,   44,   44,  116,
    0,    0,    0,    0,    0,   46,   46,   46,   46,   46,
   46,   46,   45,   46,    0,    0,    0,    0,    0,   46,
   46,    0,    0,    0,    0,    0,    0,   45,   45,   45,
   45,   45,   45,   45,   48,   45,    0,    0,    0,    0,
    0,   45,   45,    0,    0,    0,    0,    0,    0,   48,
   48,   48,   48,   48,   48,   48,   47,   48,    0,    0,
    0,    0,    0,   48,   48,    0,    0,    0,    0,    0,
    0,   47,   47,   47,   47,   47,   47,   47,    0,   47,
    0,    0,    0,    0,    0,   47,   47,   60,   60,   60,
   60,   60,    0,   60,   60,   60,   60,   60,   60,   60,
    0,   60,    0,    0,    0,    0,    0,   60,
};
static const short yycheck[] = {                         15,
   26,   68,  257,   70,  262,   72,   12,  257,   34,  261,
  293,  258,  301,   29,  257,  277,  294,  294,  272,  281,
  257,  298,  272,  301,  307,  308,  304,  282,  283,  284,
   56,   57,  258,  287,  302,  122,   52,  259,   64,   65,
  287,  288,  292,   69,  302,  300,  301,   53,  303,  301,
  262,  277,  278,  279,  258,  281,  273,  274,  275,  276,
  127,  287,  288,  150,  258,  132,  133,  134,  267,  268,
  137,  257,   75,   76,  278,  279,  301,  263,  264,  265,
  266,  148,  149,  287,  288,   80,   81,   82,   83,  258,
  258,   73,   74,  119,  257,  288,  282,  283,  284,  285,
  257,  117,  118,  258,  287,  291,  301,  269,  294,  301,
  278,  279,  138,  299,  300,  301,  302,  303,  304,  287,
  288,  257,  287,  258,  279,  278,  142,  263,  264,  260,
  266,  287,  287,  288,  279,  269,  270,  271,   77,   78,
   79,  257,  263,  258,  279,  287,  282,  283,  284,  285,
  301,  288,  287,  288,  272,  291,  300,  258,  294,  258,
  258,  257,  269,  299,  300,  301,  302,  303,  304,  267,
  268,  269,  270,  271,  258,  273,  274,  275,  276,  277,
  278,  279,  258,  281,  287,  287,  292,  258,  288,  287,
  288,  267,  268,  287,  258,  288,  287,  273,  274,  275,
  276,  277,  278,  279,  258,  281,  277,  278,  279,  258,
  281,  287,  288,  267,  268,  288,  287,  288,  306,  273,
  274,  275,  276,  277,  278,  279,  258,  281,  277,  278,
  279,  297,  281,  287,  288,  267,  268,  300,  287,  288,
  288,  273,  274,  275,  276,  277,  278,  279,  258,  281,
  305,  288,  295,  300,  300,  287,  288,   95,  258,    4,
  258,  260,  258,  273,  274,  275,  276,  277,  278,  279,
  258,  281,  258,    9,    4,   84,   -1,  287,  288,   85,
   -1,   -1,   -1,   -1,   -1,  273,  274,  275,  276,  277,
  278,  279,  258,  281,   -1,   -1,   -1,   -1,   -1,  287,
  288,   -1,   -1,   -1,   -1,   -1,   -1,  273,  274,  275,
  276,  277,  278,  279,  258,  281,   -1,   -1,   -1,   -1,
   -1,  287,  288,   -1,   -1,   -1,   -1,   -1,   -1,  273,
  274,  275,  276,  277,  278,  279,  258,  281,   -1,   -1,
   -1,   -1,   -1,  287,  288,   -1,   -1,   -1,   -1,   -1,
   -1,  273,  274,  275,  276,  277,  278,  279,   -1,  281,
   -1,   -1,   -1,   -1,   -1,  287,  288,  267,  268,  269,
  270,  271,   -1,  273,  274,  275,  276,  277,  278,  279,
   -1,  281,   -1,   -1,   -1,   -1,   -1,  287,
};
#define YYFINAL 3
#ifndef YYDEBUG
#define YYDEBUG 1
#endif
#define YYMAXTOKEN 309
#define YYTRANSLATE(a) ((a) > YYMAXTOKEN ? (YYMAXTOKEN + 1) : (a))
#if YYDEBUG
static const char *yyname[] = {

"end-of-file",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"PARENTESIS_ABRE",
"PARENTESIS_CIERRA","C_BRACKET_ABRE","C_BRACKET_CIERRA","MAIN","VOID","WHILE",
"IF","ELSE","DO","PLUS","MINUS","MULT","DIV","MOD","ASSIGN","GT","LT","GE","LE",
"EQ","AND","OR","NOT","NE","TRUE","FALSE_T","NULL_T","BREAK","COLON",
"SEMICOLON","COMMA","DOT","END","RETURN","SALARYFOR","MONTH","NAME","SALARY",
"RANK","ID","LASTNAME","EMPLOYEE","DIGITO","VAR","TYPE","STRING",
"SHOW_EMPLOYEE","ANTIQUITY","CATEGORY","WEEK","YEAR","QUOTATION_MARK",
"illegal-symbol",
};
static const char *yyrule[] = {
"$accept : Program",
"Program : Functions Main",
"Program : Main",
"Functions : Functions Function",
"Functions : Function",
"Function : TYPE VAR Parameters CodeBlock",
"Function : VOID VAR Parameters CodeBlock",
"Parameters : PARENTESIS_ABRE FirstVariable PARENTESIS_CIERRA",
"FirstVariable : Variable CommaVariable",
"FirstVariable :",
"CommaVariable : CommaVariable COMMA Variable",
"CommaVariable :",
"Variable : TYPE VAR",
"CodeBlock : C_BRACKET_ABRE Statement C_BRACKET_CIERRA",
"Statement : Variable SEMICOLON Statement",
"Statement : Expression SEMICOLON Statement",
"Statement : SpecialFunction SEMICOLON Statement",
"Statement : Variable ASSIGN Expression SEMICOLON Statement",
"Statement : VAR ASSIGN Expression SEMICOLON Statement",
"Statement : EMPLOYEE VAR ASSIGN SpecialFunction SEMICOLON Statement",
"Statement : WHILE PARENTESIS_ABRE Expression PARENTESIS_CIERRA CodeBlock Statement",
"Statement : IF PARENTESIS_ABRE Expression PARENTESIS_CIERRA CodeBlock Statement",
"Statement : IF PARENTESIS_ABRE Expression PARENTESIS_CIERRA CodeBlock ELSE CodeBlock Statement",
"Statement : DO CodeBlock WHILE PARENTESIS_ABRE Expression PARENTESIS_CIERRA SEMICOLON Statement",
"Statement : RETURN Expression SEMICOLON",
"Statement : BREAK SEMICOLON",
"Statement :",
"SpecialFunction : NAME Var_Str COMMA LASTNAME Var_Str COMMA CATEGORY Var_Str COMMA ID DIGITO COMMA ANTIQUITY DIGITO COMMA SALARY DIGITO",
"SpecialFunction : NAME Var_Str COMMA NAME",
"SpecialFunction : VAR SALARYFOR DIGITO TimeLapse",
"SpecialFunction : SHOW_EMPLOYEE VAR",
"Var_Str : MULT VAR MULT",
"NewEmployee : NAME STRING COMMA LASTNAME STRING COMMA CATEGORY STRING COMMA ID DIGITO COMMA ANTIQUITY DIGITO COMMA SALARY DIGITO",
"TimeLapse : WEEK",
"TimeLapse : MONTH",
"TimeLapse : YEAR",
"Expression : ConditionalOrExpression",
"MultiplicativeExpression : Term",
"MultiplicativeExpression : MultiplicativeExpression MULT Term",
"MultiplicativeExpression : MultiplicativeExpression DIV Term",
"MultiplicativeExpression : MultiplicativeExpression MOD Term",
"AdditiveExpression : MultiplicativeExpression",
"AdditiveExpression : AdditiveExpression PLUS MultiplicativeExpression",
"AdditiveExpression : AdditiveExpression MINUS MultiplicativeExpression",
"RelationalExpression : AdditiveExpression",
"RelationalExpression : RelationalExpression LT AdditiveExpression",
"RelationalExpression : RelationalExpression GT AdditiveExpression",
"RelationalExpression : RelationalExpression LE AdditiveExpression",
"RelationalExpression : RelationalExpression GE AdditiveExpression",
"EqualityExpression : RelationalExpression",
"EqualityExpression : EqualityExpression EQ RelationalExpression",
"EqualityExpression : EqualityExpression NE RelationalExpression",
"ConditionalAndExpression : EqualityExpression",
"ConditionalAndExpression : ConditionalAndExpression AND EqualityExpression",
"ConditionalOrExpression : ConditionalAndExpression",
"ConditionalOrExpression : ConditionalOrExpression OR ConditionalAndExpression",
"Value_1 : Expression Value_2",
"Value_1 :",
"Value_2 : Value_2 COMMA Expression",
"Value_2 :",
"Term : VAR",
"Term : DIGITO",
"Term : TRUE",
"Term : FALSE_T",
"Term : STRING",
"Term : NULL_T",
"Term : VAR PARENTESIS_ABRE Value_1 PARENTESIS_CIERRA",
"Term : PARENTESIS_ABRE Expression PARENTESIS_CIERRA",
"Main : TYPE MAIN PARENTESIS_ABRE VOID PARENTESIS_CIERRA CodeBlock",

};
#endif

int      yydebug;
int      yynerrs;

int      yyerrflag;
int      yychar;
YYSTYPE  yyval;
YYSTYPE  yylval;

/* define the initial stack-sizes */
#ifdef YYSTACKSIZE
#undef YYMAXDEPTH
#define YYMAXDEPTH  YYSTACKSIZE
#else
#ifdef YYMAXDEPTH
#define YYSTACKSIZE YYMAXDEPTH
#else
#define YYSTACKSIZE 10000
#define YYMAXDEPTH  10000
#endif
#endif

#define YYINITSTACKSIZE 200

typedef struct {
    unsigned stacksize;
    short    *s_base;
    short    *s_mark;
    short    *s_last;
    YYSTYPE  *l_base;
    YYSTYPE  *l_mark;
} YYSTACKDATA;
/* variables for the parser stack */
static YYSTACKDATA yystack;
#line 279 "salarium.y"

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
#line 460 "y.tab.c"

#if YYDEBUG
#include <stdio.h>		/* needed for printf */
#endif

#include <stdlib.h>	/* needed for malloc, etc */
#include <string.h>	/* needed for memset */

/* allocate initial stack or double stack size, up to YYMAXDEPTH */
static int yygrowstack(YYSTACKDATA *data)
{
    int i;
    unsigned newsize;
    short *newss;
    YYSTYPE *newvs;

    if ((newsize = data->stacksize) == 0)
        newsize = YYINITSTACKSIZE;
    else if (newsize >= YYMAXDEPTH)
        return -1;
    else if ((newsize *= 2) > YYMAXDEPTH)
        newsize = YYMAXDEPTH;

    i = (int) (data->s_mark - data->s_base);
    newss = (short *)realloc(data->s_base, newsize * sizeof(*newss));
    if (newss == 0)
        return -1;

    data->s_base = newss;
    data->s_mark = newss + i;

    newvs = (YYSTYPE *)realloc(data->l_base, newsize * sizeof(*newvs));
    if (newvs == 0)
        return -1;

    data->l_base = newvs;
    data->l_mark = newvs + i;

    data->stacksize = newsize;
    data->s_last = data->s_base + newsize - 1;
    return 0;
}

#if YYPURE || defined(YY_NO_LEAKS)
static void yyfreestack(YYSTACKDATA *data)
{
    free(data->s_base);
    free(data->l_base);
    memset(data, 0, sizeof(*data));
}
#else
#define yyfreestack(data) /* nothing */
#endif

#define YYABORT  goto yyabort
#define YYREJECT goto yyabort
#define YYACCEPT goto yyaccept
#define YYERROR  goto yyerrlab

int
YYPARSE_DECL()
{
    int yym, yyn, yystate;
#if YYDEBUG
    const char *yys;

    if ((yys = getenv("YYDEBUG")) != 0)
    {
        yyn = *yys;
        if (yyn >= '0' && yyn <= '9')
            yydebug = yyn - '0';
    }
#endif

    yynerrs = 0;
    yyerrflag = 0;
    yychar = YYEMPTY;
    yystate = 0;

#if YYPURE
    memset(&yystack, 0, sizeof(yystack));
#endif

    if (yystack.s_base == NULL && yygrowstack(&yystack)) goto yyoverflow;
    yystack.s_mark = yystack.s_base;
    yystack.l_mark = yystack.l_base;
    yystate = 0;
    *yystack.s_mark = 0;

yyloop:
    if ((yyn = yydefred[yystate]) != 0) goto yyreduce;
    if (yychar < 0)
    {
        if ((yychar = YYLEX) < 0) yychar = 0;
#if YYDEBUG
        if (yydebug)
        {
            yys = yyname[YYTRANSLATE(yychar)];
            printf("%sdebug: state %d, reading %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
    }
    if ((yyn = yysindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: state %d, shifting to state %d\n",
                    YYPREFIX, yystate, yytable[yyn]);
#endif
        if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack))
        {
            goto yyoverflow;
        }
        yystate = yytable[yyn];
        *++yystack.s_mark = yytable[yyn];
        *++yystack.l_mark = yylval;
        yychar = YYEMPTY;
        if (yyerrflag > 0)  --yyerrflag;
        goto yyloop;
    }
    if ((yyn = yyrindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
        yyn = yytable[yyn];
        goto yyreduce;
    }
    if (yyerrflag) goto yyinrecovery;

    yyerror("syntax error");

    goto yyerrlab;

yyerrlab:
    ++yynerrs;

yyinrecovery:
    if (yyerrflag < 3)
    {
        yyerrflag = 3;
        for (;;)
        {
            if ((yyn = yysindex[*yystack.s_mark]) && (yyn += YYERRCODE) >= 0 &&
                    yyn <= YYTABLESIZE && yycheck[yyn] == YYERRCODE)
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: state %d, error recovery shifting\
 to state %d\n", YYPREFIX, *yystack.s_mark, yytable[yyn]);
#endif
                if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack))
                {
                    goto yyoverflow;
                }
                yystate = yytable[yyn];
                *++yystack.s_mark = yytable[yyn];
                *++yystack.l_mark = yylval;
                goto yyloop;
            }
            else
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: error recovery discarding state %d\n",
                            YYPREFIX, *yystack.s_mark);
#endif
                if (yystack.s_mark <= yystack.s_base) goto yyabort;
                --yystack.s_mark;
                --yystack.l_mark;
            }
        }
    }
    else
    {
        if (yychar == 0) goto yyabort;
#if YYDEBUG
        if (yydebug)
        {
            yys = yyname[YYTRANSLATE(yychar)];
            printf("%sdebug: state %d, error recovery discards token %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
        yychar = YYEMPTY;
        goto yyloop;
    }

yyreduce:
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: state %d, reducing by rule %d (%s)\n",
                YYPREFIX, yystate, yyn, yyrule[yyn]);
#endif
    yym = yylen[yyn];
    if (yym)
        yyval = yystack.l_mark[1-yym];
    else
        memset(&yyval, 0, sizeof yyval);
    switch (yyn)
    {
case 1:
#line 72 "salarium.y"
	{ printf("%s%s%s\n", yystack.l_mark[-1].strval, "\'", yystack.l_mark[0].strval); }
break;
case 2:
#line 74 "salarium.y"
	{ printf("%s\n", yystack.l_mark[0].strval); }
break;
case 3:
#line 79 "salarium.y"
	{ yyval.strval = concat_str( 3, yystack.l_mark[-1].strval, "\n", yystack.l_mark[0].strval); }
break;
case 4:
#line 81 "salarium.y"
	{ yyval.strval = yystack.l_mark[0].strval; }
break;
case 5:
#line 86 "salarium.y"
	{ yyval.strval = concat_str(7, yystack.l_mark[-3].strval," ", yystack.l_mark[-2].strval, yystack.l_mark[-1].strval, "\n", yystack.l_mark[0].strval, "\n"); }
break;
case 6:
#line 88 "salarium.y"
	{ yyval.strval = concat_str(7, "void ", " ",yystack.l_mark[-2].strval, yystack.l_mark[-1].strval, "\n", yystack.l_mark[0].strval, "\n"); }
break;
case 7:
#line 93 "salarium.y"
	{ yyval.strval = concat_str( 3, "( ", yystack.l_mark[-1].strval, " )"); }
break;
case 8:
#line 98 "salarium.y"
	{ yyval.strval = concat_str( 2, yystack.l_mark[-1].strval, yystack.l_mark[0].strval); }
break;
case 9:
#line 100 "salarium.y"
	{ yyval.strval = ""; }
break;
case 10:
#line 105 "salarium.y"
	{ yyval.strval = concat_str( 3, yystack.l_mark[-2].strval,", ", yystack.l_mark[0].strval); }
break;
case 11:
#line 107 "salarium.y"
	{ yyval.strval = ""; }
break;
case 12:
#line 112 "salarium.y"
	{ yyval.strval = concat_str( 3, yystack.l_mark[-1].strval, " ", yystack.l_mark[0].strval); }
break;
case 13:
#line 117 "salarium.y"
	{ yyval.strval = concat_str( 3, "{\n", yystack.l_mark[-1].strval, "\n}"); }
break;
case 14:
#line 122 "salarium.y"
	{ yyval.strval = concat_str( 3, yystack.l_mark[-2].strval, ";\n",  yystack.l_mark[0].strval); }
break;
case 15:
#line 124 "salarium.y"
	{ yyval.strval = concat_str( 3, yystack.l_mark[-2].strval, ";\n", yystack.l_mark[0].strval); }
break;
case 16:
#line 126 "salarium.y"
	{ yyval.strval = concat_str( 3, yystack.l_mark[-2].strval, ";\n, $3"); }
break;
case 17:
#line 128 "salarium.y"
	{ yyval.strval = concat_str( 5, yystack.l_mark[-4].strval, " = ", yystack.l_mark[-2].strval, ";\n", yystack.l_mark[0].strval); }
break;
case 18:
#line 130 "salarium.y"
	{ yyval.strval = concat_str( 5, yystack.l_mark[-4].strval, " = ", yystack.l_mark[-2].strval, ";\n", yystack.l_mark[0].strval); }
break;
case 19:
#line 132 "salarium.y"
	{ yyval.strval = concat_str( 5, "struct Employee ", yystack.l_mark[-4].strval, " = ", yystack.l_mark[-2].strval, ";\n", yystack.l_mark[0].strval); }
break;
case 20:
#line 134 "salarium.y"
	{ yyval.strval = concat_str( 6,"while ( ", yystack.l_mark[-3].strval, " )\n", yystack.l_mark[-1].strval, "\n", yystack.l_mark[0].strval); }
break;
case 21:
#line 136 "salarium.y"
	{ yyval.strval = concat_str( 6, "if ( ", yystack.l_mark[-3].strval, " )\n", yystack.l_mark[-1].strval, "\n", yystack.l_mark[0].strval) ; }
break;
case 22:
#line 138 "salarium.y"
	{ yyval.strval = concat_str( 9, "if ( ",  yystack.l_mark[-5].strval, " )\n", yystack.l_mark[-3].strval, "\n", "else\n", yystack.l_mark[-1].strval , "\n", yystack.l_mark[0].strval); }
break;
case 23:
#line 140 "salarium.y"
	{ yyval.strval = concat_str( 7, "do\n", yystack.l_mark[-6].strval, "\n", "while ( ", yystack.l_mark[-3].strval, " );\n", yystack.l_mark[0].strval); }
break;
case 24:
#line 142 "salarium.y"
	{ yyval.strval = concat_str( 3, "return ", yystack.l_mark[-1].strval, ";");}
break;
case 25:
#line 144 "salarium.y"
	{ yyval.strval = "break;\n"; }
break;
case 26:
#line 146 "salarium.y"
	{ yyval.strval = ""; }
break;
case 27:
#line 151 "salarium.y"
	{ yyval.strval = concat_str( 13,"newEmployee( ", yystack.l_mark[-15].strval, ", ", yystack.l_mark[-12].strval, ", ", yystack.l_mark[-9].strval, ", ", yystack.l_mark[-6].strval, ", ", yystack.l_mark[-3].strval, ", ", yystack.l_mark[0].strval, ")" ); }
break;
case 28:
#line 153 "salarium.y"
	{ yyval.strval = yystack.l_mark[-2].strval; }
break;
case 29:
#line 155 "salarium.y"
	{ yyval.strval = concat_str( 7, " getSalary( ", yystack.l_mark[-3].strval, ", ", yystack.l_mark[-1].strval, ", ", yystack.l_mark[0].strval, ");\n" );}
break;
case 30:
#line 157 "salarium.y"
	{ yyval.strval = concat_str( 3, " printEmployee( ", yystack.l_mark[0].strval, ");\n");}
break;
case 31:
#line 162 "salarium.y"
	{ yyval.strval = concat_str(3, "\"", yystack.l_mark[-1].strval, "\""); }
break;
case 32:
#line 167 "salarium.y"
	{ yyval.strval = concat_str( 13,"newEmployee( ", yystack.l_mark[-15].strval, ", ", yystack.l_mark[-12].strval, ", ", yystack.l_mark[-9].strval, ", ", yystack.l_mark[-6].strval, ", ", yystack.l_mark[-3].strval, ", ", yystack.l_mark[0].strval, ");" ); }
break;
case 33:
#line 172 "salarium.y"
	{ yyval.strval = yystack.l_mark[0].strval; }
break;
case 34:
#line 174 "salarium.y"
	{ yyval.strval = yystack.l_mark[0].strval; }
break;
case 35:
#line 176 "salarium.y"
	{ yyval.strval = yystack.l_mark[0].strval; }
break;
case 36:
#line 181 "salarium.y"
	{ yyval.strval = yystack.l_mark[0].strval; }
break;
case 37:
#line 186 "salarium.y"
	{ yyval.strval = yystack.l_mark[0].strval; }
break;
case 38:
#line 188 "salarium.y"
	{ yyval.strval = concat_str(3, yystack.l_mark[-2].strval, " * ", yystack.l_mark[0].strval); }
break;
case 39:
#line 190 "salarium.y"
	{ yyval.strval = concat_str(3, yystack.l_mark[-2].strval, " / ", yystack.l_mark[0].strval); }
break;
case 40:
#line 192 "salarium.y"
	{ yyval.strval = concat_str(3, yystack.l_mark[-2].strval, " % ", yystack.l_mark[0].strval); }
break;
case 41:
#line 197 "salarium.y"
	{ yyval.strval = yystack.l_mark[0].strval; }
break;
case 42:
#line 199 "salarium.y"
	{ yyval.strval = concat_str(3, yystack.l_mark[-2].strval, " + ", yystack.l_mark[0].strval); }
break;
case 43:
#line 201 "salarium.y"
	{ yyval.strval = concat_str(3, yystack.l_mark[-2].strval, " - ", yystack.l_mark[0].strval); }
break;
case 44:
#line 206 "salarium.y"
	{ yyval.strval = yystack.l_mark[0].strval; }
break;
case 45:
#line 208 "salarium.y"
	{ yyval.strval = concat_str(3, yystack.l_mark[-2].strval, " < ", yystack.l_mark[0].strval); }
break;
case 46:
#line 210 "salarium.y"
	{ yyval.strval = concat_str(3, yystack.l_mark[-2].strval, " > ", yystack.l_mark[0].strval); }
break;
case 47:
#line 212 "salarium.y"
	{ yyval.strval = concat_str(3, yystack.l_mark[-2].strval, " <= ", yystack.l_mark[0].strval); }
break;
case 48:
#line 214 "salarium.y"
	{ yyval.strval = concat_str(3, yystack.l_mark[-2].strval, " >= ", yystack.l_mark[0].strval); }
break;
case 49:
#line 219 "salarium.y"
	{ yyval.strval = yystack.l_mark[0].strval; }
break;
case 50:
#line 221 "salarium.y"
	{ yyval.strval = concat_str(3, yystack.l_mark[-2].strval, " == ", yystack.l_mark[0].strval); }
break;
case 51:
#line 223 "salarium.y"
	{ yyval.strval = concat_str(3, yystack.l_mark[-2].strval, " != ", yystack.l_mark[0].strval); }
break;
case 52:
#line 228 "salarium.y"
	{ yyval.strval = yystack.l_mark[0].strval; }
break;
case 53:
#line 230 "salarium.y"
	{ yyval.strval = concat_str(3, yystack.l_mark[-2].strval, " && ", yystack.l_mark[0].strval); }
break;
case 54:
#line 235 "salarium.y"
	{ yyval.strval = yystack.l_mark[0].strval; }
break;
case 55:
#line 237 "salarium.y"
	{ yyval.strval = concat_str(3, yystack.l_mark[-2].strval, " || ", yystack.l_mark[0].strval); }
break;
case 56:
#line 242 "salarium.y"
	{ yyval.strval = concat_str( 2, yystack.l_mark[-1].strval, yystack.l_mark[0].strval); }
break;
case 57:
#line 244 "salarium.y"
	{ yyval.strval = ""; }
break;
case 58:
#line 249 "salarium.y"
	{ yyval.strval = concat_str( 3, yystack.l_mark[-2].strval, ", ", yystack.l_mark[0].strval); }
break;
case 59:
#line 251 "salarium.y"
	{ yyval.strval = ""; }
break;
case 60:
#line 256 "salarium.y"
	{ yyval.strval = yystack.l_mark[0].strval; }
break;
case 61:
#line 258 "salarium.y"
	{ yyval.strval = yystack.l_mark[0].strval; }
break;
case 62:
#line 260 "salarium.y"
	{ yyval.strval = "true"; }
break;
case 63:
#line 262 "salarium.y"
	{ yyval.strval = "FALSE_T"; }
break;
case 64:
#line 264 "salarium.y"
	{ yyval.strval = yystack.l_mark[0].strval; }
break;
case 65:
#line 266 "salarium.y"
	{ yyval.strval = "NULL_T"; }
break;
case 66:
#line 268 "salarium.y"
	{ yyval.strval = concat_str( 4, yystack.l_mark[-3].strval, "( ", yystack.l_mark[-1].strval, " )"); }
break;
case 67:
#line 270 "salarium.y"
	{ yyval.strval = concat_str( 3, "( ", yystack.l_mark[-1].strval, " )"); }
break;
case 68:
#line 275 "salarium.y"
	{ yyval.strval = concat_str(4,"#include \"includer.h\"\n", yystack.l_mark[-5].strval, "main ()\n",yystack.l_mark[0].strval); }
break;
#line 934 "y.tab.c"
    }
    yystack.s_mark -= yym;
    yystate = *yystack.s_mark;
    yystack.l_mark -= yym;
    yym = yylhs[yyn];
    if (yystate == 0 && yym == 0)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: after reduction, shifting from state 0 to\
 state %d\n", YYPREFIX, YYFINAL);
#endif
        yystate = YYFINAL;
        *++yystack.s_mark = YYFINAL;
        *++yystack.l_mark = yyval;
        if (yychar < 0)
        {
            if ((yychar = YYLEX) < 0) yychar = 0;
#if YYDEBUG
            if (yydebug)
            {
                yys = yyname[YYTRANSLATE(yychar)];
                printf("%sdebug: state %d, reading %d (%s)\n",
                        YYPREFIX, YYFINAL, yychar, yys);
            }
#endif
        }
        if (yychar == 0) goto yyaccept;
        goto yyloop;
    }
    if ((yyn = yygindex[yym]) && (yyn += yystate) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yystate)
        yystate = yytable[yyn];
    else
        yystate = yydgoto[yym];
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: after reduction, shifting from state %d \
to state %d\n", YYPREFIX, *yystack.s_mark, yystate);
#endif
    if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack))
    {
        goto yyoverflow;
    }
    *++yystack.s_mark = (short) yystate;
    *++yystack.l_mark = yyval;
    goto yyloop;

yyoverflow:
    yyerror("yacc stack overflow");

yyabort:
    yyfreestack(&yystack);
    return (1);

yyaccept:
    yyfreestack(&yystack);
    return (0);
}
