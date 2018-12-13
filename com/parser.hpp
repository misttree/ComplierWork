/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_YY_PARSER_HPP_INCLUDED
# define YY_YY_PARSER_HPP_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    INT_DEX = 258,
    INT_HEX = 259,
    INT_OCT = 260,
    FLOAT = 261,
    SEMI = 262,
    COMMA = 263,
    GE = 264,
    LE = 265,
    EQ = 266,
    NE = 267,
    GT = 268,
    LT = 269,
    ASSIGNOP = 270,
    PLUS = 271,
    MINUS = 272,
    STAR = 273,
    ADDR = 274,
    DIV = 275,
    AND = 276,
    OR = 277,
    DOT = 278,
    NOT = 279,
    LP = 280,
    RP = 281,
    LB = 282,
    RB = 283,
    LC = 284,
    RC = 285,
    COMMENT = 286,
    COMMENTS = 287,
    AUTO = 288,
    BOOL = 289,
    BREAK = 290,
    CASE = 291,
    CATCH = 292,
    CHAR = 293,
    CLASS = 294,
    CONST = 295,
    CONTINUE = 296,
    CO_AWAIT = 297,
    DEFAULT = 298,
    DELETE = 299,
    DO = 300,
    DOUBLE = 301,
    ELSE = 302,
    ENUM = 303,
    EXTERN = 304,
    FALSE = 305,
    FOR = 306,
    FRIEND = 307,
    GOTO = 308,
    IF = 309,
    IMPORT = 310,
    INLINE = 311,
    INT = 312,
    LONG = 313,
    NAMESPACE = 314,
    NEW = 315,
    NULLPTR = 316,
    OPERATOR = 317,
    PRIVATE = 318,
    PROTECTED = 319,
    PUBLIC = 320,
    RETURN = 321,
    SHORT = 322,
    SIGNED = 323,
    SIZEOF = 324,
    STATIC = 325,
    STRING_DEFINE = 326,
    STRUCT = 327,
    SWITCH = 328,
    SYNCHRONIZED = 329,
    TEMPLATE = 330,
    THIS = 331,
    THROW = 332,
    TRUE = 333,
    TRY = 334,
    TYPEDEF = 335,
    UNION = 336,
    UNSIGNED = 337,
    USING = 338,
    VIRTUAL = 339,
    VOID = 340,
    WHILE = 341,
    TYPE = 342,
    ID = 343,
    ERROR_ID = 344,
    LETTER = 345,
    LETTERS = 346,
    QUETO = 347,
    STRING = 348,
    DOUBLEQUETO = 349,
    SHARP = 350,
    PE = 351,
    ME = 352,
    SE = 353,
    DE = 354,
    PP = 355,
    MM = 356,
    CL = 357
  };
#endif
/* Tokens.  */
#define INT_DEX 258
#define INT_HEX 259
#define INT_OCT 260
#define FLOAT 261
#define SEMI 262
#define COMMA 263
#define GE 264
#define LE 265
#define EQ 266
#define NE 267
#define GT 268
#define LT 269
#define ASSIGNOP 270
#define PLUS 271
#define MINUS 272
#define STAR 273
#define ADDR 274
#define DIV 275
#define AND 276
#define OR 277
#define DOT 278
#define NOT 279
#define LP 280
#define RP 281
#define LB 282
#define RB 283
#define LC 284
#define RC 285
#define COMMENT 286
#define COMMENTS 287
#define AUTO 288
#define BOOL 289
#define BREAK 290
#define CASE 291
#define CATCH 292
#define CHAR 293
#define CLASS 294
#define CONST 295
#define CONTINUE 296
#define CO_AWAIT 297
#define DEFAULT 298
#define DELETE 299
#define DO 300
#define DOUBLE 301
#define ELSE 302
#define ENUM 303
#define EXTERN 304
#define FALSE 305
#define FOR 306
#define FRIEND 307
#define GOTO 308
#define IF 309
#define IMPORT 310
#define INLINE 311
#define INT 312
#define LONG 313
#define NAMESPACE 314
#define NEW 315
#define NULLPTR 316
#define OPERATOR 317
#define PRIVATE 318
#define PROTECTED 319
#define PUBLIC 320
#define RETURN 321
#define SHORT 322
#define SIGNED 323
#define SIZEOF 324
#define STATIC 325
#define STRING_DEFINE 326
#define STRUCT 327
#define SWITCH 328
#define SYNCHRONIZED 329
#define TEMPLATE 330
#define THIS 331
#define THROW 332
#define TRUE 333
#define TRY 334
#define TYPEDEF 335
#define UNION 336
#define UNSIGNED 337
#define USING 338
#define VIRTUAL 339
#define VOID 340
#define WHILE 341
#define TYPE 342
#define ID 343
#define ERROR_ID 344
#define LETTER 345
#define LETTERS 346
#define QUETO 347
#define STRING 348
#define DOUBLEQUETO 349
#define SHARP 350
#define PE 351
#define ME 352
#define SE 353
#define DE 354
#define PP 355
#define MM 356
#define CL 357

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 65 "parser.y" /* yacc.c:1909  */

    Node * node;

#line 262 "parser.hpp" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


extern YYSTYPE yylval;
extern YYLTYPE yylloc;
int yyparse (void);

#endif /* !YY_YY_PARSER_HPP_INCLUDED  */
