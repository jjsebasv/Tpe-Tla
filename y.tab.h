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
extern YYSTYPE yylval;
