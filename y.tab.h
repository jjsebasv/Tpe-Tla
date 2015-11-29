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
