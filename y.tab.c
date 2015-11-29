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
#define FOREACH 269
#define IN 270
#define PLUS 271
#define MINUS 272
#define MULT 273
#define DIV 274
#define MOD 275
#define ASSIGN 276
#define GT 277
#define LT 278
#define GE 279
#define LE 280
#define EQ 281
#define AND 282
#define OR 283
#define NOT 284
#define NE 285
#define TRUE 286
#define FALSE_T 287
#define NULL_T 288
#define BREAK 289
#define COLON 290
#define SEMICOLON 291
#define COMMA 292
#define DOT 293
#define MINUSDEDUCTIONS 294
#define END 295
#define RETURN 296
#define EMPLOYEE 297
#define SALARYFOR 298
#define SHOW_EMPLOYEE 299
#define GET_EMPLOYEE 300
#define GET_ALL 301
#define GET_NAME 302
#define RAISE 303
#define NAME 304
#define LASTNAME 305
#define ANTIQUITY 306
#define ID 307
#define SALARY 308
#define CATEGORY 309
#define CATEGORY_VAR 310
#define WEEK 311
#define MONTH 312
#define YEAR 313
#define TEN 314
#define TWENTY 315
#define DIGITO 316
#define VAR 317
#define TYPE 318
#define STRING 319
#define YYERRCODE 256
static const short yylhs[] = {                           -1,
    0,    0,    6,    6,    7,    7,    8,    4,    4,    5,
    5,    3,    9,   10,   10,   10,   10,   10,   10,   10,
   10,   10,   10,   10,   10,   10,   10,   10,   10,    1,
    1,    1,    1,    1,   24,   24,   25,   25,   25,   25,
   23,   23,   22,   22,    2,    2,    2,   12,   15,   15,
   15,   15,   13,   13,   13,   16,   16,   16,   16,   16,
   14,   14,   14,   17,   17,   18,   18,   19,   19,   20,
   20,   21,   21,   21,   21,   21,   21,   21,   21,   21,
   21,   21,   11,
};
static const short yylen[] = {                            2,
    2,    1,    2,    1,    4,    4,    3,    2,    0,    3,
    0,    2,    3,    3,    3,    3,    5,    5,    5,    6,
    9,    6,    6,    8,    8,    9,    3,    2,    0,    4,
    8,    2,    2,    1,   17,    3,    2,    2,    2,    3,
    5,    3,    3,    1,    1,    1,    1,    1,    1,    3,
    3,    3,    1,    3,    3,    1,    3,    3,    3,    3,
    1,    3,    3,    1,    3,    1,    3,    2,    0,    3,
    0,    1,    1,    1,    1,    1,    1,    3,    6,    6,
    4,    3,    6,
};
static const short yydefred[] = {                         0,
    0,    0,    0,    0,    4,    2,    0,    0,    0,    3,
    1,    0,    0,    0,    0,    0,   11,    0,    0,    6,
    0,    5,   12,    0,    7,    0,    0,    0,    0,    0,
   74,   75,   77,    0,    0,    0,    0,    0,    0,    0,
   73,    0,   76,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,   49,   34,    0,    0,    0,    0,    0,
    0,    0,    0,   28,    0,    0,   32,    0,   33,    0,
    0,    0,    0,    0,    0,    0,    0,    0,   13,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,   83,   10,   82,    0,    0,    0,    0,
   27,    0,    0,   36,    0,   71,    0,    0,    0,    0,
   78,    0,   16,    0,    0,    0,   14,   15,    0,    0,
    0,    0,   50,   51,   52,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,   81,
    0,    0,    0,   45,   46,   47,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,   19,
    0,   17,   18,   22,    0,   23,    0,    0,    0,    0,
    0,   20,    0,   70,   80,   79,    0,    0,    0,   37,
    0,   38,   39,    0,    0,    0,    0,    0,    0,   24,
   25,   40,    0,    0,    0,    0,    0,   31,   26,   43,
   21,    0,    0,    0,    0,    0,   41,    0,    0,    0,
    0,    0,   35,
};
static const short yydgoto[] = {                          3,
   44,  147,   45,   18,   24,    4,    5,   13,   20,   46,
    6,   47,   48,   49,   50,   51,   52,   53,  107,  139,
   54,  186,  189,   55,  170,
};
static const short yysindex[] = {                      -261,
 -273, -258,    0, -261,    0,    0, -210, -201, -210,    0,
    0, -260, -179, -173, -179, -223,    0, -160, -158,    0,
 -152,    0,    0, -176,    0, -249, -137, -134, -179, -143,
    0,    0,    0, -155, -249, -184, -177, -172, -154, -150,
    0, -227,    0, -146, -251,  -92, -118, -240, -195, -186,
 -123, -107, -103,    0,    0, -179, -260, -250,  -75, -249,
 -249,  -63, -127,    0,  -88, -234,    0, -113,    0,  -85,
 -249, -296, -249, -109, -101, -158, -135, -158,    0, -158,
 -249, -249, -249, -249, -249, -249, -249, -249, -249, -249,
 -249, -249, -249,    0,    0,    0,  -45,  -34,  -31,  -39,
    0,  -72, -278,    0,  -62,    0,  -28,  -17,  -16,  -42,
    0, -164,    0, -238,  -41,  -40,    0,    0, -186, -186,
 -123, -123,    0,    0,    0, -240, -240, -240, -240, -195,
 -107, -179, -179, -249,   -7,   -5,  -36,  -59,  -26,    0,
  -24,  -23, -158,    0,    0,    0,  -12, -158, -158, -158,
 -204,   10, -252,    8, -158,  -21, -249,  -32,  -30,    0,
   27,    0,    0,    0, -179,    0,    7,    9, -286,   41,
  -14,    0,    5,    0,    0,    0,   -1, -158, -158,    0,
   11,    0,    0,   26,   38,   28,    1,   57,   75,    0,
    0,    0, -158,  -14, -158,   42, -249,    0,    0,    0,
    0,   29, -259,   32,   -1,   58,    0,   43,   36,   68,
   53,   47,    0,
};
static const short yyrindex[] = {                         0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,  104,    0,    0,    0,    0,    0,    0,  107,    0,
    0,    0,    0,  106,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,  122,    0,    0,    0,    0,    0,   -2, -157,  -60,
   74, -121, -213,    0,    0,    0,    0,  -86,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
  110,    0,    0,    0,    0,  107,    0,  107,    0,  107,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,  122,    0,    0,    0,    0,  -44,  -18,
   88,   93,    0,    0,    0,   14,   30,   46,   62,  100,
  -82,    0,    0,    0,    0,    0,    0,    0,  114,    0,
    0,    0,  107,    0,    0,    0,   86,  107,  107,  107,
  107,    0,    0,    0,  107,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,  107,  107,    0,
    0,    0,    0,    0,   90,    0,    0,    0,    0,    0,
    0,    0,  107,    0,  107,    0,    0,    0,    0,    0,
    0,    0,  126,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,
};
static const short yygindex[] = {                         0,
  310,    0,   -3,    0,    0,    0,  384,  380,  -15,  -74,
  386,  -25,  -73,  306,   -9,   19,  313,    0,    0,    0,
   92,  214,  204,  307,    0,
};
#define YYTABLESIZE 413
static const short yytable[] = {                         22,
   59,  113,    1,  117,    8,  118,   71,   26,   17,   65,
   72,   81,   82,   62,  126,  127,  128,  129,   71,  108,
  109,   38,   72,  181,   77,   40,  102,  182,  183,   71,
   81,   82,  205,   72,   97,   98,   31,   32,   33,   78,
   94,  103,   74,    7,   48,  106,   12,  110,   73,  168,
  169,  116,   26,   95,   74,   14,    2,   16,    9,   75,
   27,   28,  165,   29,   30,   74,   41,   58,  160,   43,
   75,  119,  120,  162,  163,  164,  166,   48,   48,   19,
  172,   31,   32,   33,   34,   83,   85,   86,   87,   84,
   21,   35,   36,   23,   37,   38,   39,   25,   26,   40,
   64,  121,  122,  190,  191,   56,   27,   28,  152,   29,
   30,   41,   42,   16,   43,   57,  150,  151,  199,   60,
  201,   26,   61,  203,   64,   64,   63,   31,   32,   33,
   34,  174,   66,   64,   64,   64,   66,   35,   36,   67,
   37,   38,   39,   68,   76,   40,  144,  145,  146,  178,
   31,   32,   33,   88,   89,   90,   91,   41,   42,   16,
   43,   66,   69,   37,   38,   39,   70,   79,   40,   66,
   66,   72,   80,   72,   92,   67,  123,  124,  125,   93,
   41,  114,   96,   43,   72,   72,   72,   72,   72,  100,
   72,   72,   72,   72,   72,   72,   72,   53,   72,   53,
   67,   99,  101,  104,   72,   72,  105,  111,   67,   67,
   53,   53,  132,   54,  112,   54,   53,   53,   53,   53,
   53,   53,   53,  133,   53,  134,   54,   54,  135,  140,
   53,   53,   54,   54,   54,   54,   54,   54,   54,   55,
   54,   55,  138,  136,  141,  142,   54,   54,  143,  148,
  149,  153,   55,   55,  155,   56,  154,  156,   55,   55,
   55,   55,   55,   55,   55,  157,   55,  167,  158,  159,
  173,   58,   55,   55,   56,   56,   56,   56,   56,   56,
   56,  161,   56,  171,  175,  177,  176,   57,   56,   56,
   58,   58,   58,   58,   58,   58,   58,  179,   58,  180,
  184,  192,  185,   60,   58,   58,   57,   57,   57,   57,
   57,   57,   57,  187,   57,  188,  193,  196,  195,   59,
   57,   57,   60,   60,   60,   60,   60,   60,   60,  194,
   60,   61,  197,  202,  198,  204,   60,   60,   59,   59,
   59,   59,   59,   59,   59,   62,   59,  206,  209,  208,
   63,  210,   59,   59,   61,   61,   61,   65,   61,  211,
  212,    9,  213,    8,   61,   61,   29,   69,   62,   62,
   62,   68,   62,   63,   63,   63,   30,   63,   62,   62,
   44,   65,   65,   63,   63,   42,  115,   10,   15,   11,
   65,   65,   72,   72,   72,   72,   72,  130,   72,   72,
   72,   72,   72,   72,   72,  131,   72,  200,  207,  137,
    0,    0,   72,
};
static const short yycheck[] = {                         15,
   26,   76,  264,   78,  263,   80,  257,  257,   12,   35,
  261,  271,  272,   29,   88,   89,   90,   91,  257,  316,
  317,  300,  261,  310,  276,  304,  261,  314,  315,  257,
  271,  272,  292,  261,   60,   61,  286,  287,  288,  291,
   56,  276,  293,  317,  258,   71,  257,   73,  276,  302,
  303,   77,  257,   57,  293,  257,  318,  318,  317,  298,
  265,  266,  267,  268,  269,  293,  316,  317,  143,  319,
  298,   81,   82,  148,  149,  150,  151,  291,  292,  259,
  155,  286,  287,  288,  289,  281,  273,  274,  275,  285,
  264,  296,  297,  317,  299,  300,  301,  258,  257,  304,
  258,   83,   84,  178,  179,  258,  265,  266,  134,  268,
  269,  316,  317,  318,  319,  292,  132,  133,  193,  257,
  195,  257,  257,  197,  282,  283,  270,  286,  287,  288,
  289,  157,  317,  291,  292,  291,  258,  296,  297,  317,
  299,  300,  301,  316,  291,  304,  311,  312,  313,  165,
  286,  287,  288,  277,  278,  279,  280,  316,  317,  318,
  319,  283,  317,  299,  300,  301,  317,  260,  304,  291,
  292,  258,  291,  260,  282,  258,   85,   86,   87,  283,
  316,  317,  258,  319,  271,  272,  273,  274,  275,  317,
  277,  278,  279,  280,  281,  282,  283,  258,  285,  260,
  283,  265,  291,  317,  291,  292,  292,  317,  291,  292,
  271,  272,  258,  258,  316,  260,  277,  278,  279,  280,
  281,  282,  283,  258,  285,  257,  271,  272,  268,  258,
  291,  292,  277,  278,  279,  280,  281,  282,  283,  258,
  285,  260,  305,  316,  262,  262,  291,  292,  291,  291,
  291,  259,  271,  272,  291,  258,  262,  317,  277,  278,
  279,  280,  281,  282,  283,  292,  285,  258,  293,  293,
  292,  258,  291,  292,  277,  278,  279,  280,  281,  282,
  283,  294,  285,  276,  317,  259,  317,  258,  291,  292,
  277,  278,  279,  280,  281,  282,  283,  291,  285,  291,
  260,  291,  317,  258,  291,  292,  277,  278,  279,  280,
  281,  282,  283,  309,  285,  317,  291,  317,  291,  258,
  291,  292,  277,  278,  279,  280,  281,  282,  283,  292,
  285,  258,  276,  292,  260,  307,  291,  292,  277,  278,
  279,  280,  281,  282,  283,  258,  285,  316,  306,  292,
  258,  316,  291,  292,  281,  282,  283,  258,  285,  292,
  308,  258,  316,  258,  291,  292,  260,  258,  281,  282,
  283,  258,  285,  281,  282,  283,  291,  285,  291,  292,
  291,  282,  283,  291,  292,  260,   77,    4,    9,    4,
  291,  292,  271,  272,  273,  274,  275,   92,  277,  278,
  279,  280,  281,  282,  283,   93,  285,  194,  205,  103,
   -1,   -1,  291,
};
#define YYFINAL 3
#ifndef YYDEBUG
#define YYDEBUG 1
#endif
#define YYMAXTOKEN 319
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
"S_BRACKET_CIERRA","MAIN","VOID","WHILE","IF","ELSE","DO","FOREACH","IN","PLUS",
"MINUS","MULT","DIV","MOD","ASSIGN","GT","LT","GE","LE","EQ","AND","OR","NOT",
"NE","TRUE","FALSE_T","NULL_T","BREAK","COLON","SEMICOLON","COMMA","DOT",
"MINUSDEDUCTIONS","END","RETURN","EMPLOYEE","SALARYFOR","SHOW_EMPLOYEE",
"GET_EMPLOYEE","GET_ALL","GET_NAME","RAISE","NAME","LASTNAME","ANTIQUITY","ID",
"SALARY","CATEGORY","CATEGORY_VAR","WEEK","MONTH","YEAR","TEN","TWENTY",
"DIGITO","VAR","TYPE","STRING","illegal-symbol",
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
"Statement : EMPLOYEE VAR ASSIGN ReturnEmployee SEMICOLON Statement",
"Statement : EMPLOYEE VAR S_BRACKET_ABRE DIGITO S_BRACKET_CIERRA ASSIGN EmpValues SEMICOLON Statement",
"Statement : WHILE PARENTESIS_ABRE Exp PARENTESIS_CIERRA CodeBlock Statement",
"Statement : IF PARENTESIS_ABRE Exp PARENTESIS_CIERRA CodeBlock Statement",
"Statement : IF PARENTESIS_ABRE Exp PARENTESIS_CIERRA CodeBlock ELSE CodeBlock Statement",
"Statement : DO CodeBlock WHILE PARENTESIS_ABRE Exp PARENTESIS_CIERRA SEMICOLON Statement",
"Statement : FOREACH IN VAR DO C_BRACKET_ABRE FunctionOverEmployee C_BRACKET_CIERRA SEMICOLON Statement",
"Statement : RETURN Exp SEMICOLON",
"Statement : BREAK SEMICOLON",
"Statement :",
"SpecialFunction : VAR SALARYFOR DIGITO TimeLapse",
"SpecialFunction : VAR SALARYFOR DIGITO TimeLapse MINUSDEDUCTIONS C_BRACKET_ABRE Deductions C_BRACKET_CIERRA",
"SpecialFunction : SHOW_EMPLOYEE VAR",
"SpecialFunction : GET_ALL VAR",
"SpecialFunction : ReturnEmployee",
"ReturnEmployee : NAME VAR COMMA LASTNAME VAR COMMA CATEGORY VAR COMMA ID DIGITO COMMA ANTIQUITY DIGITO COMMA SALARY DIGITO",
"ReturnEmployee : GET_EMPLOYEE DIGITO VAR",
"FunctionOverEmployee : GET_NAME SEMICOLON",
"FunctionOverEmployee : RAISE TEN",
"FunctionOverEmployee : RAISE TWENTY",
"FunctionOverEmployee : RAISE CATEGORY_VAR SEMICOLON",
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
#line 316 "salarium.y"

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
#line 511 "y.tab.c"

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
#line 74 "salarium.y"
	{ printf("%s%s%s\n", yystack.l_mark[-1].strval, "\'", yystack.l_mark[0].strval); }
break;
case 2:
#line 76 "salarium.y"
	{ printf("%s\n", yystack.l_mark[0].strval); }
break;
case 3:
#line 81 "salarium.y"
	{ yyval.strval = concat_str( 3, yystack.l_mark[-1].strval, "\n", yystack.l_mark[0].strval); }
break;
case 4:
#line 83 "salarium.y"
	{ yyval.strval = yystack.l_mark[0].strval; }
break;
case 5:
#line 88 "salarium.y"
	{ yyval.strval = concat_str(7, yystack.l_mark[-3].strval," ", yystack.l_mark[-2].strval, yystack.l_mark[-1].strval, "\n", yystack.l_mark[0].strval, "\n"); }
break;
case 6:
#line 90 "salarium.y"
	{ yyval.strval = concat_str(7, "void ", " ",yystack.l_mark[-2].strval, yystack.l_mark[-1].strval, "\n", yystack.l_mark[0].strval, "\n"); }
break;
case 7:
#line 95 "salarium.y"
	{ yyval.strval = concat_str( 3, "( ", yystack.l_mark[-1].strval, " )"); }
break;
case 8:
#line 100 "salarium.y"
	{ yyval.strval = concat_str( 2, yystack.l_mark[-1].strval, yystack.l_mark[0].strval); }
break;
case 9:
#line 102 "salarium.y"
	{ yyval.strval = ""; }
break;
case 10:
#line 107 "salarium.y"
	{ yyval.strval = concat_str( 3, yystack.l_mark[-2].strval,", ", yystack.l_mark[0].strval); }
break;
case 11:
#line 109 "salarium.y"
	{ yyval.strval = ""; }
break;
case 12:
#line 114 "salarium.y"
	{ yyval.strval = concat_str( 3, yystack.l_mark[-1].strval, " ", yystack.l_mark[0].strval); }
break;
case 13:
#line 119 "salarium.y"
	{ yyval.strval = concat_str( 3, "{\n", yystack.l_mark[-1].strval, "\n}"); }
break;
case 14:
#line 124 "salarium.y"
	{ yyval.strval = concat_str( 3, yystack.l_mark[-2].strval, ";\n",  yystack.l_mark[0].strval); }
break;
case 15:
#line 126 "salarium.y"
	{ yyval.strval = concat_str( 3, yystack.l_mark[-2].strval, ";\n", yystack.l_mark[0].strval); }
break;
case 16:
#line 128 "salarium.y"
	{ yyval.strval = concat_str( 3, yystack.l_mark[-2].strval, ";\n", yystack.l_mark[0].strval); }
break;
case 17:
#line 130 "salarium.y"
	{ yyval.strval = concat_str( 5, yystack.l_mark[-4].strval, " = ", yystack.l_mark[-2].strval , ";\n", yystack.l_mark[0].strval); }
break;
case 18:
#line 132 "salarium.y"
	{ yyval.strval = concat_str( 5, yystack.l_mark[-4].strval, " = ", yystack.l_mark[-2].strval, ";\n", yystack.l_mark[0].strval); }
break;
case 19:
#line 134 "salarium.y"
	{ yyval.strval = concat_str( 5, yystack.l_mark[-4].strval, " = ", yystack.l_mark[-2].strval, ";\n", yystack.l_mark[0].strval); }
break;
case 20:
#line 136 "salarium.y"
	{ yyval.strval = concat_str( 6, "struct Employee ", yystack.l_mark[-4].strval, " = ", yystack.l_mark[-2].strval, ";\n", yystack.l_mark[0].strval); }
break;
case 21:
#line 138 "salarium.y"
	{ yyval.strval = concat_str( 8, "struct Employee ", yystack.l_mark[-7].strval, "[", yystack.l_mark[-5].strval, "] = {", yystack.l_mark[-2].strval, "};\n", yystack.l_mark[0].strval); }
break;
case 22:
#line 140 "salarium.y"
	{ yyval.strval = concat_str( 6,"while ( ", yystack.l_mark[-3].strval, " )\n", yystack.l_mark[-1].strval, "\n", yystack.l_mark[0].strval); }
break;
case 23:
#line 142 "salarium.y"
	{ yyval.strval = concat_str( 6, "if ( ", yystack.l_mark[-3].strval, " )\n", yystack.l_mark[-1].strval, "\n", yystack.l_mark[0].strval) ; }
break;
case 24:
#line 144 "salarium.y"
	{ yyval.strval = concat_str( 9, "if ( ",  yystack.l_mark[-5].strval, " )\n", yystack.l_mark[-3].strval, "\n", "else\n", yystack.l_mark[-1].strval , "\n", yystack.l_mark[0].strval); }
break;
case 25:
#line 146 "salarium.y"
	{ yyval.strval = concat_str( 7, "do\n", yystack.l_mark[-6].strval, "\n", "while ( ", yystack.l_mark[-3].strval, " );\n", yystack.l_mark[0].strval); }
break;
case 26:
#line 148 "salarium.y"
	{ yyval.strval = concat_str( 10, "iterate(", yystack.l_mark[-6].strval, ", (int)sizeof(",yystack.l_mark[-6].strval,")/(int)sizeof(",yystack.l_mark[-6].strval,"[0]),", yystack.l_mark[-3].strval, ");", yystack.l_mark[0].strval);}
break;
case 27:
#line 150 "salarium.y"
	{ yyval.strval = concat_str( 3, "return ", yystack.l_mark[-1].strval, ";");}
break;
case 28:
#line 152 "salarium.y"
	{ yyval.strval = "break;\n"; }
break;
case 29:
#line 154 "salarium.y"
	{ yyval.strval = ""; }
break;
case 30:
#line 159 "salarium.y"
	{ yyval.strval = concat_str( 7, " getSalary( ", yystack.l_mark[-3].strval, ", ", yystack.l_mark[-1].strval, ", ", yystack.l_mark[0].strval, ")" );}
break;
case 31:
#line 161 "salarium.y"
	{ yyval.strval = concat_str( 8, " getSalary( ", yystack.l_mark[-7].strval, ", ", yystack.l_mark[-5].strval, ", ", yystack.l_mark[-4].strval, ") - ", yystack.l_mark[-1].strval );}
break;
case 32:
#line 163 "salarium.y"
	{ yyval.strval = concat_str( 3, "printEmployee( ", yystack.l_mark[0].strval, ")" ); }
break;
case 33:
#line 165 "salarium.y"
	{ yyval.strval = concat_str( 7, "getAll(", yystack.l_mark[0].strval, ", (int)sizeof(",yystack.l_mark[0].strval,")/(int)sizeof(",yystack.l_mark[0].strval,"[0]) )"); }
break;
case 34:
#line 167 "salarium.y"
	{ yyval.strval = yystack.l_mark[0].strval; }
break;
case 35:
#line 172 "salarium.y"
	{ yyval.strval = concat_str( 13,"{ \"", yystack.l_mark[-15].strval, "\", \"", yystack.l_mark[-12].strval, "\", \"", yystack.l_mark[-9].strval, "\", ", yystack.l_mark[-6].strval, ", ", yystack.l_mark[-3].strval, ", ", yystack.l_mark[0].strval, " }" ); }
break;
case 36:
#line 174 "salarium.y"
	{ yyval.strval = concat_str( 9, "getEmployee( ", yystack.l_mark[0].strval,", ", yystack.l_mark[-1].strval, ", (int)sizeof(",yystack.l_mark[0].strval,")/(int)sizeof(",yystack.l_mark[0].strval,"[0]) )"); }
break;
case 37:
#line 179 "salarium.y"
	{ yyval.strval = "getName"; }
break;
case 38:
#line 181 "salarium.y"
	{ yyval.strval = "raise10"; }
break;
case 39:
#line 183 "salarium.y"
	{ yyval.strval = "raise20"; }
break;
case 40:
#line 185 "salarium.y"
	{ yyval.strval = "raiseCategory"; }
break;
case 41:
#line 190 "salarium.y"
	{ yyval.strval = concat_str(3, yystack.l_mark[-2].strval, " - ", yystack.l_mark[0].strval); }
break;
case 42:
#line 192 "salarium.y"
	{ yyval.strval = yystack.l_mark[0].strval; }
break;
case 43:
#line 197 "salarium.y"
	{ yyval.strval = concat_str(3 , yystack.l_mark[-2].strval, " , ", yystack.l_mark[0].strval); }
break;
case 44:
#line 199 "salarium.y"
	{ yyval.strval = yystack.l_mark[0].strval; }
break;
case 45:
#line 203 "salarium.y"
	{ yyval.strval = "\"WEEK\""; }
break;
case 46:
#line 205 "salarium.y"
	{ yyval.strval = "\"MONTH\""; }
break;
case 47:
#line 207 "salarium.y"
	{ yyval.strval = "\"YEAR\""; }
break;
case 48:
#line 212 "salarium.y"
	{ yyval.strval = yystack.l_mark[0].strval; }
break;
case 49:
#line 217 "salarium.y"
	{ yyval.strval = yystack.l_mark[0].strval; }
break;
case 50:
#line 219 "salarium.y"
	{ yyval.strval = concat_str(3, yystack.l_mark[-2].strval, " * ", yystack.l_mark[0].strval); }
break;
case 51:
#line 221 "salarium.y"
	{ yyval.strval = concat_str(3, yystack.l_mark[-2].strval, " / ", yystack.l_mark[0].strval); }
break;
case 52:
#line 223 "salarium.y"
	{ yyval.strval = concat_str(3, yystack.l_mark[-2].strval, " % ", yystack.l_mark[0].strval); }
break;
case 53:
#line 228 "salarium.y"
	{ yyval.strval = yystack.l_mark[0].strval; }
break;
case 54:
#line 230 "salarium.y"
	{ yyval.strval = concat_str(3, yystack.l_mark[-2].strval, " + ", yystack.l_mark[0].strval); }
break;
case 55:
#line 232 "salarium.y"
	{ yyval.strval = concat_str(3, yystack.l_mark[-2].strval, " - ", yystack.l_mark[0].strval); }
break;
case 56:
#line 237 "salarium.y"
	{ yyval.strval = yystack.l_mark[0].strval; }
break;
case 57:
#line 239 "salarium.y"
	{ yyval.strval = concat_str(3, yystack.l_mark[-2].strval, " < ", yystack.l_mark[0].strval); }
break;
case 58:
#line 241 "salarium.y"
	{ yyval.strval = concat_str(3, yystack.l_mark[-2].strval, " > ", yystack.l_mark[0].strval); }
break;
case 59:
#line 243 "salarium.y"
	{ yyval.strval = concat_str(3, yystack.l_mark[-2].strval, " <= ", yystack.l_mark[0].strval); }
break;
case 60:
#line 245 "salarium.y"
	{ yyval.strval = concat_str(3, yystack.l_mark[-2].strval, " >= ", yystack.l_mark[0].strval); }
break;
case 61:
#line 250 "salarium.y"
	{ yyval.strval = yystack.l_mark[0].strval; }
break;
case 62:
#line 252 "salarium.y"
	{ yyval.strval = concat_str(3, yystack.l_mark[-2].strval, " == ", yystack.l_mark[0].strval); }
break;
case 63:
#line 254 "salarium.y"
	{ yyval.strval = concat_str(3, yystack.l_mark[-2].strval, " != ", yystack.l_mark[0].strval); }
break;
case 64:
#line 259 "salarium.y"
	{ yyval.strval = yystack.l_mark[0].strval; }
break;
case 65:
#line 261 "salarium.y"
	{ yyval.strval = concat_str(3, yystack.l_mark[-2].strval, " && ", yystack.l_mark[0].strval); }
break;
case 66:
#line 266 "salarium.y"
	{ yyval.strval = yystack.l_mark[0].strval; }
break;
case 67:
#line 268 "salarium.y"
	{ yyval.strval = concat_str(3, yystack.l_mark[-2].strval, " || ", yystack.l_mark[0].strval); }
break;
case 68:
#line 273 "salarium.y"
	{ yyval.strval = concat_str( 2, yystack.l_mark[-1].strval, yystack.l_mark[0].strval); }
break;
case 69:
#line 275 "salarium.y"
	{ yyval.strval = ""; }
break;
case 70:
#line 280 "salarium.y"
	{ yyval.strval = concat_str( 3, yystack.l_mark[-2].strval, ", ", yystack.l_mark[0].strval); }
break;
case 71:
#line 282 "salarium.y"
	{ yyval.strval = ""; }
break;
case 72:
#line 287 "salarium.y"
	{ yyval.strval = yystack.l_mark[0].strval; }
break;
case 73:
#line 289 "salarium.y"
	{ yyval.strval = yystack.l_mark[0].strval; }
break;
case 74:
#line 291 "salarium.y"
	{ yyval.strval = "true"; }
break;
case 75:
#line 293 "salarium.y"
	{ yyval.strval = "FALSE_T"; }
break;
case 76:
#line 295 "salarium.y"
	{ yyval.strval = yystack.l_mark[0].strval; }
break;
case 77:
#line 297 "salarium.y"
	{ yyval.strval = "NULL_T"; }
break;
case 78:
#line 299 "salarium.y"
	{ yyval.strval = concat_str(3, yystack.l_mark[-2].strval, ".", yystack.l_mark[0].strval); }
break;
case 79:
#line 301 "salarium.y"
	{ yyval.strval = concat_str( 5, yystack.l_mark[-5].strval, "[", yystack.l_mark[-3].strval, "].", yystack.l_mark[0].strval ); }
break;
case 80:
#line 303 "salarium.y"
	{ yyval.strval = concat_str( 5, yystack.l_mark[-5].strval, "[", yystack.l_mark[-3].strval, "].", yystack.l_mark[0].strval ); }
break;
case 81:
#line 305 "salarium.y"
	{ yyval.strval = concat_str( 4, yystack.l_mark[-3].strval, "( ", yystack.l_mark[-1].strval, " )"); }
break;
case 82:
#line 307 "salarium.y"
	{ yyval.strval = concat_str( 3, "( ", yystack.l_mark[-1].strval, " )"); }
break;
case 83:
#line 312 "salarium.y"
	{ yyval.strval = concat_str(3 , yystack.l_mark[-5].strval, " main ()\n", yystack.l_mark[0].strval ); }
break;
#line 1045 "y.tab.c"
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
