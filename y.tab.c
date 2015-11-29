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
   25,   23,   23,   22,   22,    2,    2,    2,   12,   15,
   15,   15,   15,   13,   13,   13,   16,   16,   16,   16,
   16,   14,   14,   14,   17,   17,   18,   18,   19,   19,
   20,   20,   21,   21,   21,   21,   21,   21,   21,   21,
   21,   21,   21,   11,
};
static const short yylen[] = {                            2,
    2,    1,    2,    1,    4,    4,    3,    2,    0,    3,
    0,    2,    3,    3,    3,    3,    5,    5,    5,    6,
    9,    6,    6,    8,    8,    9,    3,    2,    0,    4,
    8,    2,    2,    1,   17,    3,    2,    2,    2,    3,
    2,    5,    3,    3,    1,    1,    1,    1,    1,    1,
    3,    3,    3,    1,    3,    3,    1,    3,    3,    3,
    3,    1,    3,    3,    1,    3,    1,    3,    2,    0,
    3,    0,    1,    1,    1,    1,    1,    1,    3,    6,
    6,    4,    3,    6,
};
static const short yydefred[] = {                         0,
    0,    0,    0,    0,    4,    2,    0,    0,    0,    3,
    1,    0,    0,    0,    0,    0,   11,    0,    0,    6,
    0,    5,   12,    0,    7,    0,    0,    0,    0,    0,
   75,   76,   78,    0,    0,    0,    0,    0,    0,    0,
   74,    0,   77,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,   50,   34,    0,    0,    0,    0,    0,
    0,    0,    0,   28,    0,    0,   32,    0,   33,    0,
    0,    0,    0,    0,    0,    0,    0,    0,   13,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,   84,   10,   83,    0,    0,    0,    0,
   27,    0,    0,   36,    0,   72,    0,    0,    0,    0,
   79,    0,   16,    0,    0,    0,   14,   15,    0,    0,
    0,    0,   51,   52,   53,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,   82,
    0,    0,    0,   46,   47,   48,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,   19,
    0,   17,   18,   22,    0,   23,    0,    0,    0,    0,
    0,    0,   20,    0,   71,   81,   80,    0,    0,    0,
   41,   37,    0,   38,   39,    0,    0,    0,    0,    0,
    0,   24,   25,   40,    0,    0,    0,    0,    0,   31,
   26,   44,   21,    0,    0,    0,    0,    0,   42,    0,
    0,    0,    0,    0,   35,
};
static const short yydgoto[] = {                          3,
   44,  147,   45,   18,   24,    4,    5,   13,   20,   46,
    6,   47,   48,   49,   50,   51,   52,   53,  107,  139,
   54,  188,  191,   55,  171,
};
static const short yysindex[] = {                      -261,
 -273, -258,    0, -261,    0,    0, -201, -199, -201,    0,
    0, -224, -179, -166, -179, -216,    0, -139, -158,    0,
 -138,    0,    0, -159,    0, -249, -120, -117, -179, -136,
    0,    0,    0, -147, -249, -172, -155, -153, -150, -149,
    0, -227,    0, -121, -251,  -89, -118, -240, -195, -186,
 -123, -104, -103,    0,    0, -179, -224, -250,  -79, -249,
 -249,  -82, -127,    0,  -90, -234,    0, -115,    0,  -88,
 -249, -296, -249, -114, -109, -158, -135, -158,    0, -158,
 -249, -249, -249, -249, -249, -249, -249, -249, -249, -249,
 -249, -249, -249,    0,    0,    0,  -50,  -49,  -47,  -55,
    0, -101, -278,    0,  -81,    0,  -32,  -33,  -19,  -61,
    0, -164,    0, -238,  -46,  -45,    0,    0, -186, -186,
 -123, -123,    0,    0,    0, -240, -240, -240, -240, -195,
 -104, -179, -179, -249,  -10,  -12,  -40,  -65,  -48,    0,
  -38,  -36, -158,    0,    0,    0,  -28, -158, -158, -158,
 -204,   10, -252,   -7, -158,  -34, -249,  -35,  -31,    0,
   11,    0,    0,    0, -179,    0,  -20,  -30,   -6, -286,
   24,  -17,    0,  -11,    0,    0,    0,  -16, -158, -158,
    0,    0,   12,    0,    0,   23,   25,   27,   -1,   26,
   59,    0,    0,    0, -158,  -17, -158,   38, -249,    0,
    0,    0,    0,   28, -259,   17,  -16,   42,    0,   43,
   32,   44,   52,   34,    0,
};
static const short yyrindex[] = {                         0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,   94,    0,    0,    0,    0,    0,    0,  101,    0,
    0,    0,    0,  105,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,  126,    0,    0,    0,    0,    0,   -2,  100,  -60,
   74, -167, -213,    0,    0,    0,    0,  -86,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
  106,    0,    0,    0,    0,  101,    0,  101,    0,  101,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,  126,    0,    0,    0,    0,  -44,  -18,
   88,   93,    0,    0,    0,   14,   30,   46,   62,  104,
 -156,    0,    0,    0,    0,    0,    0,    0,  109,    0,
    0,    0,  101,    0,    0,    0,   77,  101,  101,  101,
  101,    0,    0,    0,  101,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,  101,  101,
    0,    0,    0,    0,    0,    0,   81,    0,    0,    0,
    0,    0,    0,    0,  101,    0,  101,    0,    0,    0,
    0,    0,    0,    0,  117,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,
};
static const short yygindex[] = {                         0,
  304,    0,   -3,    0,    0,    0,  384,  380,  -15,  -74,
  386,  -25,  -73,  301,   -9,   20,  309,    0,    0,    0,
   90,  198,  203,  310,    0,
};
#define YYTABLESIZE 417
static const short yytable[] = {                         22,
   59,  113,    1,  117,    8,  118,   71,   26,   17,   65,
   72,   81,   82,   62,  126,  127,  128,  129,   71,  108,
  109,   38,   72,  183,   77,   40,  102,  184,  185,   71,
   81,   82,  207,   72,   97,   98,   31,   32,   33,   78,
   94,  103,   74,    7,   49,  106,  168,  110,   73,  169,
  170,  116,   26,   95,   74,   12,    2,   14,    9,   75,
   27,   28,  165,   29,   30,   74,   41,   58,  160,   43,
   75,  119,  120,  162,  163,  164,  166,   49,   49,   19,
  173,   31,   32,   33,   34,   83,   85,   86,   87,   84,
   67,   35,   36,   16,   37,   38,   39,   21,   26,   40,
   23,   68,  121,  122,  192,  193,   27,   28,  152,   29,
   30,   41,   42,   16,   43,   67,  150,  151,   25,   56,
  201,   26,  203,   67,   67,  205,   68,   31,   32,   33,
   34,  175,   57,   63,   68,   68,   60,   35,   36,   61,
   37,   38,   39,   64,   66,   40,  144,  145,  146,  179,
   31,   32,   33,   88,   89,   90,   91,   41,   42,   16,
   43,   67,   68,   37,   38,   39,   69,   70,   40,   76,
   79,   73,   80,   73,  123,  124,  125,   92,   96,   93,
   41,  114,   99,   43,   73,   73,   73,   73,   73,  100,
   73,   73,   73,   73,   73,   73,   73,   54,   73,   54,
  101,  104,  111,  105,   73,   73,  112,  132,  133,  134,
   54,   54,  135,   55,  136,   55,   54,   54,   54,   54,
   54,   54,   54,  138,   54,  140,   55,   55,  141,  143,
   54,   54,   55,   55,   55,   55,   55,   55,   55,   56,
   55,   56,  142,  157,  148,  149,   55,   55,  153,  154,
  155,  156,   56,   56,  158,   57,  159,  174,   56,   56,
   56,   56,   56,   56,   56,  161,   56,  167,  172,  178,
  180,   59,   56,   56,   57,   57,   57,   57,   57,   57,
   57,  176,   57,  186,  182,  177,  181,   58,   57,   57,
   59,   59,   59,   59,   59,   59,   59,  189,   59,  187,
  190,  199,  194,   61,   59,   59,   58,   58,   58,   58,
   58,   58,   58,  195,   58,  198,  196,  197,  200,   60,
   58,   58,   61,   61,   61,   61,   61,   61,   61,  204,
   61,   62,  208,  210,  206,  213,   61,   61,   60,   60,
   60,   60,   60,   60,   60,   63,   60,  212,  211,  215,
   64,    9,   60,   60,   62,   62,   62,   65,   62,  214,
   29,   66,    8,   70,   62,   62,   69,   30,   63,   63,
   63,   45,   63,   64,   64,   64,   43,   64,   63,   63,
  115,   65,   65,   64,   64,   66,   66,   10,   15,   11,
   65,   65,  130,  202,   66,   66,   73,   73,   73,   73,
   73,  131,   73,   73,   73,   73,   73,   73,   73,  209,
   73,    0,  137,    0,    0,    0,   73,
};
static const short yycheck[] = {                         15,
   26,   76,  264,   78,  263,   80,  257,  257,   12,   35,
  261,  271,  272,   29,   88,   89,   90,   91,  257,  316,
  317,  300,  261,  310,  276,  304,  261,  314,  315,  257,
  271,  272,  292,  261,   60,   61,  286,  287,  288,  291,
   56,  276,  293,  317,  258,   71,  299,   73,  276,  302,
  303,   77,  257,   57,  293,  257,  318,  257,  317,  298,
  265,  266,  267,  268,  269,  293,  316,  317,  143,  319,
  298,   81,   82,  148,  149,  150,  151,  291,  292,  259,
  155,  286,  287,  288,  289,  281,  273,  274,  275,  285,
  258,  296,  297,  318,  299,  300,  301,  264,  257,  304,
  317,  258,   83,   84,  179,  180,  265,  266,  134,  268,
  269,  316,  317,  318,  319,  283,  132,  133,  258,  258,
  195,  257,  197,  291,  292,  199,  283,  286,  287,  288,
  289,  157,  292,  270,  291,  292,  257,  296,  297,  257,
  299,  300,  301,  291,  317,  304,  311,  312,  313,  165,
  286,  287,  288,  277,  278,  279,  280,  316,  317,  318,
  319,  317,  316,  299,  300,  301,  317,  317,  304,  291,
  260,  258,  291,  260,   85,   86,   87,  282,  258,  283,
  316,  317,  265,  319,  271,  272,  273,  274,  275,  317,
  277,  278,  279,  280,  281,  282,  283,  258,  285,  260,
  291,  317,  317,  292,  291,  292,  316,  258,  258,  257,
  271,  272,  268,  258,  316,  260,  277,  278,  279,  280,
  281,  282,  283,  305,  285,  258,  271,  272,  262,  291,
  291,  292,  277,  278,  279,  280,  281,  282,  283,  258,
  285,  260,  262,  292,  291,  291,  291,  292,  259,  262,
  291,  317,  271,  272,  293,  258,  293,  292,  277,  278,
  279,  280,  281,  282,  283,  294,  285,  258,  276,  259,
  291,  258,  291,  292,  277,  278,  279,  280,  281,  282,
  283,  317,  285,  260,  291,  317,  317,  258,  291,  292,
  277,  278,  279,  280,  281,  282,  283,  309,  285,  317,
  317,  276,  291,  258,  291,  292,  277,  278,  279,  280,
  281,  282,  283,  291,  285,  317,  292,  291,  260,  258,
  291,  292,  277,  278,  279,  280,  281,  282,  283,  292,
  285,  258,  316,  292,  307,  292,  291,  292,  277,  278,
  279,  280,  281,  282,  283,  258,  285,  316,  306,  316,
  258,  258,  291,  292,  281,  282,  283,  258,  285,  308,
  260,  258,  258,  258,  291,  292,  258,  291,  281,  282,
  283,  291,  285,  281,  282,  283,  260,  285,  291,  292,
   77,  282,  283,  291,  292,  282,  283,    4,    9,    4,
  291,  292,   92,  196,  291,  292,  271,  272,  273,  274,
  275,   93,  277,  278,  279,  280,  281,  282,  283,  207,
  285,   -1,  103,   -1,   -1,   -1,  291,
};
#define YYFINAL 3
#ifndef YYDEBUG
#define YYDEBUG 0
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
"FunctionOverEmployee : SHOW_EMPLOYEE VAR",
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
#line 318 "salarium.y"

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
#line 512 "y.tab.c"

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
#line 187 "salarium.y"
	{ yyval.strval = concat_str( 3, "printEmployee( ", yystack.l_mark[0].strval, ")" ); }
break;
case 42:
#line 192 "salarium.y"
	{ yyval.strval = concat_str(3, yystack.l_mark[-2].strval, " - ", yystack.l_mark[0].strval); }
break;
case 43:
#line 194 "salarium.y"
	{ yyval.strval = yystack.l_mark[0].strval; }
break;
case 44:
#line 199 "salarium.y"
	{ yyval.strval = concat_str(3 , yystack.l_mark[-2].strval, " , ", yystack.l_mark[0].strval); }
break;
case 45:
#line 201 "salarium.y"
	{ yyval.strval = yystack.l_mark[0].strval; }
break;
case 46:
#line 205 "salarium.y"
	{ yyval.strval = "\"WEEK\""; }
break;
case 47:
#line 207 "salarium.y"
	{ yyval.strval = "\"MONTH\""; }
break;
case 48:
#line 209 "salarium.y"
	{ yyval.strval = "\"YEAR\""; }
break;
case 49:
#line 214 "salarium.y"
	{ yyval.strval = yystack.l_mark[0].strval; }
break;
case 50:
#line 219 "salarium.y"
	{ yyval.strval = yystack.l_mark[0].strval; }
break;
case 51:
#line 221 "salarium.y"
	{ yyval.strval = concat_str(3, yystack.l_mark[-2].strval, " * ", yystack.l_mark[0].strval); }
break;
case 52:
#line 223 "salarium.y"
	{ yyval.strval = concat_str(3, yystack.l_mark[-2].strval, " / ", yystack.l_mark[0].strval); }
break;
case 53:
#line 225 "salarium.y"
	{ yyval.strval = concat_str(3, yystack.l_mark[-2].strval, " % ", yystack.l_mark[0].strval); }
break;
case 54:
#line 230 "salarium.y"
	{ yyval.strval = yystack.l_mark[0].strval; }
break;
case 55:
#line 232 "salarium.y"
	{ yyval.strval = concat_str(3, yystack.l_mark[-2].strval, " + ", yystack.l_mark[0].strval); }
break;
case 56:
#line 234 "salarium.y"
	{ yyval.strval = concat_str(3, yystack.l_mark[-2].strval, " - ", yystack.l_mark[0].strval); }
break;
case 57:
#line 239 "salarium.y"
	{ yyval.strval = yystack.l_mark[0].strval; }
break;
case 58:
#line 241 "salarium.y"
	{ yyval.strval = concat_str(3, yystack.l_mark[-2].strval, " < ", yystack.l_mark[0].strval); }
break;
case 59:
#line 243 "salarium.y"
	{ yyval.strval = concat_str(3, yystack.l_mark[-2].strval, " > ", yystack.l_mark[0].strval); }
break;
case 60:
#line 245 "salarium.y"
	{ yyval.strval = concat_str(3, yystack.l_mark[-2].strval, " <= ", yystack.l_mark[0].strval); }
break;
case 61:
#line 247 "salarium.y"
	{ yyval.strval = concat_str(3, yystack.l_mark[-2].strval, " >= ", yystack.l_mark[0].strval); }
break;
case 62:
#line 252 "salarium.y"
	{ yyval.strval = yystack.l_mark[0].strval; }
break;
case 63:
#line 254 "salarium.y"
	{ yyval.strval = concat_str(3, yystack.l_mark[-2].strval, " == ", yystack.l_mark[0].strval); }
break;
case 64:
#line 256 "salarium.y"
	{ yyval.strval = concat_str(3, yystack.l_mark[-2].strval, " != ", yystack.l_mark[0].strval); }
break;
case 65:
#line 261 "salarium.y"
	{ yyval.strval = yystack.l_mark[0].strval; }
break;
case 66:
#line 263 "salarium.y"
	{ yyval.strval = concat_str(3, yystack.l_mark[-2].strval, " && ", yystack.l_mark[0].strval); }
break;
case 67:
#line 268 "salarium.y"
	{ yyval.strval = yystack.l_mark[0].strval; }
break;
case 68:
#line 270 "salarium.y"
	{ yyval.strval = concat_str(3, yystack.l_mark[-2].strval, " || ", yystack.l_mark[0].strval); }
break;
case 69:
#line 275 "salarium.y"
	{ yyval.strval = concat_str( 2, yystack.l_mark[-1].strval, yystack.l_mark[0].strval); }
break;
case 70:
#line 277 "salarium.y"
	{ yyval.strval = ""; }
break;
case 71:
#line 282 "salarium.y"
	{ yyval.strval = concat_str( 3, yystack.l_mark[-2].strval, ", ", yystack.l_mark[0].strval); }
break;
case 72:
#line 284 "salarium.y"
	{ yyval.strval = ""; }
break;
case 73:
#line 289 "salarium.y"
	{ yyval.strval = yystack.l_mark[0].strval; }
break;
case 74:
#line 291 "salarium.y"
	{ yyval.strval = yystack.l_mark[0].strval; }
break;
case 75:
#line 293 "salarium.y"
	{ yyval.strval = "true"; }
break;
case 76:
#line 295 "salarium.y"
	{ yyval.strval = "FALSE_T"; }
break;
case 77:
#line 297 "salarium.y"
	{ yyval.strval = yystack.l_mark[0].strval; }
break;
case 78:
#line 299 "salarium.y"
	{ yyval.strval = "NULL_T"; }
break;
case 79:
#line 301 "salarium.y"
	{ yyval.strval = concat_str(3, yystack.l_mark[-2].strval, ".", yystack.l_mark[0].strval); }
break;
case 80:
#line 303 "salarium.y"
	{ yyval.strval = concat_str( 5, yystack.l_mark[-5].strval, "[", yystack.l_mark[-3].strval, "].", yystack.l_mark[0].strval ); }
break;
case 81:
#line 305 "salarium.y"
	{ yyval.strval = concat_str( 5, yystack.l_mark[-5].strval, "[", yystack.l_mark[-3].strval, "].", yystack.l_mark[0].strval ); }
break;
case 82:
#line 307 "salarium.y"
	{ yyval.strval = concat_str( 4, yystack.l_mark[-3].strval, "( ", yystack.l_mark[-1].strval, " )"); }
break;
case 83:
#line 309 "salarium.y"
	{ yyval.strval = concat_str( 3, "( ", yystack.l_mark[-1].strval, " )"); }
break;
case 84:
#line 314 "salarium.y"
	{ yyval.strval = concat_str(3 , yystack.l_mark[-5].strval, " main ()\n", yystack.l_mark[0].strval ); }
break;
#line 1050 "y.tab.c"
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
