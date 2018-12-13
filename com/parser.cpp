/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "parser.y" /* yacc.c:339  */

#include <stdio.h>
#include "stdlib.h"
#include <string>
#include <cstring>
#include <string.h>
#include <iostream>
#include "Node.h"
#include "symbol.h"

#define V vector<Node*>
using namespace std;

extern FILE * yyin;
extern FILE * yyout;

void yyerror(const char*); 
int yylex();

Node* nullNode(int index);
Node* newnode(int index, const string name, const string detail);
Node* newnode(int index, const string name, Node* node);
Node* newnode(int index, Node* node, const string detail);
Node* newnode(int index, const string name, const string detail, Node* node);
Node* newnode(int index, const string name, const string detail, vector<Node*> nodes);

void outputTree(Node* node);
list<string> formatOutputTree(list<Node*> children, list<string> strformat);
void outputTable();
void outputSymbolTable();

static int mycount = 0;
static vector<Node*> ranged_nodes;
extern symbolTable *symboltable;


#line 103 "parser.cpp" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "parser.hpp".  */
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
#line 65 "parser.y" /* yacc.c:355  */

    Node * node;

#line 351 "parser.cpp" /* yacc.c:355  */
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

/* Copy the second part of user declarations.  */

#line 382 "parser.cpp" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  16
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1532

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  107
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  52
/* YYNRULES -- Number of rules.  */
#define YYNRULES  152
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  276

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   357

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     5,     3,     2,     4,     2,     6,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    72,    72,    76,    77,    81,    82,    86,    90,    91,
      92,    93,    94,    95,   100,   101,   102,   103,   108,   113,
     114,   115,   116,   121,   122,   123,   128,   129,   134,   139,
     140,   141,   146,   150,   151,   152,   157,   162,   166,   167,
     171,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     187,   188,   192,   196,   197,   198,   199,   203,   204,   208,
     209,   213,   214,   218,   219,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   236,   237,   238,   239,   240,
     244,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   261,   262,   266,   270,   274,   275,   279,   280,   281,
     282,   283,   288,   289,   293,   294,   295,   299,   300,   301,
     305,   306,   307,   308,   312,   313,   314,   315,   319,   320,
     321,   325,   326,   330,   331,   335,   336,   337,   338,   339,
     340,   344,   345,   346,   350,   351,   352,   356,   357,   358,
     359,   360,   361,   362,   366,   367,   371,   372,   376,   377,
     378,   379,   383
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "'+'", "'-'", "'*'", "'/'", "INT_DEX",
  "INT_HEX", "INT_OCT", "FLOAT", "SEMI", "COMMA", "GE", "LE", "EQ", "NE",
  "GT", "LT", "ASSIGNOP", "PLUS", "MINUS", "STAR", "ADDR", "DIV", "AND",
  "OR", "DOT", "NOT", "LP", "RP", "LB", "RB", "LC", "RC", "COMMENT",
  "COMMENTS", "AUTO", "BOOL", "BREAK", "CASE", "CATCH", "CHAR", "CLASS",
  "CONST", "CONTINUE", "CO_AWAIT", "DEFAULT", "DELETE", "DO", "DOUBLE",
  "ELSE", "ENUM", "EXTERN", "FALSE", "FOR", "FRIEND", "GOTO", "IF",
  "IMPORT", "INLINE", "INT", "LONG", "NAMESPACE", "NEW", "NULLPTR",
  "OPERATOR", "PRIVATE", "PROTECTED", "PUBLIC", "RETURN", "SHORT",
  "SIGNED", "SIZEOF", "STATIC", "STRING_DEFINE", "STRUCT", "SWITCH",
  "SYNCHRONIZED", "TEMPLATE", "THIS", "THROW", "TRUE", "TRY", "TYPEDEF",
  "UNION", "UNSIGNED", "USING", "VIRTUAL", "VOID", "WHILE", "TYPE", "ID",
  "ERROR_ID", "LETTER", "LETTERS", "QUETO", "STRING", "DOUBLEQUETO",
  "SHARP", "PE", "ME", "SE", "DE", "PP", "MM", "CL", "$accept", "tree",
  "program", "external_declaration", "var_declaration",
  "init_declarator_list", "init_array_or_point_assignment", "list_struct",
  "content_of_list_struct", "mininum", "pointer", "paddress", "array",
  "array_sigle", "array_main", "array_special", "array_size", "declarator",
  "fun_declaration", "declaration_specifiers", "params_list", "params",
  "var", "compound_stmt", "block_list", "block_item", "statement_list",
  "statement", "if_stmt", "switch_stmt", "case_list", "while_stmt",
  "do_while_stmt", "for_stmt", "for_body", "for_condition", "return_stmt",
  "expression", "logical_expression", "assignment_expression",
  "self_assign", "unary_expression", "postfix_expression",
  "simple_expression", "relop", "additive_expression", "term", "factor",
  "call_func", "args", "number", "id", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,    43,    45,    42,    47,   258,   259,   260,
     261,   262,   263,   264,   265,   266,   267,   268,   269,   270,
     271,   272,   273,   274,   275,   276,   277,   278,   279,   280,
     281,   282,   283,   284,   285,   286,   287,   288,   289,   290,
     291,   292,   293,   294,   295,   296,   297,   298,   299,   300,
     301,   302,   303,   304,   305,   306,   307,   308,   309,   310,
     311,   312,   313,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323,   324,   325,   326,   327,   328,   329,   330,
     331,   332,   333,   334,   335,   336,   337,   338,   339,   340,
     341,   342,   343,   344,   345,   346,   347,   348,   349,   350,
     351,   352,   353,   354,   355,   356,   357
};
# endif

#define YYPACT_NINF -105

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-105)))

#define YYTABLE_NINF -44

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1443,  -105,  -105,  -105,  -105,  -105,  -105,  -105,  -105,  -105,
      39,  1443,  -105,  -105,  -105,    -3,  -105,  -105,    23,   -33,
       9,  -105,   -33,   -33,    80,  -105,    45,  -105,    64,    81,
    -105,  -105,  -105,  -105,  1336,  -105,  -105,  -105,    42,    42,
    -105,  -105,  -105,    -3,   -30,   211,    70,  1350,   312,    18,
    -105,  -105,  -105,  -105,  -105,  -105,  -105,  -105,    83,  1350,
      20,  -105,  -105,  -105,  -105,  -105,   788,  -105,    42,  -105,
    -105,  -105,  -105,  1350,    34,  -105,  -105,  -105,  -105,   150,
     136,  -105,  -105,  -105,   147,    48,  -105,  1350,    94,   161,
    -105,  -105,  -105,   178,  1356,  -105,     1,   104,   168,  -105,
      42,    98,   203,  -105,   161,    42,   137,  -105,  -105,  -105,
    -105,    26,  -105,  -105,   247,   247,   247,   247,  1290,   161,
     247,  1350,  1350,  -105,  -105,  -105,  -105,  -105,  -105,   247,
    -105,  -105,  -105,    42,  -105,  1443,  -105,    42,   125,  -105,
     179,   190,   170,   187,   195,  1316,   199,   206,  -105,    -3,
    -105,   276,  -105,   817,  -105,  -105,  -105,  -105,  -105,  -105,
    -105,    52,  -105,    48,  -105,   136,   136,  -105,  -105,  -105,
      54,   229,   161,   161,   150,  -105,  -105,  -105,  -105,   817,
     875,   920,  1350,  -105,    61,   -33,  1350,  -105,  -105,  -105,
    -105,  -105,  -105,  1350,  -105,   401,  1324,  1350,    71,   203,
    -105,  -105,   158,  -105,   230,   197,  -105,   172,  1341,    99,
     118,  1350,   453,   978,   175,  1030,   234,  -105,   213,  1350,
    1350,   140,  -105,   203,   215,    29,   203,  -105,  1350,  -105,
     221,   264,  1350,   505,   817,    10,   162,   237,   557,   271,
    -105,  -105,   287,   226,  -105,   166,   173,  1082,  -105,  -105,
     270,  -105,  1134,  1186,  1238,   203,   817,  -105,   203,   817,
     203,   349,   203,   349,   609,   661,   713,  -105,   765,  -105,
    -105,  -105,    29,    29,  -105,  -105
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    43,    44,    45,    46,    41,    47,    48,    49,    42,
       0,     2,     3,     5,     6,     0,     1,     4,     0,     0,
       0,   152,     0,     0,     0,    10,    55,    56,    54,     0,
       8,     9,   113,   120,    53,    27,    26,    28,     0,     0,
     118,   119,     7,     0,     0,     0,     0,     0,     0,     0,
     114,   115,   116,   117,   121,   122,    29,    32,     0,     0,
       0,    31,    30,    13,    12,    11,    53,    16,     0,   150,
     148,   149,   151,     0,     0,    14,   143,   142,   141,   112,
     131,   134,   139,   140,   138,     0,    17,     0,   141,   110,
     106,   104,   105,   123,   138,    38,     0,     0,    50,    37,
      36,     0,     0,    40,   111,     0,     0,    15,    23,    24,
      20,     0,    19,    25,     0,     0,     0,     0,     0,   109,
       0,     0,     0,   128,   126,   129,   130,   127,   125,     0,
      55,    54,    52,    53,    39,     0,    34,    35,   151,    57,
       0,     0,     0,     0,     0,     0,     0,     0,    61,     0,
      66,     0,    59,    62,    64,    67,    71,    68,    70,    69,
      74,     0,   137,     0,    18,   132,   133,   135,   136,   144,
     146,     0,   107,   108,   124,    51,    33,    72,    73,     0,
       0,     0,     0,   102,     0,     0,     0,    58,    60,    63,
      65,    22,    21,     0,   145,     0,     0,     0,     0,     0,
      95,    94,     0,   103,     0,     0,   147,     0,     0,     0,
       0,     0,    62,     0,     0,     0,     0,   101,     0,     0,
       0,     0,    96,     0,    78,     0,     0,    91,     0,   100,
       0,     0,     0,    62,     0,     0,     0,     0,    62,     0,
      99,    98,     0,    79,    75,     0,     0,     0,    80,    92,
       0,    97,     0,     0,     0,     0,    90,    93,     0,    76,
       0,    84,     0,    88,    62,    62,    62,    83,    62,    87,
      89,    77,    82,    86,    81,    85
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -105,  -105,  -105,   277,     2,  -105,   239,   -37,  -105,   124,
     -12,   -11,     3,  -105,   -10,  -105,  -105,  -105,  -105,     5,
     156,  -105,   -42,   242,  -105,   151,  1224,   -59,  -105,  -105,
    -104,  -105,  -105,  -105,  -105,  -105,  -105,   -47,  -105,     6,
    -105,  -105,  -105,  -105,  -105,   -15,   100,   133,  -105,   113,
     -52,    -8
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    10,    11,    12,   148,    24,    25,   110,   111,   112,
      76,    77,    88,    29,    56,    57,   101,    58,    14,   149,
      97,    98,    30,   150,   151,   152,   153,   154,   155,   156,
     237,   157,   158,   159,   201,   181,   160,   161,    90,    91,
      59,    32,    33,    92,   129,    93,    80,    81,    82,   171,
      83,    94
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      89,    64,    13,    26,    27,    15,    35,    34,    75,    86,
      36,    37,   104,    13,    40,    41,    15,   245,    28,    18,
      19,    31,   113,    18,    19,    99,   106,    99,    61,    62,
      79,    26,    27,   113,    20,    66,    68,    84,   163,    16,
     119,    69,    70,    71,    72,    18,    28,    67,    78,    65,
     100,    38,   105,    96,   132,    69,    70,    71,    72,    21,
     164,    20,    21,   190,    44,    20,   193,    85,   107,   235,
      39,   170,   203,    60,   172,   173,   236,   121,   122,   121,
     122,    85,   211,    45,   130,    27,   121,   122,   133,    21,
     136,    42,    43,    21,   189,   136,   121,   122,   184,   131,
      46,    22,    23,    85,   246,    79,    84,    84,    84,    84,
     219,   113,    84,   120,   174,    21,   102,    78,    78,    78,
      78,    84,   200,    78,   121,   122,   191,   176,   108,   220,
     137,   109,    78,   198,   134,   202,   189,    26,    27,   205,
      96,    66,   108,   121,   122,   109,   170,   -43,   -43,   209,
     210,   232,    28,   189,   224,    31,   227,   267,   116,   269,
     117,   218,   121,   122,   221,   121,   122,   162,   274,   275,
     114,   115,   230,   231,   189,   244,   118,   204,    60,   189,
     135,   239,   197,   121,   122,   242,   121,   122,   213,   -43,
     177,   123,   124,   125,   126,   127,   128,   189,   114,   115,
     189,   178,   189,   179,   189,   189,   189,   189,   225,   189,
      69,    70,    71,   138,   165,   166,   180,   -43,    69,    70,
      71,    72,   121,   122,   182,    18,    19,   215,   185,   -43,
     -43,    87,    73,    18,    19,   186,   102,   139,   121,   122,
      73,     2,   140,   229,    74,     3,   121,   122,   141,   167,
     168,   240,   142,     4,    69,    70,    71,    72,   143,   194,
     214,   144,   216,   228,     5,     6,   234,    20,   247,    18,
      19,   248,   253,   145,     7,    20,    73,   252,     8,   254,
     146,   257,    63,    69,    70,    71,   138,   192,    17,   121,
     122,   175,     9,   147,   241,    21,   121,   122,    18,    19,
     103,   250,   188,    21,    87,    73,   206,    22,    23,   102,
     187,    20,   121,   122,     2,   140,     0,   251,     3,     0,
       0,   141,     1,     0,     0,   142,     4,     0,     0,     0,
       0,   143,     0,     0,   144,     0,     0,     5,     6,    21,
      20,     0,    95,     0,     0,     0,   145,     7,     0,     0,
       2,     8,     0,   146,     3,     0,    69,    70,    71,    72,
       0,     0,     4,     0,     0,     9,   147,     0,    21,     0,
       0,    18,    19,     5,     6,     0,     0,    87,    73,     0,
      22,    23,   102,     7,     0,     0,     0,     8,   140,   235,
       0,     0,     0,     0,   141,     0,   236,     0,   142,     0,
       0,     9,     0,     0,   143,     0,     0,   144,    69,    70,
      71,    72,     0,    20,     0,     0,     0,     0,     0,   145,
       0,     0,     0,    18,    19,     0,   146,     0,     0,    87,
      73,     0,     0,     0,   102,   207,     0,     0,     0,   147,
     140,    21,     0,     0,     0,     0,   141,     0,     0,     0,
     142,     0,     0,    22,    23,     0,   143,     0,     0,   144,
      69,    70,    71,    72,     0,    20,     0,     0,     0,     0,
       0,   145,     0,     0,     0,    18,    19,     0,   146,     0,
       0,    87,    73,     0,     0,     0,   102,   222,     0,     0,
       0,   147,   140,    21,     0,     0,     0,     0,   141,     0,
       0,     0,   142,     0,     0,    22,    23,     0,   143,     0,
       0,   144,    69,    70,    71,    72,     0,    20,     0,     0,
       0,     0,     0,   145,     0,     0,     0,    18,    19,     0,
     146,     0,     0,    87,    73,     0,     0,     0,   102,   243,
       0,     0,     0,   147,   140,    21,     0,     0,     0,     0,
     141,     0,     0,     0,   142,     0,     0,    22,    23,     0,
     143,     0,     0,   144,    69,    70,    71,    72,     0,    20,
       0,     0,     0,     0,     0,   145,     0,     0,     0,    18,
      19,     0,   146,     0,     0,    87,    73,     0,     0,     0,
     102,   249,     0,     0,     0,   147,   140,    21,     0,     0,
       0,     0,   141,     0,     0,     0,   142,     0,     0,    22,
      23,     0,   143,     0,     0,   144,    69,    70,    71,    72,
       0,    20,     0,     0,     0,     0,     0,   145,     0,     0,
       0,    18,    19,     0,   146,     0,     0,    87,    73,     0,
       0,     0,   102,   270,     0,     0,     0,   147,   140,    21,
       0,     0,     0,     0,   141,     0,     0,     0,   142,     0,
       0,    22,    23,     0,   143,     0,     0,   144,    69,    70,
      71,    72,     0,    20,     0,     0,     0,     0,     0,   145,
       0,     0,     0,    18,    19,     0,   146,     0,     0,    87,
      73,     0,     0,     0,   102,   271,     0,     0,     0,   147,
     140,    21,     0,     0,     0,     0,   141,     0,     0,     0,
     142,     0,     0,    22,    23,     0,   143,     0,     0,   144,
      69,    70,    71,    72,     0,    20,     0,     0,     0,     0,
       0,   145,     0,     0,     0,    18,    19,     0,   146,     0,
       0,    87,    73,     0,     0,     0,   102,   272,     0,     0,
       0,   147,   140,    21,     0,     0,     0,     0,   141,     0,
       0,     0,   142,     0,     0,    22,    23,     0,   143,     0,
       0,   144,    69,    70,    71,    72,     0,    20,     0,     0,
       0,     0,     0,   145,     0,     0,     0,    18,    19,     0,
     146,     0,     0,    87,    73,     0,     0,     0,   102,   273,
       0,     0,     0,   147,   140,    21,     0,    47,     0,     0,
     141,     0,     0,     0,   142,     0,     0,    22,    23,    49,
     143,     0,     0,   144,    69,    70,    71,    72,     0,    20,
       0,     0,     0,     0,     0,   145,     0,     0,     0,    18,
      19,     0,   146,     0,     0,    87,    73,     0,     0,     0,
     102,     0,     0,     0,     0,   147,   140,    21,     0,     0,
       0,     0,   141,     0,     0,     0,   142,     0,     0,    22,
      23,     0,   143,     0,     0,   144,     0,     0,     0,     0,
       0,    20,    69,    70,    71,   138,   196,   145,    50,    51,
      52,    53,    54,    55,   146,     0,     0,    18,    19,     0,
       0,     0,     0,    87,    73,     0,     0,   147,     0,    21,
       0,     0,     0,     2,     0,     0,     0,     3,     0,     0,
       0,    22,    23,     0,     0,     4,     0,    69,    70,    71,
      72,     0,     0,     0,     0,     0,     5,     6,     0,    20,
       0,     0,    18,    19,     0,     0,     7,     0,    87,    73,
       8,     0,     0,   199,     0,     0,     0,     0,     0,   140,
       0,     0,     0,     0,     9,   141,     0,    21,     0,   142,
       0,     0,     0,     0,     0,   143,     0,     0,   144,    22,
      23,     0,     0,     0,    20,    69,    70,    71,    72,     0,
     145,     0,     0,     0,     0,     0,     0,   146,     0,     0,
      18,    19,     0,     0,     0,     0,    87,    73,     0,     0,
     147,   223,    21,     0,     0,     0,     0,   140,     0,     0,
       0,     0,     0,   141,    22,    23,     0,   142,     0,     0,
       0,     0,     0,   143,     0,     0,   144,    69,    70,    71,
      72,     0,    20,     0,     0,     0,     0,     0,   145,     0,
       0,     0,    18,    19,     0,   146,     0,     0,    87,    73,
       0,     0,     0,   226,     0,     0,     0,     0,   147,   140,
      21,     0,     0,     0,     0,   141,     0,     0,     0,   142,
       0,     0,    22,    23,     0,   143,     0,     0,   144,    69,
      70,    71,    72,     0,    20,     0,     0,     0,     0,     0,
     145,     0,     0,     0,    18,    19,     0,   146,     0,     0,
      87,    73,     0,     0,     0,   255,     0,     0,     0,     0,
     147,   140,    21,     0,     0,     0,     0,   141,     0,     0,
       0,   142,     0,     0,    22,    23,     0,   143,     0,     0,
     144,    69,    70,    71,    72,     0,    20,     0,     0,     0,
       0,     0,   145,     0,     0,     0,    18,    19,     0,   146,
       0,     0,    87,    73,     0,     0,     0,   258,     0,     0,
       0,     0,   147,   140,    21,     0,     0,     0,     0,   141,
       0,     0,     0,   142,     0,     0,    22,    23,     0,   143,
       0,     0,   144,    69,    70,    71,    72,     0,    20,     0,
       0,     0,     0,     0,   145,     0,     0,     0,    18,    19,
       0,   146,     0,     0,    87,    73,     0,     0,     0,   260,
       0,     0,     0,     0,   147,   140,    21,     0,     0,     0,
       0,   141,     0,     0,     0,   142,     0,     0,    22,    23,
       0,   143,     0,     0,   144,    69,    70,    71,    72,     0,
      20,     0,     0,     0,     0,     0,   145,     0,     0,     0,
      18,    19,     0,   146,     0,     0,    87,    73,     0,     0,
       0,   262,     0,     0,     0,     0,   147,   140,    21,     0,
       0,     0,     0,   141,     0,     0,     0,   142,     0,     0,
      22,    23,     0,   143,     0,     0,   144,    69,    70,    71,
      72,     0,    20,     0,     0,     0,     0,     0,   145,     0,
       0,     0,    18,    19,     0,   146,     0,     0,    87,    73,
     169,     0,     0,    69,    70,    71,    72,   183,   147,     0,
      21,    69,    70,    71,    72,   208,     0,     0,    18,    19,
       0,     0,    22,    23,    87,    73,    18,    19,    69,    70,
      71,    72,    87,    73,    20,    47,     0,    69,    70,    71,
      72,     0,     0,    18,    19,    48,     0,    49,     0,    87,
      73,   217,    18,    19,     0,    47,     0,     0,    87,    73,
      20,     0,    21,     0,     0,   118,     0,    60,    20,     0,
       0,     0,     0,     0,    22,    23,     0,     0,     0,     0,
       0,     0,     0,   195,     0,    20,     0,     0,    21,     0,
       0,     0,     0,     0,    20,     0,    21,     0,     0,     0,
      22,    23,     0,   212,     0,     0,     0,     0,    22,    23,
       0,     0,     0,    21,     0,     0,    50,    51,    52,    53,
      54,    55,    21,     0,     0,    22,    23,   233,     0,     0,
     238,     0,     0,     1,    22,    23,    50,    51,    52,    53,
      54,    55,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   256,     0,     0,     0,     0,   259,   261,   263,   264,
       0,     2,   265,     0,   266,     3,   268,     0,     0,     0,
       0,     0,     0,     4,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     5,     6,     0,     0,     0,     0,
       0,     0,     0,     0,     7,     0,     0,     0,     8,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     9
};

static const yytype_int16 yycheck[] =
{
      47,    43,     0,    15,    15,     0,    18,    15,    45,    46,
      18,    19,    59,    11,    22,    23,    11,     7,    15,    22,
      23,    15,    74,    22,    23,     7,    73,     7,    38,    39,
      45,    43,    43,    85,    64,    43,    44,    45,    12,     0,
      87,     7,     8,     9,    10,    22,    43,    44,    45,    43,
      32,    42,    32,    48,    96,     7,     8,     9,    10,    92,
      34,    64,    92,    11,    19,    64,    12,    33,    34,    40,
      61,   118,    11,    31,   121,   122,    47,    25,    26,    25,
      26,    33,    11,    19,    96,    96,    25,    26,    96,    92,
     100,    11,    12,    92,   153,   105,    25,    26,   145,    96,
      19,   104,   105,    33,    94,   120,   114,   115,   116,   117,
      11,   163,   120,    19,   129,    92,    33,   114,   115,   116,
     117,   129,   181,   120,    25,    26,   163,   137,    94,    11,
      32,    97,   129,   180,    30,   182,   195,   149,   149,   186,
     135,   149,    94,    25,    26,    97,   193,    22,    23,   196,
     197,    11,   149,   212,   213,   149,   215,   261,    22,   263,
      24,   208,    25,    26,   211,    25,    26,    30,   272,   273,
      20,    21,   219,   220,   233,   234,    29,   185,    31,   238,
      12,   228,   180,    25,    26,   232,    25,    26,    30,    64,
      11,    13,    14,    15,    16,    17,    18,   256,    20,    21,
     259,    11,   261,    33,   263,   264,   265,   266,    33,   268,
       7,     8,     9,    10,   114,   115,    29,    92,     7,     8,
       9,    10,    25,    26,    29,    22,    23,    30,    29,   104,
     105,    28,    29,    22,    23,    29,    33,    34,    25,    26,
      29,    38,    39,    30,    33,    42,    25,    26,    45,   116,
     117,    30,    49,    50,     7,     8,     9,    10,    55,    30,
      30,    58,    90,    29,    61,    62,    51,    64,   106,    22,
      23,    34,   106,    70,    71,    64,    29,    51,    75,   106,
      77,    11,    43,     7,     8,     9,    10,   163,    11,    25,
      26,   135,    89,    90,    30,    92,    25,    26,    22,    23,
      58,    30,   151,    92,    28,    29,   193,   104,   105,    33,
      34,    64,    25,    26,    38,    39,    -1,    30,    42,    -1,
      -1,    45,    10,    -1,    -1,    49,    50,    -1,    -1,    -1,
      -1,    55,    -1,    -1,    58,    -1,    -1,    61,    62,    92,
      64,    -1,    30,    -1,    -1,    -1,    70,    71,    -1,    -1,
      38,    75,    -1,    77,    42,    -1,     7,     8,     9,    10,
      -1,    -1,    50,    -1,    -1,    89,    90,    -1,    92,    -1,
      -1,    22,    23,    61,    62,    -1,    -1,    28,    29,    -1,
     104,   105,    33,    71,    -1,    -1,    -1,    75,    39,    40,
      -1,    -1,    -1,    -1,    45,    -1,    47,    -1,    49,    -1,
      -1,    89,    -1,    -1,    55,    -1,    -1,    58,     7,     8,
       9,    10,    -1,    64,    -1,    -1,    -1,    -1,    -1,    70,
      -1,    -1,    -1,    22,    23,    -1,    77,    -1,    -1,    28,
      29,    -1,    -1,    -1,    33,    34,    -1,    -1,    -1,    90,
      39,    92,    -1,    -1,    -1,    -1,    45,    -1,    -1,    -1,
      49,    -1,    -1,   104,   105,    -1,    55,    -1,    -1,    58,
       7,     8,     9,    10,    -1,    64,    -1,    -1,    -1,    -1,
      -1,    70,    -1,    -1,    -1,    22,    23,    -1,    77,    -1,
      -1,    28,    29,    -1,    -1,    -1,    33,    34,    -1,    -1,
      -1,    90,    39,    92,    -1,    -1,    -1,    -1,    45,    -1,
      -1,    -1,    49,    -1,    -1,   104,   105,    -1,    55,    -1,
      -1,    58,     7,     8,     9,    10,    -1,    64,    -1,    -1,
      -1,    -1,    -1,    70,    -1,    -1,    -1,    22,    23,    -1,
      77,    -1,    -1,    28,    29,    -1,    -1,    -1,    33,    34,
      -1,    -1,    -1,    90,    39,    92,    -1,    -1,    -1,    -1,
      45,    -1,    -1,    -1,    49,    -1,    -1,   104,   105,    -1,
      55,    -1,    -1,    58,     7,     8,     9,    10,    -1,    64,
      -1,    -1,    -1,    -1,    -1,    70,    -1,    -1,    -1,    22,
      23,    -1,    77,    -1,    -1,    28,    29,    -1,    -1,    -1,
      33,    34,    -1,    -1,    -1,    90,    39,    92,    -1,    -1,
      -1,    -1,    45,    -1,    -1,    -1,    49,    -1,    -1,   104,
     105,    -1,    55,    -1,    -1,    58,     7,     8,     9,    10,
      -1,    64,    -1,    -1,    -1,    -1,    -1,    70,    -1,    -1,
      -1,    22,    23,    -1,    77,    -1,    -1,    28,    29,    -1,
      -1,    -1,    33,    34,    -1,    -1,    -1,    90,    39,    92,
      -1,    -1,    -1,    -1,    45,    -1,    -1,    -1,    49,    -1,
      -1,   104,   105,    -1,    55,    -1,    -1,    58,     7,     8,
       9,    10,    -1,    64,    -1,    -1,    -1,    -1,    -1,    70,
      -1,    -1,    -1,    22,    23,    -1,    77,    -1,    -1,    28,
      29,    -1,    -1,    -1,    33,    34,    -1,    -1,    -1,    90,
      39,    92,    -1,    -1,    -1,    -1,    45,    -1,    -1,    -1,
      49,    -1,    -1,   104,   105,    -1,    55,    -1,    -1,    58,
       7,     8,     9,    10,    -1,    64,    -1,    -1,    -1,    -1,
      -1,    70,    -1,    -1,    -1,    22,    23,    -1,    77,    -1,
      -1,    28,    29,    -1,    -1,    -1,    33,    34,    -1,    -1,
      -1,    90,    39,    92,    -1,    -1,    -1,    -1,    45,    -1,
      -1,    -1,    49,    -1,    -1,   104,   105,    -1,    55,    -1,
      -1,    58,     7,     8,     9,    10,    -1,    64,    -1,    -1,
      -1,    -1,    -1,    70,    -1,    -1,    -1,    22,    23,    -1,
      77,    -1,    -1,    28,    29,    -1,    -1,    -1,    33,    34,
      -1,    -1,    -1,    90,    39,    92,    -1,    19,    -1,    -1,
      45,    -1,    -1,    -1,    49,    -1,    -1,   104,   105,    31,
      55,    -1,    -1,    58,     7,     8,     9,    10,    -1,    64,
      -1,    -1,    -1,    -1,    -1,    70,    -1,    -1,    -1,    22,
      23,    -1,    77,    -1,    -1,    28,    29,    -1,    -1,    -1,
      33,    -1,    -1,    -1,    -1,    90,    39,    92,    -1,    -1,
      -1,    -1,    45,    -1,    -1,    -1,    49,    -1,    -1,   104,
     105,    -1,    55,    -1,    -1,    58,    -1,    -1,    -1,    -1,
      -1,    64,     7,     8,     9,    10,    11,    70,   100,   101,
     102,   103,   104,   105,    77,    -1,    -1,    22,    23,    -1,
      -1,    -1,    -1,    28,    29,    -1,    -1,    90,    -1,    92,
      -1,    -1,    -1,    38,    -1,    -1,    -1,    42,    -1,    -1,
      -1,   104,   105,    -1,    -1,    50,    -1,     7,     8,     9,
      10,    -1,    -1,    -1,    -1,    -1,    61,    62,    -1,    64,
      -1,    -1,    22,    23,    -1,    -1,    71,    -1,    28,    29,
      75,    -1,    -1,    33,    -1,    -1,    -1,    -1,    -1,    39,
      -1,    -1,    -1,    -1,    89,    45,    -1,    92,    -1,    49,
      -1,    -1,    -1,    -1,    -1,    55,    -1,    -1,    58,   104,
     105,    -1,    -1,    -1,    64,     7,     8,     9,    10,    -1,
      70,    -1,    -1,    -1,    -1,    -1,    -1,    77,    -1,    -1,
      22,    23,    -1,    -1,    -1,    -1,    28,    29,    -1,    -1,
      90,    33,    92,    -1,    -1,    -1,    -1,    39,    -1,    -1,
      -1,    -1,    -1,    45,   104,   105,    -1,    49,    -1,    -1,
      -1,    -1,    -1,    55,    -1,    -1,    58,     7,     8,     9,
      10,    -1,    64,    -1,    -1,    -1,    -1,    -1,    70,    -1,
      -1,    -1,    22,    23,    -1,    77,    -1,    -1,    28,    29,
      -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    90,    39,
      92,    -1,    -1,    -1,    -1,    45,    -1,    -1,    -1,    49,
      -1,    -1,   104,   105,    -1,    55,    -1,    -1,    58,     7,
       8,     9,    10,    -1,    64,    -1,    -1,    -1,    -1,    -1,
      70,    -1,    -1,    -1,    22,    23,    -1,    77,    -1,    -1,
      28,    29,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,
      90,    39,    92,    -1,    -1,    -1,    -1,    45,    -1,    -1,
      -1,    49,    -1,    -1,   104,   105,    -1,    55,    -1,    -1,
      58,     7,     8,     9,    10,    -1,    64,    -1,    -1,    -1,
      -1,    -1,    70,    -1,    -1,    -1,    22,    23,    -1,    77,
      -1,    -1,    28,    29,    -1,    -1,    -1,    33,    -1,    -1,
      -1,    -1,    90,    39,    92,    -1,    -1,    -1,    -1,    45,
      -1,    -1,    -1,    49,    -1,    -1,   104,   105,    -1,    55,
      -1,    -1,    58,     7,     8,     9,    10,    -1,    64,    -1,
      -1,    -1,    -1,    -1,    70,    -1,    -1,    -1,    22,    23,
      -1,    77,    -1,    -1,    28,    29,    -1,    -1,    -1,    33,
      -1,    -1,    -1,    -1,    90,    39,    92,    -1,    -1,    -1,
      -1,    45,    -1,    -1,    -1,    49,    -1,    -1,   104,   105,
      -1,    55,    -1,    -1,    58,     7,     8,     9,    10,    -1,
      64,    -1,    -1,    -1,    -1,    -1,    70,    -1,    -1,    -1,
      22,    23,    -1,    77,    -1,    -1,    28,    29,    -1,    -1,
      -1,    33,    -1,    -1,    -1,    -1,    90,    39,    92,    -1,
      -1,    -1,    -1,    45,    -1,    -1,    -1,    49,    -1,    -1,
     104,   105,    -1,    55,    -1,    -1,    58,     7,     8,     9,
      10,    -1,    64,    -1,    -1,    -1,    -1,    -1,    70,    -1,
      -1,    -1,    22,    23,    -1,    77,    -1,    -1,    28,    29,
      30,    -1,    -1,     7,     8,     9,    10,    11,    90,    -1,
      92,     7,     8,     9,    10,    11,    -1,    -1,    22,    23,
      -1,    -1,   104,   105,    28,    29,    22,    23,     7,     8,
       9,    10,    28,    29,    64,    19,    -1,     7,     8,     9,
      10,    -1,    -1,    22,    23,    29,    -1,    31,    -1,    28,
      29,    30,    22,    23,    -1,    19,    -1,    -1,    28,    29,
      64,    -1,    92,    -1,    -1,    29,    -1,    31,    64,    -1,
      -1,    -1,    -1,    -1,   104,   105,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   179,    -1,    64,    -1,    -1,    92,    -1,
      -1,    -1,    -1,    -1,    64,    -1,    92,    -1,    -1,    -1,
     104,   105,    -1,   199,    -1,    -1,    -1,    -1,   104,   105,
      -1,    -1,    -1,    92,    -1,    -1,   100,   101,   102,   103,
     104,   105,    92,    -1,    -1,   104,   105,   223,    -1,    -1,
     226,    -1,    -1,    10,   104,   105,   100,   101,   102,   103,
     104,   105,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   247,    -1,    -1,    -1,    -1,   252,   253,   254,   255,
      -1,    38,   258,    -1,   260,    42,   262,    -1,    -1,    -1,
      -1,    -1,    -1,    50,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    61,    62,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    71,    -1,    -1,    -1,    75,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    89
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    10,    38,    42,    50,    61,    62,    71,    75,    89,
     108,   109,   110,   111,   125,   126,     0,   110,    22,    23,
      64,    92,   104,   105,   112,   113,   117,   118,   119,   120,
     129,   146,   148,   149,   158,   117,   158,   158,    42,    61,
     158,   158,    11,    12,    19,    19,    19,    19,    29,    31,
     100,   101,   102,   103,   104,   105,   121,   122,   124,   147,
      31,   121,   121,   113,   129,   146,   158,   119,   158,     7,
       8,     9,    10,    29,    33,   114,   117,   118,   119,   152,
     153,   154,   155,   157,   158,    33,   114,    28,   119,   144,
     145,   146,   150,   152,   158,    30,   126,   127,   128,     7,
      32,   123,    33,   130,   144,    32,   144,    34,    94,    97,
     114,   115,   116,   157,    20,    21,    22,    24,    29,   144,
      19,    25,    26,    13,    14,    15,    16,    17,    18,   151,
     117,   119,   129,   158,    30,    12,   121,    32,    10,    34,
      39,    45,    49,    55,    58,    70,    77,    90,   111,   126,
     130,   131,   132,   133,   134,   135,   136,   138,   139,   140,
     143,   144,    30,    12,    34,   153,   153,   154,   154,    30,
     144,   156,   144,   144,   152,   127,   121,    11,    11,    33,
      29,   142,    29,    11,   144,    29,    29,    34,   132,   134,
      11,   114,   116,    12,    30,   133,    11,   111,   144,    33,
     134,   141,   144,    11,   158,   144,   156,    34,    11,   144,
     144,    11,   133,    30,    30,    30,    90,    30,   144,    11,
      11,   144,    34,    33,   134,    33,    33,   134,    29,    30,
     144,   144,    11,   133,    51,    40,    47,   137,   133,   144,
      30,    30,   144,    34,   134,     7,    94,   106,    34,    34,
      30,    30,    51,   106,   106,    33,   133,    11,    33,   133,
      33,   133,    33,   133,   133,   133,   133,   137,   133,   137,
      34,    34,    34,    34,   137,   137
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   107,   108,   109,   109,   110,   110,   111,   112,   112,
     112,   112,   112,   112,   113,   113,   113,   113,   114,   115,
     115,   115,   115,   116,   116,   116,   117,   117,   118,   119,
     119,   119,   120,   121,   121,   121,   122,   123,   124,   124,
     125,   126,   126,   126,   126,   126,   126,   126,   126,   126,
     127,   127,   128,   129,   129,   129,   129,   130,   130,   131,
     131,   132,   132,   133,   133,   134,   134,   134,   134,   134,
     134,   134,   134,   134,   134,   135,   135,   135,   135,   135,
     136,   137,   137,   137,   137,   137,   137,   137,   137,   137,
     137,   138,   138,   139,   140,   141,   141,   142,   142,   142,
     142,   142,   143,   143,   144,   144,   144,   145,   145,   145,
     146,   146,   146,   146,   147,   147,   147,   147,   148,   148,
     148,   149,   149,   150,   150,   151,   151,   151,   151,   151,
     151,   152,   152,   152,   153,   153,   153,   154,   154,   154,
     154,   154,   154,   154,   155,   155,   156,   156,   157,   157,
     157,   157,   158
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     3,     1,     1,
       1,     3,     3,     3,     3,     4,     3,     3,     3,     1,
       1,     3,     3,     1,     1,     1,     2,     2,     2,     2,
       3,     3,     2,     4,     3,     3,     2,     1,     2,     3,
       4,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     2,     1,     1,     1,     1,     2,     3,     1,
       2,     1,     1,     2,     1,     2,     1,     1,     1,     1,
       1,     1,     2,     2,     1,     7,     9,    11,     5,     7,
       7,     7,     6,     5,     4,     7,     6,     5,     4,     5,
       3,     5,     7,     9,     3,     1,     3,     7,     6,     6,
       5,     4,     2,     3,     1,     1,     1,     3,     3,     2,
       3,     3,     3,     1,     1,     1,     1,     1,     2,     2,
       1,     2,     2,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     3,     3,     1,     3,     3,     3,     1,     1,
       1,     1,     1,     1,     3,     4,     1,     3,     1,     1,
       1,     1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static unsigned
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  unsigned res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
 }

#  define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value, Location); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  YYUSE (yylocationp);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                       , &(yylsp[(yyi + 1) - (yynrhs)])                       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Location data for the lookahead symbol.  */
YYLTYPE yylloc
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.
       'yyls': related to locations.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[3];

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yylsp = yyls = yylsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  yylsp[0] = yylloc;
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yyls1, yysize * sizeof (*yylsp),
                    &yystacksize);

        yyls = yyls1;
        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END
  *++yylsp = yylloc;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];

  /* Default location.  */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 72 "parser.y" /* yacc.c:1646  */
    { outputTree((yyvsp[0].node)); }
#line 2028 "parser.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 76 "parser.y" /* yacc.c:1646  */
    { (yyval.node)=newnode(mycount++, "program", "program", (yyvsp[0].node)); }
#line 2034 "parser.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 77 "parser.y" /* yacc.c:1646  */
    { (yyvsp[-1].node)->addChild((yyvsp[0].node)); (yyval.node)=(yyvsp[-1].node); }
#line 2040 "parser.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 81 "parser.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[0].node);}
#line 2046 "parser.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 82 "parser.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[0].node);}
#line 2052 "parser.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 86 "parser.y" /* yacc.c:1646  */
    { V v;v.push_back((yyvsp[-2].node));v.push_back((yyvsp[-1].node));(yyval.node)=newnode(mycount++, "var_declaration", "var_declaration", v); }
#line 2058 "parser.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 90 "parser.y" /* yacc.c:1646  */
    { (yyval.node)=newnode(mycount++, "init_declarator_list", "init_declarator_list", (yyvsp[0].node)); }
#line 2064 "parser.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 91 "parser.y" /* yacc.c:1646  */
    { (yyval.node)=newnode(mycount++, "init_declarator_list", "init_declarator_list", (yyvsp[0].node)); }
#line 2070 "parser.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 92 "parser.y" /* yacc.c:1646  */
    {(yyval.node)=newnode(mycount++, "init_declarator_list", "init_declarator_list", (yyvsp[0].node)); }
#line 2076 "parser.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 93 "parser.y" /* yacc.c:1646  */
    { (yyvsp[-2].node)->addChild((yyvsp[0].node)); (yyval.node)=(yyvsp[-2].node); }
#line 2082 "parser.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 94 "parser.y" /* yacc.c:1646  */
    { (yyvsp[-2].node)->addChild((yyvsp[0].node)); (yyval.node)=(yyvsp[-2].node); }
#line 2088 "parser.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 95 "parser.y" /* yacc.c:1646  */
    { (yyvsp[-2].node)->addChild((yyvsp[0].node)); (yyval.node)=(yyvsp[-2].node); }
#line 2094 "parser.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 100 "parser.y" /* yacc.c:1646  */
    {V v;v.push_back((yyvsp[-2].node));v.push_back((yyvsp[0].node)); (yyval.node) = newnode(mycount++, "init_array_or_point_assignment", "init_array_or_point_assignment", v);}
#line 2100 "parser.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 101 "parser.y" /* yacc.c:1646  */
    {V v;v.push_back((yyvsp[-3].node));(yyval.node) = newnode(mycount++, "init_array_or_point_assignment", "init_array_or_point_assignment", v);}
#line 2106 "parser.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 102 "parser.y" /* yacc.c:1646  */
    {V v;v.push_back((yyvsp[-2].node));v.push_back((yyvsp[0].node)); (yyval.node) = newnode(mycount++, "init_array_or_point_assignment", "init_array_or_point_assignment", v);}
#line 2112 "parser.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 103 "parser.y" /* yacc.c:1646  */
    {V v;v.push_back((yyvsp[-2].node));v.push_back((yyvsp[0].node)); (yyval.node) = newnode(mycount++, "init_array_or_point_assignment", "init_array_or_point_assignment", v);}
#line 2118 "parser.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 108 "parser.y" /* yacc.c:1646  */
    {(yyval.node) = newnode(mycount++, "list_struct", "list_struct", (yyvsp[-1].node));}
#line 2124 "parser.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 113 "parser.y" /* yacc.c:1646  */
    {(yyval.node)=newnode(mycount++,"content_of_list_struct", "content_of_list_struct", (yyvsp[0].node));}
#line 2130 "parser.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 114 "parser.y" /* yacc.c:1646  */
    {(yyval.node)=newnode(mycount++,"content_of_list_struct", "content_of_list_struct", (yyvsp[0].node));}
#line 2136 "parser.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 115 "parser.y" /* yacc.c:1646  */
    {(yyvsp[-2].node)->addChild((yyvsp[0].node));(yyval.node)=(yyvsp[-2].node);}
#line 2142 "parser.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 116 "parser.y" /* yacc.c:1646  */
    {(yyvsp[-2].node)->addChild((yyvsp[0].node));(yyval.node)=(yyvsp[-2].node);}
#line 2148 "parser.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 121 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = newnode(mycount++, "mininum", (yyvsp[0].node)); }
#line 2154 "parser.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 122 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = newnode(mycount++, "mininum", (yyvsp[0].node)); }
#line 2160 "parser.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 123 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2166 "parser.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 128 "parser.y" /* yacc.c:1646  */
    { (yyval.node)=newnode(mycount++, "pointer", "pointer", (yyvsp[0].node)); }
#line 2172 "parser.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 129 "parser.y" /* yacc.c:1646  */
    { (yyval.node)=newnode(mycount++, "pointer", "pointer", (yyvsp[0].node)); }
#line 2178 "parser.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 134 "parser.y" /* yacc.c:1646  */
    { (yyval.node)=newnode(mycount++, "address", "address", (yyvsp[0].node)); }
#line 2184 "parser.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 139 "parser.y" /* yacc.c:1646  */
    {V v; v.push_back((yyvsp[0].node)); (yyval.node)=newnode(mycount++, "array", "array", v);}
#line 2190 "parser.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 140 "parser.y" /* yacc.c:1646  */
    { V v; v.push_back((yyvsp[0].node)); (yyval.node)=newnode(mycount++, "array", "array", v);}
#line 2196 "parser.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 141 "parser.y" /* yacc.c:1646  */
    { V v; v.push_back((yyvsp[0].node)); (yyval.node)=newnode(mycount++, "array", "array", v);}
#line 2202 "parser.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 146 "parser.y" /* yacc.c:1646  */
    {V v; v.push_back((yyvsp[0].node)); (yyval.node)=newnode(mycount++, "array_sigle", "array_sigle", v);}
#line 2208 "parser.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 150 "parser.y" /* yacc.c:1646  */
    { V v;v.push_back((yyvsp[-2].node));v.push_back((yyvsp[0].node));(yyval.node)=newnode(mycount++, "array", "array", v); }
#line 2214 "parser.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 151 "parser.y" /* yacc.c:1646  */
    { (yyval.node)=newnode(mycount++, "array_main", "array_main", (yyvsp[0].node)); }
#line 2220 "parser.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 152 "parser.y" /* yacc.c:1646  */
    { (yyval.node)=newnode(mycount++, "array_main", "array_main", (yyvsp[-1].node)); }
#line 2226 "parser.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 157 "parser.y" /* yacc.c:1646  */
    { V v;(yyval.node)=newnode(mycount++, "array_special", "array_special", v); }
#line 2232 "parser.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 162 "parser.y" /* yacc.c:1646  */
    { (yyval.node)=newnode(mycount++, "array_size", (yyvsp[0].node)); }
#line 2238 "parser.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 166 "parser.y" /* yacc.c:1646  */
    {(yyval.node) = newnode(mycount++, "declarator", "declarator");}
#line 2244 "parser.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 167 "parser.y" /* yacc.c:1646  */
    {(yyval.node) = newnode(mycount++, "declarator", "declarator", (yyvsp[-1].node));}
#line 2250 "parser.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 171 "parser.y" /* yacc.c:1646  */
    { V v;v.push_back((yyvsp[-3].node));v.push_back((yyvsp[-2].node));v.push_back((yyvsp[-1].node));v.push_back((yyvsp[0].node));(yyval.node)=newnode(mycount++, "fun_declaration", "fun_declaration", v);}
#line 2256 "parser.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 175 "parser.y" /* yacc.c:1646  */
    { (yyval.node)=newnode(mycount++, "INT", (yyvsp[0].node)); }
#line 2262 "parser.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 176 "parser.y" /* yacc.c:1646  */
    { (yyval.node)=newnode(mycount++, "VOID", (yyvsp[0].node)); }
#line 2268 "parser.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 177 "parser.y" /* yacc.c:1646  */
    { (yyval.node)=newnode(mycount++, "FLOAT", (yyvsp[0].node)); }
#line 2274 "parser.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 178 "parser.y" /* yacc.c:1646  */
    { (yyval.node)=newnode(mycount++, "BOOL", (yyvsp[0].node)); }
#line 2280 "parser.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 179 "parser.y" /* yacc.c:1646  */
    { (yyval.node)=newnode(mycount++, "CHAR", (yyvsp[0].node)); }
#line 2286 "parser.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 180 "parser.y" /* yacc.c:1646  */
    { (yyval.node)=newnode(mycount++, "DOUBLE", (yyvsp[0].node)); }
#line 2292 "parser.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 181 "parser.y" /* yacc.c:1646  */
    { (yyval.node)=newnode(mycount++, "LONG", (yyvsp[0].node)); }
#line 2298 "parser.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 182 "parser.y" /* yacc.c:1646  */
    { (yyval.node)=newnode(mycount++, "SHORT", (yyvsp[0].node)); }
#line 2304 "parser.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 183 "parser.y" /* yacc.c:1646  */
    { (yyval.node)=newnode(mycount++, "STRING_DEFINE", (yyvsp[0].node)); }
#line 2310 "parser.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 187 "parser.y" /* yacc.c:1646  */
    {(yyval.node)=newnode(mycount++, "params_list", "params_list", (yyvsp[0].node)); }
#line 2316 "parser.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 188 "parser.y" /* yacc.c:1646  */
    {(yyvsp[0].node)->addChild((yyvsp[-2].node)); (yyval.node)=(yyvsp[0].node);}
#line 2322 "parser.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 192 "parser.y" /* yacc.c:1646  */
    { V v;v.push_back((yyvsp[-1].node));v.push_back((yyvsp[0].node)); (yyval.node)=newnode(mycount++, "params", "params", v); }
#line 2328 "parser.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 196 "parser.y" /* yacc.c:1646  */
    {(yyval.node)=newnode(mycount++, "var", "id", (yyvsp[0].node));}
#line 2334 "parser.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 197 "parser.y" /* yacc.c:1646  */
    {(yyval.node)=newnode(mycount++, "var", "array", (yyvsp[0].node));}
#line 2340 "parser.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 198 "parser.y" /* yacc.c:1646  */
    {(yyval.node)=newnode(mycount++, "var", "pointer", (yyvsp[0].node));}
#line 2346 "parser.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 199 "parser.y" /* yacc.c:1646  */
    {(yyval.node)=newnode(mycount++, "var", "address", (yyvsp[0].node));}
#line 2352 "parser.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 203 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = newnode(mycount++, "compound_stmt", ""); }
#line 2358 "parser.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 204 "parser.y" /* yacc.c:1646  */
    { (yyval.node)=newnode(mycount++, "compound_stmt", "compound_stmt", (yyvsp[-1].node)); }
#line 2364 "parser.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 208 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = newnode(mycount++, "block_list", "block_list",(yyvsp[0].node)); }
#line 2370 "parser.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 209 "parser.y" /* yacc.c:1646  */
    { (yyvsp[-1].node)->addChild((yyvsp[0].node)); (yyval.node)=(yyvsp[-1].node); }
#line 2376 "parser.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 213 "parser.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[0].node);}
#line 2382 "parser.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 214 "parser.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[0].node);}
#line 2388 "parser.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 218 "parser.y" /* yacc.c:1646  */
    { (yyvsp[-1].node)->addChild((yyvsp[0].node)); (yyval.node)=(yyvsp[-1].node); }
#line 2394 "parser.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 219 "parser.y" /* yacc.c:1646  */
    { (yyval.node)=newnode(mycount++, "statement_list", "statement_list", (yyvsp[0].node)); }
#line 2400 "parser.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 223 "parser.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[-1].node);}
#line 2406 "parser.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 224 "parser.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[0].node);}
#line 2412 "parser.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 225 "parser.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[0].node);}
#line 2418 "parser.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 226 "parser.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[0].node);}
#line 2424 "parser.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 227 "parser.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[0].node);}
#line 2430 "parser.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 228 "parser.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[0].node);}
#line 2436 "parser.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 229 "parser.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[0].node);}
#line 2442 "parser.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 230 "parser.y" /* yacc.c:1646  */
    {(yyval.node)=newnode(mycount++, "BREAK", "break", (yyvsp[-1].node));}
#line 2448 "parser.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 231 "parser.y" /* yacc.c:1646  */
    {(yyval.node)=newnode(mycount++, "CONTINUE", "continue", (yyvsp[-1].node));}
#line 2454 "parser.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 232 "parser.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[0].node);}
#line 2460 "parser.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 236 "parser.y" /* yacc.c:1646  */
    { V v;v.push_back((yyvsp[-4].node));v.push_back((yyvsp[-2].node));v.push_back((yyvsp[0].node));(yyval.node) = newnode(mycount++, "if_stmt", "if_stmt", v);}
#line 2466 "parser.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 237 "parser.y" /* yacc.c:1646  */
    { V v;v.push_back((yyvsp[-6].node));v.push_back((yyvsp[-3].node));v.push_back((yyvsp[0].node));(yyval.node) = newnode(mycount++, "if_stmt", "if_stmt", v);}
#line 2472 "parser.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 238 "parser.y" /* yacc.c:1646  */
    { V v;v.push_back((yyvsp[-8].node));v.push_back((yyvsp[-5].node));v.push_back((yyvsp[-1].node));(yyval.node) = newnode(mycount++, "if_stmt", "if_stmt", v);}
#line 2478 "parser.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 239 "parser.y" /* yacc.c:1646  */
    { V v;v.push_back((yyvsp[-2].node));v.push_back((yyvsp[0].node));(yyval.node) = newnode(mycount++, "if_stmt", "if_stmt", v);}
#line 2484 "parser.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 240 "parser.y" /* yacc.c:1646  */
    { V v;v.push_back((yyvsp[-4].node));v.push_back((yyvsp[-1].node));(yyval.node) = newnode(mycount++, "if_stmt", "if_stmt", v);}
#line 2490 "parser.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 244 "parser.y" /* yacc.c:1646  */
    {V v;v.push_back((yyvsp[-4].node));v.push_back((yyvsp[-1].node));(yyval.node) = newnode(mycount++, "switch_stmt", "switch_stmt", v);}
#line 2496 "parser.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 248 "parser.y" /* yacc.c:1646  */
    { V v;v.push_back((yyvsp[-5].node));v.push_back((yyvsp[-2].node));v.push_back((yyvsp[0].node));(yyval.node) = newnode(mycount++, "case_list", "case_list", v);}
#line 2502 "parser.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 249 "parser.y" /* yacc.c:1646  */
    { V v;v.push_back((yyvsp[-4].node));v.push_back((yyvsp[-1].node));(yyval.node) = newnode(mycount++, "case_list", "case_list", v);}
#line 2508 "parser.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 250 "parser.y" /* yacc.c:1646  */
    { V v;v.push_back((yyvsp[-3].node));v.push_back((yyvsp[-1].node));v.push_back((yyvsp[0].node));(yyval.node) = newnode(mycount++, "case_list", "case_list", v);}
#line 2514 "parser.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 251 "parser.y" /* yacc.c:1646  */
    { V v;v.push_back((yyvsp[-2].node));v.push_back((yyvsp[0].node));(yyval.node) = newnode(mycount++, "case_list", "case_list", v);}
#line 2520 "parser.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 252 "parser.y" /* yacc.c:1646  */
    { V v;v.push_back((yyvsp[-5].node));v.push_back((yyvsp[-2].node));v.push_back((yyvsp[0].node));(yyval.node) = newnode(mycount++, "case_list", "case_list", v);}
#line 2526 "parser.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 253 "parser.y" /* yacc.c:1646  */
    { V v;v.push_back((yyvsp[-4].node));v.push_back((yyvsp[-1].node));(yyval.node) = newnode(mycount++, "case_list", "case_list", v);}
#line 2532 "parser.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 254 "parser.y" /* yacc.c:1646  */
    { V v;v.push_back((yyvsp[-3].node));v.push_back((yyvsp[-1].node));v.push_back((yyvsp[0].node));(yyval.node) = newnode(mycount++, "case_list", "case_list", v);}
#line 2538 "parser.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 255 "parser.y" /* yacc.c:1646  */
    { V v;v.push_back((yyvsp[-2].node));v.push_back((yyvsp[0].node));(yyval.node) = newnode(mycount++, "case_list", "case_list", v);}
#line 2544 "parser.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 256 "parser.y" /* yacc.c:1646  */
    { V v;v.push_back((yyvsp[-1].node));(yyval.node) = newnode(mycount++, "case_list", "case_list", v);}
#line 2550 "parser.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 257 "parser.y" /* yacc.c:1646  */
    { V v;v.push_back((yyvsp[0].node));(yyval.node) = newnode(mycount++, "case_list", "case_list", v);}
#line 2556 "parser.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 261 "parser.y" /* yacc.c:1646  */
    { V v;v.push_back((yyvsp[-2].node));v.push_back((yyvsp[0].node)); (yyval.node) = newnode(mycount++, "while_stmt", "while_stmt", v); }
#line 2562 "parser.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 262 "parser.y" /* yacc.c:1646  */
    { V v;v.push_back((yyvsp[-4].node));v.push_back((yyvsp[-1].node)); (yyval.node) = newnode(mycount++, "while_stmt", "while_stmt", v); }
#line 2568 "parser.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 266 "parser.y" /* yacc.c:1646  */
    { V v;v.push_back((yyvsp[-6].node));v.push_back((yyvsp[-2].node));(yyval.node)=newnode(mycount++, "do_while_stmt", "do_while_stmt", v); }
#line 2574 "parser.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 270 "parser.y" /* yacc.c:1646  */
    { V v;v.push_back((yyvsp[-1].node));v.push_back((yyvsp[0].node));(yyval.node)=newnode(mycount++, "for_stmt", "for_stmt", v); }
#line 2580 "parser.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 274 "parser.y" /* yacc.c:1646  */
    { (yyval.node)=newnode(mycount++, "for_body", "for_body",(yyvsp[0].node)); }
#line 2586 "parser.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 275 "parser.y" /* yacc.c:1646  */
    { (yyval.node)=newnode(mycount++, "for_body", "for_body", (yyvsp[-1].node)); }
#line 2592 "parser.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 279 "parser.y" /* yacc.c:1646  */
    {V v;v.push_back((yyvsp[-5].node));v.push_back((yyvsp[-3].node));v.push_back((yyvsp[-1].node)); (yyval.node)=newnode(mycount++, "for_condition", "for_condition", v); }
#line 2598 "parser.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 280 "parser.y" /* yacc.c:1646  */
    {V v;v.push_back((yyvsp[-4].node));v.push_back((yyvsp[-3].node));v.push_back((yyvsp[-1].node)); (yyval.node)=newnode(mycount++, "for_condition", "for_condition", v); }
#line 2604 "parser.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 281 "parser.y" /* yacc.c:1646  */
    {V v;v.push_back(nullNode(mycount++));v.push_back((yyvsp[-3].node));v.push_back((yyvsp[-1].node)); (yyval.node)=newnode(mycount++, "for_condition", "for_condition", v); }
#line 2610 "parser.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 282 "parser.y" /* yacc.c:1646  */
    {V v;v.push_back(nullNode(mycount++));v.push_back(nullNode(mycount++));v.push_back((yyvsp[-1].node)); (yyval.node)=newnode(mycount++, "for_condition", "for_condition", v); }
#line 2616 "parser.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 283 "parser.y" /* yacc.c:1646  */
    {V v;v.push_back(nullNode(mycount++));v.push_back(nullNode(mycount++));v.push_back(nullNode(mycount++)); (yyval.node)=newnode(mycount++, "for_condition", "for_condition", v); }
#line 2622 "parser.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 288 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = newnode(mycount++, "return_stmt", "return_stmt"); }
#line 2628 "parser.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 289 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = newnode(mycount++,"return_stmt", "return_stmt", (yyvsp[-1].node)); }
#line 2634 "parser.cpp" /* yacc.c:1646  */
    break;

  case 104:
#line 293 "parser.y" /* yacc.c:1646  */
    { (yyval.node)=(yyvsp[0].node); }
#line 2640 "parser.cpp" /* yacc.c:1646  */
    break;

  case 105:
#line 294 "parser.y" /* yacc.c:1646  */
    { (yyval.node)=(yyvsp[0].node); }
#line 2646 "parser.cpp" /* yacc.c:1646  */
    break;

  case 106:
#line 295 "parser.y" /* yacc.c:1646  */
    { (yyval.node)=(yyvsp[0].node); }
#line 2652 "parser.cpp" /* yacc.c:1646  */
    break;

  case 107:
#line 299 "parser.y" /* yacc.c:1646  */
    { V v;v.push_back((yyvsp[-2].node));v.push_back((yyvsp[0].node)); (yyval.node)=newnode(mycount++, "logical_and_expression", "logical_and_expression", v); }
#line 2658 "parser.cpp" /* yacc.c:1646  */
    break;

  case 108:
#line 300 "parser.y" /* yacc.c:1646  */
    { V v;v.push_back((yyvsp[-2].node));v.push_back((yyvsp[0].node)); (yyval.node)=newnode(mycount++, "logical_or_expression", "logical_or_expression", v); }
#line 2664 "parser.cpp" /* yacc.c:1646  */
    break;

  case 109:
#line 301 "parser.y" /* yacc.c:1646  */
    { (yyval.node)=newnode(mycount++, "logical_not_expression", "logical_not_expression", (yyvsp[0].node)); }
#line 2670 "parser.cpp" /* yacc.c:1646  */
    break;

  case 110:
#line 305 "parser.y" /* yacc.c:1646  */
    { V v;v.push_back((yyvsp[-2].node));v.push_back((yyvsp[0].node)); (yyval.node) = newnode(mycount++,"assignment_expression","assignment_expression", v); }
#line 2676 "parser.cpp" /* yacc.c:1646  */
    break;

  case 111:
#line 306 "parser.y" /* yacc.c:1646  */
    {V v;v.push_back((yyvsp[-2].node));v.push_back((yyvsp[0].node)); (yyvsp[-1].node)->addChildren(v); (yyval.node)=(yyvsp[-1].node);}
#line 2682 "parser.cpp" /* yacc.c:1646  */
    break;

  case 112:
#line 307 "parser.y" /* yacc.c:1646  */
    {V v;v.push_back((yyvsp[-2].node));v.push_back((yyvsp[0].node)); (yyval.node) = newnode(mycount++,"assignment_expression","assignment_expression", v);}
#line 2688 "parser.cpp" /* yacc.c:1646  */
    break;

  case 113:
#line 308 "parser.y" /* yacc.c:1646  */
    { (yyval.node)=(yyvsp[0].node); }
#line 2694 "parser.cpp" /* yacc.c:1646  */
    break;

  case 114:
#line 312 "parser.y" /* yacc.c:1646  */
    {(yyval.node)=newnode(mycount++, "self_assign", "+=");}
#line 2700 "parser.cpp" /* yacc.c:1646  */
    break;

  case 115:
#line 313 "parser.y" /* yacc.c:1646  */
    {(yyval.node)=newnode(mycount++, "self_assign", "-=");}
#line 2706 "parser.cpp" /* yacc.c:1646  */
    break;

  case 116:
#line 314 "parser.y" /* yacc.c:1646  */
    {(yyval.node)=newnode(mycount++, "self_assign", "*=");}
#line 2712 "parser.cpp" /* yacc.c:1646  */
    break;

  case 117:
#line 315 "parser.y" /* yacc.c:1646  */
    {(yyval.node)=newnode(mycount++, "self_assign", "/=");}
#line 2718 "parser.cpp" /* yacc.c:1646  */
    break;

  case 118:
#line 319 "parser.y" /* yacc.c:1646  */
    {(yyval.node) = newnode(mycount++, "unary_expression", "++", (yyvsp[0].node));}
#line 2724 "parser.cpp" /* yacc.c:1646  */
    break;

  case 119:
#line 320 "parser.y" /* yacc.c:1646  */
    {(yyval.node) = newnode(mycount++, "unary_expression", "--", (yyvsp[0].node));}
#line 2730 "parser.cpp" /* yacc.c:1646  */
    break;

  case 120:
#line 321 "parser.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[0].node);}
#line 2736 "parser.cpp" /* yacc.c:1646  */
    break;

  case 121:
#line 325 "parser.y" /* yacc.c:1646  */
    {(yyval.node) = newnode(mycount++,"postfix_expression", "++", (yyvsp[-1].node));}
#line 2742 "parser.cpp" /* yacc.c:1646  */
    break;

  case 122:
#line 326 "parser.y" /* yacc.c:1646  */
    {(yyval.node) = newnode(mycount++,"postfix_expression", "--", (yyvsp[-1].node));}
#line 2748 "parser.cpp" /* yacc.c:1646  */
    break;

  case 123:
#line 330 "parser.y" /* yacc.c:1646  */
    { (yyval.node)=(yyvsp[0].node); }
#line 2754 "parser.cpp" /* yacc.c:1646  */
    break;

  case 124:
#line 331 "parser.y" /* yacc.c:1646  */
    { V v;v.push_back((yyvsp[-2].node));v.push_back((yyvsp[-1].node));v.push_back((yyvsp[0].node)); (yyval.node) = newnode(mycount++, "simple_expression", "simple_expression", v); }
#line 2760 "parser.cpp" /* yacc.c:1646  */
    break;

  case 125:
#line 335 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = newnode(mycount++, "LT", "<"); }
#line 2766 "parser.cpp" /* yacc.c:1646  */
    break;

  case 126:
#line 336 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = newnode(mycount++, "LE", "<="); }
#line 2772 "parser.cpp" /* yacc.c:1646  */
    break;

  case 127:
#line 337 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = newnode(mycount++, "GT", ">"); }
#line 2778 "parser.cpp" /* yacc.c:1646  */
    break;

  case 128:
#line 338 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = newnode(mycount++, "GE", ">="); }
#line 2784 "parser.cpp" /* yacc.c:1646  */
    break;

  case 129:
#line 339 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = newnode(mycount++, "EQ", "=="); }
#line 2790 "parser.cpp" /* yacc.c:1646  */
    break;

  case 130:
#line 340 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = newnode(mycount++, "NE", "!="); }
#line 2796 "parser.cpp" /* yacc.c:1646  */
    break;

  case 131:
#line 344 "parser.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[0].node);}
#line 2802 "parser.cpp" /* yacc.c:1646  */
    break;

  case 132:
#line 345 "parser.y" /* yacc.c:1646  */
    { V v;v.push_back((yyvsp[-2].node));v.push_back((yyvsp[0].node)); (yyval.node) = newnode(mycount++, "additive_expression", "+", v); }
#line 2808 "parser.cpp" /* yacc.c:1646  */
    break;

  case 133:
#line 346 "parser.y" /* yacc.c:1646  */
    { V v;v.push_back((yyvsp[-2].node));v.push_back((yyvsp[0].node)); (yyval.node) = newnode(mycount++, "additive_expression", "-", v); }
#line 2814 "parser.cpp" /* yacc.c:1646  */
    break;

  case 134:
#line 350 "parser.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[0].node);}
#line 2820 "parser.cpp" /* yacc.c:1646  */
    break;

  case 135:
#line 351 "parser.y" /* yacc.c:1646  */
    { V v;v.push_back((yyvsp[-2].node));v.push_back((yyvsp[0].node)); (yyval.node) = newnode(mycount++, "term", "*", v); }
#line 2826 "parser.cpp" /* yacc.c:1646  */
    break;

  case 136:
#line 352 "parser.y" /* yacc.c:1646  */
    { V v;v.push_back((yyvsp[-2].node));v.push_back((yyvsp[0].node)); (yyval.node) = newnode(mycount++, "term", "/", v); }
#line 2832 "parser.cpp" /* yacc.c:1646  */
    break;

  case 137:
#line 356 "parser.y" /* yacc.c:1646  */
    { (yyval.node)=(yyvsp[-1].node); }
#line 2838 "parser.cpp" /* yacc.c:1646  */
    break;

  case 138:
#line 357 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = newnode(mycount++, "factor", "factor", (yyvsp[0].node)); }
#line 2844 "parser.cpp" /* yacc.c:1646  */
    break;

  case 139:
#line 358 "parser.y" /* yacc.c:1646  */
    { (yyval.node)=(yyvsp[0].node); }
#line 2850 "parser.cpp" /* yacc.c:1646  */
    break;

  case 140:
#line 359 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = newnode(mycount++, "factor", "factor", (yyvsp[0].node)); }
#line 2856 "parser.cpp" /* yacc.c:1646  */
    break;

  case 141:
#line 360 "parser.y" /* yacc.c:1646  */
    {(yyval.node) = newnode(mycount++, "factor", "factor", (yyvsp[0].node)); }
#line 2862 "parser.cpp" /* yacc.c:1646  */
    break;

  case 142:
#line 361 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = newnode(mycount++, "factor", "factor", (yyvsp[0].node)); }
#line 2868 "parser.cpp" /* yacc.c:1646  */
    break;

  case 143:
#line 362 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = newnode(mycount++, "factor", "factor", (yyvsp[0].node)); }
#line 2874 "parser.cpp" /* yacc.c:1646  */
    break;

  case 144:
#line 366 "parser.y" /* yacc.c:1646  */
    {(yyval.node) = newnode(mycount++, "call_func", "call_func", (yyvsp[-2].node));}
#line 2880 "parser.cpp" /* yacc.c:1646  */
    break;

  case 145:
#line 367 "parser.y" /* yacc.c:1646  */
    { V v;v.push_back((yyvsp[-3].node));v.push_back((yyvsp[-1].node));(yyval.node) = newnode(mycount++, "call_func", "call_func", v);}
#line 2886 "parser.cpp" /* yacc.c:1646  */
    break;

  case 146:
#line 371 "parser.y" /* yacc.c:1646  */
    { (yyval.node)=(yyvsp[0].node); }
#line 2892 "parser.cpp" /* yacc.c:1646  */
    break;

  case 147:
#line 372 "parser.y" /* yacc.c:1646  */
    { V v;v.push_back((yyvsp[-2].node));v.push_back((yyvsp[0].node)); (yyval.node) = newnode(mycount++, "args", "args", v);}
#line 2898 "parser.cpp" /* yacc.c:1646  */
    break;

  case 148:
#line 376 "parser.y" /* yacc.c:1646  */
    { (yyval.node)=newnode(mycount++, "INT_HEX", (yyvsp[0].node)); }
#line 2904 "parser.cpp" /* yacc.c:1646  */
    break;

  case 149:
#line 377 "parser.y" /* yacc.c:1646  */
    { (yyval.node)=newnode(mycount++, "INT_OCT", (yyvsp[0].node)); }
#line 2910 "parser.cpp" /* yacc.c:1646  */
    break;

  case 150:
#line 378 "parser.y" /* yacc.c:1646  */
    { (yyval.node)=newnode(mycount++, "INT_DEX", (yyvsp[0].node)); }
#line 2916 "parser.cpp" /* yacc.c:1646  */
    break;

  case 151:
#line 379 "parser.y" /* yacc.c:1646  */
    { (yyval.node)=newnode(mycount++, "FLOAT", (yyvsp[0].node)); }
#line 2922 "parser.cpp" /* yacc.c:1646  */
    break;

  case 152:
#line 383 "parser.y" /* yacc.c:1646  */
    {(yyval.node)=newnode(mycount++, "ID", (yyvsp[0].node));}
#line 2928 "parser.cpp" /* yacc.c:1646  */
    break;


#line 2932 "parser.cpp" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;
  *++yylsp = yyloc;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }

  yyerror_range[1] = yylloc;

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval, &yylloc);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  yyerror_range[1] = yylsp[1-yylen];
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, yyerror_range, 2);
  *++yylsp = yyloc;

  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp, yylsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 386 "parser.y" /* yacc.c:1906  */

int main(int argc,char* argv[]) {
    yyin = fopen(argv[1],"r");
    yyparse();
	outputTable();
	outputSymbolTable();
	return 0;
}

void outputSymbolTable() {
	vector<string> list;
	list.push_back("  ");
	cout << endl;
	cout << "*********** symbol table ***********" << endl;
	symboltable->showTable(symboltable->root, list);
	cout << "************************************" << endl << endl;
}

void outputTable() {
	for (vector<Node*>::iterator it = ranged_nodes.begin(); it != ranged_nodes.end(); it++) {
		(*it)->outputNode();
	}
}

void outputTree(Node* node) {
	cout << "***************************** tree *****************************" << endl;
	// node->outputNode();
	list<string> strformat;
	// strformat.push_back("   ");
	formatOutputTree(node->children, strformat);
	cout << "****************************************************************" << endl;
}

list<string> formatOutputTree(list<Node*> children, list<string> strformat) {
	int num = children.size();
	if (num == 0) {
		if (strformat.size() > 0)
			strformat.pop_back();
		return strformat;
	}
	int count = 0;
	for (list<Node*>::iterator it=children.begin(); it!=children.end(); it++, count++) {
		for (list<string>::iterator i=strformat.begin(); i!=strformat.end(); i++) {
			cout << (*i);
		}
		if (count == num-1) {
			cout << "└─ " << (*it)->name << ":" << (*it)->detail << endl;
			strformat.push_back("   ");
		} else {
			cout << "├─ " << (*it)->name << ":" << (*it)->detail << endl;
			strformat.push_back("│  ");
		}
		strformat = formatOutputTree((*it)->children, strformat);
	}
	if (strformat.size() > 0)
		strformat.pop_back();
	return strformat;
}

Node* nullNode(int index) {
	Node *p = new Node(index, "NULL", "Empty node");
	ranged_nodes.push_back(p);
	return p;
}

Node* newnode(int index, const string name, const string detail) {
	Node *p = new Node(index, name, detail);
	ranged_nodes.push_back(p);
	// outputTree(p);
	return p;
}

Node* newnode(int index, const string name, Node* node) {
	Node *p = new Node(index, name, node->detail);
	ranged_nodes.push_back(p);
	// outputTree(p);
	return p;
}

Node* newnode(int index, Node* node, const string detail) {
	Node *p = new Node(index, node->name, detail);
	ranged_nodes.push_back(p);
	// outputTree(p);
	return p;
}

Node* newnode(int index, const string name, const string detail, Node* node) {
	Node *p = new Node(index, name, detail);
	p->addChild(node);
	ranged_nodes.push_back(p);
	// outputTree(p);
	return p;
}

Node* newnode(int index, const string name, const string detail, vector<Node*> nodes) {
	Node *p = new Node(index, name, detail);
	p->addChildren(nodes);
	ranged_nodes.push_back(p);
	// outputTree(p);
	return p;
}

