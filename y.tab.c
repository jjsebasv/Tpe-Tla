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
	struct Employee {
		char* name; 
		char* lastname;        
		char* rank;    
		float salary;
		int id;
	};

#line 20 "salarium.y"
#ifdef YYSTYPE
#undef  YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
#endif
#ifndef YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
typedef union {
	char* strval;
	struct Employee* employee;
} YYSTYPE;
#endif /* !YYSTYPE_IS_DECLARED */
#line 48 "y.tab.c"

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
#define YYERRCODE 256
static const short yylhs[] = {                           -1,
    0,    0,    4,    4,    5,    5,    6,    2,    2,    3,
    3,    1,    1,    7,    8,    8,    8,    8,    8,    8,
    8,    8,    8,    8,    8,    8,   10,   13,   13,   13,
   13,   11,   11,   11,   14,   14,   14,   14,   14,   12,
   12,   12,   15,   15,   16,   16,   17,   17,   18,   18,
   19,   19,   19,   19,   19,   19,   19,   19,    9,
};
static const short yylen[] = {                            2,
    2,    1,    2,    1,    4,    4,    3,    2,    0,    3,
    0,    2,   15,    3,    3,    3,    5,    5,    8,    6,
    6,    8,    8,    3,    2,    0,    1,    1,    3,    3,
    3,    1,    3,    3,    1,    3,    3,    3,    3,    1,
    3,    3,    1,    3,    1,    3,    2,    0,    3,    0,
    1,    1,    1,    1,    1,    1,    4,    3,    6,
};
static const short yydefred[] = {                         0,
    0,    0,    0,    0,    4,    2,    0,    0,    0,    3,
    1,    0,    0,    0,    0,    0,    0,   11,    0,    0,
    6,    0,    5,    0,   12,    0,    7,    0,    0,    0,
    0,   53,   54,   56,    0,    0,   52,    0,   55,    0,
    0,    0,    0,    0,    0,    0,    0,    0,   28,    0,
    0,    0,    0,    0,    0,    0,    0,   25,    0,    0,
    0,    0,    0,   14,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,   59,    0,
   10,   58,    0,    0,    0,   24,   50,    0,    0,    0,
    0,   15,   16,    0,    0,    0,    0,   29,   30,   31,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,   57,    0,    0,    0,    0,    0,    0,    0,    0,
   18,    0,   17,    0,   20,    0,   21,    0,   49,    0,
    0,    0,    0,    0,    0,   22,   23,   19,    0,    0,
    0,    0,    0,   13,
};
static const short yydgoto[] = {                          3,
   40,   19,   26,    4,    5,   13,   21,   41,    6,   42,
   43,   44,   45,   46,   47,   48,   88,  111,   49,
};
static const short yysindex[] = {                      -252,
 -295, -233,    0, -252,    0,    0, -238, -232, -238,    0,
    0, -294, -229, -223, -229, -249, -234,    0, -189, -237,
    0, -179,    0, -197,    0, -206,    0, -184, -162, -150,
 -229,    0,    0,    0, -173, -184,    0, -255,    0, -254,
 -152, -169, -183, -270, -130, -125, -156, -136,    0, -229,
 -165, -294,  -87,  -85, -184, -184,  -71,    0,  -92, -184,
 -184, -180, -237,    0, -237, -184, -184, -184, -184, -184,
 -184, -184, -184, -184, -184, -184, -184, -184,    0,  -91,
    0,    0,  -45,  -44,  -40,    0,    0,  -27,  -52, -248,
  -51,    0,    0, -130, -130, -125, -125,    0,    0,    0,
 -183, -183, -183, -183, -270, -156,  -64, -229, -229, -184,
  -49,    0, -237,  -47, -237,  -54, -237, -242,    3, -184,
    0,  -35,    0,  -25,    0, -229,    0,  -13,    0,  -12,
  -23, -237, -237, -237,  -17,    0,    0,    0,  -21,  -14,
   -3,   13, -237,    0,
};
static const short yyrindex[] = {                         0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,   14,    0,    0,    0,    0,    0,    0,    0,   41,
    0,    0,    0,    0,    0,   44,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,   55,    0,    0,
    0,    0,  -55,  -50, -121, -116, -178,  -31,    0,    0,
    0,    0, -143,    0,    0,    0,    0,    0,    0,   45,
    0,    0, -182,    0, -182,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,   55,
    0,    0,    0,  -99,  -77,  -94,  -72,    0,    0,    0,
  -33,  -11,   11,   33,  -28,   -6,    0,    0,    0,    0,
   46,    0, -182,    0, -182,    0, -182, -182,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0, -182, -182, -182,    0,    0,    0,    0,    0,    0,
    0,    0, -175,    0,
};
static const short yygindex[] = {                         0,
   22,    0,    0,    0,  301,  304,  -15,  -62,  311,  -24,
  220,  239,  -53,   23,  240,    0,    0,    0,   17,
};
#define YYTABLESIZE 342
static const short yytable[] = {                         23,
   92,   60,   93,   54,   16,    7,   68,   17,   60,    1,
   69,   59,   94,   95,   28,   57,   61,   62,   12,   28,
   29,   30,  126,   31,   14,   29,   30,    8,   31,   20,
   83,   84,   63,   18,   79,   87,   89,   91,   22,   32,
   33,   34,   35,  114,   32,   33,   34,   35,   36,    2,
  121,   24,  123,   36,  125,  127,   16,   37,   38,   17,
   39,   16,   37,   38,   17,   39,   25,    9,   27,  136,
  137,  138,   28,   81,   51,   26,   28,   26,   50,   45,
  144,   52,   26,   66,   67,  119,   98,   99,  100,   26,
   96,   97,  117,  118,   55,  129,   26,   32,   33,   34,
   45,   32,   33,   34,   26,   26,   56,   64,   45,   45,
  132,   26,   26,   58,   51,   37,   53,   65,   39,   37,
   90,   77,   39,   51,   51,   51,   51,   51,   80,   51,
   51,   51,   51,   51,   51,   51,   32,   51,   70,   71,
   72,   40,   78,   51,   51,   32,   32,   73,   74,   75,
   76,   32,   32,   32,   32,   32,   32,   32,   33,   32,
   40,   40,   40,   41,   40,   32,   32,   33,   33,   60,
   40,   40,   82,   33,   33,   33,   33,   33,   33,   33,
   34,   33,   41,   41,   41,   42,   41,   33,   33,   34,
   34,   85,   41,   41,   86,   34,   34,   34,   34,   34,
   34,   34,   35,   34,   42,   42,   42,   43,   42,   34,
   34,  107,  108,  109,   42,   42,  110,   35,   35,   35,
   35,   35,   35,   35,   37,   35,   27,   43,   43,   44,
  112,   35,   35,  116,  113,  115,   43,   43,  120,   37,
   37,   37,   37,   37,   37,   37,   36,   37,  124,   44,
   44,   46,  122,   37,   37,   27,   27,  130,   44,   44,
  128,   36,   36,   36,   36,   36,   36,   36,   39,   36,
  131,    9,   46,  133,  134,   36,   36,  139,  140,  135,
   46,   46,  141,   39,   39,   39,   39,   39,   39,   39,
   38,   39,  101,  102,  103,  104,  142,   39,   39,  143,
   26,    8,   48,   47,   10,   38,   38,   38,   38,   38,
   38,   38,   15,   38,   11,  105,    0,  106,    0,   38,
   38,   51,   51,   51,   51,   51,    0,   51,   51,   51,
   51,   51,   51,   51,    0,   51,    0,    0,    0,    0,
    0,   51,
};
static const short yycheck[] = {                         15,
   63,  257,   65,   28,  299,  301,  277,  302,  257,  262,
  281,   36,   66,   67,  257,   31,  272,  272,  257,  257,
  263,  264,  265,  266,  257,  263,  264,  261,  266,  259,
   55,   56,  287,   12,   50,   60,   61,   62,  262,  282,
  283,  284,  285,  292,  282,  283,  284,  285,  291,  302,
  113,  301,  115,  291,  117,  118,  299,  300,  301,  302,
  303,  299,  300,  301,  302,  303,  301,  301,  258,  132,
  133,  134,  257,   52,  272,  258,  257,  260,  258,  258,
  143,  288,  258,  267,  268,  110,   70,   71,   72,  272,
   68,   69,  108,  109,  257,  120,  272,  282,  283,  284,
  279,  282,  283,  284,  287,  288,  257,  260,  287,  288,
  126,  287,  288,  287,  258,  300,  301,  287,  303,  300,
  301,  278,  303,  267,  268,  269,  270,  271,  294,  273,
  274,  275,  276,  277,  278,  279,  258,  281,  269,  270,
  271,  258,  279,  287,  288,  267,  268,  273,  274,  275,
  276,  273,  274,  275,  276,  277,  278,  279,  258,  281,
  277,  278,  279,  258,  281,  287,  288,  267,  268,  257,
  287,  288,  258,  273,  274,  275,  276,  277,  278,  279,
  258,  281,  277,  278,  279,  258,  281,  287,  288,  267,
  268,  263,  287,  288,  287,  273,  274,  275,  276,  277,
  278,  279,  258,  281,  277,  278,  279,  258,  281,  287,
  288,  303,  258,  258,  287,  288,  257,  273,  274,  275,
  276,  277,  278,  279,  258,  281,  258,  278,  279,  258,
  258,  287,  288,  298,  287,  287,  287,  288,  288,  273,
  274,  275,  276,  277,  278,  279,  258,  281,  303,  278,
  279,  258,  300,  287,  288,  287,  288,  293,  287,  288,
  258,  273,  274,  275,  276,  277,  278,  279,  258,  281,
  296,  258,  279,  287,  287,  287,  288,  295,  300,  303,
  287,  288,  297,  273,  274,  275,  276,  277,  278,  279,
  258,  281,   73,   74,   75,   76,  300,  287,  288,  287,
  260,  258,  258,  258,    4,  273,  274,  275,  276,  277,
  278,  279,    9,  281,    4,   77,   -1,   78,   -1,  287,
  288,  267,  268,  269,  270,  271,   -1,  273,  274,  275,
  276,  277,  278,  279,   -1,  281,   -1,   -1,   -1,   -1,
   -1,  287,
};
#define YYFINAL 3
#ifndef YYDEBUG
#define YYDEBUG 1
#endif
#define YYMAXTOKEN 303
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
"Variable : EMPLOYEE VAR ASSIGN NAME STRING LASTNAME STRING RANK STRING SALARY DIGITO ID DIGITO SEMICOLON Statement",
"CodeBlock : C_BRACKET_ABRE Statement C_BRACKET_CIERRA",
"Statement : Variable SEMICOLON Statement",
"Statement : Expression SEMICOLON Statement",
"Statement : Variable ASSIGN Expression SEMICOLON Statement",
"Statement : VAR ASSIGN Expression SEMICOLON Statement",
"Statement : Variable ASSIGN VAR SALARYFOR DIGITO MONTH SEMICOLON Statement",
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
#line 249 "salarium.y"

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
#line 434 "y.tab.c"

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
#line 114 "salarium.y"
	{ yyval.strval = concat_str( 14, "struct Employee ", yystack.l_mark[-13].strval, " = { ", yystack.l_mark[-10].strval, " , ", yystack.l_mark[-8].strval, " , ", yystack.l_mark[-6].strval , " , ", yystack.l_mark[-4].strval, " , ",yystack.l_mark[-2].strval ," };\n", yystack.l_mark[0].strval); }
break;
case 14:
#line 119 "salarium.y"
	{ yyval.strval = concat_str( 3, "{\n", yystack.l_mark[-1].strval, "\n}"); }
break;
case 15:
#line 124 "salarium.y"
	{ yyval.strval = concat_str( 3, yystack.l_mark[-2].strval, ";\n",  yystack.l_mark[0].strval); }
break;
case 16:
#line 126 "salarium.y"
	{ yyval.strval = concat_str( 3, yystack.l_mark[-2].strval, ";\n", yystack.l_mark[0].strval); }
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
	{ yyval.strval = concat_str( 9, yystack.l_mark[-7].strval, " = ", "salaryFor( ", yystack.l_mark[-5].strval, " , " , yystack.l_mark[-3].strval , " , ", "2 );\n", yystack.l_mark[0].strval ); }
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
	{ yyval.strval = yystack.l_mark[0].strval; }
break;
case 28:
#line 156 "salarium.y"
	{ yyval.strval = yystack.l_mark[0].strval; }
break;
case 29:
#line 158 "salarium.y"
	{ yyval.strval = concat_str(3, yystack.l_mark[-2].strval, " * ", yystack.l_mark[0].strval); }
break;
case 30:
#line 160 "salarium.y"
	{ yyval.strval = concat_str(3, yystack.l_mark[-2].strval, " / ", yystack.l_mark[0].strval); }
break;
case 31:
#line 162 "salarium.y"
	{ yyval.strval = concat_str(3, yystack.l_mark[-2].strval, " % ", yystack.l_mark[0].strval); }
break;
case 32:
#line 167 "salarium.y"
	{ yyval.strval = yystack.l_mark[0].strval; }
break;
case 33:
#line 169 "salarium.y"
	{ yyval.strval = concat_str(3, yystack.l_mark[-2].strval, " + ", yystack.l_mark[0].strval); }
break;
case 34:
#line 171 "salarium.y"
	{ yyval.strval = concat_str(3, yystack.l_mark[-2].strval, " - ", yystack.l_mark[0].strval); }
break;
case 35:
#line 176 "salarium.y"
	{ yyval.strval = yystack.l_mark[0].strval; }
break;
case 36:
#line 178 "salarium.y"
	{ yyval.strval = concat_str(3, yystack.l_mark[-2].strval, " < ", yystack.l_mark[0].strval); }
break;
case 37:
#line 180 "salarium.y"
	{ yyval.strval = concat_str(3, yystack.l_mark[-2].strval, " > ", yystack.l_mark[0].strval); }
break;
case 38:
#line 182 "salarium.y"
	{ yyval.strval = concat_str(3, yystack.l_mark[-2].strval, " <= ", yystack.l_mark[0].strval); }
break;
case 39:
#line 184 "salarium.y"
	{ yyval.strval = concat_str(3, yystack.l_mark[-2].strval, " >= ", yystack.l_mark[0].strval); }
break;
case 40:
#line 189 "salarium.y"
	{ yyval.strval = yystack.l_mark[0].strval; }
break;
case 41:
#line 191 "salarium.y"
	{ yyval.strval = concat_str(3, yystack.l_mark[-2].strval, " == ", yystack.l_mark[0].strval); }
break;
case 42:
#line 193 "salarium.y"
	{ yyval.strval = concat_str(3, yystack.l_mark[-2].strval, " != ", yystack.l_mark[0].strval); }
break;
case 43:
#line 198 "salarium.y"
	{ yyval.strval = yystack.l_mark[0].strval; }
break;
case 44:
#line 200 "salarium.y"
	{ yyval.strval = concat_str(3, yystack.l_mark[-2].strval, " && ", yystack.l_mark[0].strval); }
break;
case 45:
#line 205 "salarium.y"
	{ yyval.strval = yystack.l_mark[0].strval; }
break;
case 46:
#line 207 "salarium.y"
	{ yyval.strval = concat_str(3, yystack.l_mark[-2].strval, " || ", yystack.l_mark[0].strval); }
break;
case 47:
#line 212 "salarium.y"
	{ yyval.strval = concat_str( 2, yystack.l_mark[-1].strval, yystack.l_mark[0].strval); }
break;
case 48:
#line 214 "salarium.y"
	{ yyval.strval = ""; }
break;
case 49:
#line 219 "salarium.y"
	{ yyval.strval = concat_str( 3, yystack.l_mark[-2].strval, ", ", yystack.l_mark[0].strval); }
break;
case 50:
#line 221 "salarium.y"
	{ yyval.strval = ""; }
break;
case 51:
#line 226 "salarium.y"
	{ yyval.strval = yystack.l_mark[0].strval; }
break;
case 52:
#line 228 "salarium.y"
	{ yyval.strval = yystack.l_mark[0].strval; }
break;
case 53:
#line 230 "salarium.y"
	{ yyval.strval = "true"; }
break;
case 54:
#line 232 "salarium.y"
	{ yyval.strval = "FALSE_T"; }
break;
case 55:
#line 234 "salarium.y"
	{ yyval.strval = yystack.l_mark[0].strval; }
break;
case 56:
#line 236 "salarium.y"
	{ yyval.strval = "NULL_T"; }
break;
case 57:
#line 238 "salarium.y"
	{ yyval.strval = concat_str( 4, yystack.l_mark[-3].strval, "( ", yystack.l_mark[-1].strval, " )"); }
break;
case 58:
#line 240 "salarium.y"
	{ yyval.strval = concat_str( 3, "( ", yystack.l_mark[-1].strval, " )"); }
break;
case 59:
#line 245 "salarium.y"
	{ yyval.strval = concat_str(3, yystack.l_mark[-5].strval, " main ()\n",yystack.l_mark[0].strval); }
break;
#line 872 "y.tab.c"
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
