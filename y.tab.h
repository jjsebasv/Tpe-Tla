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
extern YYSTYPE yylval;
