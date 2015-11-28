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
    3,    1,    7,    8,    8,    8,    8,    8,    8,    8,
    8,    8,    8,    8,    8,    8,   10,   13,   13,   13,
   13,   11,   11,   11,   14,   14,   14,   14,   14,   12,
   12,   12,   15,   15,   16,   16,   17,   17,   18,   18,
   19,   19,   19,   19,   19,   19,   19,   19,    9,
};
static const short yylen[] = {                            2,
    2,    1,    2,    1,    4,    4,    3,    2,    0,    3,
    0,    2,    3,    3,   15,    3,    5,    5,    8,    6,
    6,    8,    8,    3,    2,    0,    1,    1,    3,    3,
    3,    1,    3,    3,    1,    3,    3,    3,    3,    1,
    3,    3,    1,    3,    1,    3,    2,    0,    3,    0,
    1,    1,    1,    1,    1,    1,    4,    3,    6,
};
static const short yydefred[] = {                         0,
    0,    0,    0,    0,    4,    2,    0,    0,    0,    3,
    1,    0,    0,    0,    0,    0,   11,    0,    0,    6,
    0,    5,   12,    0,    7,    0,    0,    0,    0,   53,
   54,   56,    0,    0,    0,   52,    0,   55,    0,    0,
    0,    0,    0,    0,    0,    0,    0,   28,    0,    0,
    0,    0,    0,    0,    0,   25,    0,    0,    0,    0,
    0,    0,   13,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,   59,   10,   58,
    0,    0,    0,   24,    0,   50,    0,    0,    0,    0,
   14,   16,    0,    0,    0,    0,   29,   30,   31,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
   57,    0,    0,    0,    0,    0,    0,    0,    0,   18,
    0,   17,   20,    0,   21,    0,    0,   49,    0,    0,
    0,    0,    0,   22,   23,    0,   19,    0,    0,    0,
    0,    0,    0,   15,
};
static const short yydgoto[] = {                          3,
   39,   18,   24,    4,    5,   13,   20,   40,    6,   41,
   42,   43,   44,   45,   46,   47,   87,  110,   48,
};
static const short yysindex[] = {                      -255,
 -297, -253,    0, -255,    0,    0, -251, -244, -251,    0,
    0, -277, -209, -183, -209, -225,    0, -177, -186,    0,
 -175,    0,    0, -198,    0, -238, -151, -150, -209,    0,
    0,    0, -179, -238, -191,    0, -252,    0, -261, -149,
 -165, -164, -265, -203, -187, -166, -156,    0, -209, -277,
 -131, -134, -238, -238, -136,    0, -159, -119, -238, -238,
 -182, -186,    0, -186, -238, -238, -238, -238, -238, -238,
 -238, -238, -238, -238, -238, -238, -238,    0,    0,    0,
 -124, -102,  -82,    0,  -97,    0,  -80,  -87, -240,  -77,
    0,    0, -203, -203, -187, -187,    0,    0,    0, -164,
 -164, -164, -164, -265, -166, -209, -209, -238,  -86,  -74,
    0, -186,  -81, -186, -186, -242,  -36,  -66, -238,    0,
  -75,    0,    0, -209,    0,  -51,  -64,    0,  -47, -186,
 -186,  -55, -186,    0,    0,  -59,    0,  -41,  -43,  -42,
  -39,  -29, -186,    0,
};
static const short yyrindex[] = {                         0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    4,    0,    0,    0,    0,    0,    0,    3,    0,
    0,    0,    0,   22,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,   60,    0,    0,    0,
    0,  -50,  -67, -116, -133, -194, -249,    0,    0,    0,
 -138,    0,    0,    0,    0,    0,    0,    0,   25,    0,
    0,    3,    0,    3,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,   60,    0,
    0,    0,  -94,  -72, -111,  -89,    0,    0,    0,  -28,
   -6,   16,   38,  -45,  -23,    0,    0,    0,    0,   26,
    0,    3,    0,    3,    3,    3,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    3,
    3,    0,    3,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    3,    0,
};
static const short yygindex[] = {                         0,
    6,    0,    0,    0,  262,  276,  -15,  -61,  282,  -24,
  204,  211,    8,  -40,  221,    0,    0,    0,  -38,
};
#define YYTABLESIZE 347
static const short yytable[] = {                         22,
   91,   52,   92,    7,   59,   12,    1,    8,   27,   57,
   61,   67,   14,   55,   26,   68,   59,   17,   26,   60,
   27,   28,  124,   29,   16,   62,   95,   96,   81,   82,
   97,   98,   99,   78,   86,   88,   90,   27,   27,   30,
   31,   32,   33,   30,   31,   32,    2,    9,   34,   19,
  120,  113,  122,  123,  125,   79,   35,   36,   37,   16,
   38,   36,   51,   45,   38,   69,   70,   71,  134,  135,
   26,  137,   93,   94,   26,   23,   27,   28,   21,   29,
   25,  144,   49,  117,   45,   72,   73,   74,   75,   50,
  115,  116,   45,   45,  128,   30,   31,   32,   33,   30,
   31,   32,   65,   66,   34,   53,   54,   56,  130,   58,
   63,   76,   35,   36,   37,   16,   38,   36,   89,   51,
   38,   64,   77,   80,   40,   59,   83,   84,   51,   51,
   51,   51,   51,  106,   51,   51,   51,   51,   51,   51,
   51,   32,   51,   40,   40,   40,   41,   40,   51,   51,
   32,   32,   85,   40,   40,  107,   32,   32,   32,   32,
   32,   32,   32,   33,   32,   41,   41,   41,   42,   41,
   32,   32,   33,   33,  108,   41,   41,  111,   33,   33,
   33,   33,   33,   33,   33,   34,   33,   42,   42,   42,
   43,   42,   33,   33,   34,   34,  109,   42,   42,  112,
   34,   34,   34,   34,   34,   34,   34,   35,   34,  114,
   43,   43,   44,  119,   34,   34,  118,  129,  121,   43,
   43,  126,   35,   35,   35,   35,   35,   35,   35,   37,
   35,  127,   44,   44,   46,  131,   35,   35,  132,  133,
  136,   44,   44,  138,   37,   37,   37,   37,   37,   37,
   37,   36,   37,  139,  141,   46,  140,  143,   37,   37,
  142,    9,   26,   46,   46,   10,   36,   36,   36,   36,
   36,   36,   36,   39,   36,  100,  101,  102,  103,    8,
   36,   36,   48,   47,   15,   11,  104,    0,   39,   39,
   39,   39,   39,   39,   39,   38,   39,  105,    0,    0,
    0,    0,   39,   39,    0,    0,    0,    0,    0,    0,
   38,   38,   38,   38,   38,   38,   38,    0,   38,    0,
    0,    0,    0,    0,   38,   38,   51,   51,   51,   51,
   51,    0,   51,   51,   51,   51,   51,   51,   51,    0,
   51,    0,    0,    0,    0,    0,   51,
};
static const short yycheck[] = {                         15,
   62,   26,   64,  301,  257,  257,  262,  261,  258,   34,
  272,  277,  257,   29,  257,  281,  257,   12,  257,  272,
  263,  264,  265,  266,  302,  287,   67,   68,   53,   54,
   69,   70,   71,   49,   59,   60,   61,  287,  288,  282,
  283,  284,  285,  282,  283,  284,  302,  301,  291,  259,
  112,  292,  114,  115,  116,   50,  299,  300,  301,  302,
  303,  300,  301,  258,  303,  269,  270,  271,  130,  131,
  257,  133,   65,   66,  257,  301,  263,  264,  262,  266,
  258,  143,  258,  108,  279,  273,  274,  275,  276,  288,
  106,  107,  287,  288,  119,  282,  283,  284,  285,  282,
  283,  284,  267,  268,  291,  257,  257,  287,  124,  301,
  260,  278,  299,  300,  301,  302,  303,  300,  301,  258,
  303,  287,  279,  258,  258,  257,  263,  287,  267,  268,
  269,  270,  271,  258,  273,  274,  275,  276,  277,  278,
  279,  258,  281,  277,  278,  279,  258,  281,  287,  288,
  267,  268,  272,  287,  288,  258,  273,  274,  275,  276,
  277,  278,  279,  258,  281,  277,  278,  279,  258,  281,
  287,  288,  267,  268,  257,  287,  288,  258,  273,  274,
  275,  276,  277,  278,  279,  258,  281,  277,  278,  279,
  258,  281,  287,  288,  267,  268,  294,  287,  288,  287,
  273,  274,  275,  276,  277,  278,  279,  258,  281,  287,
  278,  279,  258,  288,  287,  288,  303,  293,  300,  287,
  288,  258,  273,  274,  275,  276,  277,  278,  279,  258,
  281,  298,  278,  279,  258,  287,  287,  288,  303,  287,
  296,  287,  288,  303,  273,  274,  275,  276,  277,  278,
  279,  258,  281,  295,  297,  279,  300,  287,  287,  288,
  300,  258,  260,  287,  288,    4,  273,  274,  275,  276,
  277,  278,  279,  258,  281,   72,   73,   74,   75,  258,
  287,  288,  258,  258,    9,    4,   76,   -1,  273,  274,
  275,  276,  277,  278,  279,  258,  281,   77,   -1,   -1,
   -1,   -1,  287,  288,   -1,   -1,   -1,   -1,   -1,   -1,
  273,  274,  275,  276,  277,  278,  279,   -1,  281,   -1,
   -1,   -1,   -1,   -1,  287,  288,  267,  268,  269,  270,
  271,   -1,  273,  274,  275,  276,  277,  278,  279,   -1,
  281,   -1,   -1,   -1,   -1,   -1,  287,
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
"CodeBlock : C_BRACKET_ABRE Statement C_BRACKET_CIERRA",
"Statement : Variable SEMICOLON Statement",
"Statement : EMPLOYEE VAR ASSIGN NAME STRING LASTNAME STRING RANK STRING SALARY DIGITO ID DIGITO SEMICOLON Statement",
"Statement : Exp SEMICOLON Statement",
"Statement : Variable ASSIGN Exp SEMICOLON Statement",
"Statement : VAR ASSIGN Exp SEMICOLON Statement",
"Statement : Variable ASSIGN VAR SALARYFOR DIGITO MONTH SEMICOLON Statement",
"Statement : WHILE PARENTESIS_ABRE Exp PARENTESIS_CIERRA CodeBlock Statement",
"Statement : IF PARENTESIS_ABRE Exp PARENTESIS_CIERRA CodeBlock Statement",
"Statement : IF PARENTESIS_ABRE Exp PARENTESIS_CIERRA CodeBlock ELSE CodeBlock Statement",
"Statement : DO CodeBlock WHILE PARENTESIS_ABRE Exp PARENTESIS_CIERRA SEMICOLON Statement",
"Statement : RETURN Exp SEMICOLON",
"Statement : BREAK SEMICOLON",
"Statement :",
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
#line 117 "salarium.y"
	{ yyval.strval = concat_str( 3, "{\n", yystack.l_mark[-1].strval, "\n}"); }
break;
case 14:
#line 122 "salarium.y"
	{ yyval.strval = concat_str( 3, yystack.l_mark[-2].strval, ";\n",  yystack.l_mark[0].strval); }
break;
case 15:
#line 124 "salarium.y"
	{ yyval.strval = concat_str( 14, "struct Employee ", yystack.l_mark[-13].strval, " = { ", yystack.l_mark[-10].strval, " , ", yystack.l_mark[-8].strval, " , ", yystack.l_mark[-6].strval , " , ", yystack.l_mark[-4].strval, " , ",yystack.l_mark[-2].strval ," };\n", yystack.l_mark[0].strval); }
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
