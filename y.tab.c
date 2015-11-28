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
#define MINUSDEDUCTIONS 292
#define END 293
#define RETURN 294
#define SALARYFOR 295
#define MONTH 296
#define NAME 297
#define SALARY 298
#define RANK 299
#define ID 300
#define LASTNAME 301
#define EMPLOYEE 302
#define DIGITO 303
#define VAR 304
#define TYPE 305
#define STRING 306
#define SHOW_EMPLOYEE 307
#define ANTIQUITY 308
#define CATEGORY 309
#define WEEK 310
#define YEAR 311
#define QUOTATION_MARK 312
#define YYERRCODE 256
static const short yylhs[] = {                           -1,
    0,    0,    6,    6,    7,    7,    8,    4,    4,    5,
    5,    3,    9,   10,   10,   10,   10,   10,   10,   10,
   10,   10,   10,   10,   10,   10,   10,   10,    1,    1,
    1,    1,   23,   23,   22,   22,    2,    2,    2,   12,
   15,   15,   15,   15,   13,   13,   13,   16,   16,   16,
   16,   16,   14,   14,   14,   17,   17,   18,   18,   19,
   19,   20,   20,   21,   21,   21,   21,   21,   21,   21,
   21,   21,   21,   21,   11,
};
static const short yylen[] = {                            2,
    2,    1,    2,    1,    4,    4,    3,    2,    0,    3,
    0,    2,    3,    3,    3,    3,    5,    5,    5,    6,
    9,    6,    6,    8,    8,    3,    2,    0,   17,    4,
    8,    2,    5,    3,    3,    1,    1,    1,    1,    1,
    1,    3,    3,    3,    1,    3,    3,    1,    3,    3,
    3,    3,    1,    3,    3,    1,    3,    1,    3,    2,
    0,    3,    0,    1,    1,    1,    1,    1,    1,    3,
    6,    6,    4,    3,    6,
};
static const short yydefred[] = {                         0,
    0,    0,    0,    0,    4,    2,    0,    0,    0,    3,
    1,    0,    0,    0,    0,    0,   11,    0,    0,    6,
    0,    5,   12,    0,    7,    0,    0,    0,    0,   66,
   67,   69,    0,    0,    0,    0,   65,    0,   68,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
   41,    0,    0,    0,    0,    0,    0,    0,   27,    0,
    0,    0,    0,    0,    0,    0,    0,   32,    0,    0,
    0,   13,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,   75,   10,   74,    0,
    0,    0,   26,    0,    0,    0,   63,    0,    0,    0,
    0,   70,    0,   16,    0,    0,    0,   14,   15,    0,
    0,    0,    0,   42,   43,   44,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
   73,    0,    0,    0,   38,   37,   39,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,   19,
    0,   17,   18,   22,    0,   23,    0,    0,    0,   20,
   62,   72,   71,    0,    0,    0,    0,    0,    0,    0,
    0,   24,   25,    0,    0,    0,    0,   31,    0,   35,
   21,    0,    0,    0,    0,   33,    0,    0,    0,    0,
    0,   29,
};
static const short yydgoto[] = {                          3,
   41,  138,   42,   18,   24,    4,    5,   13,   20,   43,
    6,   44,   45,   46,   47,   48,   49,   50,   98,  130,
   51,  169,  171,
};
static const short yysindex[] = {                      -253,
 -289, -247,    0, -253,    0,    0, -239, -224, -239,    0,
    0, -269, -217, -213, -217, -212,    0, -157, -169,    0,
 -153,    0,    0, -183,    0, -231, -131, -126, -217,    0,
    0,    0, -144, -231, -148, -146,    0, -168,    0, -139,
 -127, -267,  -89, -110, -185, -192, -248, -215,  -96,  -92,
    0, -217, -269, -187,  -73, -231, -231,  -71,    0,  -94,
  -93, -142, -231, -174, -231, -108,  -95,    0, -169, -143,
 -169,    0, -169, -231, -231, -231, -231, -231, -231, -231,
 -231, -231, -231, -231, -231, -231,    0,    0,    0,  -49,
  -44,  -42,    0,  -83,  -82, -158,    0,  -26,  -28,  -27,
  -56,    0, -216,    0, -171,  -51,  -50,    0,    0, -248,
 -248, -215, -215,    0,    0,    0, -185, -185, -185, -185,
 -192,  -96, -217, -217, -231,  -62,  -19,  -40,  -45,  -37,
    0,  -35,  -34, -169,    0,    0,    0,  -33, -169, -169,
 -169, -238,   13,  -32,   -2, -169, -231,  -31,  -30,    0,
   16,    0,    0,    0, -217,    0,  -11,  -16,  -24,    0,
    0,    0,    0,  -23, -169, -169,  -22,   -7,  -10,   10,
   35,    0,    0,    6,  -24, -169, -231,    0,   -3,    0,
    0, -249,   -5,  -23,    9,    0,    3,   12,   22,   15,
   17,    0,
};
static const short yyrindex[] = {                         0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,   56,    0,    0,    0,    0,    0,    0,   58,    0,
    0,    0,    0,   61,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,  118,    0,    0,
    0,    0,    0,    0,  -13, -246,  -77,   79, -137, -208,
    0,    0,    0, -103,    0,    0,    0,    0,    0,    0,
    0,    0,   63,    0,    0,    0,    0,    0,   58,    0,
   58,    0,   58,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,  118,    0,    0,    0,    0,  -53,
  -29,   91,   96,    0,    0,    0,   11,   27,   51,   67,
  -70,  -99,    0,    0,    0,    0,    0,    0,    0,   64,
    0,    0,    0,   58,    0,    0,    0,   34,   58,   58,
   58,   58,    0,    0,    0,   58,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,   58,   58,    0,   44,    0,    0,
    0,    0,    0,    0,    0,   58,    0,    0,    0,    0,
    0,   75,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,
};
static const short yygindex[] = {                         0,
  -57,    0,    5,    0,    0,    0,  320,  327,  -15,  -63,
  334,  -25,  -79,  254,   73,   74,  265,    0,    0,    0,
   32,  177,  169,
};
#define YYTABLESIZE 407
static const short yytable[] = {                         22,
   55,  117,  118,  119,  120,  104,   70,  108,   60,  109,
    1,   56,  106,   58,    7,    8,   17,   12,   26,   74,
   75,   71,   78,   79,   80,   26,   27,   28,  155,   29,
   90,   91,   14,   56,   56,   16,   87,   97,  129,  101,
  184,   19,   56,   56,  107,   30,   31,   32,   33,   40,
   21,    2,   30,   31,   32,   34,    9,   88,   35,   81,
   82,   83,   84,   36,   37,   38,   16,   39,   40,   63,
  150,   37,   54,   64,   39,  152,  153,  154,  156,  135,
   40,   40,  160,   74,   75,   63,   76,   26,   63,   64,
   77,   23,   64,  136,  137,   27,   28,  182,   29,  143,
   25,  172,  173,   66,   52,   65,   53,  141,  142,  114,
  115,  116,  181,   26,   30,   31,   32,   33,   95,   66,
   58,  161,   66,   67,   34,   56,   67,   35,   99,  100,
   57,   96,   36,   37,   38,   16,   39,   40,   35,  165,
   30,   31,   32,   58,   59,  128,  110,  111,   40,  112,
  113,   58,   58,   35,   64,   61,   64,   62,   59,   37,
  105,   69,   39,   40,   68,   64,   64,   64,   64,   64,
   72,   64,   64,   64,   64,   64,   64,   64,   73,   64,
   45,   59,   45,   85,   89,   64,   64,   57,   86,   59,
   59,   45,   45,   92,   93,  102,   94,   45,   45,   45,
   45,   45,   45,   45,   46,   45,   46,  103,  123,   57,
   57,   45,   45,  124,  125,   46,   46,  126,   57,   57,
  127,   46,   46,   46,   46,   46,   46,   46,   47,   46,
   47,  131,  134,  132,  133,   46,   46,  139,  140,   47,
   47,  144,  145,  146,   48,   47,   47,   47,   47,   47,
   47,   47,  147,   47,   67,  148,  149,  158,  151,   47,
   47,   48,   48,   48,   48,   48,   48,   48,   50,   48,
  157,  159,  162,  163,  164,   48,   48,  166,  176,  168,
  170,  174,  175,  177,   49,   50,   50,   50,   50,   50,
   50,   50,  167,   50,  178,  179,  183,  185,  187,   50,
   50,   49,   49,   49,   49,   49,   49,   49,   52,   49,
  188,  190,  191,    9,  189,   49,   49,   28,    8,  192,
   61,   60,   30,   10,   51,   52,   52,   52,   52,   52,
   52,   52,   36,   52,   34,   15,   53,   11,  121,   52,
   52,   51,   51,   51,   51,   51,   51,   51,   54,   51,
  122,  180,  186,   55,    0,   51,   51,   53,   53,   53,
    0,   53,    0,    0,    0,    0,    0,   53,   53,   54,
   54,   54,    0,   54,   55,   55,   55,    0,   55,   54,
   54,    0,    0,    0,   55,   55,   64,   64,   64,   64,
   64,    0,   64,   64,   64,   64,   64,   64,   64,    0,
   64,    0,    0,    0,    0,    0,   64,
};
static const short yycheck[] = {                         15,
   26,   81,   82,   83,   84,   69,  274,   71,   34,   73,
  264,  258,   70,   29,  304,  263,   12,  257,  257,  269,
  270,  289,  271,  272,  273,  257,  265,  266,  267,  268,
   56,   57,  257,  280,  281,  305,   52,   63,   96,   65,
  290,  259,  289,  290,   70,  284,  285,  286,  287,  258,
  264,  305,  284,  285,  286,  294,  304,   53,  297,  275,
  276,  277,  278,  302,  303,  304,  305,  306,  307,  257,
  134,  303,  304,  261,  306,  139,  140,  141,  142,  296,
  289,  290,  146,  269,  270,  257,  279,  257,  257,  261,
  283,  304,  261,  310,  311,  265,  266,  177,  268,  125,
  258,  165,  166,  291,  258,  274,  290,  123,  124,   78,
   79,   80,  176,  257,  284,  285,  286,  287,  261,  291,
  258,  147,  291,  295,  294,  257,  295,  297,  303,  304,
  257,  274,  302,  303,  304,  305,  306,  307,  297,  155,
  284,  285,  286,  281,  289,  304,   74,   75,  307,   76,
   77,  289,  290,  297,  258,  304,  260,  304,  258,  303,
  304,  289,  306,  307,  304,  269,  270,  271,  272,  273,
  260,  275,  276,  277,  278,  279,  280,  281,  289,  283,
  258,  281,  260,  280,  258,  289,  290,  258,  281,  289,
  290,  269,  270,  265,  289,  304,  290,  275,  276,  277,
  278,  279,  280,  281,  258,  283,  260,  303,  258,  280,
  281,  289,  290,  258,  257,  269,  270,  301,  289,  290,
  303,  275,  276,  277,  278,  279,  280,  281,  258,  283,
  260,  258,  289,  262,  262,  289,  290,  289,  289,  269,
  270,  304,  262,  289,  258,  275,  276,  277,  278,  279,
  280,  281,  290,  283,  295,  291,  291,  290,  292,  289,
  290,  275,  276,  277,  278,  279,  280,  281,  258,  283,
  258,  274,  304,  304,  259,  289,  290,  289,  289,  304,
  304,  304,  290,  274,  258,  275,  276,  277,  278,  279,
  280,  281,  309,  283,  260,  290,  300,  303,  290,  289,
  290,  275,  276,  277,  278,  279,  280,  281,  258,  283,
  308,  290,  298,  258,  303,  289,  290,  260,  258,  303,
  258,  258,  289,    4,  258,  275,  276,  277,  278,  279,
  280,  281,  289,  283,  260,    9,  258,    4,   85,  289,
  290,  275,  276,  277,  278,  279,  280,  281,  258,  283,
   86,  175,  184,  258,   -1,  289,  290,  279,  280,  281,
   -1,  283,   -1,   -1,   -1,   -1,   -1,  289,  290,  279,
  280,  281,   -1,  283,  279,  280,  281,   -1,  283,  289,
  290,   -1,   -1,   -1,  289,  290,  269,  270,  271,  272,
  273,   -1,  275,  276,  277,  278,  279,  280,  281,   -1,
  283,   -1,   -1,   -1,   -1,   -1,  289,
};
#define YYFINAL 3
#ifndef YYDEBUG
#define YYDEBUG 1
#endif
#define YYMAXTOKEN 312
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
"FALSE_T","NULL_T","BREAK","COLON","SEMICOLON","COMMA","DOT","MINUSDEDUCTIONS",
"END","RETURN","SALARYFOR","MONTH","NAME","SALARY","RANK","ID","LASTNAME",
"EMPLOYEE","DIGITO","VAR","TYPE","STRING","SHOW_EMPLOYEE","ANTIQUITY",
"CATEGORY","WEEK","YEAR","QUOTATION_MARK","illegal-symbol",
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
"SpecialFunction : VAR SALARYFOR DIGITO TimeLapse MINUSDEDUCTIONS C_BRACKET_ABRE Deductions C_BRACKET_CIERRA",
"SpecialFunction : SHOW_EMPLOYEE VAR",
"Deductions : VAR ASSIGN AddExp COMMA Deductions",
"Deductions : VAR ASSIGN AddExp",
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
"Term : VAR DOT VAR",
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
#line 292 "salarium.y"

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
#line 485 "y.tab.c"

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
	{ yyval.strval = concat_str( 3, yystack.l_mark[-2].strval, ";\n", yystack.l_mark[0].strval); }
break;
case 17:
#line 128 "salarium.y"
	{ yyval.strval = concat_str( 5, yystack.l_mark[-4].strval, " = ", yystack.l_mark[-2].strval , ";\n", yystack.l_mark[0].strval); }
break;
case 18:
#line 130 "salarium.y"
	{ yyval.strval = concat_str( 5, yystack.l_mark[-4].strval, " = ", yystack.l_mark[-2].strval, ";\n", yystack.l_mark[0].strval); }
break;
case 19:
#line 132 "salarium.y"
	{ yyval.strval = concat_str( 5, yystack.l_mark[-4].strval, " = ", yystack.l_mark[-2].strval, ";\n", yystack.l_mark[0].strval); }
break;
case 20:
#line 134 "salarium.y"
	{ yyval.strval = concat_str( 6, "struct Employee ", yystack.l_mark[-4].strval, " = ", yystack.l_mark[-2].strval, ";\n", yystack.l_mark[0].strval); }
break;
case 21:
#line 136 "salarium.y"
	{ yyval.strval = concat_str( 8, "struct Employee ", yystack.l_mark[-7].strval, "[", yystack.l_mark[-5].strval, "] = {", yystack.l_mark[-2].strval, "};\n", yystack.l_mark[0].strval); }
break;
case 22:
#line 138 "salarium.y"
	{ yyval.strval = concat_str( 6,"while ( ", yystack.l_mark[-3].strval, " )\n", yystack.l_mark[-1].strval, "\n", yystack.l_mark[0].strval); }
break;
case 23:
#line 140 "salarium.y"
	{ yyval.strval = concat_str( 6, "if ( ", yystack.l_mark[-3].strval, " )\n", yystack.l_mark[-1].strval, "\n", yystack.l_mark[0].strval) ; }
break;
case 24:
#line 142 "salarium.y"
	{ yyval.strval = concat_str( 9, "if ( ",  yystack.l_mark[-5].strval, " )\n", yystack.l_mark[-3].strval, "\n", "else\n", yystack.l_mark[-1].strval , "\n", yystack.l_mark[0].strval); }
break;
case 25:
#line 144 "salarium.y"
	{ yyval.strval = concat_str( 7, "do\n", yystack.l_mark[-6].strval, "\n", "while ( ", yystack.l_mark[-3].strval, " );\n", yystack.l_mark[0].strval); }
break;
case 26:
#line 146 "salarium.y"
	{ yyval.strval = concat_str( 3, "return ", yystack.l_mark[-1].strval, ";");}
break;
case 27:
#line 148 "salarium.y"
	{ yyval.strval = "break;\n"; }
break;
case 28:
#line 150 "salarium.y"
	{ yyval.strval = ""; }
break;
case 29:
#line 155 "salarium.y"
	{ yyval.strval = concat_str( 13,"{ \"", yystack.l_mark[-15].strval, "\", \"", yystack.l_mark[-12].strval, "\", \"", yystack.l_mark[-9].strval, "\", ", yystack.l_mark[-6].strval, ", ", yystack.l_mark[-3].strval, ", ", yystack.l_mark[0].strval, " }" ); }
break;
case 30:
#line 157 "salarium.y"
	{ yyval.strval = concat_str( 7, " getSalary( ", yystack.l_mark[-3].strval, ", ", yystack.l_mark[-1].strval, ", ", yystack.l_mark[0].strval, ")" );}
break;
case 31:
#line 159 "salarium.y"
	{ yyval.strval = concat_str( 8, " getSalary( ", yystack.l_mark[-7].strval, ", ", yystack.l_mark[-5].strval, ", ", yystack.l_mark[-4].strval, ") - ", yystack.l_mark[-1].strval );}
break;
case 32:
#line 161 "salarium.y"
	{ yyval.strval = concat_str( 3, "printEmployee( ", yystack.l_mark[0].strval, ")" ); }
break;
case 33:
#line 166 "salarium.y"
	{ yyval.strval = concat_str(3, yystack.l_mark[-2].strval, " - ", yystack.l_mark[0].strval); }
break;
case 34:
#line 168 "salarium.y"
	{ yyval.strval = yystack.l_mark[0].strval; }
break;
case 35:
#line 173 "salarium.y"
	{ yyval.strval = concat_str(3 , yystack.l_mark[-2].strval, " , ", yystack.l_mark[0].strval); }
break;
case 36:
#line 175 "salarium.y"
	{ yyval.strval = yystack.l_mark[0].strval; }
break;
case 37:
#line 179 "salarium.y"
	{ yyval.strval = "\"WEEK\""; }
break;
case 38:
#line 181 "salarium.y"
	{ yyval.strval = "\"MONTH\""; }
break;
case 39:
#line 183 "salarium.y"
	{ yyval.strval = "\"YEAR\""; }
break;
case 40:
#line 188 "salarium.y"
	{ yyval.strval = yystack.l_mark[0].strval; }
break;
case 41:
#line 193 "salarium.y"
	{ yyval.strval = yystack.l_mark[0].strval; }
break;
case 42:
#line 195 "salarium.y"
	{ yyval.strval = concat_str(3, yystack.l_mark[-2].strval, " * ", yystack.l_mark[0].strval); }
break;
case 43:
#line 197 "salarium.y"
	{ yyval.strval = concat_str(3, yystack.l_mark[-2].strval, " / ", yystack.l_mark[0].strval); }
break;
case 44:
#line 199 "salarium.y"
	{ yyval.strval = concat_str(3, yystack.l_mark[-2].strval, " % ", yystack.l_mark[0].strval); }
break;
case 45:
#line 204 "salarium.y"
	{ yyval.strval = yystack.l_mark[0].strval; }
break;
case 46:
#line 206 "salarium.y"
	{ yyval.strval = concat_str(3, yystack.l_mark[-2].strval, " + ", yystack.l_mark[0].strval); }
break;
case 47:
#line 208 "salarium.y"
	{ yyval.strval = concat_str(3, yystack.l_mark[-2].strval, " - ", yystack.l_mark[0].strval); }
break;
case 48:
#line 213 "salarium.y"
	{ yyval.strval = yystack.l_mark[0].strval; }
break;
case 49:
#line 215 "salarium.y"
	{ yyval.strval = concat_str(3, yystack.l_mark[-2].strval, " < ", yystack.l_mark[0].strval); }
break;
case 50:
#line 217 "salarium.y"
	{ yyval.strval = concat_str(3, yystack.l_mark[-2].strval, " > ", yystack.l_mark[0].strval); }
break;
case 51:
#line 219 "salarium.y"
	{ yyval.strval = concat_str(3, yystack.l_mark[-2].strval, " <= ", yystack.l_mark[0].strval); }
break;
case 52:
#line 221 "salarium.y"
	{ yyval.strval = concat_str(3, yystack.l_mark[-2].strval, " >= ", yystack.l_mark[0].strval); }
break;
case 53:
#line 226 "salarium.y"
	{ yyval.strval = yystack.l_mark[0].strval; }
break;
case 54:
#line 228 "salarium.y"
	{ yyval.strval = concat_str(3, yystack.l_mark[-2].strval, " == ", yystack.l_mark[0].strval); }
break;
case 55:
#line 230 "salarium.y"
	{ yyval.strval = concat_str(3, yystack.l_mark[-2].strval, " != ", yystack.l_mark[0].strval); }
break;
case 56:
#line 235 "salarium.y"
	{ yyval.strval = yystack.l_mark[0].strval; }
break;
case 57:
#line 237 "salarium.y"
	{ yyval.strval = concat_str(3, yystack.l_mark[-2].strval, " && ", yystack.l_mark[0].strval); }
break;
case 58:
#line 242 "salarium.y"
	{ yyval.strval = yystack.l_mark[0].strval; }
break;
case 59:
#line 244 "salarium.y"
	{ yyval.strval = concat_str(3, yystack.l_mark[-2].strval, " || ", yystack.l_mark[0].strval); }
break;
case 60:
#line 249 "salarium.y"
	{ yyval.strval = concat_str( 2, yystack.l_mark[-1].strval, yystack.l_mark[0].strval); }
break;
case 61:
#line 251 "salarium.y"
	{ yyval.strval = ""; }
break;
case 62:
#line 256 "salarium.y"
	{ yyval.strval = concat_str( 3, yystack.l_mark[-2].strval, ", ", yystack.l_mark[0].strval); }
break;
case 63:
#line 258 "salarium.y"
	{ yyval.strval = ""; }
break;
case 64:
#line 263 "salarium.y"
	{ yyval.strval = yystack.l_mark[0].strval; }
break;
case 65:
#line 265 "salarium.y"
	{ yyval.strval = yystack.l_mark[0].strval; }
break;
case 66:
#line 267 "salarium.y"
	{ yyval.strval = "true"; }
break;
case 67:
#line 269 "salarium.y"
	{ yyval.strval = "FALSE_T"; }
break;
case 68:
#line 271 "salarium.y"
	{ yyval.strval = yystack.l_mark[0].strval; }
break;
case 69:
#line 273 "salarium.y"
	{ yyval.strval = "NULL_T"; }
break;
case 70:
#line 275 "salarium.y"
	{ yyval.strval = concat_str(3, yystack.l_mark[-2].strval, ".", yystack.l_mark[0].strval); }
break;
case 71:
#line 277 "salarium.y"
	{ yyval.strval = concat_str( 5, yystack.l_mark[-5].strval, "[", yystack.l_mark[-3].strval, "].", yystack.l_mark[0].strval ); }
break;
case 72:
#line 279 "salarium.y"
	{ yyval.strval = concat_str( 5, yystack.l_mark[-5].strval, "[", yystack.l_mark[-3].strval, "].", yystack.l_mark[0].strval ); }
break;
case 73:
#line 281 "salarium.y"
	{ yyval.strval = concat_str( 4, yystack.l_mark[-3].strval, "( ", yystack.l_mark[-1].strval, " )"); }
break;
case 74:
#line 283 "salarium.y"
	{ yyval.strval = concat_str( 3, "( ", yystack.l_mark[-1].strval, " )"); }
break;
case 75:
#line 288 "salarium.y"
	{ yyval.strval = concat_str(3 , yystack.l_mark[-5].strval, " main ()\n", yystack.l_mark[0].strval ); }
break;
#line 987 "y.tab.c"
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
