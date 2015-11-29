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
#define PRINT_ALL 301
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
    0,    0,    6,    6,   28,    7,    7,    7,    7,    8,
    4,    4,    5,    5,    3,    3,    3,    3,    9,   10,
   10,   10,   10,   10,   10,   10,   10,   10,   10,   10,
   10,   10,   10,   10,   10,   10,   10,   10,   10,   10,
   10,   10,   10,    1,    1,    1,    1,    1,   27,   27,
   24,   24,   26,   26,   25,   25,   25,   25,   25,   23,
   23,   22,   22,    2,    2,    2,   12,   15,   15,   15,
   15,   13,   13,   13,   16,   16,   16,   16,   16,   14,
   14,   14,   17,   17,   18,   18,   19,   19,   20,   20,
   21,   21,   21,   21,   21,   21,   21,   21,   21,   21,
   21,   11,
};
static const short yylen[] = {                            2,
    2,    1,    2,    1,    2,    4,    4,    6,    4,    3,
    2,    0,    3,    0,    2,    1,    2,    4,    3,    3,
    3,    3,    5,    5,    5,    6,    6,    9,    9,    6,
    7,    6,    6,    8,    8,    9,    3,    2,    0,    4,
    5,    5,    5,    4,    8,    2,    2,    1,    1,    1,
   17,    3,    1,    1,    2,    2,    2,    3,    2,    5,
    3,    3,    1,    1,    1,    1,    1,    1,    3,    3,
    3,    1,    3,    3,    1,    3,    3,    3,    3,    1,
    3,    3,    1,    3,    1,    3,    2,    0,    3,    0,
    1,    1,    1,    1,    1,    1,    3,    6,    6,    4,
    3,    6,
};
static const short yydefred[] = {                         0,
    0,    0,    0,    0,    0,    4,    2,    0,    0,    0,
    0,    0,    3,    1,    0,    0,    0,    0,    0,    0,
    0,   53,   54,    0,   14,    0,   16,    0,    7,    0,
    9,    0,    6,    0,   17,   15,    0,   10,    0,    0,
    0,    0,    0,   93,   94,   96,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,   95,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,   68,   48,
    0,    0,    0,    0,   92,    0,    0,    0,    0,    0,
    0,   38,    0,    0,   46,    0,    0,   47,   50,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,   19,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    8,  102,
   18,   13,  101,    0,    0,    0,    0,   37,    0,    0,
   52,    5,    0,    0,    0,    0,    0,   90,    0,    0,
    0,    0,   97,    0,    0,   22,    0,    0,    0,   20,
   21,    0,    0,    0,    0,   69,   70,   71,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,   40,    0,    0,    0,    0,    0,  100,    0,
    0,    0,   64,   65,   66,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,   43,   41,   42,    0,
    0,    0,    0,   25,    0,    0,   23,   24,   32,    0,
   33,    0,    0,    0,    0,    0,    0,    0,   27,   30,
    0,   89,   99,   98,    0,   26,    0,    0,   59,   55,
    0,   56,   57,    0,    0,    0,    0,   31,    0,    0,
    0,   34,   35,   58,    0,    0,    0,    0,    0,    0,
   45,   36,    0,   62,   28,   29,    0,    0,    0,    0,
    0,   60,    0,    0,    0,    0,    0,   51,
};
static const short yydgoto[] = {                          4,
   59,  186,   60,   26,   37,    5,    6,  132,   29,   61,
    7,   62,   63,   64,   65,   66,   67,   68,  139,  178,
   69,  236,  241,   70,  216,   27,   88,   89,
};
static const short yysindex[] = {                      -234,
 -296, -244, -241,    0, -234,    0,    0, -209, -212, -209,
 -205, -209,    0,    0, -271, -197, -249, -197, -170, -197,
 -243,    0,    0, -211,    0, -199,    0,  -66,    0, -209,
    0, -146,    0, -119,    0,    0, -161,    0, -250, -112,
 -106, -197, -117,    0,    0,    0, -135, -250, -242, -141,
 -282, -137, -137, -131, -116,    0, -237,    0, -109, -184,
  -62,  -84, -157, -258,  -56,  -68,  -78,  -42,    0,    0,
 -197, -197,  -85, -271,    0, -152,  -15, -250, -250,  -20,
  -71,    0,  -44, -233,    0,  -69, -209,    0,    0,  -31,
 -137, -137, -137,  -43, -250, -154, -250,  -63,  -45,   -4,
  -66, -200,  -66,    0,  -66, -250, -250, -250, -250, -250,
 -250, -250, -250, -250, -250, -250, -250, -250,    0,    0,
    0,    0,    0,   15,   16,   20,   11,    0, -282, -171,
    0,    0,  -66,  -13,  -11,   -8,   -9,    0,   27,   32,
   37,    9,    0,  -87, -250,    0, -208,   22,   23,    0,
    0,  -56,  -56,  -68,  -68,    0,    0,    0, -157, -157,
 -157, -157, -258,  -78, -197, -197, -250,   56,   54, -209,
   28,   29,    0,  -66,  -66,  -66,    4,   30,    0,   34,
   35,  -66,    0,    0,    0,   31,   45,  -66,  -66,  -66,
 -129,   80, -179, -144,  -66,  -66,    0,    0,    0,   47,
 -250,   24,   38,    0,   81,  -66,    0,    0,    0, -197,
    0,   61,   39,   63, -118,   97,   51,  -66,    0,    0,
   62,    0,    0,    0,   53,    0,  -66,  -66,    0,    0,
   82,    0,    0,   93, -248,   95,   96,    0,   55,  112,
  129,    0,    0,    0,  -66,   83,  -66,  -66,  111, -250,
    0,    0,  113,    0,    0,    0,   99, -150, -282,   53,
  126,    0,   98, -282,  127,  114, -282,    0,
};
static const short yyrindex[] = {                         0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,  162,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,  168,    0,    0,
    0,    0,    0,    0,    0,    0,  172,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,  185,  200,    0,    0,    0,
    0,    0,   68,  -97,   10,  144, -165, -181,    0,    0,
    0,    0,    0,    0,    0,  -16,    0,    0,    0,    0,
    0,    0,    0,  140,    0,    0,  141,    0,    0,    0,
    0,    0,    0,    0,  175,    0,    0,    0,    0,    0,
  168,    0,  168,    0,  168,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,  168,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,  215,    0,    0,    0,
    0,   26,   52,  158,  163,    0,    0,    0,   84,  100,
  116,  132,  -77, -114,    0,    0,    0,    0,    0,    0,
    0,    0,    0,  168,  168,  168,    0,  176,    0,    0,
    0,  168,    0,    0,    0,  146,    0,  168,  168,  168,
  168,    0,    0,    0,  168,  168,    0,    0,    0,    0,
    0,    0,    0,    0,    0,  168,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,  168,    0,    0,
    0,    0,    0,    0,    0,    0,  168,  168,    0,    0,
    0,    0,    0,    0,  147,    0,    0,    0,    0,    0,
    0,    0,    0,    0,  168,    0,  168,  168,    0,    0,
    0,    0,  147,    0,    0,    0,    0,  182,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,
};
static const short yygindex[] = {                         0,
  345,    0,  -10,    0,    0,    0,  446,   21,  -17,  -93,
  447,  -37, -100,  336,   59,  131,  351,    0,    0,    0,
  117,  238,  239,  371,    0,  -51,  -21, -126,
};
#define YYTABLESIZE 506
static const short yytable[] = {                         86,
   31,   77,   33,  172,   25,  100,   39,  146,   15,  150,
   83,  151,  159,  160,  161,  162,    9,   34,   34,   95,
    8,   11,  108,   96,   80,   21,  109,  129,   16,    1,
   18,   90,   20,   22,   23,   44,   45,   46,   97,  173,
  124,  125,  130,  246,   22,   23,   24,   15,   95,   17,
   71,   19,   96,  119,  120,   98,   39,  138,   38,  142,
   99,   28,    2,  122,  149,   75,   76,   30,   58,  134,
  135,  136,   10,   35,   84,   12,   67,  169,   22,   23,
  197,  198,  199,    3,   98,   44,   45,   46,  204,   99,
  237,  102,   85,   32,  207,  208,  209,  211,   50,   51,
   52,  219,  220,   55,   95,   36,  103,  187,   96,   67,
   67,   72,  226,  106,  107,   75,  147,   85,   58,  213,
  106,  107,  214,  215,  238,   85,   85,   39,   51,  192,
   74,  217,   55,  242,  243,   40,   41,  210,   42,   43,
   98,  260,   73,   86,   78,  170,  218,  190,  191,  258,
   79,  252,   81,  255,  256,   82,   44,   45,   46,   47,
   83,  140,  141,  222,  152,  153,   48,   49,   86,   50,
   51,   52,   53,   54,   55,   85,   86,   86,   91,   87,
   84,  101,   92,   93,   83,   83,   56,   57,   24,   58,
   39,  231,  227,   83,   83,  232,  233,  104,   40,   41,
   94,   42,   43,  117,   84,   84,  105,  261,  113,  114,
  115,  116,  265,   84,   84,  268,  110,  111,  112,   44,
   45,   46,   47,  183,  184,  185,  156,  157,  158,   48,
   49,  121,   50,   51,   52,   53,   54,   55,  154,  155,
  118,   91,  123,   91,  126,  127,  128,  131,  137,   56,
   57,   24,   58,  143,   91,   91,   91,   91,   91,  133,
   91,   91,   91,   91,   91,   91,   91,   72,   91,   72,
  144,  145,  165,  166,   91,   91,  167,  174,  168,  175,
   72,   72,  176,   73,  179,   73,   72,   72,   72,   72,
   72,   72,   72,  180,   72,  177,   73,   73,  181,  182,
   72,   72,   73,   73,   73,   73,   73,   73,   73,   74,
   73,   74,  188,  189,  193,  194,   73,   73,  195,  196,
  200,  201,   74,   74,  205,   75,  202,  203,   74,   74,
   74,   74,   74,   74,   74,  206,   74,  212,  221,  225,
  223,   77,   74,   74,   75,   75,   75,   75,   75,   75,
   75,  228,   75,  230,  224,  229,  234,   76,   75,   75,
   77,   77,   77,   77,   77,   77,   77,  235,   77,  240,
  239,  249,  244,   79,   77,   77,   76,   76,   76,   76,
   76,   76,   76,  245,   76,  247,  248,  250,  251,   78,
   76,   76,   79,   79,   79,   79,   79,   79,   79,  253,
   79,   80,  257,  264,  246,  259,   79,   79,   78,   78,
   78,   78,   78,   78,   78,   81,   78,  263,  266,   12,
   82,  267,   78,   78,   80,   80,   80,   39,   80,   11,
   17,   49,   88,   87,   80,   80,   44,   63,   81,   81,
   81,   61,   81,   82,   82,   82,  148,   82,   81,   81,
   13,   14,  163,   82,   82,   92,   92,   92,   92,   92,
   53,   92,   92,   92,   92,   92,   92,   92,  164,   92,
   91,   91,   91,   91,   91,   53,   91,   91,   91,   91,
   91,   91,   91,  254,   91,   91,   91,   91,   91,   91,
   54,   91,   91,   91,   91,   91,   91,   91,  262,   91,
  171,    0,    0,    0,    0,   91,
};
static const short yycheck[] = {                         51,
   18,   39,   20,  130,   15,   57,  257,  101,  257,  103,
   48,  105,  113,  114,  115,  116,  261,  261,  261,  257,
  317,  263,  281,  261,   42,  297,  285,  261,    8,  264,
   10,   53,   12,  316,  317,  286,  287,  288,  276,  133,
   78,   79,  276,  292,  316,  317,  318,  257,  257,  262,
   30,  257,  261,   71,   72,  293,  257,   95,  258,   97,
  298,  259,  297,   74,  102,  316,  317,  317,  319,   91,
   92,   93,  317,  317,  317,  317,  258,  129,  316,  317,
  174,  175,  176,  318,  293,  286,  287,  288,  182,  298,
  217,  276,  258,  264,  188,  189,  190,  191,  299,  300,
  301,  195,  196,  304,  257,  317,  291,  145,  261,  291,
  292,  258,  206,  271,  272,  316,  317,  283,  319,  299,
  271,  272,  302,  303,  218,  291,  292,  257,  300,  167,
  292,  276,  304,  227,  228,  265,  266,  267,  268,  269,
  293,  292,  262,  258,  257,  317,  291,  165,  166,  250,
  257,  245,  270,  247,  248,  291,  286,  287,  288,  289,
  258,  316,  317,  201,  106,  107,  296,  297,  283,  299,
  300,  301,  302,  303,  304,  317,  291,  292,  310,  317,
  258,  291,  314,  315,  282,  283,  316,  317,  318,  319,
  257,  310,  210,  291,  292,  314,  315,  260,  265,  266,
  317,  268,  269,  282,  282,  283,  291,  259,  277,  278,
  279,  280,  264,  291,  292,  267,  273,  274,  275,  286,
  287,  288,  289,  311,  312,  313,  110,  111,  112,  296,
  297,  317,  299,  300,  301,  302,  303,  304,  108,  109,
  283,  258,  258,  260,  265,  317,  291,  317,  292,  316,
  317,  318,  319,  317,  271,  272,  273,  274,  275,  291,
  277,  278,  279,  280,  281,  282,  283,  258,  285,  260,
  316,  276,  258,  258,  291,  292,  257,  291,  268,  291,
  271,  272,  291,  258,  258,  260,  277,  278,  279,  280,
  281,  282,  283,  262,  285,  305,  271,  272,  262,  291,
  291,  292,  277,  278,  279,  280,  281,  282,  283,  258,
  285,  260,  291,  291,  259,  262,  291,  292,  291,  291,
  317,  292,  271,  272,  294,  258,  293,  293,  277,  278,
  279,  280,  281,  282,  283,  291,  285,  258,  292,  259,
  317,  258,  291,  292,  277,  278,  279,  280,  281,  282,
  283,  291,  285,  291,  317,  317,  260,  258,  291,  292,
  277,  278,  279,  280,  281,  282,  283,  317,  285,  317,
  309,  317,  291,  258,  291,  292,  277,  278,  279,  280,
  281,  282,  283,  291,  285,  291,  291,  276,  260,  258,
  291,  292,  277,  278,  279,  280,  281,  282,  283,  317,
  285,  258,  292,  306,  292,  307,  291,  292,  277,  278,
  279,  280,  281,  282,  283,  258,  285,  292,  292,  258,
  258,  308,  291,  292,  281,  282,  283,  260,  285,  258,
  291,  291,  258,  258,  291,  292,  291,  291,  281,  282,
  283,  260,  285,  281,  282,  283,  102,  285,  291,  292,
    5,    5,  117,  291,  292,  271,  272,  273,  274,  275,
  276,  277,  278,  279,  280,  281,  282,  283,  118,  285,
  271,  272,  273,  274,  275,  291,  277,  278,  279,  280,
  281,  282,  283,  246,  285,  271,  272,  273,  274,  275,
  291,  277,  278,  279,  280,  281,  282,  283,  260,  285,
  130,   -1,   -1,   -1,   -1,  291,
};
#define YYFINAL 4
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
"GET_EMPLOYEE","PRINT_ALL","GET_NAME","RAISE","NAME","LASTNAME","ANTIQUITY",
"ID","SALARY","CATEGORY","CATEGORY_VAR","WEEK","MONTH","YEAR","TEN","TWENTY",
"DIGITO","VAR","TYPE","STRING","illegal-symbol",
};
static const char *yyrule[] = {
"$accept : Program",
"Program : Functions Main",
"Program : Main",
"Functions : Functions Function",
"Functions : Function",
"CallFunction : VAR Parameters",
"Function : TYPE VAR Parameters CodeBlock",
"Function : VOID VAR Parameters CodeBlock",
"Function : EMPLOYEE S_BRACKET_ABRE S_BRACKET_CIERRA VAR Parameters CodeBlock",
"Function : EMPLOYEE VAR Parameters CodeBlock",
"Parameters : PARENTESIS_ABRE FirstVariable PARENTESIS_CIERRA",
"FirstVariable : Variable CommaVariable",
"FirstVariable :",
"CommaVariable : CommaVariable COMMA Variable",
"CommaVariable :",
"Variable : TYPE VAR",
"Variable : DigOrVar",
"Variable : EMPLOYEE VAR",
"Variable : EMPLOYEE S_BRACKET_ABRE S_BRACKET_CIERRA VAR",
"CodeBlock : C_BRACKET_ABRE Statement C_BRACKET_CIERRA",
"Statement : Variable SEMICOLON Statement",
"Statement : Exp SEMICOLON Statement",
"Statement : SpecialFunction SEMICOLON Statement",
"Statement : Variable ASSIGN SpecialFunction SEMICOLON Statement",
"Statement : Variable ASSIGN Exp SEMICOLON Statement",
"Statement : VAR ASSIGN Exp SEMICOLON Statement",
"Statement : VAR DigOrVar ASSIGN Exp SEMICOLON Statement",
"Statement : EMPLOYEE VAR ASSIGN ReturnEmployee SEMICOLON Statement",
"Statement : EMPLOYEE VAR S_BRACKET_ABRE DigOrVar S_BRACKET_CIERRA ASSIGN EmpValues SEMICOLON Statement",
"Statement : EMPLOYEE VAR S_BRACKET_ABRE DigOrVar S_BRACKET_CIERRA ASSIGN CallFunction SEMICOLON Statement",
"Statement : EMPLOYEE VAR ASSIGN CallFunction SEMICOLON Statement",
"Statement : EMPLOYEE VAR S_BRACKET_ABRE DigOrVar S_BRACKET_CIERRA SEMICOLON Statement",
"Statement : WHILE PARENTESIS_ABRE Exp PARENTESIS_CIERRA CodeBlock Statement",
"Statement : IF PARENTESIS_ABRE Exp PARENTESIS_CIERRA CodeBlock Statement",
"Statement : IF PARENTESIS_ABRE Exp PARENTESIS_CIERRA CodeBlock ELSE CodeBlock Statement",
"Statement : DO CodeBlock WHILE PARENTESIS_ABRE Exp PARENTESIS_CIERRA SEMICOLON Statement",
"Statement : FOREACH IN VAR DO C_BRACKET_ABRE FunctionOverEmployee C_BRACKET_CIERRA SEMICOLON Statement",
"Statement : RETURN Exp SEMICOLON",
"Statement : BREAK SEMICOLON",
"Statement :",
"Statement : GET_NAME VarOrFunc SEMICOLON Statement",
"Statement : RAISE TEN VarOrFunc SEMICOLON Statement",
"Statement : RAISE TWENTY VarOrFunc SEMICOLON Statement",
"Statement : RAISE CATEGORY_VAR VarOrFunc SEMICOLON Statement",
"SpecialFunction : VAR SALARYFOR DIGITO TimeLapse",
"SpecialFunction : VAR SALARYFOR DIGITO TimeLapse MINUSDEDUCTIONS C_BRACKET_ABRE Deductions C_BRACKET_CIERRA",
"SpecialFunction : SHOW_EMPLOYEE VAR",
"SpecialFunction : PRINT_ALL VarOrFunc",
"SpecialFunction : ReturnEmployee",
"VarOrFunc : VAR",
"VarOrFunc : CallFunction",
"ReturnEmployee : NAME VAR COMMA LASTNAME VAR COMMA CATEGORY VAR COMMA ID DigOrVar COMMA ANTIQUITY DigOrVar COMMA SALARY DigOrVar",
"ReturnEmployee : GET_EMPLOYEE DigOrVar VAR",
"DigOrVar : DIGITO",
"DigOrVar : VAR",
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
#line 364 "salarium.y"

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
#line 567 "y.tab.c"

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
#line 76 "salarium.y"
	{ printf("%s%s\n", yystack.l_mark[-1].strval, yystack.l_mark[0].strval); }
break;
case 2:
#line 78 "salarium.y"
	{ printf("%s\n", yystack.l_mark[0].strval); }
break;
case 3:
#line 83 "salarium.y"
	{ yyval.strval = concat_str( 3, yystack.l_mark[-1].strval, "\n", yystack.l_mark[0].strval); }
break;
case 4:
#line 85 "salarium.y"
	{ yyval.strval = yystack.l_mark[0].strval; }
break;
case 5:
#line 90 "salarium.y"
	{ yyval.strval = concat_str( 2 ,yystack.l_mark[-1].strval ,yystack.l_mark[0].strval );}
break;
case 6:
#line 95 "salarium.y"
	{ yyval.strval = concat_str( 7, yystack.l_mark[-3].strval," ", yystack.l_mark[-2].strval, yystack.l_mark[-1].strval, "\n", yystack.l_mark[0].strval, "\n"); }
break;
case 7:
#line 97 "salarium.y"
	{ yyval.strval = concat_str( 7, "void ", " ",yystack.l_mark[-2].strval, yystack.l_mark[-1].strval, "\n", yystack.l_mark[0].strval, "\n"); }
break;
case 8:
#line 99 "salarium.y"
	{ yyval.strval = concat_str( 6, " struct Employee*", yystack.l_mark[-2].strval, yystack.l_mark[-1].strval, "\n", yystack.l_mark[0].strval, "\n"); }
break;
case 9:
#line 101 "salarium.y"
	{ yyval.strval = concat_str( 6, " struct Employee ", yystack.l_mark[-2].strval, yystack.l_mark[-1].strval, "\n", yystack.l_mark[0].strval, "\n"); }
break;
case 10:
#line 106 "salarium.y"
	{ yyval.strval = concat_str( 3, "( ", yystack.l_mark[-1].strval, " )"); }
break;
case 11:
#line 111 "salarium.y"
	{ yyval.strval = concat_str( 2, yystack.l_mark[-1].strval, yystack.l_mark[0].strval); }
break;
case 12:
#line 113 "salarium.y"
	{ yyval.strval = ""; }
break;
case 13:
#line 118 "salarium.y"
	{ yyval.strval = concat_str( 3, yystack.l_mark[-2].strval,", ", yystack.l_mark[0].strval); }
break;
case 14:
#line 120 "salarium.y"
	{ yyval.strval = ""; }
break;
case 15:
#line 125 "salarium.y"
	{ yyval.strval = concat_str( 3, yystack.l_mark[-1].strval, " ", yystack.l_mark[0].strval); }
break;
case 16:
#line 127 "salarium.y"
	{ yyval.strval = yystack.l_mark[0].strval; }
break;
case 17:
#line 129 "salarium.y"
	{ yyval.strval = concat_str( 2, "struct Employee ", yystack.l_mark[0].strval);}
break;
case 18:
#line 131 "salarium.y"
	{ yyval.strval = concat_str( 2, "struct Employee* ", yystack.l_mark[0].strval);}
break;
case 19:
#line 136 "salarium.y"
	{ yyval.strval = concat_str( 3, "{\n", yystack.l_mark[-1].strval, "\n}"); }
break;
case 20:
#line 141 "salarium.y"
	{ yyval.strval = concat_str( 3, yystack.l_mark[-2].strval, ";\n",  yystack.l_mark[0].strval); }
break;
case 21:
#line 143 "salarium.y"
	{ yyval.strval = concat_str( 3, yystack.l_mark[-2].strval, ";\n", yystack.l_mark[0].strval); }
break;
case 22:
#line 145 "salarium.y"
	{ yyval.strval = concat_str( 3, yystack.l_mark[-2].strval, ";\n", yystack.l_mark[0].strval); }
break;
case 23:
#line 147 "salarium.y"
	{ yyval.strval = concat_str( 5, yystack.l_mark[-4].strval, " = ", yystack.l_mark[-2].strval , ";\n", yystack.l_mark[0].strval); }
break;
case 24:
#line 149 "salarium.y"
	{ yyval.strval = concat_str( 5, yystack.l_mark[-4].strval, " = ", yystack.l_mark[-2].strval, ";\n", yystack.l_mark[0].strval); }
break;
case 25:
#line 151 "salarium.y"
	{ yyval.strval = concat_str( 5, yystack.l_mark[-4].strval, " = ", yystack.l_mark[-2].strval, ";\n", yystack.l_mark[0].strval); }
break;
case 26:
#line 153 "salarium.y"
	{ yyval.strval = concat_str( 7, yystack.l_mark[-5].strval, "[", yystack.l_mark[-4].strval, "] = ", yystack.l_mark[-2].strval, ";\n", yystack.l_mark[0].strval);}
break;
case 27:
#line 155 "salarium.y"
	{ yyval.strval = concat_str( 6, "struct Employee ", yystack.l_mark[-4].strval, " = ", yystack.l_mark[-2].strval, ";\n", yystack.l_mark[0].strval); }
break;
case 28:
#line 157 "salarium.y"
	{ yyval.strval = concat_str( 8, "struct Employee ", yystack.l_mark[-7].strval, "[", yystack.l_mark[-5].strval, "] = {", yystack.l_mark[-2].strval, "};\n", yystack.l_mark[0].strval); }
break;
case 29:
#line 159 "salarium.y"
	{ yyval.strval = concat_str( 8, "struct Employee ", yystack.l_mark[-7].strval, "[", yystack.l_mark[-5].strval, "] = ", yystack.l_mark[-2].strval, ";\n", yystack.l_mark[0].strval); }
break;
case 30:
#line 161 "salarium.y"
	{ yyval.strval = concat_str( 6, "struct Employee *", yystack.l_mark[-4].strval, " = ", yystack.l_mark[-2].strval, ";\n", yystack.l_mark[0].strval); }
break;
case 31:
#line 163 "salarium.y"
	{ yyval.strval = concat_str( 6, "struct Employee *", yystack.l_mark[-5].strval, " = malloc (",yystack.l_mark[-3].strval," * sizeof(struct Employee));\n", yystack.l_mark[0].strval); }
break;
case 32:
#line 165 "salarium.y"
	{ yyval.strval = concat_str( 6,"while ( ", yystack.l_mark[-3].strval, " )\n", yystack.l_mark[-1].strval, "\n", yystack.l_mark[0].strval); }
break;
case 33:
#line 167 "salarium.y"
	{ yyval.strval = concat_str( 6, "if ( ", yystack.l_mark[-3].strval, " )\n", yystack.l_mark[-1].strval, "\n", yystack.l_mark[0].strval) ; }
break;
case 34:
#line 169 "salarium.y"
	{ yyval.strval = concat_str( 9, "if ( ",  yystack.l_mark[-5].strval, " )\n", yystack.l_mark[-3].strval, "\n", "else\n", yystack.l_mark[-1].strval , "\n", yystack.l_mark[0].strval); }
break;
case 35:
#line 171 "salarium.y"
	{ yyval.strval = concat_str( 7, "do\n", yystack.l_mark[-6].strval, "\n", "while ( ", yystack.l_mark[-3].strval, " );\n", yystack.l_mark[0].strval); }
break;
case 36:
#line 173 "salarium.y"
	{ yyval.strval = concat_str( 10, "iterate(", yystack.l_mark[-6].strval, ", (int)sizeof(",yystack.l_mark[-6].strval,")/(int)sizeof(",yystack.l_mark[-6].strval,"[0]),", yystack.l_mark[-3].strval, ");", yystack.l_mark[0].strval);}
break;
case 37:
#line 175 "salarium.y"
	{ yyval.strval = concat_str( 3, "return ", yystack.l_mark[-1].strval, ";");}
break;
case 38:
#line 177 "salarium.y"
	{ yyval.strval = "break;\n"; }
break;
case 39:
#line 179 "salarium.y"
	{ yyval.strval = ""; }
break;
case 40:
#line 181 "salarium.y"
	{ yyval.strval = concat_str( 4,"getName(",yystack.l_mark[-2].strval,");\n", yystack.l_mark[0].strval); }
break;
case 41:
#line 183 "salarium.y"
	{ yyval.strval = concat_str( 4,"raise10(",yystack.l_mark[-2].strval,");\n", yystack.l_mark[0].strval); }
break;
case 42:
#line 185 "salarium.y"
	{ yyval.strval = concat_str( 4,"raise20(",yystack.l_mark[-2].strval,");\n", yystack.l_mark[0].strval); }
break;
case 43:
#line 187 "salarium.y"
	{ yyval.strval = concat_str( 4,"raiseCategory(",yystack.l_mark[-2].strval,");\n", yystack.l_mark[0].strval); }
break;
case 44:
#line 192 "salarium.y"
	{ yyval.strval = concat_str( 7, " getSalary( ", yystack.l_mark[-3].strval, ", ", yystack.l_mark[-1].strval, ", ", yystack.l_mark[0].strval, ")" );}
break;
case 45:
#line 194 "salarium.y"
	{ yyval.strval = concat_str( 8, " getSalary( ", yystack.l_mark[-7].strval, ", ", yystack.l_mark[-5].strval, ", ", yystack.l_mark[-4].strval, ") - ", yystack.l_mark[-1].strval );}
break;
case 46:
#line 196 "salarium.y"
	{ yyval.strval = concat_str( 3, "printEmployee( ", yystack.l_mark[0].strval, ")" ); }
break;
case 47:
#line 198 "salarium.y"
	{ yyval.strval = concat_str( 7, "printAll(", yystack.l_mark[0].strval, ", (int)sizeof(",yystack.l_mark[0].strval,")/(int)sizeof(",yystack.l_mark[0].strval,"[0]) )"); }
break;
case 48:
#line 200 "salarium.y"
	{ yyval.strval = yystack.l_mark[0].strval; }
break;
case 49:
#line 205 "salarium.y"
	{ yyval.strval = yystack.l_mark[0].strval; }
break;
case 50:
#line 207 "salarium.y"
	{ yyval.strval = yystack.l_mark[0].strval; }
break;
case 51:
#line 211 "salarium.y"
	{ yyval.strval = concat_str( 13,"{ \"", yystack.l_mark[-15].strval, "\", \"", yystack.l_mark[-12].strval, "\", \"", yystack.l_mark[-9].strval, "\", ", yystack.l_mark[-6].strval, ", ", yystack.l_mark[-3].strval, ", ", yystack.l_mark[0].strval, " }" ); }
break;
case 52:
#line 213 "salarium.y"
	{ yyval.strval = concat_str( 9, "getEmployee( ", yystack.l_mark[0].strval,", ", yystack.l_mark[-1].strval, ", (int)sizeof(",yystack.l_mark[0].strval,")/(int)sizeof(",yystack.l_mark[0].strval,"[0]) )"); }
break;
case 53:
#line 218 "salarium.y"
	{ yyval.strval = yystack.l_mark[0].strval; }
break;
case 54:
#line 220 "salarium.y"
	{ yyval.strval = yystack.l_mark[0].strval; }
break;
case 55:
#line 225 "salarium.y"
	{ yyval.strval = "getName"; }
break;
case 56:
#line 227 "salarium.y"
	{ yyval.strval = "raise10"; }
break;
case 57:
#line 229 "salarium.y"
	{ yyval.strval = "raise20"; }
break;
case 58:
#line 231 "salarium.y"
	{ yyval.strval = "raiseCategory"; }
break;
case 59:
#line 233 "salarium.y"
	{ yyval.strval = concat_str( 3, "printEmployee( ", yystack.l_mark[0].strval, ")" ); }
break;
case 60:
#line 238 "salarium.y"
	{ yyval.strval = concat_str(3, yystack.l_mark[-2].strval, " - ", yystack.l_mark[0].strval); }
break;
case 61:
#line 240 "salarium.y"
	{ yyval.strval = yystack.l_mark[0].strval; }
break;
case 62:
#line 245 "salarium.y"
	{ yyval.strval = concat_str(3 , yystack.l_mark[-2].strval, " , ", yystack.l_mark[0].strval); }
break;
case 63:
#line 247 "salarium.y"
	{ yyval.strval = yystack.l_mark[0].strval; }
break;
case 64:
#line 251 "salarium.y"
	{ yyval.strval = "\"WEEK\""; }
break;
case 65:
#line 253 "salarium.y"
	{ yyval.strval = "\"MONTH\""; }
break;
case 66:
#line 255 "salarium.y"
	{ yyval.strval = "\"YEAR\""; }
break;
case 67:
#line 260 "salarium.y"
	{ yyval.strval = yystack.l_mark[0].strval; }
break;
case 68:
#line 265 "salarium.y"
	{ yyval.strval = yystack.l_mark[0].strval; }
break;
case 69:
#line 267 "salarium.y"
	{ yyval.strval = concat_str(3, yystack.l_mark[-2].strval, " * ", yystack.l_mark[0].strval); }
break;
case 70:
#line 269 "salarium.y"
	{ yyval.strval = concat_str(3, yystack.l_mark[-2].strval, " / ", yystack.l_mark[0].strval); }
break;
case 71:
#line 271 "salarium.y"
	{ yyval.strval = concat_str(3, yystack.l_mark[-2].strval, " % ", yystack.l_mark[0].strval); }
break;
case 72:
#line 276 "salarium.y"
	{ yyval.strval = yystack.l_mark[0].strval; }
break;
case 73:
#line 278 "salarium.y"
	{ yyval.strval = concat_str(3, yystack.l_mark[-2].strval, " + ", yystack.l_mark[0].strval); }
break;
case 74:
#line 280 "salarium.y"
	{ yyval.strval = concat_str(3, yystack.l_mark[-2].strval, " - ", yystack.l_mark[0].strval); }
break;
case 75:
#line 285 "salarium.y"
	{ yyval.strval = yystack.l_mark[0].strval; }
break;
case 76:
#line 287 "salarium.y"
	{ yyval.strval = concat_str(3, yystack.l_mark[-2].strval, " < ", yystack.l_mark[0].strval); }
break;
case 77:
#line 289 "salarium.y"
	{ yyval.strval = concat_str(3, yystack.l_mark[-2].strval, " > ", yystack.l_mark[0].strval); }
break;
case 78:
#line 291 "salarium.y"
	{ yyval.strval = concat_str(3, yystack.l_mark[-2].strval, " <= ", yystack.l_mark[0].strval); }
break;
case 79:
#line 293 "salarium.y"
	{ yyval.strval = concat_str(3, yystack.l_mark[-2].strval, " >= ", yystack.l_mark[0].strval); }
break;
case 80:
#line 298 "salarium.y"
	{ yyval.strval = yystack.l_mark[0].strval; }
break;
case 81:
#line 300 "salarium.y"
	{ yyval.strval = concat_str(3, yystack.l_mark[-2].strval, " == ", yystack.l_mark[0].strval); }
break;
case 82:
#line 302 "salarium.y"
	{ yyval.strval = concat_str(3, yystack.l_mark[-2].strval, " != ", yystack.l_mark[0].strval); }
break;
case 83:
#line 307 "salarium.y"
	{ yyval.strval = yystack.l_mark[0].strval; }
break;
case 84:
#line 309 "salarium.y"
	{ yyval.strval = concat_str(3, yystack.l_mark[-2].strval, " && ", yystack.l_mark[0].strval); }
break;
case 85:
#line 314 "salarium.y"
	{ yyval.strval = yystack.l_mark[0].strval; }
break;
case 86:
#line 316 "salarium.y"
	{ yyval.strval = concat_str(3, yystack.l_mark[-2].strval, " || ", yystack.l_mark[0].strval); }
break;
case 87:
#line 321 "salarium.y"
	{ yyval.strval = concat_str( 2, yystack.l_mark[-1].strval, yystack.l_mark[0].strval); }
break;
case 88:
#line 323 "salarium.y"
	{ yyval.strval = ""; }
break;
case 89:
#line 328 "salarium.y"
	{ yyval.strval = concat_str( 3, yystack.l_mark[-2].strval, ", ", yystack.l_mark[0].strval); }
break;
case 90:
#line 330 "salarium.y"
	{ yyval.strval = ""; }
break;
case 91:
#line 335 "salarium.y"
	{ yyval.strval = yystack.l_mark[0].strval; }
break;
case 92:
#line 337 "salarium.y"
	{ yyval.strval = yystack.l_mark[0].strval; }
break;
case 93:
#line 339 "salarium.y"
	{ yyval.strval = "true"; }
break;
case 94:
#line 341 "salarium.y"
	{ yyval.strval = "FALSE_T"; }
break;
case 95:
#line 343 "salarium.y"
	{ yyval.strval = yystack.l_mark[0].strval; }
break;
case 96:
#line 345 "salarium.y"
	{ yyval.strval = "NULL_T"; }
break;
case 97:
#line 347 "salarium.y"
	{ yyval.strval = concat_str(3, yystack.l_mark[-2].strval, ".", yystack.l_mark[0].strval); }
break;
case 98:
#line 349 "salarium.y"
	{ yyval.strval = concat_str( 5, yystack.l_mark[-5].strval, "[", yystack.l_mark[-3].strval, "].", yystack.l_mark[0].strval ); }
break;
case 99:
#line 351 "salarium.y"
	{ yyval.strval = concat_str( 5, yystack.l_mark[-5].strval, "[", yystack.l_mark[-3].strval, "].", yystack.l_mark[0].strval ); }
break;
case 100:
#line 353 "salarium.y"
	{ yyval.strval = concat_str( 4, yystack.l_mark[-3].strval, "( ", yystack.l_mark[-1].strval, " )"); }
break;
case 101:
#line 355 "salarium.y"
	{ yyval.strval = concat_str( 3, "( ", yystack.l_mark[-1].strval, " )"); }
break;
case 102:
#line 360 "salarium.y"
	{ yyval.strval = concat_str(3 , yystack.l_mark[-5].strval, " main ()\n", yystack.l_mark[0].strval ); }
break;
#line 1177 "y.tab.c"
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
