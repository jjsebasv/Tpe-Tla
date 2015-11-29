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
#define SHOW_EMPLOYEE 303
#define GET_EMPLOYEE 304
#define GET_ALL 305
#define ANTIQUITY 306
#define CATEGORY 307
#define WEEK 308
#define YEAR 309
#define DIGITO 310
#define VAR 311
#define TYPE 312
#define STRING 313
#define YYERRCODE 256
static const short yylhs[] = {                           -1,
    0,    0,    6,    6,    7,    7,    8,    4,    4,    5,
    5,    3,    9,   10,   10,   10,   10,   10,   10,   10,
   10,   10,   10,   10,   10,   10,   10,   10,    1,    1,
    1,    1,    1,    1,   23,   23,   22,   22,    2,    2,
    2,   12,   15,   15,   15,   15,   13,   13,   13,   16,
   16,   16,   16,   16,   14,   14,   14,   17,   17,   18,
   18,   19,   19,   20,   20,   21,   21,   21,   21,   21,
   21,   21,   21,   21,   21,   21,   11,
};
static const short yylen[] = {                            2,
    2,    1,    2,    1,    4,    4,    3,    2,    0,    3,
    0,    2,    3,    3,    3,    3,    5,    5,    5,    6,
    9,    6,    6,    8,    8,    3,    2,    0,   17,    4,
    8,    2,    3,    2,    5,    3,    3,    1,    1,    1,
    1,    1,    1,    3,    3,    3,    1,    3,    3,    1,
    3,    3,    3,    3,    1,    3,    3,    1,    3,    1,
    3,    2,    0,    3,    0,    1,    1,    1,    1,    1,
    1,    3,    6,    6,    4,    3,    6,
};
static const short yydefred[] = {                         0,
    0,    0,    0,    0,    4,    2,    0,    0,    0,    3,
    1,    0,    0,    0,    0,    0,   11,    0,    0,    6,
    0,    5,   12,    0,    7,    0,    0,    0,    0,   68,
   69,   71,    0,    0,    0,    0,    0,    0,    0,   67,
    0,   70,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,   43,    0,    0,    0,    0,    0,    0,    0,
   27,    0,    0,    0,   32,    0,   34,    0,    0,    0,
    0,    0,    0,    0,    0,   13,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
   77,   10,   76,    0,    0,    0,   26,    0,    0,    0,
   33,   65,    0,    0,    0,    0,   72,    0,   16,    0,
    0,    0,   14,   15,    0,    0,    0,    0,   44,   45,
   46,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,   75,    0,    0,    0,   40,
   39,   41,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,   19,    0,   17,   18,   22,    0,
   23,    0,    0,    0,   20,   64,   74,   73,    0,    0,
    0,    0,    0,    0,    0,    0,   24,   25,    0,    0,
    0,    0,   31,    0,   37,   21,    0,    0,    0,    0,
   35,    0,    0,    0,    0,    0,   29,
};
static const short yydgoto[] = {                          3,
   43,  143,   44,   18,   24,    4,    5,   13,   20,   45,
    6,   46,   47,   48,   49,   50,   51,   52,  103,  135,
   53,  174,  176,
};
static const short yysindex[] = {                      -247,
 -290, -248,    0, -247,    0,    0, -219, -216, -219,    0,
    0, -268, -212, -186, -212, -226,    0, -152, -164,    0,
 -108,    0,    0, -181,    0, -227, -104,  -97, -212,    0,
    0,    0, -138, -227, -150, -143, -132, -130, -126,    0,
 -180,    0, -103, -267,  -68, -100, -203, -256, -154,  -62,
  -77,  -76,    0, -212, -268, -149,  -54, -227, -227,  -56,
    0,  -79,  -63, -145,    0,  -83,    0, -227, -179, -227,
  -81,  -60, -164, -249, -164,    0, -164, -227, -227, -227,
 -227, -227, -227, -227, -227, -227, -227, -227, -227, -227,
    0,    0,    0,  -24,  -19,   -6,    0,  -53,  -57, -279,
    0,    0,   -4,  -29,  -10,  -23,    0, -280,    0, -133,
  -22,  -21,    0,    0, -154, -154,  -62,  -62,    0,    0,
    0, -203, -203, -203, -203, -256,  -77, -212, -212, -227,
  -42,    8,  -20,  -16,  -14,    0,  -17,  -13, -164,    0,
    0,    0,   -2, -164, -164, -164, -215,   19,  -11,   14,
 -164, -227,   -5,   -3,    0,   32,    0,    0,    0, -212,
    0,    3,    2,   -1,    0,    0,    0,    0,    4, -164,
 -164,    5,   17,   24,   20,   33,    0,    0,   27,   -1,
 -164, -227,    0,   18,    0,    0, -250,    9,    4,   38,
    0,   25,   23,   40,   16,   36,    0,
};
static const short yyrindex[] = {                         0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,   76,    0,    0,    0,    0,    0,    0,   87,    0,
    0,    0,    0,   90,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
  120,    0,    0,    0,    0,    0,  -18, -155,  -82,   74,
  -52, -198,    0,    0,    0, -106,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,   92,    0,    0,
    0,    0,   87,    0,   87,    0,   87,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,  120,
    0,    0,    0,    0,  -58,  -34,   86,   91,    0,    0,
    0,    6,   22,   46,   62,  -99,   98,    0,    0,    0,
    0,    0,    0,    0,  100,    0,    0,    0,   87,    0,
    0,    0,   70,   87,   87,   87,   87,    0,    0,    0,
   87,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,   87,
   87,    0,   71,    0,    0,    0,    0,    0,    0,    0,
   87,    0,    0,    0,    0,    0,  101,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,
};
static const short yygindex[] = {                         0,
  -69,    0,   -9,    0,    0,    0,  358,  359,  -15,  -71,
  369,  -25,  -75,  288,   58,   63,  292,    0,    0,    0,
   73,  198,  194,
};
#define YYTABLESIZE 409
static const short yytable[] = {                         22,
   57,  109,   17,  113,  111,  114,   74,   26,   62,  122,
  123,  124,  125,   60,    8,  140,    1,   35,   78,   79,
    7,   75,   80,   37,   38,   39,   81,  141,  142,   26,
  134,  133,   94,   95,   30,   31,   32,   12,   91,  189,
   14,   26,  102,   16,  106,   92,   19,   35,  112,   27,
   28,  160,   29,   37,   38,   39,   30,   31,   32,   42,
   40,  110,    9,   42,    2,   78,   79,  155,   30,   31,
   32,   33,  157,  158,  159,  161,   68,   21,   34,  165,
   69,   35,   40,   56,   23,   42,   36,   37,   38,   39,
   42,   42,   26,   70,   40,   41,   16,   42,  177,  178,
   27,   28,   58,   29,  148,   25,  187,   68,   55,  186,
   71,   69,  146,  147,   72,   99,   82,   83,   84,   30,
   31,   32,   33,   68,   58,   58,  166,   69,  100,   34,
  104,  105,   35,   58,   58,  115,  116,   36,   37,   38,
   39,   71,  117,  118,  170,   40,   41,   16,   42,   54,
   61,   66,   58,   66,  119,  120,  121,   71,   59,   59,
   63,   72,   66,   66,   66,   66,   66,   64,   66,   66,
   66,   66,   66,   66,   66,   47,   66,   47,   65,   66,
   59,   59,   66,   66,   67,   73,   47,   47,   77,   59,
   59,   76,   47,   47,   47,   47,   47,   47,   47,   48,
   47,   48,   89,   93,   90,   60,   47,   47,   96,   97,
   48,   48,   85,   86,   87,   88,   48,   48,   48,   48,
   48,   48,   48,   49,   48,   49,   98,  101,   60,  107,
   48,   48,  137,  128,   49,   49,   60,   60,  129,   50,
   49,   49,   49,   49,   49,   49,   49,  131,   49,  108,
  130,  138,  132,  136,   49,   49,   50,   50,   50,   50,
   50,   50,   50,   52,   50,  139,  144,  145,  149,  150,
   50,   50,  151,  153,   72,  152,  162,  154,  163,   51,
   52,   52,   52,   52,   52,   52,   52,  164,   52,  156,
  169,  171,  183,  182,   52,   52,   51,   51,   51,   51,
   51,   51,   51,   54,   51,  167,  180,  168,  172,  173,
   51,   51,  181,  196,  175,  179,  184,  188,  190,   53,
   54,   54,   54,   54,   54,   54,   54,  192,   54,  195,
  193,   55,  194,    9,   54,   54,   53,   53,   53,   53,
   53,   53,   53,   56,   53,  197,   28,    8,   57,   63,
   53,   53,   55,   55,   55,   61,   55,   62,   30,   38,
   36,   10,   55,   55,   56,   56,   56,   15,   56,   57,
   57,   57,   11,   57,   56,   56,  126,  185,   61,   57,
   57,  127,  191,    0,    0,    0,   61,   61,   66,   66,
   66,   66,   66,    0,   66,   66,   66,   66,   66,   66,
   66,    0,   66,    0,    0,    0,    0,    0,   66,
};
static const short yycheck[] = {                         15,
   26,   73,   12,   75,   74,   77,  274,  257,   34,   85,
   86,   87,   88,   29,  263,  296,  264,  297,  269,  270,
  311,  289,  279,  303,  304,  305,  283,  308,  309,  257,
  100,  311,   58,   59,  284,  285,  286,  257,   54,  290,
  257,  257,   68,  312,   70,   55,  259,  297,   74,  265,
  266,  267,  268,  303,  304,  305,  284,  285,  286,  258,
  310,  311,  311,  313,  312,  269,  270,  139,  284,  285,
  286,  287,  144,  145,  146,  147,  257,  264,  294,  151,
  261,  297,  310,  311,  311,  313,  302,  303,  304,  305,
  289,  290,  257,  274,  310,  311,  312,  313,  170,  171,
  265,  266,  258,  268,  130,  258,  182,  257,  290,  181,
  291,  261,  128,  129,  295,  261,  271,  272,  273,  284,
  285,  286,  287,  257,  280,  281,  152,  261,  274,  294,
  310,  311,  297,  289,  290,   78,   79,  302,  303,  304,
  305,  291,   80,   81,  160,  310,  311,  312,  313,  258,
  289,  258,  257,  260,   82,   83,   84,  291,  258,  257,
  311,  295,  269,  270,  271,  272,  273,  311,  275,  276,
  277,  278,  279,  280,  281,  258,  283,  260,  311,  310,
  280,  281,  289,  290,  311,  289,  269,  270,  289,  289,
  290,  260,  275,  276,  277,  278,  279,  280,  281,  258,
  283,  260,  280,  258,  281,  258,  289,  290,  265,  289,
  269,  270,  275,  276,  277,  278,  275,  276,  277,  278,
  279,  280,  281,  258,  283,  260,  290,  311,  281,  311,
  289,  290,  262,  258,  269,  270,  289,  290,  258,  258,
  275,  276,  277,  278,  279,  280,  281,  301,  283,  310,
  257,  262,  310,  258,  289,  290,  275,  276,  277,  278,
  279,  280,  281,  258,  283,  289,  289,  289,  311,  262,
  289,  290,  289,  291,  295,  290,  258,  291,  290,  258,
  275,  276,  277,  278,  279,  280,  281,  274,  283,  292,
  259,  289,  260,  274,  289,  290,  275,  276,  277,  278,
  279,  280,  281,  258,  283,  311,  290,  311,  307,  311,
  289,  290,  289,  298,  311,  311,  290,  300,  310,  258,
  275,  276,  277,  278,  279,  280,  281,  290,  283,  290,
  306,  258,  310,  258,  289,  290,  275,  276,  277,  278,
  279,  280,  281,  258,  283,  310,  260,  258,  258,  258,
  289,  290,  279,  280,  281,  258,  283,  258,  289,  289,
  260,    4,  289,  290,  279,  280,  281,    9,  283,  279,
  280,  281,    4,  283,  289,  290,   89,  180,  281,  289,
  290,   90,  189,   -1,   -1,   -1,  289,  290,  269,  270,
  271,  272,  273,   -1,  275,  276,  277,  278,  279,  280,
  281,   -1,  283,   -1,   -1,   -1,   -1,   -1,  289,
};
#define YYFINAL 3
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 313
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
"EMPLOYEE","SHOW_EMPLOYEE","GET_EMPLOYEE","GET_ALL","ANTIQUITY","CATEGORY",
"WEEK","YEAR","DIGITO","VAR","TYPE","STRING","illegal-symbol",
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
"SpecialFunction : GET_EMPLOYEE DIGITO VAR",
"SpecialFunction : GET_ALL VAR",
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
#line 297 "salarium.y"

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
#line 488 "y.tab.c"

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
#line 73 "salarium.y"
	{ printf("%s%s%s\n", yystack.l_mark[-1].strval, "\'", yystack.l_mark[0].strval); }
break;
case 2:
#line 75 "salarium.y"
	{ printf("%s\n", yystack.l_mark[0].strval); }
break;
case 3:
#line 80 "salarium.y"
	{ yyval.strval = concat_str( 3, yystack.l_mark[-1].strval, "\n", yystack.l_mark[0].strval); }
break;
case 4:
#line 82 "salarium.y"
	{ yyval.strval = yystack.l_mark[0].strval; }
break;
case 5:
#line 87 "salarium.y"
	{ yyval.strval = concat_str(7, yystack.l_mark[-3].strval," ", yystack.l_mark[-2].strval, yystack.l_mark[-1].strval, "\n", yystack.l_mark[0].strval, "\n"); }
break;
case 6:
#line 89 "salarium.y"
	{ yyval.strval = concat_str(7, "void ", " ",yystack.l_mark[-2].strval, yystack.l_mark[-1].strval, "\n", yystack.l_mark[0].strval, "\n"); }
break;
case 7:
#line 94 "salarium.y"
	{ yyval.strval = concat_str( 3, "( ", yystack.l_mark[-1].strval, " )"); }
break;
case 8:
#line 99 "salarium.y"
	{ yyval.strval = concat_str( 2, yystack.l_mark[-1].strval, yystack.l_mark[0].strval); }
break;
case 9:
#line 101 "salarium.y"
	{ yyval.strval = ""; }
break;
case 10:
#line 106 "salarium.y"
	{ yyval.strval = concat_str( 3, yystack.l_mark[-2].strval,", ", yystack.l_mark[0].strval); }
break;
case 11:
#line 108 "salarium.y"
	{ yyval.strval = ""; }
break;
case 12:
#line 113 "salarium.y"
	{ yyval.strval = concat_str( 3, yystack.l_mark[-1].strval, " ", yystack.l_mark[0].strval); }
break;
case 13:
#line 118 "salarium.y"
	{ yyval.strval = concat_str( 3, "{\n", yystack.l_mark[-1].strval, "\n}"); }
break;
case 14:
#line 123 "salarium.y"
	{ yyval.strval = concat_str( 3, yystack.l_mark[-2].strval, ";\n",  yystack.l_mark[0].strval); }
break;
case 15:
#line 125 "salarium.y"
	{ yyval.strval = concat_str( 3, yystack.l_mark[-2].strval, ";\n", yystack.l_mark[0].strval); }
break;
case 16:
#line 127 "salarium.y"
	{ yyval.strval = concat_str( 3, yystack.l_mark[-2].strval, ";\n", yystack.l_mark[0].strval); }
break;
case 17:
#line 129 "salarium.y"
	{ yyval.strval = concat_str( 5, yystack.l_mark[-4].strval, " = ", yystack.l_mark[-2].strval , ";\n", yystack.l_mark[0].strval); }
break;
case 18:
#line 131 "salarium.y"
	{ yyval.strval = concat_str( 5, yystack.l_mark[-4].strval, " = ", yystack.l_mark[-2].strval, ";\n", yystack.l_mark[0].strval); }
break;
case 19:
#line 133 "salarium.y"
	{ yyval.strval = concat_str( 5, yystack.l_mark[-4].strval, " = ", yystack.l_mark[-2].strval, ";\n", yystack.l_mark[0].strval); }
break;
case 20:
#line 135 "salarium.y"
	{ yyval.strval = concat_str( 6, "struct Employee ", yystack.l_mark[-4].strval, " = ", yystack.l_mark[-2].strval, ";\n", yystack.l_mark[0].strval); }
break;
case 21:
#line 137 "salarium.y"
	{ yyval.strval = concat_str( 8, "struct Employee ", yystack.l_mark[-7].strval, "[", yystack.l_mark[-5].strval, "] = {", yystack.l_mark[-2].strval, "};\n", yystack.l_mark[0].strval); }
break;
case 22:
#line 139 "salarium.y"
	{ yyval.strval = concat_str( 6,"while ( ", yystack.l_mark[-3].strval, " )\n", yystack.l_mark[-1].strval, "\n", yystack.l_mark[0].strval); }
break;
case 23:
#line 141 "salarium.y"
	{ yyval.strval = concat_str( 6, "if ( ", yystack.l_mark[-3].strval, " )\n", yystack.l_mark[-1].strval, "\n", yystack.l_mark[0].strval) ; }
break;
case 24:
#line 143 "salarium.y"
	{ yyval.strval = concat_str( 9, "if ( ",  yystack.l_mark[-5].strval, " )\n", yystack.l_mark[-3].strval, "\n", "else\n", yystack.l_mark[-1].strval , "\n", yystack.l_mark[0].strval); }
break;
case 25:
#line 145 "salarium.y"
	{ yyval.strval = concat_str( 7, "do\n", yystack.l_mark[-6].strval, "\n", "while ( ", yystack.l_mark[-3].strval, " );\n", yystack.l_mark[0].strval); }
break;
case 26:
#line 147 "salarium.y"
	{ yyval.strval = concat_str( 3, "return ", yystack.l_mark[-1].strval, ";");}
break;
case 27:
#line 149 "salarium.y"
	{ yyval.strval = "break;\n"; }
break;
case 28:
#line 151 "salarium.y"
	{ yyval.strval = ""; }
break;
case 29:
#line 156 "salarium.y"
	{ yyval.strval = concat_str( 13,"{ \"", yystack.l_mark[-15].strval, "\", \"", yystack.l_mark[-12].strval, "\", \"", yystack.l_mark[-9].strval, "\", ", yystack.l_mark[-6].strval, ", ", yystack.l_mark[-3].strval, ", ", yystack.l_mark[0].strval, " }" ); }
break;
case 30:
#line 158 "salarium.y"
	{ yyval.strval = concat_str( 7, " getSalary( ", yystack.l_mark[-3].strval, ", ", yystack.l_mark[-1].strval, ", ", yystack.l_mark[0].strval, ")" );}
break;
case 31:
#line 160 "salarium.y"
	{ yyval.strval = concat_str( 8, " getSalary( ", yystack.l_mark[-7].strval, ", ", yystack.l_mark[-5].strval, ", ", yystack.l_mark[-4].strval, ") - ", yystack.l_mark[-1].strval );}
break;
case 32:
#line 162 "salarium.y"
	{ yyval.strval = concat_str( 3, "printEmployee( ", yystack.l_mark[0].strval, ")" ); }
break;
case 33:
#line 164 "salarium.y"
	{ yyval.strval = concat_str( 9, "getEmployee( ", yystack.l_mark[0].strval,", ", yystack.l_mark[-1].strval, ", (int)sizeof(",yystack.l_mark[0].strval,")/(int)sizeof(",yystack.l_mark[0].strval,"[0]) )"); }
break;
case 34:
#line 166 "salarium.y"
	{ yyval.strval = concat_str( 7, "getAll(", yystack.l_mark[0].strval, ", (int)sizeof(",yystack.l_mark[0].strval,")/(int)sizeof(",yystack.l_mark[0].strval,"[0]) )"); }
break;
case 35:
#line 171 "salarium.y"
	{ yyval.strval = concat_str(3, yystack.l_mark[-2].strval, " - ", yystack.l_mark[0].strval); }
break;
case 36:
#line 173 "salarium.y"
	{ yyval.strval = yystack.l_mark[0].strval; }
break;
case 37:
#line 178 "salarium.y"
	{ yyval.strval = concat_str(3 , yystack.l_mark[-2].strval, " , ", yystack.l_mark[0].strval); }
break;
case 38:
#line 180 "salarium.y"
	{ yyval.strval = yystack.l_mark[0].strval; }
break;
case 39:
#line 184 "salarium.y"
	{ yyval.strval = "\"WEEK\""; }
break;
case 40:
#line 186 "salarium.y"
	{ yyval.strval = "\"MONTH\""; }
break;
case 41:
#line 188 "salarium.y"
	{ yyval.strval = "\"YEAR\""; }
break;
case 42:
#line 193 "salarium.y"
	{ yyval.strval = yystack.l_mark[0].strval; }
break;
case 43:
#line 198 "salarium.y"
	{ yyval.strval = yystack.l_mark[0].strval; }
break;
case 44:
#line 200 "salarium.y"
	{ yyval.strval = concat_str(3, yystack.l_mark[-2].strval, " * ", yystack.l_mark[0].strval); }
break;
case 45:
#line 202 "salarium.y"
	{ yyval.strval = concat_str(3, yystack.l_mark[-2].strval, " / ", yystack.l_mark[0].strval); }
break;
case 46:
#line 204 "salarium.y"
	{ yyval.strval = concat_str(3, yystack.l_mark[-2].strval, " % ", yystack.l_mark[0].strval); }
break;
case 47:
#line 209 "salarium.y"
	{ yyval.strval = yystack.l_mark[0].strval; }
break;
case 48:
#line 211 "salarium.y"
	{ yyval.strval = concat_str(3, yystack.l_mark[-2].strval, " + ", yystack.l_mark[0].strval); }
break;
case 49:
#line 213 "salarium.y"
	{ yyval.strval = concat_str(3, yystack.l_mark[-2].strval, " - ", yystack.l_mark[0].strval); }
break;
case 50:
#line 218 "salarium.y"
	{ yyval.strval = yystack.l_mark[0].strval; }
break;
case 51:
#line 220 "salarium.y"
	{ yyval.strval = concat_str(3, yystack.l_mark[-2].strval, " < ", yystack.l_mark[0].strval); }
break;
case 52:
#line 222 "salarium.y"
	{ yyval.strval = concat_str(3, yystack.l_mark[-2].strval, " > ", yystack.l_mark[0].strval); }
break;
case 53:
#line 224 "salarium.y"
	{ yyval.strval = concat_str(3, yystack.l_mark[-2].strval, " <= ", yystack.l_mark[0].strval); }
break;
case 54:
#line 226 "salarium.y"
	{ yyval.strval = concat_str(3, yystack.l_mark[-2].strval, " >= ", yystack.l_mark[0].strval); }
break;
case 55:
#line 231 "salarium.y"
	{ yyval.strval = yystack.l_mark[0].strval; }
break;
case 56:
#line 233 "salarium.y"
	{ yyval.strval = concat_str(3, yystack.l_mark[-2].strval, " == ", yystack.l_mark[0].strval); }
break;
case 57:
#line 235 "salarium.y"
	{ yyval.strval = concat_str(3, yystack.l_mark[-2].strval, " != ", yystack.l_mark[0].strval); }
break;
case 58:
#line 240 "salarium.y"
	{ yyval.strval = yystack.l_mark[0].strval; }
break;
case 59:
#line 242 "salarium.y"
	{ yyval.strval = concat_str(3, yystack.l_mark[-2].strval, " && ", yystack.l_mark[0].strval); }
break;
case 60:
#line 247 "salarium.y"
	{ yyval.strval = yystack.l_mark[0].strval; }
break;
case 61:
#line 249 "salarium.y"
	{ yyval.strval = concat_str(3, yystack.l_mark[-2].strval, " || ", yystack.l_mark[0].strval); }
break;
case 62:
#line 254 "salarium.y"
	{ yyval.strval = concat_str( 2, yystack.l_mark[-1].strval, yystack.l_mark[0].strval); }
break;
case 63:
#line 256 "salarium.y"
	{ yyval.strval = ""; }
break;
case 64:
#line 261 "salarium.y"
	{ yyval.strval = concat_str( 3, yystack.l_mark[-2].strval, ", ", yystack.l_mark[0].strval); }
break;
case 65:
#line 263 "salarium.y"
	{ yyval.strval = ""; }
break;
case 66:
#line 268 "salarium.y"
	{ yyval.strval = yystack.l_mark[0].strval; }
break;
case 67:
#line 270 "salarium.y"
	{ yyval.strval = yystack.l_mark[0].strval; }
break;
case 68:
#line 272 "salarium.y"
	{ yyval.strval = "true"; }
break;
case 69:
#line 274 "salarium.y"
	{ yyval.strval = "FALSE_T"; }
break;
case 70:
#line 276 "salarium.y"
	{ yyval.strval = yystack.l_mark[0].strval; }
break;
case 71:
#line 278 "salarium.y"
	{ yyval.strval = "NULL_T"; }
break;
case 72:
#line 280 "salarium.y"
	{ yyval.strval = concat_str(3, yystack.l_mark[-2].strval, ".", yystack.l_mark[0].strval); }
break;
case 73:
#line 282 "salarium.y"
	{ yyval.strval = concat_str( 5, yystack.l_mark[-5].strval, "[", yystack.l_mark[-3].strval, "].", yystack.l_mark[0].strval ); }
break;
case 74:
#line 284 "salarium.y"
	{ yyval.strval = concat_str( 5, yystack.l_mark[-5].strval, "[", yystack.l_mark[-3].strval, "].", yystack.l_mark[0].strval ); }
break;
case 75:
#line 286 "salarium.y"
	{ yyval.strval = concat_str( 4, yystack.l_mark[-3].strval, "( ", yystack.l_mark[-1].strval, " )"); }
break;
case 76:
#line 288 "salarium.y"
	{ yyval.strval = concat_str( 3, "( ", yystack.l_mark[-1].strval, " )"); }
break;
case 77:
#line 293 "salarium.y"
	{ yyval.strval = concat_str(3 , yystack.l_mark[-5].strval, " main ()\n", yystack.l_mark[0].strval ); }
break;
#line 998 "y.tab.c"
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
