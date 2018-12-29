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
#include "IR.cpp"

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
static Node * uroot;
static vector<Node*> ranged_nodes;
extern symbolTable *symboltable;


#line 104 "parser.cpp" /* yacc.c:339  */

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
#line 67 "parser.y" /* yacc.c:355  */

    Node * node;

#line 352 "parser.cpp" /* yacc.c:355  */
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

#line 383 "parser.cpp" /* yacc.c:358  */

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
#define YYFINAL  21
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1601

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  107
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  56
/* YYNRULES -- Number of rules.  */
#define YYNRULES  162
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  296

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
       0,    74,    74,    80,    81,    85,    86,    90,    91,    95,
      96,    97,    98,    99,   100,   105,   106,   107,   108,   113,
     118,   119,   120,   121,   126,   127,   128,   133,   134,   138,
     139,   143,   144,   148,   149,   153,   158,   163,   164,   165,
     170,   174,   175,   176,   181,   186,   190,   191,   195,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   211,   212,
     216,   220,   221,   222,   223,   227,   228,   232,   233,   237,
     238,   242,   243,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   261,   262,   263,   264,   265,   269,
     273,   274,   275,   276,   277,   278,   279,   280,   281,   282,
     286,   287,   291,   295,   299,   300,   304,   305,   306,   307,
     308,   313,   314,   318,   319,   320,   324,   325,   326,   330,
     331,   332,   333,   337,   338,   339,   340,   344,   345,   346,
     350,   351,   355,   356,   360,   361,   362,   363,   364,   365,
     369,   370,   371,   375,   376,   377,   381,   382,   383,   384,
     385,   386,   387,   391,   392,   396,   397,   401,   402,   403,
     404,   408,   409
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
  "content_of_list_struct", "mininum", "pointer", "struct_specifier",
  "struct_declaration_list", "struct_name_specifier", "struct_id",
  "paddress", "array", "array_sigle", "array_main", "array_special",
  "array_size", "declarator", "fun_declaration", "declaration_specifiers",
  "params_list", "params", "var", "compound_stmt", "block_list",
  "block_item", "statement_list", "statement", "if_stmt", "switch_stmt",
  "case_list", "while_stmt", "do_while_stmt", "for_stmt", "for_body",
  "for_condition", "return_stmt", "expression", "logical_expression",
  "assignment_expression", "self_assign", "unary_expression",
  "postfix_expression", "simple_expression", "relop",
  "additive_expression", "term", "factor", "call_func", "args", "number",
  "id", YY_NULLPTR
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

#define YYPACT_NINF -149

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-149)))

#define YYTABLE_NINF -52

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1509,  -149,  -149,  -149,  -149,  -149,  -149,  -149,  -149,   -55,
    -149,    56,  1509,  -149,  -149,    55,  -149,   171,  -149,  -149,
       5,  -149,  -149,  -149,    -5,   -55,   -12,   -55,   -55,   128,
    -149,    59,  -149,    62,    70,  -149,  -149,  -149,  -149,   180,
     -55,  1512,  -149,    72,    72,    77,    77,    72,    72,  -149,
     171,   -29,  1471,   114,    63,  1459,    15,  -149,  -149,  -149,
    -149,  -149,  -149,  -149,  -149,   125,    63,    72,   104,   171,
      22,  -149,  -149,  -149,  -149,  -149,   210,  -149,    67,  -149,
    -149,  -149,  -149,    63,    18,  -149,  -149,  -149,  -149,   150,
      24,  -149,  -149,  -149,   321,    93,  -149,    63,   146,   151,
    -149,  -149,  -149,  1575,  1410,  -149,    45,   159,   183,  -149,
      77,   166,   296,  -149,   151,  -149,   167,    77,   178,  -149,
    -149,  -149,  -149,    21,  -149,  -149,   152,   152,   152,   152,
     413,   151,   152,    63,    63,  -149,  -149,  -149,  -149,  -149,
    -149,   152,  -149,  -149,  -149,    67,  -149,  1512,  -149,    77,
     432,  -149,   189,   203,   195,   204,   213,  1398,   218,   220,
    -149,   221,   171,  -149,   369,  -149,   982,  -149,  -149,  -149,
    -149,  -149,  -149,  -149,    51,  1441,  1512,  -149,    93,  -149,
      24,    24,  -149,  -149,  -149,   138,   225,   151,   151,   150,
    -149,  -149,  -149,  -149,   982,   500,  1034,    63,  -149,    54,
     -55,    63,  -149,  -149,  -149,  -149,  -149,    17,  -149,  -149,
    -149,    63,  -149,   545,  1424,    63,    58,   296,  -149,  -149,
     187,  -149,   127,   194,   -55,  -149,   172,  1435,    85,   105,
      63,   618,  1086,   224,  1138,    72,   236,  -149,   226,    63,
      63,   117,  -149,   296,   219,    94,   296,  -149,    63,  -149,
     291,   297,    63,   670,   982,    13,   165,   240,   722,   306,
    -149,  -149,   314,   235,  -149,   182,   186,  1190,  -149,  -149,
     266,  -149,  1242,  1294,  1346,   296,   982,  -149,   296,   982,
     296,   442,   296,   442,   774,   826,   878,  -149,   930,  -149,
    -149,  -149,    94,    94,  -149,  -149
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    51,    52,    53,    54,    49,    55,    56,    57,     0,
      50,     0,     2,     3,     5,     0,     6,     0,   161,   162,
      30,     1,     4,     8,     0,     0,     0,     0,     0,     0,
      11,    63,    64,    62,     0,     9,    10,   122,   129,    61,
       0,     0,    28,    27,    36,     0,     0,   127,   128,     7,
       0,     0,     0,     0,     0,     0,     0,   123,   124,   125,
     126,   130,   131,    37,    40,     0,     0,    35,     0,     0,
       0,    39,    38,    14,    13,    12,    61,    17,     0,   159,
     157,   158,   160,     0,     0,    15,   152,   151,   150,   121,
     140,   143,   148,   149,   147,     0,    18,     0,   150,   119,
     115,   113,   114,   132,   147,    46,     0,     0,    58,    45,
      44,     0,     0,    48,   120,    29,     0,     0,     0,    16,
      24,    25,    21,     0,    20,    26,     0,     0,     0,     0,
       0,   118,     0,     0,     0,   137,   135,   138,   139,   136,
     134,     0,    63,    62,    60,    61,    47,     0,    42,    43,
     160,    65,     0,     0,     0,     0,     0,     0,     0,     0,
      69,     0,     0,    74,     0,    67,    70,    72,    75,    79,
      76,    78,    77,    82,     0,   147,    31,   146,     0,    19,
     141,   142,   144,   145,   153,   155,     0,   116,   117,   133,
      59,    41,    80,    81,     0,     0,     0,     0,   111,     0,
       0,     0,    83,    66,    68,    71,    73,    33,    32,    23,
      22,     0,   154,     0,     0,     0,     0,     0,   104,   103,
       0,   112,     0,     0,     0,   156,     0,     0,     0,     0,
       0,    70,     0,     0,     0,    34,     0,   110,     0,     0,
       0,     0,   105,     0,    87,     0,     0,   100,     0,   109,
       0,     0,     0,    70,     0,     0,     0,     0,    70,     0,
     108,   107,     0,    88,    84,     0,     0,     0,    89,   101,
       0,   106,     0,     0,     0,     0,    99,   102,     0,    85,
       0,    93,     0,    97,    70,    70,    70,    92,    70,    96,
      98,    86,    91,    95,    90,    94
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -149,  -149,  -149,   277,     2,   227,   251,   -49,  -149,   129,
     -11,  -149,   133,  -149,  -149,   -16,   132,  -149,   -35,  -149,
    -149,  -149,  -149,     9,   161,  -149,   -45,   255,  -149,   162,
     339,    14,  -149,  -149,  -148,  -149,  -149,  -149,  -149,  -149,
    -149,    39,  -149,   -10,  -149,  -149,  -149,  -149,  -149,   -28,
      96,    97,  -149,   122,   -72,    -9
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    11,    12,    13,   160,    29,    30,   122,   123,   124,
      86,    15,    68,   161,    19,    87,    98,    34,    63,    64,
     111,    65,    16,   162,   107,   108,    35,   163,   164,   165,
     166,   167,   168,   169,   257,   170,   171,   172,   219,   196,
     173,   174,   100,   101,    66,    37,    38,   102,   141,   103,
      90,    91,    92,   186,    93,   175
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      20,    32,    14,    85,    96,    74,    31,    36,    39,    17,
      71,    72,   125,    42,    14,    43,    44,    24,    47,    48,
     265,    17,   109,   125,    89,    79,    80,    81,    82,   109,
      45,    67,    40,   178,    32,    26,   224,    18,    41,    31,
      75,    76,    78,    94,    40,   104,   128,   110,   129,    46,
      69,    95,   119,    32,   117,   179,    21,   104,    31,    36,
      76,   144,   206,    18,   106,   221,    23,    24,    25,   230,
      79,    80,    81,    82,   104,   148,   133,   134,    51,   133,
     134,    52,   148,   133,   134,    24,    25,    18,   104,    53,
      32,    97,    83,    99,    40,   142,   239,   145,    70,    40,
      79,    80,    81,    82,    89,   114,   125,   266,    70,    26,
     133,   134,   120,   189,   191,   121,   240,    94,    94,    94,
      94,   104,   118,    94,   104,   104,    95,    26,   252,   209,
     133,   134,    94,   287,   255,   289,   131,    18,   115,    49,
      50,   256,   133,   134,   294,   295,    32,    95,   104,    33,
     211,    31,    36,    76,    40,    18,   106,   233,   112,    79,
      80,    81,    82,   133,   134,   132,   207,    27,    28,   185,
     126,   127,   187,   188,    24,    25,   133,   134,   176,    50,
     205,    83,    33,    77,    88,    69,   104,   120,   104,   146,
     121,   222,   104,    24,    25,   147,   199,   215,   149,    54,
     192,    33,   104,   133,   134,   104,   104,    40,   177,    55,
     218,    56,   133,   134,   193,   235,    26,   232,   104,   133,
     134,   104,   180,   181,   234,   182,   183,   205,   194,    54,
     104,   104,   202,   195,   216,    26,   220,    40,   143,   104,
     223,    56,   197,   104,    18,   205,   244,   200,   247,   201,
     185,   133,   134,   228,   229,   212,   249,   245,    88,    88,
      88,    88,   236,    18,    88,   248,   238,   205,   264,   241,
     254,   267,   205,    88,   268,    27,    28,   277,   250,   251,
      57,    58,    59,    60,    61,    62,   272,   259,   273,    22,
     205,   262,   274,   205,    33,   205,   116,   205,   205,   205,
     205,    73,   205,    79,    80,    81,   150,   210,   190,   208,
      57,    58,    59,    60,    61,    62,   133,   134,    24,    25,
     113,   260,   133,   134,    97,    83,   204,   261,     0,   112,
     151,   133,   134,   225,     2,   152,   270,     0,     3,   133,
     134,   153,     0,     0,   271,   154,     4,     0,    40,     0,
     130,   155,    70,     0,   156,     0,     0,     5,     6,     0,
      26,     0,     0,     0,     0,     0,   157,     7,     0,     0,
       0,     8,     9,   158,     0,     0,    79,    80,    81,   150,
       0,     0,     0,     0,     0,    10,   159,     0,    18,     0,
       0,    24,    25,     0,     0,     0,     0,    97,    83,     0,
      27,    28,   112,   203,     0,     0,     0,     2,   152,     0,
       0,     3,     0,     0,   153,     0,     0,     0,   154,     4,
      79,    80,    81,    82,   155,     0,     0,   156,     0,     0,
       5,     6,     0,    26,     0,    24,    25,     0,     0,   157,
       7,    97,    83,   184,     8,     9,   158,     0,     0,    79,
      80,    81,    82,     0,   -51,   -51,     0,     0,    10,   159,
       0,    18,     0,     0,    24,    25,     0,     0,     0,     0,
      97,    83,     0,    27,    28,   112,     0,    26,     0,     0,
       0,   152,   255,     0,     0,     0,     0,   153,     0,   256,
       0,   154,     0,     0,     0,     0,   -51,   155,     0,     0,
     156,     0,     0,     0,     0,    18,    26,    79,    80,    81,
     150,   214,   157,     0,     0,     0,     0,    27,    28,   158,
       0,     0,    24,    25,   -51,     0,     0,     0,    97,    83,
       0,     0,   159,   213,    18,     0,   -51,   -51,     2,     0,
       0,     0,     3,     0,     0,     0,    27,    28,     0,     0,
       4,     0,    79,    80,    81,    82,   231,     0,     0,     0,
       0,     5,     6,     0,    26,     0,     0,    24,    25,     0,
       0,     7,     0,    97,    83,     8,     9,     0,   112,   226,
       0,     0,   253,     0,   152,   258,     0,     0,     0,    10,
     153,     0,    18,     0,   154,     0,     0,     0,     0,     0,
     155,     0,     0,   156,    27,    28,   276,     0,     0,    26,
       0,   279,   281,   283,   284,   157,     0,   285,     0,   286,
       0,   288,   158,     0,     0,    79,    80,    81,    82,     0,
       0,     0,     0,     0,     0,   159,     0,    18,     0,     0,
      24,    25,     0,     0,     0,     0,    97,    83,     0,    27,
      28,   112,   242,     0,     0,     0,     0,   152,     0,     0,
       0,     0,     0,   153,     0,     0,     0,   154,     0,     0,
       0,     0,     0,   155,     0,     0,   156,    79,    80,    81,
      82,     0,    26,     0,     0,     0,     0,     0,   157,     0,
       0,     0,    24,    25,     0,   158,     0,     0,    97,    83,
       0,     0,     0,   112,   263,     0,     0,     0,   159,   152,
      18,     0,     0,     0,     0,   153,     0,     0,     0,   154,
       0,     0,    27,    28,     0,   155,     0,     0,   156,    79,
      80,    81,    82,     0,    26,     0,     0,     0,     0,     0,
     157,     0,     0,     0,    24,    25,     0,   158,     0,     0,
      97,    83,     0,     0,     0,   112,   269,     0,     0,     0,
     159,   152,    18,     0,     0,     0,     0,   153,     0,     0,
       0,   154,     0,     0,    27,    28,     0,   155,     0,     0,
     156,    79,    80,    81,    82,     0,    26,     0,     0,     0,
       0,     0,   157,     0,     0,     0,    24,    25,     0,   158,
       0,     0,    97,    83,     0,     0,     0,   112,   290,     0,
       0,     0,   159,   152,    18,     0,     0,     0,     0,   153,
       0,     0,     0,   154,     0,     0,    27,    28,     0,   155,
       0,     0,   156,    79,    80,    81,    82,     0,    26,     0,
       0,     0,     0,     0,   157,     0,     0,     0,    24,    25,
       0,   158,     0,     0,    97,    83,     0,     0,     0,   112,
     291,     0,     0,     0,   159,   152,    18,     0,     0,     0,
       0,   153,     0,     0,     0,   154,     0,     0,    27,    28,
       0,   155,     0,     0,   156,    79,    80,    81,    82,     0,
      26,     0,     0,     0,     0,     0,   157,     0,     0,     0,
      24,    25,     0,   158,     0,     0,    97,    83,     0,     0,
       0,   112,   292,     0,     0,     0,   159,   152,    18,     0,
       0,     0,     0,   153,     0,     0,     0,   154,     0,     0,
      27,    28,     0,   155,     0,     0,   156,    79,    80,    81,
      82,     0,    26,     0,     0,     0,     0,     0,   157,     0,
       0,     0,    24,    25,     0,   158,     0,     0,    97,    83,
       0,     0,     0,   112,   293,     0,     0,     0,   159,   152,
      18,     0,     0,     0,     0,   153,     0,     0,     0,   154,
       0,     0,    27,    28,     0,   155,     0,     0,   156,    79,
      80,    81,    82,     0,    26,     0,     0,     0,     0,     0,
     157,     0,     0,     0,    24,    25,     0,   158,     0,     0,
      97,    83,     0,     0,     0,   112,     0,     0,     0,     0,
     159,   152,    18,     0,     0,     0,     0,   153,     0,     0,
       0,   154,     0,     0,    27,    28,     0,   155,     0,     0,
     156,    79,    80,    81,    82,     0,    26,     0,     0,     0,
       0,     0,   157,     0,     0,     0,    24,    25,     0,   158,
       0,     0,    97,    83,     0,     0,     0,   217,     0,     0,
       0,     0,   159,   152,    18,     0,     0,     0,     0,   153,
       0,     0,     0,   154,     0,     0,    27,    28,     0,   155,
       0,     0,   156,    79,    80,    81,    82,     0,    26,     0,
       0,     0,     0,     0,   157,     0,     0,     0,    24,    25,
       0,   158,     0,     0,    97,    83,     0,     0,     0,   243,
       0,     0,     0,     0,   159,   152,    18,     0,     0,     0,
       0,   153,     0,     0,     0,   154,     0,     0,    27,    28,
       0,   155,     0,     0,   156,    79,    80,    81,    82,     0,
      26,     0,     0,     0,     0,     0,   157,     0,     0,     0,
      24,    25,     0,   158,     0,     0,    97,    83,     0,     0,
       0,   246,     0,     0,     0,     0,   159,   152,    18,     0,
       0,     0,     0,   153,     0,     0,     0,   154,     0,     0,
      27,    28,     0,   155,     0,     0,   156,    79,    80,    81,
      82,     0,    26,     0,     0,     0,     0,     0,   157,     0,
       0,     0,    24,    25,     0,   158,     0,     0,    97,    83,
       0,     0,     0,   275,     0,     0,     0,     0,   159,   152,
      18,     0,     0,     0,     0,   153,     0,     0,     0,   154,
       0,     0,    27,    28,     0,   155,     0,     0,   156,    79,
      80,    81,    82,     0,    26,     0,     0,     0,     0,     0,
     157,     0,     0,     0,    24,    25,     0,   158,     0,     0,
      97,    83,     0,     0,     0,   278,     0,     0,     0,     0,
     159,   152,    18,     0,     0,     0,     0,   153,     0,     0,
       0,   154,     0,     0,    27,    28,     0,   155,     0,     0,
     156,    79,    80,    81,    82,     0,    26,     0,     0,     0,
       0,     0,   157,     0,     0,     0,    24,    25,     0,   158,
       0,     0,    97,    83,     0,     0,     0,   280,     0,     0,
       0,     0,   159,   152,    18,     0,     0,     0,     0,   153,
       0,     0,     0,   154,     0,     0,    27,    28,     0,   155,
       0,     0,   156,    79,    80,    81,    82,     0,    26,     0,
       0,     0,     0,     0,   157,     0,     0,     0,    24,    25,
       0,   158,     0,     0,    97,    83,     0,     0,     0,   282,
       0,     0,     0,     0,   159,   152,    18,     0,     0,     0,
       0,   153,     0,     0,     0,   154,     0,     0,    27,    28,
       0,   155,     0,     0,   156,    79,    80,    81,    82,   198,
      26,     0,     0,     0,     0,     0,   157,     0,     0,     0,
      24,    25,     0,   158,     0,     0,    97,    83,     0,    54,
       0,    79,    80,    81,    82,   227,   159,    40,    18,   130,
       0,    70,    79,    80,    81,    82,    24,    25,     0,     0,
      27,    28,    97,    83,     0,     0,     0,    24,    25,     0,
      54,     0,    26,    97,    83,   237,     0,     0,    40,     1,
     130,     0,    70,     0,     0,     0,     0,     0,    79,    80,
      81,    82,     0,     0,     0,     0,     0,     0,    26,   105,
      18,     0,     0,    24,    25,     0,     0,     2,     0,    26,
      83,     3,    27,    28,    84,     0,     0,     0,     0,     4,
      57,    58,    59,    60,    61,    62,    18,     0,     0,     1,
       5,     6,     1,     0,     0,     0,     0,    18,    27,    28,
       7,     0,     0,    18,     8,    26,     0,     0,     0,    27,
      28,    57,    58,    59,    60,    61,    62,     2,    10,     0,
       2,     3,     0,     0,     3,     0,     0,     0,     0,     4,
       0,     0,     4,    18,     0,     0,     0,     0,     0,     0,
       5,     6,     0,     5,     6,     0,     0,     0,     0,     0,
       7,     0,     0,     7,     8,     9,     0,     8,   135,   136,
     137,   138,   139,   140,     0,   126,   127,     0,    10,     0,
       0,    10
};

static const yytype_int16 yycheck[] =
{
       9,    17,     0,    52,    53,    50,    17,    17,    17,     0,
      45,    46,    84,    24,    12,    24,    25,    22,    27,    28,
       7,    12,     7,    95,    52,     7,     8,     9,    10,     7,
      42,    40,    27,    12,    50,    64,    19,    92,    33,    50,
      50,    50,    51,    52,    27,    54,    22,    32,    24,    61,
      41,    33,    34,    69,    32,    34,     0,    66,    69,    69,
      69,   106,    11,    92,    55,    11,    11,    22,    23,    11,
       7,     8,     9,    10,    83,   110,    25,    26,    19,    25,
      26,    19,   117,    25,    26,    22,    23,    92,    97,    19,
     106,    28,    29,    54,    27,   106,    11,   106,    31,    27,
       7,     8,     9,    10,   132,    66,   178,    94,    31,    64,
      25,    26,    94,   141,   149,    97,    11,   126,   127,   128,
     129,   130,    83,   132,   133,   134,    33,    64,    11,   178,
      25,    26,   141,   281,    40,   283,    97,    92,    34,    11,
      12,    47,    25,    26,   292,   293,   162,    33,   157,    17,
      12,   162,   162,   162,    27,    92,   147,    30,    33,     7,
       8,     9,    10,    25,    26,    19,   175,   104,   105,   130,
      20,    21,   133,   134,    22,    23,    25,    26,    11,    12,
     166,    29,    50,    51,    52,   176,   195,    94,   197,    30,
      97,   200,   201,    22,    23,    12,   157,   195,    32,    19,
      11,    69,   211,    25,    26,   214,   215,    27,    30,    29,
     196,    31,    25,    26,    11,   224,    64,    30,   227,    25,
      26,   230,   126,   127,    30,   128,   129,   213,    33,    19,
     239,   240,    11,    29,   195,    64,   197,    27,   106,   248,
     201,    31,    29,   252,    92,   231,   232,    29,   234,    29,
     211,    25,    26,   214,   215,    30,    30,    33,   126,   127,
     128,   129,    90,    92,   132,    29,   227,   253,   254,   230,
      51,   106,   258,   141,    34,   104,   105,    11,   239,   240,
     100,   101,   102,   103,   104,   105,    51,   248,   106,    12,
     276,   252,   106,   279,   162,   281,    69,   283,   284,   285,
     286,    50,   288,     7,     8,     9,    10,   178,   147,   176,
     100,   101,   102,   103,   104,   105,    25,    26,    22,    23,
      65,    30,    25,    26,    28,    29,   164,    30,    -1,    33,
      34,    25,    26,   211,    38,    39,    30,    -1,    42,    25,
      26,    45,    -1,    -1,    30,    49,    50,    -1,    27,    -1,
      29,    55,    31,    -1,    58,    -1,    -1,    61,    62,    -1,
      64,    -1,    -1,    -1,    -1,    -1,    70,    71,    -1,    -1,
      -1,    75,    76,    77,    -1,    -1,     7,     8,     9,    10,
      -1,    -1,    -1,    -1,    -1,    89,    90,    -1,    92,    -1,
      -1,    22,    23,    -1,    -1,    -1,    -1,    28,    29,    -1,
     104,   105,    33,    34,    -1,    -1,    -1,    38,    39,    -1,
      -1,    42,    -1,    -1,    45,    -1,    -1,    -1,    49,    50,
       7,     8,     9,    10,    55,    -1,    -1,    58,    -1,    -1,
      61,    62,    -1,    64,    -1,    22,    23,    -1,    -1,    70,
      71,    28,    29,    30,    75,    76,    77,    -1,    -1,     7,
       8,     9,    10,    -1,    22,    23,    -1,    -1,    89,    90,
      -1,    92,    -1,    -1,    22,    23,    -1,    -1,    -1,    -1,
      28,    29,    -1,   104,   105,    33,    -1,    64,    -1,    -1,
      -1,    39,    40,    -1,    -1,    -1,    -1,    45,    -1,    47,
      -1,    49,    -1,    -1,    -1,    -1,    64,    55,    -1,    -1,
      58,    -1,    -1,    -1,    -1,    92,    64,     7,     8,     9,
      10,    11,    70,    -1,    -1,    -1,    -1,   104,   105,    77,
      -1,    -1,    22,    23,    92,    -1,    -1,    -1,    28,    29,
      -1,    -1,    90,   194,    92,    -1,   104,   105,    38,    -1,
      -1,    -1,    42,    -1,    -1,    -1,   104,   105,    -1,    -1,
      50,    -1,     7,     8,     9,    10,   217,    -1,    -1,    -1,
      -1,    61,    62,    -1,    64,    -1,    -1,    22,    23,    -1,
      -1,    71,    -1,    28,    29,    75,    76,    -1,    33,    34,
      -1,    -1,   243,    -1,    39,   246,    -1,    -1,    -1,    89,
      45,    -1,    92,    -1,    49,    -1,    -1,    -1,    -1,    -1,
      55,    -1,    -1,    58,   104,   105,   267,    -1,    -1,    64,
      -1,   272,   273,   274,   275,    70,    -1,   278,    -1,   280,
      -1,   282,    77,    -1,    -1,     7,     8,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    90,    -1,    92,    -1,    -1,
      22,    23,    -1,    -1,    -1,    -1,    28,    29,    -1,   104,
     105,    33,    34,    -1,    -1,    -1,    -1,    39,    -1,    -1,
      -1,    -1,    -1,    45,    -1,    -1,    -1,    49,    -1,    -1,
      -1,    -1,    -1,    55,    -1,    -1,    58,     7,     8,     9,
      10,    -1,    64,    -1,    -1,    -1,    -1,    -1,    70,    -1,
      -1,    -1,    22,    23,    -1,    77,    -1,    -1,    28,    29,
      -1,    -1,    -1,    33,    34,    -1,    -1,    -1,    90,    39,
      92,    -1,    -1,    -1,    -1,    45,    -1,    -1,    -1,    49,
      -1,    -1,   104,   105,    -1,    55,    -1,    -1,    58,     7,
       8,     9,    10,    -1,    64,    -1,    -1,    -1,    -1,    -1,
      70,    -1,    -1,    -1,    22,    23,    -1,    77,    -1,    -1,
      28,    29,    -1,    -1,    -1,    33,    34,    -1,    -1,    -1,
      90,    39,    92,    -1,    -1,    -1,    -1,    45,    -1,    -1,
      -1,    49,    -1,    -1,   104,   105,    -1,    55,    -1,    -1,
      58,     7,     8,     9,    10,    -1,    64,    -1,    -1,    -1,
      -1,    -1,    70,    -1,    -1,    -1,    22,    23,    -1,    77,
      -1,    -1,    28,    29,    -1,    -1,    -1,    33,    34,    -1,
      -1,    -1,    90,    39,    92,    -1,    -1,    -1,    -1,    45,
      -1,    -1,    -1,    49,    -1,    -1,   104,   105,    -1,    55,
      -1,    -1,    58,     7,     8,     9,    10,    -1,    64,    -1,
      -1,    -1,    -1,    -1,    70,    -1,    -1,    -1,    22,    23,
      -1,    77,    -1,    -1,    28,    29,    -1,    -1,    -1,    33,
      34,    -1,    -1,    -1,    90,    39,    92,    -1,    -1,    -1,
      -1,    45,    -1,    -1,    -1,    49,    -1,    -1,   104,   105,
      -1,    55,    -1,    -1,    58,     7,     8,     9,    10,    -1,
      64,    -1,    -1,    -1,    -1,    -1,    70,    -1,    -1,    -1,
      22,    23,    -1,    77,    -1,    -1,    28,    29,    -1,    -1,
      -1,    33,    34,    -1,    -1,    -1,    90,    39,    92,    -1,
      -1,    -1,    -1,    45,    -1,    -1,    -1,    49,    -1,    -1,
     104,   105,    -1,    55,    -1,    -1,    58,     7,     8,     9,
      10,    -1,    64,    -1,    -1,    -1,    -1,    -1,    70,    -1,
      -1,    -1,    22,    23,    -1,    77,    -1,    -1,    28,    29,
      -1,    -1,    -1,    33,    34,    -1,    -1,    -1,    90,    39,
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
      -1,    55,    -1,    -1,    58,     7,     8,     9,    10,    11,
      64,    -1,    -1,    -1,    -1,    -1,    70,    -1,    -1,    -1,
      22,    23,    -1,    77,    -1,    -1,    28,    29,    -1,    19,
      -1,     7,     8,     9,    10,    11,    90,    27,    92,    29,
      -1,    31,     7,     8,     9,    10,    22,    23,    -1,    -1,
     104,   105,    28,    29,    -1,    -1,    -1,    22,    23,    -1,
      19,    -1,    64,    28,    29,    30,    -1,    -1,    27,    10,
      29,    -1,    31,    -1,    -1,    -1,    -1,    -1,     7,     8,
       9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    64,    30,
      92,    -1,    -1,    22,    23,    -1,    -1,    38,    -1,    64,
      29,    42,   104,   105,    33,    -1,    -1,    -1,    -1,    50,
     100,   101,   102,   103,   104,   105,    92,    -1,    -1,    10,
      61,    62,    10,    -1,    -1,    -1,    -1,    92,   104,   105,
      71,    -1,    -1,    92,    75,    64,    -1,    -1,    -1,   104,
     105,   100,   101,   102,   103,   104,   105,    38,    89,    -1,
      38,    42,    -1,    -1,    42,    -1,    -1,    -1,    -1,    50,
      -1,    -1,    50,    92,    -1,    -1,    -1,    -1,    -1,    -1,
      61,    62,    -1,    61,    62,    -1,    -1,    -1,    -1,    -1,
      71,    -1,    -1,    71,    75,    76,    -1,    75,    13,    14,
      15,    16,    17,    18,    -1,    20,    21,    -1,    89,    -1,
      -1,    89
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    10,    38,    42,    50,    61,    62,    71,    75,    76,
      89,   108,   109,   110,   111,   118,   129,   130,    92,   121,
     162,     0,   110,    11,    22,    23,    64,   104,   105,   112,
     113,   117,   122,   123,   124,   133,   150,   152,   153,   162,
      27,    33,   117,   162,   162,    42,    61,   162,   162,    11,
      12,    19,    19,    19,    19,    29,    31,   100,   101,   102,
     103,   104,   105,   125,   126,   128,   151,   162,   119,   130,
      31,   125,   125,   113,   133,   150,   162,   123,   162,     7,
       8,     9,    10,    29,    33,   114,   117,   122,   123,   156,
     157,   158,   159,   161,   162,    33,   114,    28,   123,   148,
     149,   150,   154,   156,   162,    30,   130,   131,   132,     7,
      32,   127,    33,   134,   148,    34,   112,    32,   148,    34,
      94,    97,   114,   115,   116,   161,    20,    21,    22,    24,
      29,   148,    19,    25,    26,    13,    14,    15,    16,    17,
      18,   155,   117,   123,   133,   162,    30,    12,   125,    32,
      10,    34,    39,    45,    49,    55,    58,    70,    77,    90,
     111,   120,   130,   134,   135,   136,   137,   138,   139,   140,
     142,   143,   144,   147,   148,   162,    11,    30,    12,    34,
     157,   157,   158,   158,    30,   148,   160,   148,   148,   156,
     131,   125,    11,    11,    33,    29,   146,    29,    11,   148,
      29,    29,    11,    34,   136,   138,    11,   162,   119,   114,
     116,    12,    30,   137,    11,   111,   148,    33,   138,   145,
     148,    11,   162,   148,    19,   160,    34,    11,   148,   148,
      11,   137,    30,    30,    30,   162,    90,    30,   148,    11,
      11,   148,    34,    33,   138,    33,    33,   138,    29,    30,
     148,   148,    11,   137,    51,    40,    47,   141,   137,   148,
      30,    30,   148,    34,   138,     7,    94,   106,    34,    34,
      30,    30,    51,   106,   106,    33,   137,    11,    33,   137,
      33,   137,    33,   137,   137,   137,   137,   141,   137,   141,
      34,    34,    34,    34,   141,   141
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   107,   108,   109,   109,   110,   110,   111,   111,   112,
     112,   112,   112,   112,   112,   113,   113,   113,   113,   114,
     115,   115,   115,   115,   116,   116,   116,   117,   117,   118,
     118,   119,   119,   120,   120,   121,   122,   123,   123,   123,
     124,   125,   125,   125,   126,   127,   128,   128,   129,   130,
     130,   130,   130,   130,   130,   130,   130,   130,   131,   131,
     132,   133,   133,   133,   133,   134,   134,   135,   135,   136,
     136,   137,   137,   138,   138,   138,   138,   138,   138,   138,
     138,   138,   138,   138,   139,   139,   139,   139,   139,   140,
     141,   141,   141,   141,   141,   141,   141,   141,   141,   141,
     142,   142,   143,   144,   145,   145,   146,   146,   146,   146,
     146,   147,   147,   148,   148,   148,   149,   149,   149,   150,
     150,   150,   150,   151,   151,   151,   151,   152,   152,   152,
     153,   153,   154,   154,   155,   155,   155,   155,   155,   155,
     156,   156,   156,   157,   157,   157,   158,   158,   158,   158,
     158,   158,   158,   159,   159,   160,   160,   161,   161,   161,
     161,   162,   162
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     3,     2,     1,
       1,     1,     3,     3,     3,     3,     4,     3,     3,     3,
       1,     1,     3,     3,     1,     1,     1,     2,     2,     5,
       2,     3,     4,     2,     4,     3,     2,     2,     3,     3,
       2,     4,     3,     3,     2,     1,     2,     3,     4,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       2,     1,     1,     1,     1,     2,     3,     1,     2,     1,
       1,     2,     1,     2,     1,     1,     1,     1,     1,     1,
       2,     2,     1,     2,     7,     9,    11,     5,     7,     7,
       7,     6,     5,     4,     7,     6,     5,     4,     5,     3,
       5,     7,     9,     3,     1,     3,     7,     6,     6,     5,
       4,     2,     3,     1,     1,     1,     3,     3,     2,     3,
       3,     3,     1,     1,     1,     1,     1,     2,     2,     1,
       2,     2,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     3,     3,     1,     3,     3,     3,     1,     1,     1,
       1,     1,     1,     3,     4,     1,     3,     1,     1,     1,
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
#line 74 "parser.y" /* yacc.c:1646  */
    { outputTree((yyvsp[0].node)); 
	  			uroot = (yyvsp[0].node);	
	  }
#line 2056 "parser.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 80 "parser.y" /* yacc.c:1646  */
    { (yyval.node)=newnode(mycount++, "program", "program", (yyvsp[0].node)); }
#line 2062 "parser.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 81 "parser.y" /* yacc.c:1646  */
    { (yyvsp[-1].node)->addChild((yyvsp[0].node)); (yyval.node)=(yyvsp[-1].node); }
#line 2068 "parser.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 85 "parser.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[0].node);}
#line 2074 "parser.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 86 "parser.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[0].node);}
#line 2080 "parser.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 90 "parser.y" /* yacc.c:1646  */
    { V v;v.push_back((yyvsp[-2].node));v.push_back((yyvsp[-1].node));(yyval.node)=newnode(mycount++, "var_declaration", "var_declaration", v); }
#line 2086 "parser.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 91 "parser.y" /* yacc.c:1646  */
    {(yyval.node)=newnode(mycount++, "var_declaration", "var_declaration", (yyvsp[-1].node));}
#line 2092 "parser.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 95 "parser.y" /* yacc.c:1646  */
    { (yyval.node)=newnode(mycount++, "init_declarator_list", "init_declarator_list", (yyvsp[0].node)); }
#line 2098 "parser.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 96 "parser.y" /* yacc.c:1646  */
    { (yyval.node)=newnode(mycount++, "init_declarator_list", "init_declarator_list", (yyvsp[0].node)); }
#line 2104 "parser.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 97 "parser.y" /* yacc.c:1646  */
    {(yyval.node)=newnode(mycount++, "init_declarator_list", "init_declarator_list", (yyvsp[0].node)); }
#line 2110 "parser.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 98 "parser.y" /* yacc.c:1646  */
    { (yyvsp[-2].node)->addChild((yyvsp[0].node)); (yyval.node)=(yyvsp[-2].node); }
#line 2116 "parser.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 99 "parser.y" /* yacc.c:1646  */
    { (yyvsp[-2].node)->addChild((yyvsp[0].node)); (yyval.node)=(yyvsp[-2].node); }
#line 2122 "parser.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 100 "parser.y" /* yacc.c:1646  */
    { (yyvsp[-2].node)->addChild((yyvsp[0].node)); (yyval.node)=(yyvsp[-2].node); }
#line 2128 "parser.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 105 "parser.y" /* yacc.c:1646  */
    {V v;v.push_back((yyvsp[-2].node));v.push_back((yyvsp[0].node)); (yyval.node) = newnode(mycount++, "init_array_or_point_assignment", "init_array_or_point_assignment", v);}
#line 2134 "parser.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 106 "parser.y" /* yacc.c:1646  */
    {V v;v.push_back((yyvsp[-3].node));(yyval.node) = newnode(mycount++, "init_array_or_point_assignment", "init_array_or_point_assignment", v);}
#line 2140 "parser.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 107 "parser.y" /* yacc.c:1646  */
    {V v;v.push_back((yyvsp[-2].node));v.push_back((yyvsp[0].node)); (yyval.node) = newnode(mycount++, "init_array_or_point_assignment", "init_array_or_point_assignment", v);}
#line 2146 "parser.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 108 "parser.y" /* yacc.c:1646  */
    {V v;v.push_back((yyvsp[-2].node));v.push_back((yyvsp[0].node)); (yyval.node) = newnode(mycount++, "init_array_or_point_assignment", "init_array_or_point_assignment", v);}
#line 2152 "parser.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 113 "parser.y" /* yacc.c:1646  */
    {(yyval.node) = newnode(mycount++, "list_struct", "list_struct", (yyvsp[-1].node));}
#line 2158 "parser.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 118 "parser.y" /* yacc.c:1646  */
    {(yyval.node)=newnode(mycount++,"content_of_list_struct", "content_of_list_struct", (yyvsp[0].node));}
#line 2164 "parser.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 119 "parser.y" /* yacc.c:1646  */
    {(yyval.node)=newnode(mycount++,"content_of_list_struct", "content_of_list_struct", (yyvsp[0].node));}
#line 2170 "parser.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 120 "parser.y" /* yacc.c:1646  */
    {(yyvsp[-2].node)->addChild((yyvsp[0].node));(yyval.node)=(yyvsp[-2].node);}
#line 2176 "parser.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 121 "parser.y" /* yacc.c:1646  */
    {(yyvsp[-2].node)->addChild((yyvsp[0].node));(yyval.node)=(yyvsp[-2].node);}
#line 2182 "parser.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 126 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = newnode(mycount++, "mininum", (yyvsp[0].node)); }
#line 2188 "parser.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 127 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = newnode(mycount++, "mininum", (yyvsp[0].node)); }
#line 2194 "parser.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 128 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2200 "parser.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 133 "parser.y" /* yacc.c:1646  */
    { (yyval.node)=newnode(mycount++, "pointer", "pointer", (yyvsp[0].node)); }
#line 2206 "parser.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 134 "parser.y" /* yacc.c:1646  */
    { (yyval.node)=newnode(mycount++, "pointer", "pointer", (yyvsp[0].node)); }
#line 2212 "parser.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 138 "parser.y" /* yacc.c:1646  */
    {V v;v.push_back((yyvsp[-3].node));v.push_back((yyvsp[-1].node));(yyval.node)=newnode(mycount++,"struct_specifier","struct_specifier",v);}
#line 2218 "parser.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 139 "parser.y" /* yacc.c:1646  */
    {(yyval.node)=newnode(mycount++,"struct_specifier","struct_specifier",(yyvsp[0].node));}
#line 2224 "parser.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 143 "parser.y" /* yacc.c:1646  */
    { V v;v.push_back((yyvsp[-2].node));v.push_back((yyvsp[-1].node));(yyval.node)=newnode(mycount++, "struct_declaration_list", "struct_declaration_list", v); }
#line 2230 "parser.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 144 "parser.y" /* yacc.c:1646  */
    { (yyvsp[0].node)->addChild((yyvsp[-3].node));(yyvsp[0].node)->addChild((yyvsp[-2].node));(yyval.node)=(yyvsp[0].node); }
#line 2236 "parser.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 148 "parser.y" /* yacc.c:1646  */
    { V v;v.push_back((yyvsp[-1].node));v.push_back((yyvsp[0].node));(yyval.node)=newnode(mycount++,"struct_name_specifier","struct_name_specifier",v); }
#line 2242 "parser.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 149 "parser.y" /* yacc.c:1646  */
    { V v;v.push_back((yyvsp[-3].node));v.push_back((yyvsp[-2].node));v.push_back((yyvsp[0].node));(yyval.node)=newnode(mycount++,"struct_name_specifier_and_assignop","struct_name_specifier_and_assignop",v); }
#line 2248 "parser.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 153 "parser.y" /* yacc.c:1646  */
    { V v;v.push_back((yyvsp[-2].node));v.push_back((yyvsp[0].node));(yyval.node)=newnode(mycount++,"struct_id","struct_id",v); }
#line 2254 "parser.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 158 "parser.y" /* yacc.c:1646  */
    { (yyval.node)=newnode(mycount++, "address", "address", (yyvsp[0].node)); }
#line 2260 "parser.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 163 "parser.y" /* yacc.c:1646  */
    {V v; v.push_back((yyvsp[0].node)); (yyval.node)=newnode(mycount++, "array", "array", v);}
#line 2266 "parser.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 164 "parser.y" /* yacc.c:1646  */
    { V v; v.push_back((yyvsp[0].node)); (yyval.node)=newnode(mycount++, "array", "array", v);}
#line 2272 "parser.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 165 "parser.y" /* yacc.c:1646  */
    { V v; v.push_back((yyvsp[0].node)); (yyval.node)=newnode(mycount++, "array", "array", v);}
#line 2278 "parser.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 170 "parser.y" /* yacc.c:1646  */
    {V v; v.push_back((yyvsp[0].node)); (yyval.node)=newnode(mycount++, "array_sigle", "array_sigle", v);}
#line 2284 "parser.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 174 "parser.y" /* yacc.c:1646  */
    { V v;v.push_back((yyvsp[-2].node));v.push_back((yyvsp[0].node));(yyval.node)=newnode(mycount++, "array", "array", v); }
#line 2290 "parser.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 175 "parser.y" /* yacc.c:1646  */
    { (yyval.node)=newnode(mycount++, "array_main", "array_main", (yyvsp[0].node)); }
#line 2296 "parser.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 176 "parser.y" /* yacc.c:1646  */
    { (yyval.node)=newnode(mycount++, "array_main", "array_main", (yyvsp[-1].node)); }
#line 2302 "parser.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 181 "parser.y" /* yacc.c:1646  */
    { V v;(yyval.node)=newnode(mycount++, "array_special", "array_special", v); }
#line 2308 "parser.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 186 "parser.y" /* yacc.c:1646  */
    { (yyval.node)=newnode(mycount++, "array_size", (yyvsp[0].node)); }
#line 2314 "parser.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 190 "parser.y" /* yacc.c:1646  */
    {(yyval.node) = newnode(mycount++, "declarator", "declarator");}
#line 2320 "parser.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 191 "parser.y" /* yacc.c:1646  */
    {(yyval.node) = newnode(mycount++, "declarator", "declarator", (yyvsp[-1].node));}
#line 2326 "parser.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 195 "parser.y" /* yacc.c:1646  */
    { V v;v.push_back((yyvsp[-3].node));v.push_back((yyvsp[-2].node));v.push_back((yyvsp[-1].node));v.push_back((yyvsp[0].node));(yyval.node)=newnode(mycount++, "fun_declaration", "fun_declaration", v);}
#line 2332 "parser.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 199 "parser.y" /* yacc.c:1646  */
    { (yyval.node)=newnode(mycount++, "INT", (yyvsp[0].node)); }
#line 2338 "parser.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 200 "parser.y" /* yacc.c:1646  */
    { (yyval.node)=newnode(mycount++, "VOID", (yyvsp[0].node)); }
#line 2344 "parser.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 201 "parser.y" /* yacc.c:1646  */
    { (yyval.node)=newnode(mycount++, "FLOAT", (yyvsp[0].node)); }
#line 2350 "parser.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 202 "parser.y" /* yacc.c:1646  */
    { (yyval.node)=newnode(mycount++, "BOOL", (yyvsp[0].node)); }
#line 2356 "parser.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 203 "parser.y" /* yacc.c:1646  */
    { (yyval.node)=newnode(mycount++, "CHAR", (yyvsp[0].node)); }
#line 2362 "parser.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 204 "parser.y" /* yacc.c:1646  */
    { (yyval.node)=newnode(mycount++, "DOUBLE", (yyvsp[0].node)); }
#line 2368 "parser.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 205 "parser.y" /* yacc.c:1646  */
    { (yyval.node)=newnode(mycount++, "LONG", (yyvsp[0].node)); }
#line 2374 "parser.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 206 "parser.y" /* yacc.c:1646  */
    { (yyval.node)=newnode(mycount++, "SHORT", (yyvsp[0].node)); }
#line 2380 "parser.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 207 "parser.y" /* yacc.c:1646  */
    { (yyval.node)=newnode(mycount++, "STRING_DEFINE", (yyvsp[0].node)); }
#line 2386 "parser.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 211 "parser.y" /* yacc.c:1646  */
    {(yyval.node)=newnode(mycount++, "params_list", "params_list", (yyvsp[0].node)); }
#line 2392 "parser.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 212 "parser.y" /* yacc.c:1646  */
    {(yyvsp[0].node)->addChild((yyvsp[-2].node)); (yyval.node)=(yyvsp[0].node);}
#line 2398 "parser.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 216 "parser.y" /* yacc.c:1646  */
    { V v;v.push_back((yyvsp[-1].node));v.push_back((yyvsp[0].node)); (yyval.node)=newnode(mycount++, "params", "params", v); }
#line 2404 "parser.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 220 "parser.y" /* yacc.c:1646  */
    {(yyval.node)=newnode(mycount++, "var", "id", (yyvsp[0].node));}
#line 2410 "parser.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 221 "parser.y" /* yacc.c:1646  */
    {(yyval.node)=newnode(mycount++, "var", "array", (yyvsp[0].node));}
#line 2416 "parser.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 222 "parser.y" /* yacc.c:1646  */
    {(yyval.node)=newnode(mycount++, "var", "pointer", (yyvsp[0].node));}
#line 2422 "parser.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 223 "parser.y" /* yacc.c:1646  */
    {(yyval.node)=newnode(mycount++, "var", "address", (yyvsp[0].node));}
#line 2428 "parser.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 227 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = newnode(mycount++, "compound_stmt", ""); }
#line 2434 "parser.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 228 "parser.y" /* yacc.c:1646  */
    { (yyval.node)=newnode(mycount++, "compound_stmt", "compound_stmt", (yyvsp[-1].node)); }
#line 2440 "parser.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 232 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = newnode(mycount++, "block_list", "block_list",(yyvsp[0].node)); }
#line 2446 "parser.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 233 "parser.y" /* yacc.c:1646  */
    { (yyvsp[-1].node)->addChild((yyvsp[0].node)); (yyval.node)=(yyvsp[-1].node); }
#line 2452 "parser.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 237 "parser.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[0].node);}
#line 2458 "parser.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 238 "parser.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[0].node);}
#line 2464 "parser.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 242 "parser.y" /* yacc.c:1646  */
    { (yyvsp[-1].node)->addChild((yyvsp[0].node)); (yyval.node)=(yyvsp[-1].node); }
#line 2470 "parser.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 243 "parser.y" /* yacc.c:1646  */
    { (yyval.node)=newnode(mycount++, "statement_list", "statement_list", (yyvsp[0].node)); }
#line 2476 "parser.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 247 "parser.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[-1].node);}
#line 2482 "parser.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 248 "parser.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[0].node);}
#line 2488 "parser.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 249 "parser.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[0].node);}
#line 2494 "parser.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 250 "parser.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[0].node);}
#line 2500 "parser.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 251 "parser.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[0].node);}
#line 2506 "parser.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 252 "parser.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[0].node);}
#line 2512 "parser.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 253 "parser.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[0].node);}
#line 2518 "parser.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 254 "parser.y" /* yacc.c:1646  */
    {(yyval.node)=newnode(mycount++, "BREAK", "break", (yyvsp[-1].node));}
#line 2524 "parser.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 255 "parser.y" /* yacc.c:1646  */
    {(yyval.node)=newnode(mycount++, "CONTINUE", "continue", (yyvsp[-1].node));}
#line 2530 "parser.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 256 "parser.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[0].node);}
#line 2536 "parser.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 257 "parser.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[-1].node);}
#line 2542 "parser.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 261 "parser.y" /* yacc.c:1646  */
    { V v;v.push_back((yyvsp[-4].node));v.push_back((yyvsp[-2].node));v.push_back((yyvsp[0].node));(yyval.node) = newnode(mycount++, "if_stmt", "if_stmt", v);}
#line 2548 "parser.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 262 "parser.y" /* yacc.c:1646  */
    { V v;v.push_back((yyvsp[-6].node));v.push_back((yyvsp[-3].node));v.push_back((yyvsp[0].node));(yyval.node) = newnode(mycount++, "if_stmt", "if_stmt", v);}
#line 2554 "parser.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 263 "parser.y" /* yacc.c:1646  */
    { V v;v.push_back((yyvsp[-8].node));v.push_back((yyvsp[-5].node));v.push_back((yyvsp[-1].node));(yyval.node) = newnode(mycount++, "if_stmt", "if_stmt", v);}
#line 2560 "parser.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 264 "parser.y" /* yacc.c:1646  */
    { V v;v.push_back((yyvsp[-2].node));v.push_back((yyvsp[0].node));(yyval.node) = newnode(mycount++, "if_stmt", "if_stmt", v);}
#line 2566 "parser.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 265 "parser.y" /* yacc.c:1646  */
    { V v;v.push_back((yyvsp[-4].node));v.push_back((yyvsp[-1].node));(yyval.node) = newnode(mycount++, "if_stmt", "if_stmt", v);}
#line 2572 "parser.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 269 "parser.y" /* yacc.c:1646  */
    {V v;v.push_back((yyvsp[-4].node));v.push_back((yyvsp[-1].node));(yyval.node) = newnode(mycount++, "switch_stmt", "switch_stmt", v);}
#line 2578 "parser.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 273 "parser.y" /* yacc.c:1646  */
    { V v;v.push_back((yyvsp[-5].node));v.push_back((yyvsp[-2].node));v.push_back((yyvsp[0].node));(yyval.node) = newnode(mycount++, "case_list", "case_list", v);}
#line 2584 "parser.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 274 "parser.y" /* yacc.c:1646  */
    { V v;v.push_back((yyvsp[-4].node));v.push_back((yyvsp[-1].node));(yyval.node) = newnode(mycount++, "case_list", "case_list", v);}
#line 2590 "parser.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 275 "parser.y" /* yacc.c:1646  */
    { V v;v.push_back((yyvsp[-3].node));v.push_back((yyvsp[-1].node));v.push_back((yyvsp[0].node));(yyval.node) = newnode(mycount++, "case_list", "case_list", v);}
#line 2596 "parser.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 276 "parser.y" /* yacc.c:1646  */
    { V v;v.push_back((yyvsp[-2].node));v.push_back((yyvsp[0].node));(yyval.node) = newnode(mycount++, "case_list", "case_list", v);}
#line 2602 "parser.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 277 "parser.y" /* yacc.c:1646  */
    { V v;v.push_back((yyvsp[-5].node));v.push_back((yyvsp[-2].node));v.push_back((yyvsp[0].node));(yyval.node) = newnode(mycount++, "case_list", "case_list", v);}
#line 2608 "parser.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 278 "parser.y" /* yacc.c:1646  */
    { V v;v.push_back((yyvsp[-4].node));v.push_back((yyvsp[-1].node));(yyval.node) = newnode(mycount++, "case_list", "case_list", v);}
#line 2614 "parser.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 279 "parser.y" /* yacc.c:1646  */
    { V v;v.push_back((yyvsp[-3].node));v.push_back((yyvsp[-1].node));v.push_back((yyvsp[0].node));(yyval.node) = newnode(mycount++, "case_list", "case_list", v);}
#line 2620 "parser.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 280 "parser.y" /* yacc.c:1646  */
    { V v;v.push_back((yyvsp[-2].node));v.push_back((yyvsp[0].node));(yyval.node) = newnode(mycount++, "case_list", "case_list", v);}
#line 2626 "parser.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 281 "parser.y" /* yacc.c:1646  */
    { V v;v.push_back((yyvsp[-1].node));(yyval.node) = newnode(mycount++, "case_list", "case_list", v);}
#line 2632 "parser.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 282 "parser.y" /* yacc.c:1646  */
    { V v;v.push_back((yyvsp[0].node));(yyval.node) = newnode(mycount++, "case_list", "case_list", v);}
#line 2638 "parser.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 286 "parser.y" /* yacc.c:1646  */
    { V v;v.push_back((yyvsp[-2].node));v.push_back((yyvsp[0].node)); (yyval.node) = newnode(mycount++, "while_stmt", "while_stmt", v); }
#line 2644 "parser.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 287 "parser.y" /* yacc.c:1646  */
    { V v;v.push_back((yyvsp[-4].node));v.push_back((yyvsp[-1].node)); (yyval.node) = newnode(mycount++, "while_stmt", "while_stmt", v); }
#line 2650 "parser.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 291 "parser.y" /* yacc.c:1646  */
    { V v;v.push_back((yyvsp[-6].node));v.push_back((yyvsp[-2].node));(yyval.node)=newnode(mycount++, "do_while_stmt", "do_while_stmt", v); }
#line 2656 "parser.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 295 "parser.y" /* yacc.c:1646  */
    { V v;v.push_back((yyvsp[-1].node));v.push_back((yyvsp[0].node));(yyval.node)=newnode(mycount++, "for_stmt", "for_stmt", v); }
#line 2662 "parser.cpp" /* yacc.c:1646  */
    break;

  case 104:
#line 299 "parser.y" /* yacc.c:1646  */
    { (yyval.node)=newnode(mycount++, "for_body", "for_body",(yyvsp[0].node)); }
#line 2668 "parser.cpp" /* yacc.c:1646  */
    break;

  case 105:
#line 300 "parser.y" /* yacc.c:1646  */
    { (yyval.node)=newnode(mycount++, "for_body", "for_body", (yyvsp[-1].node)); }
#line 2674 "parser.cpp" /* yacc.c:1646  */
    break;

  case 106:
#line 304 "parser.y" /* yacc.c:1646  */
    {V v;v.push_back((yyvsp[-5].node));v.push_back((yyvsp[-3].node));v.push_back((yyvsp[-1].node)); (yyval.node)=newnode(mycount++, "for_condition", "for_condition", v); }
#line 2680 "parser.cpp" /* yacc.c:1646  */
    break;

  case 107:
#line 305 "parser.y" /* yacc.c:1646  */
    {V v;v.push_back((yyvsp[-4].node));v.push_back((yyvsp[-3].node));v.push_back((yyvsp[-1].node)); (yyval.node)=newnode(mycount++, "for_condition", "for_condition", v); }
#line 2686 "parser.cpp" /* yacc.c:1646  */
    break;

  case 108:
#line 306 "parser.y" /* yacc.c:1646  */
    {V v;v.push_back(nullNode(mycount++));v.push_back((yyvsp[-3].node));v.push_back((yyvsp[-1].node)); (yyval.node)=newnode(mycount++, "for_condition", "for_condition", v); }
#line 2692 "parser.cpp" /* yacc.c:1646  */
    break;

  case 109:
#line 307 "parser.y" /* yacc.c:1646  */
    {V v;v.push_back(nullNode(mycount++));v.push_back(nullNode(mycount++));v.push_back((yyvsp[-1].node)); (yyval.node)=newnode(mycount++, "for_condition", "for_condition", v); }
#line 2698 "parser.cpp" /* yacc.c:1646  */
    break;

  case 110:
#line 308 "parser.y" /* yacc.c:1646  */
    {V v;v.push_back(nullNode(mycount++));v.push_back(nullNode(mycount++));v.push_back(nullNode(mycount++)); (yyval.node)=newnode(mycount++, "for_condition", "for_condition", v); }
#line 2704 "parser.cpp" /* yacc.c:1646  */
    break;

  case 111:
#line 313 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = newnode(mycount++, "return_stmt", "return_stmt"); }
#line 2710 "parser.cpp" /* yacc.c:1646  */
    break;

  case 112:
#line 314 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = newnode(mycount++,"return_stmt", "return_stmt", (yyvsp[-1].node)); }
#line 2716 "parser.cpp" /* yacc.c:1646  */
    break;

  case 113:
#line 318 "parser.y" /* yacc.c:1646  */
    { (yyval.node)=(yyvsp[0].node); }
#line 2722 "parser.cpp" /* yacc.c:1646  */
    break;

  case 114:
#line 319 "parser.y" /* yacc.c:1646  */
    { (yyval.node)=(yyvsp[0].node); }
#line 2728 "parser.cpp" /* yacc.c:1646  */
    break;

  case 115:
#line 320 "parser.y" /* yacc.c:1646  */
    { (yyval.node)=(yyvsp[0].node); }
#line 2734 "parser.cpp" /* yacc.c:1646  */
    break;

  case 116:
#line 324 "parser.y" /* yacc.c:1646  */
    { V v;v.push_back((yyvsp[-2].node));v.push_back((yyvsp[0].node)); (yyval.node)=newnode(mycount++, "logical_and_expression", "logical_and_expression", v); }
#line 2740 "parser.cpp" /* yacc.c:1646  */
    break;

  case 117:
#line 325 "parser.y" /* yacc.c:1646  */
    { V v;v.push_back((yyvsp[-2].node));v.push_back((yyvsp[0].node)); (yyval.node)=newnode(mycount++, "logical_or_expression", "logical_or_expression", v); }
#line 2746 "parser.cpp" /* yacc.c:1646  */
    break;

  case 118:
#line 326 "parser.y" /* yacc.c:1646  */
    { (yyval.node)=newnode(mycount++, "logical_not_expression", "logical_not_expression", (yyvsp[0].node)); }
#line 2752 "parser.cpp" /* yacc.c:1646  */
    break;

  case 119:
#line 330 "parser.y" /* yacc.c:1646  */
    { V v;v.push_back((yyvsp[-2].node));v.push_back((yyvsp[0].node)); (yyval.node) = newnode(mycount++,"assignment_expression","assignment_expression", v); }
#line 2758 "parser.cpp" /* yacc.c:1646  */
    break;

  case 120:
#line 331 "parser.y" /* yacc.c:1646  */
    {V v;v.push_back((yyvsp[-2].node));v.push_back((yyvsp[0].node)); (yyvsp[-1].node)->addChildren(v); (yyval.node)=(yyvsp[-1].node);}
#line 2764 "parser.cpp" /* yacc.c:1646  */
    break;

  case 121:
#line 332 "parser.y" /* yacc.c:1646  */
    {V v;v.push_back((yyvsp[-2].node));v.push_back((yyvsp[0].node)); (yyval.node) = newnode(mycount++,"assignment_expression","assignment_expression", v);}
#line 2770 "parser.cpp" /* yacc.c:1646  */
    break;

  case 122:
#line 333 "parser.y" /* yacc.c:1646  */
    { (yyval.node)=(yyvsp[0].node); }
#line 2776 "parser.cpp" /* yacc.c:1646  */
    break;

  case 123:
#line 337 "parser.y" /* yacc.c:1646  */
    {(yyval.node)=newnode(mycount++, "self_assign", "+=");}
#line 2782 "parser.cpp" /* yacc.c:1646  */
    break;

  case 124:
#line 338 "parser.y" /* yacc.c:1646  */
    {(yyval.node)=newnode(mycount++, "self_assign", "-=");}
#line 2788 "parser.cpp" /* yacc.c:1646  */
    break;

  case 125:
#line 339 "parser.y" /* yacc.c:1646  */
    {(yyval.node)=newnode(mycount++, "self_assign", "*=");}
#line 2794 "parser.cpp" /* yacc.c:1646  */
    break;

  case 126:
#line 340 "parser.y" /* yacc.c:1646  */
    {(yyval.node)=newnode(mycount++, "self_assign", "/=");}
#line 2800 "parser.cpp" /* yacc.c:1646  */
    break;

  case 127:
#line 344 "parser.y" /* yacc.c:1646  */
    {(yyval.node) = newnode(mycount++, "unary_expression", "++", (yyvsp[0].node));}
#line 2806 "parser.cpp" /* yacc.c:1646  */
    break;

  case 128:
#line 345 "parser.y" /* yacc.c:1646  */
    {(yyval.node) = newnode(mycount++, "unary_expression", "--", (yyvsp[0].node));}
#line 2812 "parser.cpp" /* yacc.c:1646  */
    break;

  case 129:
#line 346 "parser.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[0].node);}
#line 2818 "parser.cpp" /* yacc.c:1646  */
    break;

  case 130:
#line 350 "parser.y" /* yacc.c:1646  */
    {(yyval.node) = newnode(mycount++,"postfix_expression", "++", (yyvsp[-1].node));}
#line 2824 "parser.cpp" /* yacc.c:1646  */
    break;

  case 131:
#line 351 "parser.y" /* yacc.c:1646  */
    {(yyval.node) = newnode(mycount++,"postfix_expression", "--", (yyvsp[-1].node));}
#line 2830 "parser.cpp" /* yacc.c:1646  */
    break;

  case 132:
#line 355 "parser.y" /* yacc.c:1646  */
    { (yyval.node)=(yyvsp[0].node); }
#line 2836 "parser.cpp" /* yacc.c:1646  */
    break;

  case 133:
#line 356 "parser.y" /* yacc.c:1646  */
    { V v;v.push_back((yyvsp[-2].node));v.push_back((yyvsp[-1].node));v.push_back((yyvsp[0].node)); (yyval.node) = newnode(mycount++, "simple_expression", "simple_expression", v); }
#line 2842 "parser.cpp" /* yacc.c:1646  */
    break;

  case 134:
#line 360 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = newnode(mycount++, "LT", "<"); }
#line 2848 "parser.cpp" /* yacc.c:1646  */
    break;

  case 135:
#line 361 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = newnode(mycount++, "LE", "<="); }
#line 2854 "parser.cpp" /* yacc.c:1646  */
    break;

  case 136:
#line 362 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = newnode(mycount++, "GT", ">"); }
#line 2860 "parser.cpp" /* yacc.c:1646  */
    break;

  case 137:
#line 363 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = newnode(mycount++, "GE", ">="); }
#line 2866 "parser.cpp" /* yacc.c:1646  */
    break;

  case 138:
#line 364 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = newnode(mycount++, "EQ", "=="); }
#line 2872 "parser.cpp" /* yacc.c:1646  */
    break;

  case 139:
#line 365 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = newnode(mycount++, "NE", "!="); }
#line 2878 "parser.cpp" /* yacc.c:1646  */
    break;

  case 140:
#line 369 "parser.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[0].node);}
#line 2884 "parser.cpp" /* yacc.c:1646  */
    break;

  case 141:
#line 370 "parser.y" /* yacc.c:1646  */
    { V v;v.push_back((yyvsp[-2].node));v.push_back((yyvsp[0].node)); (yyval.node) = newnode(mycount++, "additive_expression", "+", v); }
#line 2890 "parser.cpp" /* yacc.c:1646  */
    break;

  case 142:
#line 371 "parser.y" /* yacc.c:1646  */
    { V v;v.push_back((yyvsp[-2].node));v.push_back((yyvsp[0].node)); (yyval.node) = newnode(mycount++, "additive_expression", "-", v); }
#line 2896 "parser.cpp" /* yacc.c:1646  */
    break;

  case 143:
#line 375 "parser.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[0].node);}
#line 2902 "parser.cpp" /* yacc.c:1646  */
    break;

  case 144:
#line 376 "parser.y" /* yacc.c:1646  */
    { V v;v.push_back((yyvsp[-2].node));v.push_back((yyvsp[0].node)); (yyval.node) = newnode(mycount++, "term", "*", v); }
#line 2908 "parser.cpp" /* yacc.c:1646  */
    break;

  case 145:
#line 377 "parser.y" /* yacc.c:1646  */
    { V v;v.push_back((yyvsp[-2].node));v.push_back((yyvsp[0].node)); (yyval.node) = newnode(mycount++, "term", "/", v); }
#line 2914 "parser.cpp" /* yacc.c:1646  */
    break;

  case 146:
#line 381 "parser.y" /* yacc.c:1646  */
    { (yyval.node)=(yyvsp[-1].node); }
#line 2920 "parser.cpp" /* yacc.c:1646  */
    break;

  case 147:
#line 382 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = newnode(mycount++, "factor", "factor", (yyvsp[0].node)); }
#line 2926 "parser.cpp" /* yacc.c:1646  */
    break;

  case 148:
#line 383 "parser.y" /* yacc.c:1646  */
    { (yyval.node)=(yyvsp[0].node); }
#line 2932 "parser.cpp" /* yacc.c:1646  */
    break;

  case 149:
#line 384 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = newnode(mycount++, "factor", "factor", (yyvsp[0].node)); }
#line 2938 "parser.cpp" /* yacc.c:1646  */
    break;

  case 150:
#line 385 "parser.y" /* yacc.c:1646  */
    {(yyval.node) = newnode(mycount++, "factor", "factor", (yyvsp[0].node)); }
#line 2944 "parser.cpp" /* yacc.c:1646  */
    break;

  case 151:
#line 386 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = newnode(mycount++, "factor", "factor", (yyvsp[0].node)); }
#line 2950 "parser.cpp" /* yacc.c:1646  */
    break;

  case 152:
#line 387 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = newnode(mycount++, "factor", "factor", (yyvsp[0].node)); }
#line 2956 "parser.cpp" /* yacc.c:1646  */
    break;

  case 153:
#line 391 "parser.y" /* yacc.c:1646  */
    {(yyval.node) = newnode(mycount++, "call_func", "call_func", (yyvsp[-2].node));}
#line 2962 "parser.cpp" /* yacc.c:1646  */
    break;

  case 154:
#line 392 "parser.y" /* yacc.c:1646  */
    { V v;v.push_back((yyvsp[-3].node));v.push_back((yyvsp[-1].node));(yyval.node) = newnode(mycount++, "call_func", "call_func", v);}
#line 2968 "parser.cpp" /* yacc.c:1646  */
    break;

  case 155:
#line 396 "parser.y" /* yacc.c:1646  */
    { (yyval.node)=(yyvsp[0].node); }
#line 2974 "parser.cpp" /* yacc.c:1646  */
    break;

  case 156:
#line 397 "parser.y" /* yacc.c:1646  */
    { V v;v.push_back((yyvsp[-2].node));v.push_back((yyvsp[0].node)); (yyval.node) = newnode(mycount++, "args", "args", v);}
#line 2980 "parser.cpp" /* yacc.c:1646  */
    break;

  case 157:
#line 401 "parser.y" /* yacc.c:1646  */
    { (yyval.node)=newnode(mycount++, "INT_HEX", (yyvsp[0].node)); }
#line 2986 "parser.cpp" /* yacc.c:1646  */
    break;

  case 158:
#line 402 "parser.y" /* yacc.c:1646  */
    { (yyval.node)=newnode(mycount++, "INT_OCT", (yyvsp[0].node)); }
#line 2992 "parser.cpp" /* yacc.c:1646  */
    break;

  case 159:
#line 403 "parser.y" /* yacc.c:1646  */
    { (yyval.node)=newnode(mycount++, "INT_DEX", (yyvsp[0].node)); }
#line 2998 "parser.cpp" /* yacc.c:1646  */
    break;

  case 160:
#line 404 "parser.y" /* yacc.c:1646  */
    { (yyval.node)=newnode(mycount++, "FLOAT", (yyvsp[0].node)); }
#line 3004 "parser.cpp" /* yacc.c:1646  */
    break;

  case 161:
#line 408 "parser.y" /* yacc.c:1646  */
    {(yyval.node)=newnode(mycount++, "ID", (yyvsp[0].node));}
#line 3010 "parser.cpp" /* yacc.c:1646  */
    break;

  case 162:
#line 409 "parser.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[0].node);}
#line 3016 "parser.cpp" /* yacc.c:1646  */
    break;


#line 3020 "parser.cpp" /* yacc.c:1646  */
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
#line 412 "parser.y" /* yacc.c:1906  */

int main(int argc,char* argv[]) {
    yyin = fopen(argv[1],"r");
    yyparse();
	outputTable();
	outputSymbolTable();
	IRCode(uroot);
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

