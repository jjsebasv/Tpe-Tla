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
#line 52 "salarium.y"
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
#line 39 "y.tab.c"

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
#define PRINT 290
#define CASE 291
#define DEFAULT 292
#define END 293
#define RETURN 294
#define DIGITO 295
#define VAR 296
#define TYPE 297
#define STRING 298
#define YYERRCODE 256
static const short yylhs[] = {                           -1,
    0,    0,    4,    4,    5,    5,    6,    2,    2,    3,
    3,    1,    7,    8,    8,    8,    8,    8,    8,    8,
    8,    8,    8,    8,   10,   13,   13,   13,   13,   11,
   11,   11,   14,   14,   14,   14,   14,   12,   12,   12,
   15,   15,   16,   16,   17,   17,   18,   18,   19,   19,
   19,   19,   19,   19,   19,   19,   19,    9,
};
static const short yylen[] = {                            2,
    2,    1,    2,    1,    4,    4,    3,    2,    0,    3,
    0,    2,    3,    3,    3,    5,    5,    6,    6,    8,
    8,    3,    2,    0,    1,    1,    3,    3,    3,    1,
    3,    3,    1,    3,    3,    3,    3,    1,    3,    3,
    1,    3,    1,    3,    2,    0,    3,    0,    1,    1,
    1,    1,    1,    1,    6,    4,    3,    6,
};
static const short yydefred[] = {                         0,
    0,    0,    0,    0,    4,    2,    0,    0,    0,    3,
    1,    0,    0,    0,    0,    0,   11,    0,    0,    6,
    0,    5,   12,    0,    7,    0,    0,    0,    0,   51,
   52,   54,    0,    0,   50,    0,   53,    0,    0,    0,
    0,    0,    0,    0,    0,    0,   26,    0,    0,    0,
    0,    0,    0,    0,   23,    0,    0,    0,    0,    0,
    0,   13,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,   58,   10,   57,    0,
    0,    0,   22,   48,    0,    0,    0,    0,   14,   15,
    0,    0,    0,    0,   27,   28,   29,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,   56,    0,    0,
    0,    0,    0,    0,    0,   17,    0,   16,   18,    0,
   19,    0,   47,   55,    0,    0,   20,   21,
};
static const short yydgoto[] = {                          3,
   38,   18,   24,    4,    5,   13,   20,   39,    6,   40,
   41,   42,   43,   44,   45,   46,   85,  107,   47,
};
static const short yysindex[] = {                      -257,
 -286, -255,    0, -257,    0,    0, -245, -229, -245,    0,
    0, -233, -197, -192, -197, -231,    0, -181, -188,    0,
 -172,    0,    0, -200,    0, -235, -166, -164, -197,    0,
    0,    0, -184, -235,    0, -221,    0, -264, -144, -183,
 -236, -268, -254, -194, -152, -151,    0, -197, -233, -250,
 -131, -235, -235, -133,    0, -150, -235, -235, -161, -235,
 -188,    0, -188, -235, -235, -235, -235, -235, -235, -235,
 -235, -235, -235, -235, -235, -235,    0,    0,    0, -122,
 -120, -100,    0,    0,  -98, -108,  -75,  -88,    0,    0,
 -254, -254, -194, -194,    0,    0,    0, -236, -236, -236,
 -236, -268, -152, -197, -197, -235,  -87,    0, -188, -235,
 -188, -188, -239,  -58, -235,    0,  -54,    0,    0, -197,
    0,  -73,    0,    0, -188, -188,    0,    0,
};
static const short yyrindex[] = {                         0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,  -40,    0,    0,    0,    0,    0,    0,  -39,    0,
    0,    0,    0,  -36,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,   42,    0,    0,    0,    0,
  -68,  -63, -134, -129,  -19, -216,    0,    0,    0, -156,
    0,    0,    0,    0,    0,    0,  -35,    0,    0,    0,
  -39,    0,  -39,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
 -112,  -90, -107,  -85,    0,    0,    0,  -46,  -24,   -2,
   20,  -41,    1,    0,    0,    0,  -32,    0,  -39,  -35,
  -39,  -39,  -39,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,  -39,  -39,    0,    0,
};
static const short yygindex[] = {                         0,
  -11,    0,    0,    0,  232,  231,  -15,  -59,  239,  -23,
   27,  169,    9,   18,  172,    0,  135,    0,  -49,
};
#define YYTABLESIZE 329
static const short yytable[] = {                         22,
   17,   89,   51,   90,    1,    8,   57,   60,   66,    7,
   56,   12,   67,   54,   68,   69,   70,   26,   95,   96,
   97,   26,   61,   27,   28,  120,   29,   14,   80,   81,
   64,   65,   77,   84,   86,   57,   88,   78,   59,    2,
    9,   25,   30,   31,   32,   33,   30,   31,   32,  116,
   58,  118,  119,  121,   34,   35,   36,   16,   37,   35,
   50,   19,   37,   16,   23,  127,  128,   59,   26,   21,
   25,   25,   91,   92,   27,   28,   25,   29,   71,   72,
   73,   74,  114,   93,   94,   48,   84,   49,  112,  113,
   52,  123,   53,   30,   31,   32,   33,   98,   99,  100,
  101,   49,   55,   63,  125,   34,   35,   36,   16,   37,
   49,   49,   49,   49,   49,   62,   49,   49,   49,   49,
   49,   49,   49,   30,   49,   75,   79,   76,   38,   82,
   49,   49,   30,   30,   87,  104,   83,  105,   30,   30,
   30,   30,   30,   30,   30,   31,   30,   38,   38,   38,
   39,   38,   30,   30,   31,   31,  106,   38,   38,  108,
   31,   31,   31,   31,   31,   31,   31,   32,   31,   39,
   39,   39,   40,   39,   31,   31,   32,   32,  109,   39,
   39,  110,   32,   32,   32,   32,   32,   32,   32,   33,
   32,   40,   40,   40,   41,   40,   32,   32,  111,  122,
  115,   40,   40,  124,   33,   33,   33,   33,   33,   33,
   33,   35,   33,  126,   41,   41,   42,    9,   33,   33,
   24,    8,   46,   41,   41,   45,   35,   35,   35,   35,
   35,   35,   35,   34,   35,   10,   42,   42,   43,   15,
   35,   35,   11,  102,  117,   42,   42,  103,   34,   34,
   34,   34,   34,   34,   34,   37,   34,    0,   44,   43,
    0,    0,   34,   34,    0,    0,    0,   43,   43,    0,
   37,   37,   37,   37,   37,   37,   37,   36,   37,   44,
    0,    0,    0,    0,   37,   37,    0,   44,   44,    0,
    0,    0,   36,   36,   36,   36,   36,   36,   36,    0,
   36,    0,    0,    0,    0,    0,   36,   36,   49,   49,
   49,   49,   49,    0,   49,   49,   49,   49,   49,   49,
   49,    0,   49,    0,    0,    0,    0,    0,   49,
};
static const short yycheck[] = {                         15,
   12,   61,   26,   63,  262,  261,  257,  272,  277,  296,
   34,  257,  281,   29,  269,  270,  271,  257,   68,   69,
   70,  257,  287,  263,  264,  265,  266,  257,   52,   53,
  267,  268,   48,   57,   58,  257,   60,   49,  289,  297,
  296,  258,  282,  283,  284,  285,  282,  283,  284,  109,
  272,  111,  112,  113,  294,  295,  296,  297,  298,  295,
  296,  259,  298,  297,  296,  125,  126,  289,  257,  262,
  287,  288,   64,   65,  263,  264,  258,  266,  273,  274,
  275,  276,  106,   66,   67,  258,  110,  288,  104,  105,
  257,  115,  257,  282,  283,  284,  285,   71,   72,   73,
   74,  258,  287,  287,  120,  294,  295,  296,  297,  298,
  267,  268,  269,  270,  271,  260,  273,  274,  275,  276,
  277,  278,  279,  258,  281,  278,  258,  279,  258,  263,
  287,  288,  267,  268,  296,  258,  287,  258,  273,  274,
  275,  276,  277,  278,  279,  258,  281,  277,  278,  279,
  258,  281,  287,  288,  267,  268,  257,  287,  288,  258,
  273,  274,  275,  276,  277,  278,  279,  258,  281,  277,
  278,  279,  258,  281,  287,  288,  267,  268,  287,  287,
  288,  257,  273,  274,  275,  276,  277,  278,  279,  258,
  281,  277,  278,  279,  258,  281,  287,  288,  287,  258,
  288,  287,  288,  258,  273,  274,  275,  276,  277,  278,
  279,  258,  281,  287,  278,  279,  258,  258,  287,  288,
  260,  258,  258,  287,  288,  258,  273,  274,  275,  276,
  277,  278,  279,  258,  281,    4,  278,  279,  258,    9,
  287,  288,    4,   75,  110,  287,  288,   76,  273,  274,
  275,  276,  277,  278,  279,  258,  281,   -1,  258,  279,
   -1,   -1,  287,  288,   -1,   -1,   -1,  287,  288,   -1,
  273,  274,  275,  276,  277,  278,  279,  258,  281,  279,
   -1,   -1,   -1,   -1,  287,  288,   -1,  287,  288,   -1,
   -1,   -1,  273,  274,  275,  276,  277,  278,  279,   -1,
  281,   -1,   -1,   -1,   -1,   -1,  287,  288,  267,  268,
  269,  270,  271,   -1,  273,  274,  275,  276,  277,  278,
  279,   -1,  281,   -1,   -1,   -1,   -1,   -1,  287,
};
#define YYFINAL 3
#ifndef YYDEBUG
#define YYDEBUG 1
#endif
#define YYMAXTOKEN 298
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
"SEMICOLON","COMMA","DOT","PRINT","CASE","DEFAULT","END","RETURN","DIGITO",
"VAR","TYPE","STRING","illegal-symbol",
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
"Statement : Variable ASSIGN Expression SEMICOLON Statement",
"Statement : VAR ASSIGN Expression SEMICOLON Statement",
"Statement : WHILE PARENTESIS_ABRE Expression PARENTESIS_CIERRA CodeBlock Statement",
"Statement : IF PARENTESIS_ABRE Expression PARENTESIS_CIERRA CodeBlock Statement",
"Statement : IF PARENTESIS_ABRE Expression PARENTESIS_CIERRA CodeBlock ELSE CodeBlock Statement",
"Statement : DO CodeBlock WHILE PARENTESIS_ABRE Expression PARENTESIS_CIERRA SEMICOLON Statement",
"Statement : RETURN Expression SEMICOLON",
"Statement : BREAK SEMICOLON",
"Statement :",
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
"Term : VAR DOT VAR PARENTESIS_ABRE Value_1 PARENTESIS_CIERRA",
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
#line 238 "salarium.y"

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
#line 408 "y.tab.c"

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
#line 63 "salarium.y"
	{ printf("%s%s%s\n", yystack.l_mark[-1].strval, "\'", yystack.l_mark[0].strval); }
break;
case 2:
#line 65 "salarium.y"
	{ printf("%s\n", yystack.l_mark[0].strval); }
break;
case 3:
#line 70 "salarium.y"
	{ yyval.strval = concat_str( 3, yystack.l_mark[-1].strval, "\n", yystack.l_mark[0].strval); }
break;
case 4:
#line 72 "salarium.y"
	{ yyval.strval = yystack.l_mark[0].strval; }
break;
case 5:
#line 77 "salarium.y"
	{ yyval.strval = concat_str(7, yystack.l_mark[-3].strval, " ~_", yystack.l_mark[-2].strval, yystack.l_mark[-1].strval, "\n", yystack.l_mark[0].strval, "\n"); }
break;
case 6:
#line 79 "salarium.y"
	{ yyval.strval = concat_str(7, "void "," ~_", yystack.l_mark[-2].strval, yystack.l_mark[-1].strval, "\n", yystack.l_mark[0].strval, "\n"); }
break;
case 7:
#line 84 "salarium.y"
	{ yyval.strval = concat_str( 3, "( ", yystack.l_mark[-1].strval, " )"); }
break;
case 8:
#line 89 "salarium.y"
	{ yyval.strval = concat_str( 2, yystack.l_mark[-1].strval, yystack.l_mark[0].strval); }
break;
case 9:
#line 91 "salarium.y"
	{ yyval.strval = ""; }
break;
case 10:
#line 96 "salarium.y"
	{ yyval.strval = concat_str( 3, yystack.l_mark[-2].strval,", ", yystack.l_mark[0].strval); }
break;
case 11:
#line 98 "salarium.y"
	{ yyval.strval = ""; }
break;
case 12:
#line 103 "salarium.y"
	{ yyval.strval = concat_str( 3, yystack.l_mark[-1].strval, " ~_", yystack.l_mark[0].strval); }
break;
case 13:
#line 108 "salarium.y"
	{ yyval.strval = concat_str( 3, "{\n", yystack.l_mark[-1].strval, "\n}"); }
break;
case 14:
#line 113 "salarium.y"
	{ yyval.strval = concat_str( 3, yystack.l_mark[-2].strval, ";\n",  yystack.l_mark[0].strval); }
break;
case 15:
#line 115 "salarium.y"
	{ yyval.strval = concat_str( 3, yystack.l_mark[-2].strval, ";\n", yystack.l_mark[0].strval); }
break;
case 16:
#line 117 "salarium.y"
	{ yyval.strval = concat_str( 5, yystack.l_mark[-4].strval, " = ", yystack.l_mark[-2].strval, ";\n", yystack.l_mark[0].strval); }
break;
case 17:
#line 119 "salarium.y"
	{ yyval.strval = concat_str( 6, "~_", yystack.l_mark[-4].strval, " = ", yystack.l_mark[-2].strval, ";\n", yystack.l_mark[0].strval); }
break;
case 18:
#line 121 "salarium.y"
	{ yyval.strval = concat_str( 6,"while ( ", yystack.l_mark[-3].strval, " )\n", yystack.l_mark[-1].strval, "\n", yystack.l_mark[0].strval); }
break;
case 19:
#line 123 "salarium.y"
	{ yyval.strval = concat_str( 6, "if ( ", yystack.l_mark[-3].strval, " )\n", yystack.l_mark[-1].strval, "\n", yystack.l_mark[0].strval) ; }
break;
case 20:
#line 125 "salarium.y"
	{ yyval.strval = concat_str( 9, "if ( ",  yystack.l_mark[-5].strval, " )\n", yystack.l_mark[-3].strval, "\n", "else\n", yystack.l_mark[-1].strval , "\n", yystack.l_mark[0].strval); }
break;
case 21:
#line 127 "salarium.y"
	{ yyval.strval = concat_str( 7, "do\n", yystack.l_mark[-6].strval, "\n", "while ( ", yystack.l_mark[-3].strval, " );\n", yystack.l_mark[0].strval); }
break;
case 22:
#line 129 "salarium.y"
	{ yyval.strval = concat_str( 3, "return ", yystack.l_mark[-1].strval, ";");}
break;
case 23:
#line 131 "salarium.y"
	{ yyval.strval = "break;\n"; }
break;
case 24:
#line 133 "salarium.y"
	{ yyval.strval = ""; }
break;
case 25:
#line 138 "salarium.y"
	{ yyval.strval = yystack.l_mark[0].strval; }
break;
case 26:
#line 143 "salarium.y"
	{ yyval.strval = yystack.l_mark[0].strval; }
break;
case 27:
#line 145 "salarium.y"
	{ yyval.strval = concat_str(3, yystack.l_mark[-2].strval, " * ", yystack.l_mark[0].strval); }
break;
case 28:
#line 147 "salarium.y"
	{ yyval.strval = concat_str(3, yystack.l_mark[-2].strval, " / ", yystack.l_mark[0].strval); }
break;
case 29:
#line 149 "salarium.y"
	{ yyval.strval = concat_str(3, yystack.l_mark[-2].strval, " % ", yystack.l_mark[0].strval); }
break;
case 30:
#line 154 "salarium.y"
	{ yyval.strval = yystack.l_mark[0].strval; }
break;
case 31:
#line 156 "salarium.y"
	{ yyval.strval = concat_str(3, yystack.l_mark[-2].strval, " + ", yystack.l_mark[0].strval); }
break;
case 32:
#line 158 "salarium.y"
	{ yyval.strval = concat_str(3, yystack.l_mark[-2].strval, " - ", yystack.l_mark[0].strval); }
break;
case 33:
#line 163 "salarium.y"
	{ yyval.strval = yystack.l_mark[0].strval; }
break;
case 34:
#line 165 "salarium.y"
	{ yyval.strval = concat_str(3, yystack.l_mark[-2].strval, " < ", yystack.l_mark[0].strval); }
break;
case 35:
#line 167 "salarium.y"
	{ yyval.strval = concat_str(3, yystack.l_mark[-2].strval, " > ", yystack.l_mark[0].strval); }
break;
case 36:
#line 169 "salarium.y"
	{ yyval.strval = concat_str(3, yystack.l_mark[-2].strval, " <= ", yystack.l_mark[0].strval); }
break;
case 37:
#line 171 "salarium.y"
	{ yyval.strval = concat_str(3, yystack.l_mark[-2].strval, " >= ", yystack.l_mark[0].strval); }
break;
case 38:
#line 176 "salarium.y"
	{ yyval.strval = yystack.l_mark[0].strval; }
break;
case 39:
#line 178 "salarium.y"
	{ yyval.strval = concat_str(3, yystack.l_mark[-2].strval, " == ", yystack.l_mark[0].strval); }
break;
case 40:
#line 180 "salarium.y"
	{ yyval.strval = concat_str(3, yystack.l_mark[-2].strval, " != ", yystack.l_mark[0].strval); }
break;
case 41:
#line 185 "salarium.y"
	{ yyval.strval = yystack.l_mark[0].strval; }
break;
case 42:
#line 187 "salarium.y"
	{ yyval.strval = concat_str(3, yystack.l_mark[-2].strval, " && ", yystack.l_mark[0].strval); }
break;
case 43:
#line 192 "salarium.y"
	{ yyval.strval = yystack.l_mark[0].strval; }
break;
case 44:
#line 194 "salarium.y"
	{ yyval.strval = concat_str(3, yystack.l_mark[-2].strval, " || ", yystack.l_mark[0].strval); }
break;
case 45:
#line 199 "salarium.y"
	{ yyval.strval = concat_str( 2, yystack.l_mark[-1].strval, yystack.l_mark[0].strval); }
break;
case 46:
#line 201 "salarium.y"
	{ yyval.strval = ""; }
break;
case 47:
#line 206 "salarium.y"
	{ yyval.strval = concat_str( 3, yystack.l_mark[-2].strval, ", ", yystack.l_mark[0].strval); }
break;
case 48:
#line 208 "salarium.y"
	{ yyval.strval = ""; }
break;
case 49:
#line 213 "salarium.y"
	{ yyval.strval = concat_str(2, "~_", yystack.l_mark[0].strval); }
break;
case 50:
#line 215 "salarium.y"
	{ yyval.strval = yystack.l_mark[0].strval; }
break;
case 51:
#line 217 "salarium.y"
	{ yyval.strval = "true"; }
break;
case 52:
#line 219 "salarium.y"
	{ yyval.strval = "FALSE_T"; }
break;
case 53:
#line 221 "salarium.y"
	{ yyval.strval = yystack.l_mark[0].strval; }
break;
case 54:
#line 223 "salarium.y"
	{ yyval.strval = "NULL_T"; }
break;
case 55:
#line 225 "salarium.y"
	{ yyval.strval = concat_str( 6, yystack.l_mark[-5].strval, "_", yystack.l_mark[-3].strval, "( ", yystack.l_mark[-1].strval, " )"); }
break;
case 56:
#line 227 "salarium.y"
	{ yyval.strval = concat_str( 4, yystack.l_mark[-3].strval, "( ", yystack.l_mark[-1].strval, " )"); }
break;
case 57:
#line 229 "salarium.y"
	{ yyval.strval = concat_str( 3, "( ", yystack.l_mark[-1].strval, " )"); }
break;
case 58:
#line 234 "salarium.y"
	{ yyval.strval = concat_str(3, yystack.l_mark[-5].strval, " main ()\n",yystack.l_mark[0].strval); }
break;
#line 842 "y.tab.c"
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
