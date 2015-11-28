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
#define END 292
#define RETURN 293
#define SALARYFOR 294
#define MONTH 295
#define NAME 296
#define SALARY 297
#define RANK 298
#define ID 299
#define LASTNAME 300
#define EMPLOYEE 301
#define DIGITO 302
#define VAR 303
#define TYPE 304
#define STRING 305
#define SHOW_EMPLOYEE 306
#define ANTIQUITY 307
#define CATEGORY 308
#define WEEK 309
#define YEAR 310
#define QUOTATION_MARK 311
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
