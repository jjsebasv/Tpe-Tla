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
#define S_BRACKET_ABRE 261
#define S_BRACKET_CIERRA 262
#define MAIN 263
#define VOID 264
#define WHILE 265
#define IF 266
#define ELSE 267
#define DO 268
#define PLUS 269
#define MINUS 270
#define MULT 271
#define DIV 272
#define MOD 273
#define ASSIGN 274
#define GT 275
#define LT 276
#define GE 277
#define LE 278
#define EQ 279
#define AND 280
#define OR 281
#define NOT 282
#define NE 283
#define TRUE 284
#define FALSE_T 285
#define NULL_T 286
#define BREAK 287
#define COLON 288
#define SEMICOLON 289
#define COMMA 290
#define DOT 291
#define END 292
#define RETURN 293
#define SALARYFOR 294
#define MONTH 295
#define NAME 296
#define SALARY 297
#define RANK 298
#define ID 299
#define LASTNAME 300
#define EMPLOYEE 301
#define DIGITO 302
#define VAR 303
#define TYPE 304
#define STRING 305
#define SHOW_EMPLOYEE 306
#define ANTIQUITY 307
#define CATEGORY 308
#define WEEK 309
#define YEAR 310
#define QUOTATION_MARK 311
#define YYERRCODE 256
static const short yylhs[] = {                           -1,
    0,    0,    6,    6,    7,    7,    8,    4,    4,    5,
    5,    3,    9,   10,   10,   10,   10,   10,   10,   10,
   10,   10,   10,   10,   10,   10,   10,   10,    1,    1,
    1,   22,   22,    2,    2,    2,   12,   15,   15,   15,
   15,   13,   13,   13,   16,   16,   16,   16,   16,   14,
   14,   14,   17,   17,   18,   18,   19,   19,   20,   20,
   21,   21,   21,   21,   21,   21,   21,   21,   21,   21,
   11,
};
static const short yylen[] = {                            2,
    2,    1,    2,    1,    4,    4,    3,    2,    0,    3,
    0,    2,    3,    3,    3,    3,    5,    5,    5,    6,
    9,    6,    6,    8,    8,    3,    2,    0,   17,    4,
    2,    3,    1,    1,    1,    1,    1,    1,    3,    3,
    3,    1,    3,    3,    1,    3,    3,    3,    3,    1,
    3,    3,    1,    3,    1,    3,    2,    0,    3,    0,
    1,    1,    1,    1,    1,    1,    6,    6,    4,    3,
    6,
};
static const short yydefred[] = {                         0,
    0,    0,    0,    0,    4,    2,    0,    0,    0,    3,
    1,    0,    0,    0,    0,    0,   11,    0,    0,    6,
    0,    5,   12,    0,    7,    0,    0,    0,    0,   63,
   64,   66,    0,    0,    0,    0,   62,    0,   65,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
   38,    0,    0,    0,    0,    0,    0,    0,   27,    0,
    0,    0,    0,    0,    0,    0,   31,    0,    0,    0,
   13,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,   71,   10,   70,    0,    0,
    0,   26,    0,    0,    0,   60,    0,    0,    0,    0,
    0,   16,    0,    0,    0,   14,   15,    0,    0,    0,
    0,   39,   40,   41,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,   69,    0,
    0,    0,   35,   34,   36,   30,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,   19,   17,   18,
   22,    0,   23,    0,    0,    0,   20,   59,   68,   67,
    0,    0,    0,    0,    0,   24,   25,    0,    0,    0,
    0,   32,   21,    0,    0,    0,    0,    0,    0,    0,
   29,
};
static const short yydgoto[] = {                          3,
   41,  136,   42,   18,   24,    4,    5,   13,   20,   43,
    6,   44,   45,   46,   47,   48,   49,   50,   97,  128,
   51,  165,
};
static const short yysindex[] = {                      -261,
 -273, -258,    0, -261,    0,    0, -218, -180, -218,    0,
    0, -221, -165, -167, -165, -200,    0, -150, -152,    0,
 -141,    0,    0, -171,    0, -235, -133, -132, -165,    0,
    0,    0, -153, -235, -161, -160,    0, -246,    0, -155,
 -134, -266,  -91, -118, -207, -219, -255, -191, -106,  -94,
    0, -165, -221, -192,  -83, -235, -235,  -77,    0, -100,
  -99, -249, -235, -214, -235, -112,    0, -152, -250, -152,
    0, -152, -235, -235, -235, -235, -235, -235, -235, -235,
 -235, -235, -235, -235, -235,    0,    0,    0,  -64,  -63,
  -59,    0, -101, -102, -277,    0,  -49,  -51,  -47,  -75,
 -234,    0, -237,  -62,  -61,    0,    0, -255, -255, -191,
 -191,    0,    0,    0, -207, -207, -207, -207, -219, -106,
 -165, -165, -235,  -74,  -32,  -60,  -58,  -55,    0,  -54,
  -53, -152,    0,    0,    0,    0, -152, -152, -152, -175,
  -22,  -50,  -35, -152, -235,  -52,  -36,    0,    0,    0,
    0, -165,    0,  -40,  -56,  -34,    0,    0,    0,    0,
 -152, -152,  -29,  -37,  -21,    0,    0,  -20,  -34, -152,
  -45,    0,    0,  -31,  -14,  -30,  -27,  -12,  -42,  -23,
    0,
};
static const short yyrindex[] = {                         0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,   22,    0,    0,    0,    0,    0,    0,   29,    0,
    0,    0,    0,   33,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,  104,    0,    0,
    0,    0,    0,    0,  -33,   58,  -97,   52, -248, -231,
    0,    0,    0, -113,    0,    0,    0,    0,    0,    0,
    0,    0,   34,    0,    0,    0,    0,   29,    0,   29,
    0,   29,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,  104,    0,    0,    0,    0,  -73,  -57,   71,
   76,    0,    0,    0,  -17,    7,   23,   47,   82, -143,
    0,    0,    0,    0,    0,    0,    0,   35,    0,    0,
    0,   29,    0,    0,    0,    0,   29,   29,   29,   29,
    0,    0,    0,   29,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
   29,   29,    0,    5,    0,    0,    0,    0,    0,   29,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,
};
static const short yygindex[] = {                         0,
  -48,    0,    1,    0,    0,    0,  291,  298,  -15,  -66,
  304,  -25,   19,  225,   49,   64,  226,    0,    0,    0,
    2,  145,
};
#define YYTABLESIZE 393
static const short yytable[] = {                         22,
   55,  102,    1,  106,    8,  107,   26,   69,   60,   55,
   63,   94,   17,   58,   64,   77,   78,   79,   35,   63,
  104,   26,   70,   64,   95,  126,   37,   65,   40,    7,
   89,   90,   55,   30,   31,   32,   86,   96,   12,  100,
   55,   55,    2,  105,    9,   35,  127,   66,   30,   31,
   32,   37,  103,   87,   39,   40,   66,   37,   37,   75,
  133,   73,   74,   76,   63,  148,   37,   54,   64,   39,
  149,  150,  151,  153,  134,  135,   14,  157,  112,  113,
  114,   26,   16,   80,   81,   82,   83,   98,   99,   27,
   28,  152,   29,   19,  166,  167,   21,  141,  115,  116,
  117,  118,   23,  173,   26,  139,  140,   25,   30,   31,
   32,   33,   27,   28,   56,   29,   52,   34,   53,  158,
   35,  108,  109,   56,   57,   36,   37,   38,   16,   39,
   40,   30,   31,   32,   33,   59,  161,   56,  110,  111,
   34,   61,   62,   35,   61,   56,   56,   67,   36,   37,
   38,   16,   39,   40,   68,   61,   61,   61,   61,   61,
   42,   61,   61,   61,   61,   61,   61,   61,   71,   61,
   72,   42,   42,   84,   88,   61,   61,   42,   42,   42,
   42,   42,   42,   42,   43,   42,   85,   91,   92,  101,
   93,   42,   42,  121,  122,   43,   43,  123,  124,  125,
   44,   43,   43,   43,   43,   43,   43,   43,  129,   43,
  130,   44,   44,  132,  131,   43,   43,   44,   44,   44,
   44,   44,   44,   44,   45,   44,  137,  138,  142,  143,
  144,   44,   44,   66,  145,  154,  146,  147,  156,  155,
   47,   45,   45,   45,   45,   45,   45,   45,  162,   45,
  159,  163,  169,  174,  180,   45,   45,   47,   47,   47,
   47,   47,   47,   47,   46,   47,  160,  170,  164,  171,
  175,   47,   47,  168,  178,  176,  177,  179,  181,    9,
   49,   46,   46,   46,   46,   46,   46,   46,   28,   46,
    8,   58,   57,   33,   10,   46,   46,   49,   49,   49,
   49,   49,   49,   49,   48,   49,   15,   11,  119,   50,
  120,   49,   49,  172,    0,   53,    0,    0,    0,    0,
    0,   48,   48,   48,   48,   48,   48,   48,   51,   48,
   50,   50,   50,   52,   50,   48,   48,   53,   53,   54,
   50,   50,    0,    0,    0,    0,   53,   53,    0,   51,
   51,   51,    0,   51,   52,   52,   52,    0,   52,   51,
   51,   54,   54,    0,   52,   52,    0,    0,    0,    0,
   54,   54,   61,   61,   61,   61,   61,    0,   61,   61,
   61,   61,   61,   61,   61,    0,   61,    0,    0,    0,
    0,    0,   61,
};
static const short yycheck[] = {                         15,
   26,   68,  264,   70,  263,   72,  257,  274,   34,  258,
  257,  261,   12,   29,  261,  271,  272,  273,  296,  257,
   69,  257,  289,  261,  274,  303,  258,  274,  306,  303,
   56,   57,  281,  284,  285,  286,   52,   63,  257,   65,
  289,  290,  304,   69,  303,  296,   95,  294,  284,  285,
  286,  302,  303,   53,  305,  306,  294,  289,  290,  279,
  295,  269,  270,  283,  257,  132,  302,  303,  261,  305,
  137,  138,  139,  140,  309,  310,  257,  144,   77,   78,
   79,  257,  304,  275,  276,  277,  278,  302,  303,  265,
  266,  267,  268,  259,  161,  162,  264,  123,   80,   81,
   82,   83,  303,  170,  257,  121,  122,  258,  284,  285,
  286,  287,  265,  266,  258,  268,  258,  293,  290,  145,
  296,   73,   74,  257,  257,  301,  302,  303,  304,  305,
  306,  284,  285,  286,  287,  289,  152,  281,   75,   76,
  293,  303,  303,  296,  258,  289,  290,  303,  301,  302,
  303,  304,  305,  306,  289,  269,  270,  271,  272,  273,
  258,  275,  276,  277,  278,  279,  280,  281,  260,  283,
  289,  269,  270,  280,  258,  289,  290,  275,  276,  277,
  278,  279,  280,  281,  258,  283,  281,  265,  289,  302,
  290,  289,  290,  258,  258,  269,  270,  257,  300,  302,
  258,  275,  276,  277,  278,  279,  280,  281,  258,  283,
  262,  269,  270,  289,  262,  289,  290,  275,  276,  277,
  278,  279,  280,  281,  258,  283,  289,  289,  303,  262,
  289,  289,  290,  294,  290,  258,  291,  291,  274,  290,
  258,  275,  276,  277,  278,  279,  280,  281,  289,  283,
  303,  308,  290,  299,  297,  289,  290,  275,  276,  277,
  278,  279,  280,  281,  258,  283,  303,  289,  303,  290,
  302,  289,  290,  303,  302,  290,  307,  290,  302,  258,
  258,  275,  276,  277,  278,  279,  280,  281,  260,  283,
  258,  258,  258,  289,    4,  289,  290,  275,  276,  277,
  278,  279,  280,  281,  258,  283,    9,    4,   84,  258,
   85,  289,  290,  169,   -1,  258,   -1,   -1,   -1,   -1,
   -1,  275,  276,  277,  278,  279,  280,  281,  258,  283,
  279,  280,  281,  258,  283,  289,  290,  280,  281,  258,
  289,  290,   -1,   -1,   -1,   -1,  289,  290,   -1,  279,
  280,  281,   -1,  283,  279,  280,  281,   -1,  283,  289,
  290,  280,  281,   -1,  289,  290,   -1,   -1,   -1,   -1,
  289,  290,  269,  270,  271,  272,  273,   -1,  275,  276,
  277,  278,  279,  280,  281,   -1,  283,   -1,   -1,   -1,
   -1,   -1,  289,
};
#define YYFINAL 3
#ifndef YYDEBUG
#define YYDEBUG 1
#endif
#define YYMAXTOKEN 311
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
"PARENTESIS_CIERRA","C_BRACKET_ABRE","C_BRACKET_CIERRA","S_BRACKET_ABRE",
"S_BRACKET_CIERRA","MAIN","VOID","WHILE","IF","ELSE","DO","PLUS","MINUS","MULT",
"DIV","MOD","ASSIGN","GT","LT","GE","LE","EQ","AND","OR","NOT","NE","TRUE",
"FALSE_T","NULL_T","BREAK","COLON","SEMICOLON","COMMA","DOT","END","RETURN",
"SALARYFOR","MONTH","NAME","SALARY","RANK","ID","LASTNAME","EMPLOYEE","DIGITO",
"VAR","TYPE","STRING","SHOW_EMPLOYEE","ANTIQUITY","CATEGORY","WEEK","YEAR",
"QUOTATION_MARK","illegal-symbol",
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
"Statement : Exp SEMICOLON Statement",
"Statement : SpecialFunction SEMICOLON Statement",
"Statement : Variable ASSIGN SpecialFunction SEMICOLON Statement",
"Statement : Variable ASSIGN Exp SEMICOLON Statement",
"Statement : VAR ASSIGN Exp SEMICOLON Statement",
"Statement : EMPLOYEE VAR ASSIGN SpecialFunction SEMICOLON Statement",
"Statement : EMPLOYEE VAR S_BRACKET_ABRE DIGITO S_BRACKET_CIERRA ASSIGN EmpValues SEMICOLON Statement",
"Statement : WHILE PARENTESIS_ABRE Exp PARENTESIS_CIERRA CodeBlock Statement",
"Statement : IF PARENTESIS_ABRE Exp PARENTESIS_CIERRA CodeBlock Statement",
"Statement : IF PARENTESIS_ABRE Exp PARENTESIS_CIERRA CodeBlock ELSE CodeBlock Statement",
"Statement : DO CodeBlock WHILE PARENTESIS_ABRE Exp PARENTESIS_CIERRA SEMICOLON Statement",
"Statement : RETURN Exp SEMICOLON",
"Statement : BREAK SEMICOLON",
"Statement :",
"SpecialFunction : NAME VAR COMMA LASTNAME VAR COMMA CATEGORY VAR COMMA ID DIGITO COMMA ANTIQUITY DIGITO COMMA SALARY DIGITO",
"SpecialFunction : VAR SALARYFOR DIGITO TimeLapse",
"SpecialFunction : SHOW_EMPLOYEE VAR",
"EmpValues : VAR COMMA EmpValues",
"EmpValues : VAR",
"TimeLapse : WEEK",
"TimeLapse : MONTH",
"TimeLapse : YEAR",
"Exp : CondOrExp",
"MultExp : Term",
"MultExp : MultExp MULT Term",
"MultExp : MultExp DIV Term",
"MultExp : MultExp MOD Term",
"AddExp : MultExp",
"AddExp : AddExp PLUS MultExp",
"AddExp : AddExp MINUS MultExp",
"RelExp : AddExp",
"RelExp : RelExp LT AddExp",
"RelExp : RelExp GT AddExp",
"RelExp : RelExp LE AddExp",
"RelExp : RelExp GE AddExp",
"EqExp : RelExp",
"EqExp : EqExp EQ RelExp",
"EqExp : EqExp NE RelExp",
"CondAndExp : EqExp",
"CondAndExp : CondAndExp AND EqExp",
"CondOrExp : CondAndExp",
"CondOrExp : CondOrExp OR CondAndExp",
"FirstVal : Exp CommaVal",
"FirstVal :",
"CommaVal : CommaVal COMMA Exp",
"CommaVal :",
"Term : VAR",
"Term : DIGITO",
"Term : TRUE",
"Term : FALSE_T",
"Term : STRING",
"Term : NULL_T",
"Term : VAR S_BRACKET_ABRE VAR S_BRACKET_CIERRA DOT VAR",
"Term : VAR S_BRACKET_ABRE DIGITO S_BRACKET_CIERRA DOT VAR",
"Term : VAR PARENTESIS_ABRE FirstVal PARENTESIS_CIERRA",
"Term : PARENTESIS_ABRE Exp PARENTESIS_CIERRA",
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
#line 280 "salarium.y"

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
#line 475 "y.tab.c"

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
#line 71 "salarium.y"
	{ printf("%s%s%s\n", yystack.l_mark[-1].strval, "\'", yystack.l_mark[0].strval); }
break;
case 2:
#line 73 "salarium.y"
	{ printf("%s\n", yystack.l_mark[0].strval); }
break;
case 3:
#line 78 "salarium.y"
	{ yyval.strval = concat_str( 3, yystack.l_mark[-1].strval, "\n", yystack.l_mark[0].strval); }
break;
case 4:
#line 80 "salarium.y"
	{ yyval.strval = yystack.l_mark[0].strval; }
break;
case 5:
#line 85 "salarium.y"
	{ yyval.strval = concat_str(7, yystack.l_mark[-3].strval," ", yystack.l_mark[-2].strval, yystack.l_mark[-1].strval, "\n", yystack.l_mark[0].strval, "\n"); }
break;
case 6:
#line 87 "salarium.y"
	{ yyval.strval = concat_str(7, "void ", " ",yystack.l_mark[-2].strval, yystack.l_mark[-1].strval, "\n", yystack.l_mark[0].strval, "\n"); }
break;
case 7:
#line 92 "salarium.y"
	{ yyval.strval = concat_str( 3, "( ", yystack.l_mark[-1].strval, " )"); }
break;
case 8:
#line 97 "salarium.y"
	{ yyval.strval = concat_str( 2, yystack.l_mark[-1].strval, yystack.l_mark[0].strval); }
break;
case 9:
#line 99 "salarium.y"
	{ yyval.strval = ""; }
break;
case 10:
#line 104 "salarium.y"
	{ yyval.strval = concat_str( 3, yystack.l_mark[-2].strval,", ", yystack.l_mark[0].strval); }
break;
case 11:
#line 106 "salarium.y"
	{ yyval.strval = ""; }
break;
case 12:
#line 111 "salarium.y"
	{ yyval.strval = concat_str( 3, yystack.l_mark[-1].strval, " ", yystack.l_mark[0].strval); }
break;
case 13:
#line 116 "salarium.y"
	{ yyval.strval = concat_str( 3, "{\n", yystack.l_mark[-1].strval, "\n}"); }
break;
case 14:
#line 121 "salarium.y"
	{ yyval.strval = concat_str( 3, yystack.l_mark[-2].strval, ";\n",  yystack.l_mark[0].strval); }
break;
case 15:
#line 123 "salarium.y"
	{ yyval.strval = concat_str( 3, yystack.l_mark[-2].strval, ";\n", yystack.l_mark[0].strval); }
break;
case 16:
#line 125 "salarium.y"
	{ yyval.strval = concat_str( 3, yystack.l_mark[-2].strval, ";\n", yystack.l_mark[0].strval); }
break;
case 17:
#line 127 "salarium.y"
	{ yyval.strval = concat_str( 5, yystack.l_mark[-4].strval, " = ", yystack.l_mark[-2].strval , ";\n", yystack.l_mark[0].strval); }
break;
case 18:
#line 129 "salarium.y"
	{ yyval.strval = concat_str( 5, yystack.l_mark[-4].strval, " = ", yystack.l_mark[-2].strval, ";\n", yystack.l_mark[0].strval); }
break;
case 19:
#line 131 "salarium.y"
	{ yyval.strval = concat_str( 5, yystack.l_mark[-4].strval, " = ", yystack.l_mark[-2].strval, ";\n", yystack.l_mark[0].strval); }
break;
case 20:
#line 133 "salarium.y"
	{ yyval.strval = concat_str( 6, "struct Employee ", yystack.l_mark[-4].strval, " = ", yystack.l_mark[-2].strval, ";\n", yystack.l_mark[0].strval); }
break;
case 21:
#line 135 "salarium.y"
	{ yyval.strval = concat_str( 8, "struct Employee ", yystack.l_mark[-7].strval, "[", yystack.l_mark[-5].strval, "] = {", yystack.l_mark[-2].strval, "};\n", yystack.l_mark[0].strval); }
break;
case 22:
#line 137 "salarium.y"
	{ yyval.strval = concat_str( 6,"while ( ", yystack.l_mark[-3].strval, " )\n", yystack.l_mark[-1].strval, "\n", yystack.l_mark[0].strval); }
break;
case 23:
#line 139 "salarium.y"
	{ yyval.strval = concat_str( 6, "if ( ", yystack.l_mark[-3].strval, " )\n", yystack.l_mark[-1].strval, "\n", yystack.l_mark[0].strval) ; }
break;
case 24:
#line 141 "salarium.y"
	{ yyval.strval = concat_str( 9, "if ( ",  yystack.l_mark[-5].strval, " )\n", yystack.l_mark[-3].strval, "\n", "else\n", yystack.l_mark[-1].strval , "\n", yystack.l_mark[0].strval); }
break;
case 25:
#line 143 "salarium.y"
	{ yyval.strval = concat_str( 7, "do\n", yystack.l_mark[-6].strval, "\n", "while ( ", yystack.l_mark[-3].strval, " );\n", yystack.l_mark[0].strval); }
break;
case 26:
#line 145 "salarium.y"
	{ yyval.strval = concat_str( 3, "return ", yystack.l_mark[-1].strval, ";");}
break;
case 27:
#line 147 "salarium.y"
	{ yyval.strval = "break;\n"; }
break;
case 28:
#line 149 "salarium.y"
	{ yyval.strval = ""; }
break;
case 29:
#line 154 "salarium.y"
	{ yyval.strval = concat_str( 13,"{ \"", yystack.l_mark[-15].strval, "\", \"", yystack.l_mark[-12].strval, "\", \"", yystack.l_mark[-9].strval, "\", ", yystack.l_mark[-6].strval, ", ", yystack.l_mark[-3].strval, ", ", yystack.l_mark[0].strval, " }" ); }
break;
case 30:
#line 156 "salarium.y"
	{ yyval.strval = concat_str( 7, " getSalary( ", yystack.l_mark[-3].strval, ", ", yystack.l_mark[-1].strval, ", ", yystack.l_mark[0].strval, ")" );}
break;
case 31:
#line 158 "salarium.y"
	{ yyval.strval = concat_str( 3, "printEmployee( ", yystack.l_mark[0].strval, ")" ); }
break;
case 32:
#line 163 "salarium.y"
	{ yyval.strval = concat_str(3 , yystack.l_mark[-2].strval, " , ", yystack.l_mark[0].strval); }
break;
case 33:
#line 165 "salarium.y"
	{ yyval.strval = yystack.l_mark[0].strval; }
break;
case 34:
#line 169 "salarium.y"
	{ yyval.strval = "\"WEEK\""; }
break;
case 35:
#line 171 "salarium.y"
	{ yyval.strval = "\"MONTH\""; }
break;
case 36:
#line 173 "salarium.y"
	{ yyval.strval = "\"YEAR\""; }
break;
case 37:
#line 178 "salarium.y"
	{ yyval.strval = yystack.l_mark[0].strval; }
break;
case 38:
#line 183 "salarium.y"
	{ yyval.strval = yystack.l_mark[0].strval; }
break;
case 39:
#line 185 "salarium.y"
	{ yyval.strval = concat_str(3, yystack.l_mark[-2].strval, " * ", yystack.l_mark[0].strval); }
break;
case 40:
#line 187 "salarium.y"
	{ yyval.strval = concat_str(3, yystack.l_mark[-2].strval, " / ", yystack.l_mark[0].strval); }
break;
case 41:
#line 189 "salarium.y"
	{ yyval.strval = concat_str(3, yystack.l_mark[-2].strval, " % ", yystack.l_mark[0].strval); }
break;
case 42:
#line 194 "salarium.y"
	{ yyval.strval = yystack.l_mark[0].strval; }
break;
case 43:
#line 196 "salarium.y"
	{ yyval.strval = concat_str(3, yystack.l_mark[-2].strval, " + ", yystack.l_mark[0].strval); }
break;
case 44:
#line 198 "salarium.y"
	{ yyval.strval = concat_str(3, yystack.l_mark[-2].strval, " - ", yystack.l_mark[0].strval); }
break;
case 45:
#line 203 "salarium.y"
	{ yyval.strval = yystack.l_mark[0].strval; }
break;
case 46:
#line 205 "salarium.y"
	{ yyval.strval = concat_str(3, yystack.l_mark[-2].strval, " < ", yystack.l_mark[0].strval); }
break;
case 47:
#line 207 "salarium.y"
	{ yyval.strval = concat_str(3, yystack.l_mark[-2].strval, " > ", yystack.l_mark[0].strval); }
break;
case 48:
#line 209 "salarium.y"
	{ yyval.strval = concat_str(3, yystack.l_mark[-2].strval, " <= ", yystack.l_mark[0].strval); }
break;
case 49:
#line 211 "salarium.y"
	{ yyval.strval = concat_str(3, yystack.l_mark[-2].strval, " >= ", yystack.l_mark[0].strval); }
break;
case 50:
#line 216 "salarium.y"
	{ yyval.strval = yystack.l_mark[0].strval; }
break;
case 51:
#line 218 "salarium.y"
	{ yyval.strval = concat_str(3, yystack.l_mark[-2].strval, " == ", yystack.l_mark[0].strval); }
break;
case 52:
#line 220 "salarium.y"
	{ yyval.strval = concat_str(3, yystack.l_mark[-2].strval, " != ", yystack.l_mark[0].strval); }
break;
case 53:
#line 225 "salarium.y"
	{ yyval.strval = yystack.l_mark[0].strval; }
break;
case 54:
#line 227 "salarium.y"
	{ yyval.strval = concat_str(3, yystack.l_mark[-2].strval, " && ", yystack.l_mark[0].strval); }
break;
case 55:
#line 232 "salarium.y"
	{ yyval.strval = yystack.l_mark[0].strval; }
break;
case 56:
#line 234 "salarium.y"
	{ yyval.strval = concat_str(3, yystack.l_mark[-2].strval, " || ", yystack.l_mark[0].strval); }
break;
case 57:
#line 239 "salarium.y"
	{ yyval.strval = concat_str( 2, yystack.l_mark[-1].strval, yystack.l_mark[0].strval); }
break;
case 58:
#line 241 "salarium.y"
	{ yyval.strval = ""; }
break;
case 59:
#line 246 "salarium.y"
	{ yyval.strval = concat_str( 3, yystack.l_mark[-2].strval, ", ", yystack.l_mark[0].strval); }
break;
case 60:
#line 248 "salarium.y"
	{ yyval.strval = ""; }
break;
case 61:
#line 253 "salarium.y"
	{ yyval.strval = yystack.l_mark[0].strval; }
break;
case 62:
#line 255 "salarium.y"
	{ yyval.strval = yystack.l_mark[0].strval; }
break;
case 63:
#line 257 "salarium.y"
	{ yyval.strval = "true"; }
break;
case 64:
#line 259 "salarium.y"
	{ yyval.strval = "FALSE_T"; }
break;
case 65:
#line 261 "salarium.y"
	{ yyval.strval = yystack.l_mark[0].strval; }
break;
case 66:
#line 263 "salarium.y"
	{ yyval.strval = "NULL_T"; }
break;
case 67:
#line 265 "salarium.y"
	{ yyval.strval = concat_str( 5, yystack.l_mark[-5].strval, "[", yystack.l_mark[-3].strval, "].", yystack.l_mark[0].strval ); }
break;
case 68:
#line 267 "salarium.y"
	{ yyval.strval = concat_str( 5, yystack.l_mark[-5].strval, "[", yystack.l_mark[-3].strval, "].", yystack.l_mark[0].strval ); }
break;
case 69:
#line 269 "salarium.y"
	{ yyval.strval = concat_str( 4, yystack.l_mark[-3].strval, "( ", yystack.l_mark[-1].strval, " )"); }
break;
case 70:
#line 271 "salarium.y"
	{ yyval.strval = concat_str( 3, "( ", yystack.l_mark[-1].strval, " )"); }
break;
case 71:
#line 276 "salarium.y"
	{ yyval.strval = concat_str(3 , yystack.l_mark[-5].strval, " main ()\n", yystack.l_mark[0].strval ); }
break;
#line 961 "y.tab.c"
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
