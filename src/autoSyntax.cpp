/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0

/* Substitute the variable and function names.  */
#define yyparse srpparse
#define yylex   srplex
#define yyerror srperror
#define yylval  srplval
#define yychar  srpchar
#define yydebug srpdebug
#define yynerrs srpnerrs


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     ABSTRACT_KW = 258,
     BASE_KW = 259,
     BOOL_KW = 260,
     BREAK_KW = 261,
     BYTE_KW = 262,
     CASE_KW = 263,
     CATCH_KW = 264,
     CHAR_KW = 265,
     CHECKED_KW = 266,
     CLASS_KW = 267,
     CONST_KW = 268,
     CONTINUE_KW = 269,
     DECIMAL_KW = 270,
     DEFAULT_KW = 271,
     DELEGATE_KW = 272,
     DO_KW = 273,
     DOUBLE_KW = 274,
     ELSE_KW = 275,
     ENUM_KW = 276,
     EVENT_KW = 277,
     EXPLICIT_KW = 278,
     EXTERN_KW = 279,
     FALSE_KW = 280,
     FINALLY_KW = 281,
     FIXED_KW = 282,
     FLOAT_KW = 283,
     FOR_KW = 284,
     FOREACH_KW = 285,
     GOTO_KW = 286,
     IF_KW = 287,
     IMPLICIT_KW = 288,
     IN_KW = 289,
     INT_KW = 290,
     INTERFACE_KW = 291,
     INTERNAL_KW = 292,
     IS_KW = 293,
     LOCK_KW = 294,
     LONG_KW = 295,
     NAMESPACE_KW = 296,
     NEW_KW = 297,
     NULL_KW = 298,
     OBJECT_KW = 299,
     OPERATOR_KW = 300,
     OUT_KW = 301,
     OVERRIDE_KW = 302,
     PARAMS_KW = 303,
     PRIVATE_KW = 304,
     PROTECTED_KW = 305,
     PUBLIC_KW = 306,
     READONLY_KW = 307,
     REF_KW = 308,
     RETURN_KW = 309,
     SBYTE_KW = 310,
     SEALED_KW = 311,
     SHORT_KW = 312,
     SIZEOF_KW = 313,
     STATIC_KW = 314,
     STRING_KW = 315,
     STRUCT_KW = 316,
     SWITCH_KW = 317,
     THIS_KW = 318,
     THROW_KW = 319,
     TRUE_KW = 320,
     TRY_KW = 321,
     TYPEOF_KW = 322,
     UINT_KW = 323,
     ULONG_KW = 324,
     UNCHECKED_KW = 325,
     UNSAFE_KW = 326,
     USHORT_KW = 327,
     USING_KW = 328,
     VIRTUAL_KW = 329,
     VOID_KW = 330,
     WHILE_KW = 331,
     SET_KW = 332,
     GET_KW = 333,
     EQ_OP = 334,
     NE_OP = 335,
     LE_OP = 336,
     GE_OP = 337,
     ANDCON_OP = 338,
     ORCON_OP = 339,
     INCR_OP = 340,
     DECR_OP = 341,
     LSHIFT_OP = 342,
     RSHIFT_OP = 343,
     PLUSEQ_OP = 344,
     MINUSEQ_OP = 345,
     MULTEQ_OP = 346,
     DIVEQ_OP = 347,
     MODEQ_OP = 348,
     ANDEQ_OP = 349,
     OREQ_OP = 350,
     NOTEQ_OP = 351,
     LSHIFTEQ_OP = 352,
     RSHIFTEQ_OP = 353,
     BOOLEAN_LITERAL = 354,
     INTEGER_LITERAL = 355,
     REAL_LITERAL = 356,
     CHARACTER_LITERAL = 357,
     STRING_LITERAL = 358,
     NULL_LITERAL = 359,
     IDENTIFIER = 360
   };
#endif
/* Tokens.  */
#define ABSTRACT_KW 258
#define BASE_KW 259
#define BOOL_KW 260
#define BREAK_KW 261
#define BYTE_KW 262
#define CASE_KW 263
#define CATCH_KW 264
#define CHAR_KW 265
#define CHECKED_KW 266
#define CLASS_KW 267
#define CONST_KW 268
#define CONTINUE_KW 269
#define DECIMAL_KW 270
#define DEFAULT_KW 271
#define DELEGATE_KW 272
#define DO_KW 273
#define DOUBLE_KW 274
#define ELSE_KW 275
#define ENUM_KW 276
#define EVENT_KW 277
#define EXPLICIT_KW 278
#define EXTERN_KW 279
#define FALSE_KW 280
#define FINALLY_KW 281
#define FIXED_KW 282
#define FLOAT_KW 283
#define FOR_KW 284
#define FOREACH_KW 285
#define GOTO_KW 286
#define IF_KW 287
#define IMPLICIT_KW 288
#define IN_KW 289
#define INT_KW 290
#define INTERFACE_KW 291
#define INTERNAL_KW 292
#define IS_KW 293
#define LOCK_KW 294
#define LONG_KW 295
#define NAMESPACE_KW 296
#define NEW_KW 297
#define NULL_KW 298
#define OBJECT_KW 299
#define OPERATOR_KW 300
#define OUT_KW 301
#define OVERRIDE_KW 302
#define PARAMS_KW 303
#define PRIVATE_KW 304
#define PROTECTED_KW 305
#define PUBLIC_KW 306
#define READONLY_KW 307
#define REF_KW 308
#define RETURN_KW 309
#define SBYTE_KW 310
#define SEALED_KW 311
#define SHORT_KW 312
#define SIZEOF_KW 313
#define STATIC_KW 314
#define STRING_KW 315
#define STRUCT_KW 316
#define SWITCH_KW 317
#define THIS_KW 318
#define THROW_KW 319
#define TRUE_KW 320
#define TRY_KW 321
#define TYPEOF_KW 322
#define UINT_KW 323
#define ULONG_KW 324
#define UNCHECKED_KW 325
#define UNSAFE_KW 326
#define USHORT_KW 327
#define USING_KW 328
#define VIRTUAL_KW 329
#define VOID_KW 330
#define WHILE_KW 331
#define SET_KW 332
#define GET_KW 333
#define EQ_OP 334
#define NE_OP 335
#define LE_OP 336
#define GE_OP 337
#define ANDCON_OP 338
#define ORCON_OP 339
#define INCR_OP 340
#define DECR_OP 341
#define LSHIFT_OP 342
#define RSHIFT_OP 343
#define PLUSEQ_OP 344
#define MINUSEQ_OP 345
#define MULTEQ_OP 346
#define DIVEQ_OP 347
#define MODEQ_OP 348
#define ANDEQ_OP 349
#define OREQ_OP 350
#define NOTEQ_OP 351
#define LSHIFTEQ_OP 352
#define RSHIFTEQ_OP 353
#define BOOLEAN_LITERAL 354
#define INTEGER_LITERAL 355
#define REAL_LITERAL 356
#define CHARACTER_LITERAL 357
#define STRING_LITERAL 358
#define NULL_LITERAL 359
#define IDENTIFIER 360




/* Copy the first part of user declarations.  */
#line 8 "src/baseGram.ycc"

/* On met ici les declaration et les fichiers inclus */

#include <stdlib.h>		// For free.

#include <akra/portableDefs.h>
#include "customFlex.h"
#include "statements.h"
#include "expressions.h"
#include "typeDef.h"
#include "varDecl.h"
#include "listStmts.h"
#include "classMembers.h"
#include "identifiers.h"

class StatementSrp;
class ExpressionSrp;
class BaseIdentifierSrp;
class LiteralSrp;
class BlockListAk;
class TypeDefinition;
class VarDeclarationSrp;
class ClauseHolderSrp;
class CatchStmtHelper;


extern int srplex();
extern void srperror(char *);

#define YYDEBUG	1



/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 167 "src/baseGram.ycc"
{
    bool boolValue;
    int integerNumber;
    unsigned int flag;
    float floatNumber;
    int longNumber[2];
    double doubleNumber;
    LiteralSrp *literal;
    BaseIdentifierSrp *identifier;
    StatementSrp *statement;
    ExpressionSrp *expression;
    BlockListAk *blList;
    TypeDefinition *typeDef;
    VarDeclarationSrp *varDecl;
    MethodDefinition *methodDef;
    ClauseHolderSrp *clauseHolder;
    CatchStmtHelper *catchHelper;
}
/* Line 193 of yacc.c.  */
#line 366 "autoSyntax.tab.ccc"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 379 "autoSyntax.tab.ccc"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  12
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2328

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  130
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  238
/* YYNRULES -- Number of rules.  */
#define YYNRULES  520
/* YYNRULES -- Number of states.  */
#define YYNSTATES  856

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   360

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   112,     2,     2,     2,   117,   115,     2,
     107,   108,   114,   110,   106,   111,   109,   116,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   123,   127,
     118,   124,   119,   122,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   128,     2,   129,   120,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   125,   121,   126,   113,     2,     2,     2,
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
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     7,     9,    11,    13,    15,    17,
      19,    21,    23,    25,    27,    29,    31,    33,    35,    37,
      39,    41,    43,    45,    47,    49,    51,    53,    55,    57,
      59,    61,    63,    65,    67,    69,    71,    73,    75,    77,
      79,    81,    83,    85,    89,    91,    94,    97,    99,   101,
     103,   105,   107,   109,   111,   113,   115,   117,   119,   121,
     123,   125,   127,   129,   133,   137,   141,   143,   145,   147,
     149,   151,   153,   155,   157,   159,   161,   163,   165,   167,
     169,   171,   176,   179,   181,   185,   187,   191,   194,   197,
     200,   202,   204,   206,   212,   218,   224,   229,   234,   239,
     244,   246,   249,   252,   255,   258,   261,   264,   266,   268,
     270,   273,   276,   281,   283,   287,   291,   295,   297,   301,
     305,   307,   311,   315,   317,   321,   325,   329,   333,   337,
     339,   343,   347,   349,   353,   355,   359,   361,   365,   367,
     371,   373,   377,   379,   385,   389,   391,   393,   395,   397,
     399,   401,   403,   405,   407,   409,   411,   413,   415,   417,
     419,   421,   423,   425,   427,   429,   431,   433,   435,   437,
     439,   441,   443,   445,   449,   451,   454,   456,   460,   463,
     466,   469,   471,   475,   477,   481,   485,   487,   491,   495,
     498,   500,   502,   504,   506,   508,   510,   512,   514,   516,
     522,   530,   536,   540,   542,   545,   548,   550,   553,   557,
     560,   562,   564,   566,   568,   574,   582,   592,   594,   596,
     598,   600,   602,   606,   615,   617,   619,   621,   623,   625,
     628,   631,   635,   640,   644,   648,   652,   656,   660,   665,
     668,   671,   673,   676,   683,   686,   689,   692,   695,   701,
     704,   709,   711,   715,   720,   722,   725,   727,   729,   735,
     739,   741,   744,   746,   748,   750,   752,   754,   756,   758,
     766,   769,   772,   777,   779,   783,   787,   789,   792,   794,
     796,   798,   800,   802,   804,   806,   808,   810,   812,   814,
     821,   823,   827,   831,   837,   840,   848,   850,   852,   854,
     856,   858,   860,   864,   869,   871,   873,   875,   883,   886,
     889,   893,   897,   899,   901,   904,   911,   920,   927,   933,
     941,   943,   947,   951,   956,   959,   962,   964,   966,   968,
     976,   978,   980,   982,   984,   986,   988,   990,   992,  1003,
    1005,  1007,  1009,  1011,  1013,  1015,  1017,  1019,  1021,  1023,
    1025,  1027,  1029,  1031,  1033,  1035,  1043,  1051,  1056,  1062,
    1068,  1074,  1081,  1088,  1096,  1099,  1103,  1105,  1108,  1110,
    1113,  1115,  1117,  1120,  1124,  1126,  1129,  1133,  1138,  1140,
    1144,  1146,  1148,  1156,  1159,  1163,  1165,  1168,  1170,  1172,
    1174,  1176,  1185,  1186,  1188,  1196,  1199,  1202,  1207,  1212,
    1219,  1230,  1238,  1241,  1245,  1250,  1252,  1256,  1259,  1264,
    1274,  1276,  1278,  1281,  1285,  1290,  1292,  1296,  1299,  1301,
    1303,  1307,  1313,  1317,  1319,  1323,  1327,  1330,  1333,  1335,
    1337,  1339,  1343,  1347,  1348,  1350,  1351,  1353,  1354,  1356,
    1357,  1359,  1360,  1362,  1363,  1365,  1366,  1368,  1369,  1371,
    1372,  1374,  1375,  1377,  1378,  1380,  1381,  1383,  1384,  1386,
    1387,  1389,  1390,  1392,  1393,  1395,  1396,  1398,  1399,  1401,
    1402,  1404,  1405,  1407,  1408,  1410,  1411,  1413,  1414,  1416,
    1417,  1419,  1420,  1422,  1423,  1425,  1426,  1428,  1429,  1431,
    1432,  1434,  1435,  1437,  1438,  1440,  1441,  1443,  1444,  1446,
    1447,  1449,  1451,  1453,  1455,  1456,  1458,  1460,  1463,  1465,
    1467,  1469,  1471,  1473,  1475,  1477,  1479,  1481,  1483,  1485,
    1487
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     235,     0,    -1,    99,    -1,   100,    -1,   101,    -1,   102,
      -1,   103,    -1,   104,    -1,   328,    -1,   328,    -1,   328,
      -1,   136,    -1,   292,    -1,   137,    -1,    44,    -1,    60,
      -1,   325,    -1,   138,    -1,   133,    -1,   139,    -1,   140,
      -1,     5,    -1,   141,    -1,   142,    -1,    15,    -1,    55,
      -1,     7,    -1,    57,    -1,    72,    -1,    35,    -1,    68,
      -1,    40,    -1,    69,    -1,    10,    -1,    28,    -1,    19,
      -1,   144,    -1,   292,    -1,   133,    -1,    44,    -1,    60,
      -1,   185,    -1,   147,    -1,   146,   106,   147,    -1,   185,
      -1,    53,   145,    -1,    46,   145,    -1,   131,    -1,   149,
      -1,   150,    -1,   151,    -1,   153,    -1,   154,    -1,   156,
      -1,   157,    -1,   158,    -1,   159,    -1,   160,    -1,   164,
      -1,   165,    -1,   166,    -1,   167,    -1,   327,    -1,   107,
     185,   108,    -1,   148,   109,   327,    -1,   152,   109,   327,
      -1,     5,    -1,     7,    -1,    10,    -1,    15,    -1,    19,
      -1,    28,    -1,    35,    -1,    40,    -1,    44,    -1,    55,
      -1,    57,    -1,    60,    -1,    68,    -1,    69,    -1,    72,
      -1,   148,   107,   332,   108,    -1,   148,   329,    -1,   185,
      -1,   155,   106,   185,    -1,    63,    -1,     4,   109,   327,
      -1,     4,   329,    -1,   148,    85,    -1,   148,    86,    -1,
     161,    -1,   162,    -1,   163,    -1,    42,   135,   107,   332,
     108,    -1,    42,   136,   363,   333,   334,    -1,    42,   328,
     107,   185,   108,    -1,    67,   107,   135,   108,    -1,    58,
     107,   135,   108,    -1,    11,   107,   185,   108,    -1,    70,
     107,   185,   108,    -1,   148,    -1,   110,   168,    -1,   111,
     168,    -1,   112,   168,    -1,   113,   168,    -1,   114,   168,
      -1,   115,   168,    -1,   169,    -1,   170,    -1,   171,    -1,
      85,   168,    -1,    86,   168,    -1,   107,   135,   108,   168,
      -1,   168,    -1,   172,   114,   168,    -1,   172,   116,   168,
      -1,   172,   117,   168,    -1,   172,    -1,   173,   110,   172,
      -1,   173,   111,   172,    -1,   173,    -1,   174,    87,   173,
      -1,   174,    88,   173,    -1,   174,    -1,   175,   118,   174,
      -1,   175,   119,   174,    -1,   175,    81,   174,    -1,   175,
      82,   174,    -1,   175,    38,   143,    -1,   175,    -1,   176,
      79,   175,    -1,   176,    80,   175,    -1,   176,    -1,   177,
     115,   176,    -1,   177,    -1,   178,   120,   177,    -1,   178,
      -1,   179,   121,   178,    -1,   179,    -1,   180,    83,   179,
      -1,   180,    -1,   181,    84,   180,    -1,   181,    -1,   181,
     122,   185,   123,   185,    -1,   168,   184,   185,    -1,   124,
      -1,    89,    -1,    90,    -1,    91,    -1,    92,    -1,    93,
      -1,    94,    -1,    95,    -1,    96,    -1,    97,    -1,    98,
      -1,   182,    -1,   183,    -1,   185,    -1,   185,    -1,   193,
      -1,   194,    -1,   189,    -1,   190,    -1,   192,    -1,   201,
      -1,   203,    -1,   211,    -1,   220,    -1,   226,    -1,   232,
      -1,   233,    -1,   234,    -1,   125,   335,   126,    -1,   188,
      -1,   191,   188,    -1,   127,    -1,   327,   123,   188,    -1,
     195,   127,    -1,   198,   127,    -1,   135,   196,    -1,   197,
      -1,   196,   106,   197,    -1,   327,    -1,   327,   124,   298,
      -1,    13,   135,   199,    -1,   200,    -1,   199,   106,   200,
      -1,   327,   124,   186,    -1,   202,   127,    -1,   153,    -1,
     161,    -1,   183,    -1,   158,    -1,   159,    -1,   169,    -1,
     170,    -1,   204,    -1,   205,    -1,    32,   107,   187,   108,
     189,    -1,    32,   107,   187,   108,   189,    20,   189,    -1,
      62,   107,   185,   108,   206,    -1,   125,   336,   126,    -1,
     208,    -1,   207,   208,    -1,   209,   191,    -1,   210,    -1,
     209,   210,    -1,     8,   186,   123,    -1,    16,   123,    -1,
     212,    -1,   213,    -1,   214,    -1,   219,    -1,    76,   107,
     187,   108,   189,    -1,    18,   189,    76,   107,   187,   108,
     127,    -1,    29,   107,   337,   127,   338,   127,   339,   108,
     189,    -1,   195,    -1,   218,    -1,   187,    -1,   218,    -1,
     202,    -1,   218,   106,   202,    -1,    30,   107,   135,   327,
      34,   185,   108,   189,    -1,   221,    -1,   222,    -1,   223,
      -1,   224,    -1,   225,    -1,     6,   127,    -1,    14,   127,
      -1,    31,   327,   127,    -1,    31,     8,   186,   127,    -1,
      31,    16,   127,    -1,    54,   340,   127,    -1,    64,   340,
     127,    -1,    66,   190,   227,    -1,    66,   190,   231,    -1,
      66,   190,   227,   231,    -1,   228,   341,    -1,   342,   230,
      -1,   229,    -1,   228,   229,    -1,     9,   107,   144,   343,
     108,   190,    -1,     9,   190,    -1,    26,   190,    -1,    11,
     190,    -1,    70,   190,    -1,    39,   107,   185,   108,   189,
      -1,   344,   345,    -1,    41,   237,   238,   330,    -1,   327,
      -1,   237,   109,   327,    -1,   125,   344,   345,   126,    -1,
     240,    -1,   239,   240,    -1,   241,    -1,   242,    -1,    73,
     327,   124,   134,   127,    -1,    73,   132,   127,    -1,   244,
      -1,   243,   244,    -1,   236,    -1,   245,    -1,   246,    -1,
     287,    -1,   299,    -1,   310,    -1,   315,    -1,   346,   365,
      12,   327,   347,   249,   330,    -1,   123,   144,    -1,   123,
     248,    -1,   123,   144,   106,   248,    -1,   133,    -1,   248,
     106,   133,    -1,   125,   348,   126,    -1,   251,    -1,   250,
     251,    -1,   252,    -1,   253,    -1,   254,    -1,   262,    -1,
     267,    -1,   270,    -1,   274,    -1,   282,    -1,   285,    -1,
     286,    -1,   245,    -1,   346,   365,    13,   135,   199,   127,
      -1,   200,    -1,   199,   106,   200,    -1,   327,   124,   186,
      -1,   346,   365,   135,   196,   127,    -1,   255,   258,    -1,
     346,   365,   256,   257,   107,   349,   108,    -1,   135,    -1,
      75,    -1,   328,    -1,   190,    -1,   127,    -1,   260,    -1,
     259,   106,   260,    -1,   346,   350,   135,   327,    -1,    53,
      -1,    46,    -1,    48,    -1,   346,   365,   135,   257,   125,
     263,   126,    -1,   264,   351,    -1,   265,   352,    -1,   353,
      78,   266,    -1,   353,    77,   266,    -1,   190,    -1,   127,
      -1,   268,   269,    -1,   346,   365,    22,   135,   196,   127,
      -1,   346,   365,    22,   135,   257,   125,   263,   126,    -1,
     346,   365,   271,   125,   263,   126,    -1,   135,    63,   128,
     272,   129,    -1,   135,   133,   109,    63,   128,   272,   129,
      -1,   273,    -1,   272,   106,   273,    -1,   346,   135,   327,
      -1,   346,   275,   276,   190,    -1,    51,    59,    -1,    59,
      51,    -1,   277,    -1,   279,    -1,   281,    -1,   135,    45,
     278,   107,   135,   327,   108,    -1,   110,    -1,   111,    -1,
     112,    -1,   113,    -1,    85,    -1,    86,    -1,    65,    -1,
      25,    -1,   135,    45,   280,   107,   135,   327,   106,   135,
     327,   108,    -1,   110,    -1,   111,    -1,   114,    -1,   116,
      -1,   117,    -1,   115,    -1,   121,    -1,   120,    -1,    87,
      -1,    88,    -1,    79,    -1,    80,    -1,   119,    -1,   118,
      -1,    82,    -1,    81,    -1,    33,    45,   135,   107,   135,
     327,   108,    -1,    23,    45,   135,   107,   135,   327,   108,
      -1,   346,   365,   283,   190,    -1,   327,   107,   349,   108,
     354,    -1,   123,     4,   107,   332,   108,    -1,   123,    63,
     107,   332,   108,    -1,   346,   113,   327,   107,   108,   190,
      -1,   346,    59,   327,   107,   108,   190,    -1,   346,   365,
      61,   327,   355,   289,   330,    -1,   123,   248,    -1,   125,
     356,   126,    -1,   291,    -1,   290,   291,    -1,   251,    -1,
     136,   293,    -1,   135,    -1,   294,    -1,   293,   294,    -1,
     128,   331,   129,    -1,   106,    -1,   295,   106,    -1,   125,
     357,   126,    -1,   125,   297,   106,   126,    -1,   298,    -1,
     297,   106,   298,    -1,   185,    -1,   296,    -1,   346,   365,
      36,   327,   358,   301,   330,    -1,   123,   248,    -1,   125,
     359,   126,    -1,   303,    -1,   302,   303,    -1,   304,    -1,
     306,    -1,   308,    -1,   309,    -1,   346,   305,   256,   327,
     107,   349,   108,   127,    -1,    -1,    42,    -1,   346,   305,
     135,   327,   125,   307,   126,    -1,    78,   127,    -1,    77,
     127,    -1,    78,   127,    77,   127,    -1,    77,   127,    78,
     127,    -1,   346,   305,    22,   135,   327,   127,    -1,   346,
     305,   135,    63,   128,   272,   129,   125,   307,   126,    -1,
     346,   365,    21,   327,   360,   312,   330,    -1,   123,   141,
      -1,   125,   361,   126,    -1,   125,   313,   106,   126,    -1,
     314,    -1,   313,   106,   314,    -1,   346,   327,    -1,   346,
     327,   124,   186,    -1,   346,   365,    17,   256,   327,   107,
     349,   108,   127,    -1,   317,    -1,   318,    -1,   317,   318,
      -1,   128,   319,   129,    -1,   128,   319,   106,   129,    -1,
     320,    -1,   319,   106,   320,    -1,   321,   362,    -1,   327,
      -1,   133,    -1,   107,   155,   108,    -1,   107,   155,   106,
     323,   108,    -1,   107,   323,   108,    -1,   324,    -1,   323,
     106,   324,    -1,   327,   124,   185,    -1,   326,   114,    -1,
      75,   114,    -1,   137,    -1,   105,    -1,   327,    -1,   328,
     109,   327,    -1,   128,   155,   129,    -1,    -1,   127,    -1,
      -1,   295,    -1,    -1,   146,    -1,    -1,   293,    -1,    -1,
     296,    -1,    -1,   191,    -1,    -1,   207,    -1,    -1,   215,
      -1,    -1,   216,    -1,    -1,   217,    -1,    -1,   185,    -1,
      -1,   230,    -1,    -1,   228,    -1,    -1,   327,    -1,    -1,
     239,    -1,    -1,   243,    -1,    -1,   316,    -1,    -1,   247,
      -1,    -1,   250,    -1,    -1,   259,    -1,    -1,   261,    -1,
      -1,   265,    -1,    -1,   264,    -1,    -1,   364,    -1,    -1,
     284,    -1,    -1,   288,    -1,    -1,   290,    -1,    -1,   297,
      -1,    -1,   300,    -1,    -1,   302,    -1,    -1,   311,    -1,
      -1,   313,    -1,    -1,   322,    -1,    -1,   329,    -1,    74,
      -1,    47,    -1,     3,    -1,    -1,   366,    -1,   367,    -1,
     366,   367,    -1,    51,    -1,    50,    -1,    37,    -1,    49,
      -1,    42,    -1,     3,    -1,    56,    -1,    59,    -1,    52,
      -1,    74,    -1,    47,    -1,     3,    -1,    24,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   251,   251,   252,   253,   254,   255,   256,   260,   264,
     268,   272,   273,   276,   277,   279,   281,   285,   289,   291,
     295,   296,   301,   302,   303,   308,   310,   312,   314,   316,
     318,   320,   322,   324,   329,   331,   336,   337,   341,   343,
     345,   373,   377,   379,   384,   385,   387,   392,   394,   396,
     397,   398,   399,   400,   401,   402,   403,   404,   405,   406,
     407,   408,   412,   415,   419,   421,   426,   428,   430,   432,
     434,   436,   438,   440,   442,   444,   446,   448,   450,   452,
     454,   459,   467,   475,   477,   482,   487,   489,   497,   502,
     507,   508,   509,   513,   522,   530,   535,   540,   544,   549,
     554,   555,   557,   559,   561,   563,   565,   567,   568,   569,
     573,   578,   583,   588,   589,   591,   593,   598,   599,   601,
     606,   607,   609,   614,   615,   617,   619,   621,   623,   628,
     629,   631,   636,   637,   642,   643,   648,   649,   654,   655,
     660,   661,   666,   667,   672,   677,   679,   681,   683,   685,
     687,   689,   691,   693,   695,   697,   702,   703,   707,   711,
     715,   716,   717,   721,   722,   723,   724,   725,   726,   727,
     728,   729,   730,   734,   742,   744,   749,   753,   758,   763,
     768,   776,   780,   785,   790,   804,   808,   809,   813,   818,
     823,   824,   825,   826,   827,   828,   829,   833,   834,   838,
     840,   845,   853,   858,   860,   865,   873,   875,   880,   882,
     887,   888,   889,   890,   894,   899,   904,   911,   912,   916,
     920,   924,   926,   931,   939,   940,   941,   942,   943,   947,
     952,   957,   962,   964,   969,   974,   979,   984,   986,   991,
     997,  1006,  1008,  1013,  1022,  1027,  1032,  1040,  1048,  1053,
    1057,  1061,  1063,  1067,  1071,  1072,  1076,  1077,  1081,  1085,
    1089,  1090,  1093,  1094,  1098,  1099,  1100,  1101,  1102,  1106,
    1110,  1111,  1112,  1116,  1118,  1122,  1126,  1127,  1131,  1132,
    1133,  1134,  1135,  1136,  1137,  1138,  1139,  1140,  1141,  1145,
    1149,  1150,  1154,  1159,  1183,  1191,  1201,  1202,  1207,  1216,
    1217,  1222,  1223,  1227,  1231,  1232,  1233,  1237,  1246,  1247,
    1251,  1255,  1259,  1260,  1265,  1270,  1274,  1278,  1282,  1284,
    1289,  1290,  1294,  1298,  1302,  1303,  1307,  1308,  1309,  1313,
    1317,  1318,  1319,  1320,  1321,  1322,  1323,  1324,  1328,  1332,
    1333,  1334,  1335,  1336,  1337,  1338,  1339,  1340,  1341,  1342,
    1343,  1344,  1345,  1346,  1347,  1351,  1352,  1356,  1360,  1365,
    1366,  1370,  1374,  1378,  1382,  1386,  1390,  1391,  1395,  1399,
    1403,  1407,  1409,  1414,  1418,  1420,  1425,  1430,  1439,  1441,
    1446,  1447,  1451,  1455,  1459,  1463,  1464,  1468,  1469,  1470,
    1471,  1475,  1478,  1480,  1484,  1488,  1489,  1490,  1491,  1495,
    1499,  1503,  1507,  1511,  1512,  1516,  1517,  1521,  1522,  1526,
    1537,  1541,  1542,  1546,  1547,  1551,  1552,  1556,  1561,  1562,
    1566,  1567,  1568,  1586,  1587,  1591,  1602,  1604,  1609,  1615,
    1619,  1620,  1631,  1635,  1637,  1642,  1643,  1648,  1649,  1654,
    1655,  1660,  1661,  1666,  1667,  1672,  1673,  1678,  1679,  1684,
    1685,  1690,  1691,  1696,  1697,  1702,  1703,  1708,  1709,  1714,
    1715,  1718,  1720,  1723,  1725,  1728,  1730,  1733,  1735,  1738,
    1740,  1743,  1745,  1748,  1750,  1753,  1755,  1758,  1760,  1763,
    1765,  1768,  1770,  1773,  1775,  1778,  1780,  1785,  1786,  1789,
    1791,  1794,  1796,  1799,  1801,  1804,  1806,  1809,  1811,  1815,
    1816,  1819,  1820,  1821,  1823,  1825,  1829,  1830,  1834,  1835,
    1836,  1837,  1838,  1839,  1840,  1841,  1842,  1843,  1844,  1845,
    1846
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ABSTRACT_KW", "BASE_KW", "BOOL_KW",
  "BREAK_KW", "BYTE_KW", "CASE_KW", "CATCH_KW", "CHAR_KW", "CHECKED_KW",
  "CLASS_KW", "CONST_KW", "CONTINUE_KW", "DECIMAL_KW", "DEFAULT_KW",
  "DELEGATE_KW", "DO_KW", "DOUBLE_KW", "ELSE_KW", "ENUM_KW", "EVENT_KW",
  "EXPLICIT_KW", "EXTERN_KW", "FALSE_KW", "FINALLY_KW", "FIXED_KW",
  "FLOAT_KW", "FOR_KW", "FOREACH_KW", "GOTO_KW", "IF_KW", "IMPLICIT_KW",
  "IN_KW", "INT_KW", "INTERFACE_KW", "INTERNAL_KW", "IS_KW", "LOCK_KW",
  "LONG_KW", "NAMESPACE_KW", "NEW_KW", "NULL_KW", "OBJECT_KW",
  "OPERATOR_KW", "OUT_KW", "OVERRIDE_KW", "PARAMS_KW", "PRIVATE_KW",
  "PROTECTED_KW", "PUBLIC_KW", "READONLY_KW", "REF_KW", "RETURN_KW",
  "SBYTE_KW", "SEALED_KW", "SHORT_KW", "SIZEOF_KW", "STATIC_KW",
  "STRING_KW", "STRUCT_KW", "SWITCH_KW", "THIS_KW", "THROW_KW", "TRUE_KW",
  "TRY_KW", "TYPEOF_KW", "UINT_KW", "ULONG_KW", "UNCHECKED_KW",
  "UNSAFE_KW", "USHORT_KW", "USING_KW", "VIRTUAL_KW", "VOID_KW",
  "WHILE_KW", "SET_KW", "GET_KW", "EQ_OP", "NE_OP", "LE_OP", "GE_OP",
  "ANDCON_OP", "ORCON_OP", "INCR_OP", "DECR_OP", "LSHIFT_OP", "RSHIFT_OP",
  "PLUSEQ_OP", "MINUSEQ_OP", "MULTEQ_OP", "DIVEQ_OP", "MODEQ_OP",
  "ANDEQ_OP", "OREQ_OP", "NOTEQ_OP", "LSHIFTEQ_OP", "RSHIFTEQ_OP",
  "BOOLEAN_LITERAL", "INTEGER_LITERAL", "REAL_LITERAL",
  "CHARACTER_LITERAL", "STRING_LITERAL", "NULL_LITERAL", "IDENTIFIER",
  "','", "'('", "')'", "'.'", "'+'", "'-'", "'!'", "'~'", "'*'", "'&'",
  "'/'", "'%'", "'<'", "'>'", "'^'", "'|'", "'?'", "':'", "'='", "'{'",
  "'}'", "';'", "'['", "']'", "$accept", "literal", "namespace_name",
  "type_name", "namespace_or_type_name", "type", "non_array_type",
  "value_type", "struct_type", "simple_type", "numeric_type",
  "integral_type", "floating_point_type", "reference_type", "class_type",
  "variable_reference", "argument_list", "argument", "primary_expression",
  "simple_name", "parenthesized_expression", "member_access",
  "predefined_type", "invocation_expression", "element_access",
  "expression_list", "this_access", "base_access",
  "post_increment_expression", "post_decrement_expression",
  "new_expression", "object_creation_expression",
  "array_creation_expression", "delegate_creation_expression",
  "typeof_expression", "sizeof_expression", "checked_expression",
  "unchecked_expression", "unary_expression", "pre_increment_expression",
  "pre_decrement_expression", "cast_expression",
  "multiplicative_expression", "additive_expression", "shift_expression",
  "relational_expression", "equality_expression", "and_expression",
  "exclusive_or_expression", "inclusive_or_expression",
  "conditional_and_expression", "conditional_or_expression",
  "conditional_expression", "assignment", "assignment_operator",
  "expression", "constant_expression", "boolean_expression", "statement",
  "embedded_statement", "block", "statement_list", "empty_statement",
  "labeled_statement", "declaration_statement",
  "local_variable_declaration", "variable_declarators",
  "variable_declarator", "local_constant_declaration",
  "constant_declarators", "constant_declarator", "expression_statement",
  "statement_expression", "selection_statement", "if_statement",
  "switch_statement", "switch_block", "switch_sections", "switch_section",
  "switch_labels", "switch_label", "iteration_statement",
  "while_statement", "do_statement", "for_statement", "for_initializer",
  "for_condition", "for_iterator", "statement_expression_list",
  "foreach_statement", "jump_statement", "break_statement",
  "continue_statement", "goto_statement", "return_statement",
  "throw_statement", "try_statement", "catch_clauses",
  "specific_catch_clauses", "specific_catch_clause",
  "general_catch_clause", "finally_clause", "checked_statement",
  "unchecked_statement", "lock_statement", "compilation_unit",
  "namespace_declaration", "qualified_identifier", "namespace_body",
  "using_directives", "using_directive", "using_alias_directive",
  "using_namespace_directive", "namespace_member_declarations",
  "namespace_member_declaration", "type_declaration", "class_declaration",
  "class_base", "interface_type_list", "class_body",
  "class_member_declarations", "class_member_declaration",
  "constant_declaration", "field_declaration", "method_declaration",
  "method_header", "return_type", "member_name", "method_body",
  "formal_parameter_list", "formal_parameter", "parameter_modifier",
  "property_declaration", "accessor_declarations",
  "get_accessor_declaration", "set_accessor_declaration", "accessor_body",
  "event_declaration", "event_field_declaration",
  "event_property_declaration", "indexer_declaration",
  "indexer_declarator", "formal_index_parameter_list",
  "formal_index_parameter", "operator_declaration", "operator_modifiers",
  "operator_declarator", "unary_operator_declarator",
  "overloadable_unary_operator", "binary_operator_declarator",
  "overloadable_binary_operator", "conversion_operator_declarator",
  "constructor_declaration", "constructor_declarator",
  "constructor_initializer", "destructor_declaration",
  "static_constructor_declaration", "struct_declaration",
  "struct_interfaces", "struct_body", "struct_member_declarations",
  "struct_member_declaration", "array_type", "rank_specifiers",
  "rank_specifier", "dim_separators", "array_initializer",
  "variable_initializer_list", "variable_initializer",
  "interface_declaration", "interface_base", "interface_body",
  "interface_member_declarations", "interface_member_declaration",
  "interface_method_declaration", "OptNewKeyword",
  "interface_property_declaration", "interface_accessors",
  "interface_event_declaration", "interface_indexer_declaration",
  "enum_declaration", "enum_base", "enum_body", "enum_member_declarations",
  "enum_member_declaration", "delegate_declaration", "attributes",
  "attribute_sections", "attribute_section", "attribute_list", "attribute",
  "attribute_name", "attribute_arguments", "named_argument_list",
  "named_argument", "pointer_type", "unmanaged_type", "identifier",
  "dottedIdentifier", "blockExprList", "OptSemiColon",
  "dim_separators.Opt", "argument_list.Opt", "rank_specifiers.Opt",
  "array_initializer.Opt", "statement_list.Opt", "switch_sections.Opt",
  "for_initializer.Opt", "for_condition.Opt", "for_iterator.Opt",
  "expression.Opt", "general_catch_clause.Opt",
  "specific_catch_clauses.Opt", "identifier.Opt", "using_directives.Opt",
  "namespace_member_declarations.Opt", "attributes.Opt", "class_base.Opt",
  "class_member_declarations.Opt", "formal_parameter_list.Opt",
  "parameter_modifier.Opt", "set_accessor_declaration.Opt",
  "get_accessor_declaration.Opt", "accessor_modifier.Opt",
  "constructor_initializer.Opt", "struct_interfaces.Opt",
  "struct_member_declarations.Opt", "variable_initializer_list.Opt",
  "interface_base.Opt", "interface_member_declarations.Opt",
  "enum_base.Opt", "enum_member_declarations.Opt",
  "attribute_arguments.Opt", "blockExprList.Opt", "accessor_modifier",
  "unifiedModList.Opt", "unifiedModList", "unifiedModifiers", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,    44,    40,    41,    46,
      43,    45,    33,   126,    42,    38,    47,    37,    60,    62,
      94,   124,    63,    58,    61,   123,   125,    59,    91,    93
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   130,   131,   131,   131,   131,   131,   131,   132,   133,
     134,   135,   135,   136,   136,   136,   136,   137,   138,   138,
     139,   139,   140,   140,   140,   141,   141,   141,   141,   141,
     141,   141,   141,   141,   142,   142,   143,   143,   144,   144,
     144,   145,   146,   146,   147,   147,   147,   148,   148,   148,
     148,   148,   148,   148,   148,   148,   148,   148,   148,   148,
     148,   148,   149,   150,   151,   151,   152,   152,   152,   152,
     152,   152,   152,   152,   152,   152,   152,   152,   152,   152,
     152,   153,   154,   155,   155,   156,   157,   157,   158,   159,
     160,   160,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   168,   168,   168,   168,   168,   168,   168,   168,   168,
     169,   170,   171,   172,   172,   172,   172,   173,   173,   173,
     174,   174,   174,   175,   175,   175,   175,   175,   175,   176,
     176,   176,   177,   177,   178,   178,   179,   179,   180,   180,
     181,   181,   182,   182,   183,   184,   184,   184,   184,   184,
     184,   184,   184,   184,   184,   184,   185,   185,   186,   187,
     188,   188,   188,   189,   189,   189,   189,   189,   189,   189,
     189,   189,   189,   190,   191,   191,   192,   193,   194,   194,
     195,   196,   196,   197,   197,   198,   199,   199,   200,   201,
     202,   202,   202,   202,   202,   202,   202,   203,   203,   204,
     204,   205,   206,   207,   207,   208,   209,   209,   210,   210,
     211,   211,   211,   211,   212,   213,   214,   215,   215,   216,
     217,   218,   218,   219,   220,   220,   220,   220,   220,   221,
     222,   223,   223,   223,   224,   225,   226,   226,   226,   227,
     227,   228,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   237,   238,   239,   239,   240,   240,   241,   242,
     243,   243,   244,   244,   245,   245,   245,   245,   245,   246,
     247,   247,   247,   248,   248,   249,   250,   250,   251,   251,
     251,   251,   251,   251,   251,   251,   251,   251,   251,   252,
     199,   199,   200,   253,   254,   255,   256,   256,   257,   258,
     258,   259,   259,   260,   261,   261,   261,   262,   263,   263,
     264,   265,   266,   266,   267,   268,   269,   270,   271,   271,
     272,   272,   273,   274,   275,   275,   276,   276,   276,   277,
     278,   278,   278,   278,   278,   278,   278,   278,   279,   280,
     280,   280,   280,   280,   280,   280,   280,   280,   280,   280,
     280,   280,   280,   280,   280,   281,   281,   282,   283,   284,
     284,   285,   286,   287,   288,   289,   290,   290,   291,   292,
     136,   293,   293,   294,   295,   295,   296,   296,   297,   297,
     298,   298,   299,   300,   301,   302,   302,   303,   303,   303,
     303,   304,   305,   305,   306,   307,   307,   307,   307,   308,
     309,   310,   311,   312,   312,   313,   313,   314,   314,   315,
     316,   317,   317,   318,   318,   319,   319,   320,   321,   321,
     322,   322,   322,   323,   323,   324,   325,   325,   326,   327,
     328,   328,   329,   330,   330,   331,   331,   332,   332,   333,
     333,   334,   334,   335,   335,   336,   336,   337,   337,   338,
     338,   339,   339,   340,   340,   341,   341,   342,   342,   343,
     343,   344,   344,   345,   345,   346,   346,   347,   347,   348,
     348,   349,   349,   350,   350,   351,   351,   352,   352,   353,
     353,   354,   354,   355,   355,   356,   356,   357,   357,   358,
     358,   359,   359,   360,   360,   361,   361,   362,   362,   363,
     363,   364,   364,   364,   365,   365,   366,   366,   367,   367,
     367,   367,   367,   367,   367,   367,   367,   367,   367,   367,
     367
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     1,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     3,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     4,     2,     1,     3,     1,     3,     2,     2,     2,
       1,     1,     1,     5,     5,     5,     4,     4,     4,     4,
       1,     2,     2,     2,     2,     2,     2,     1,     1,     1,
       2,     2,     4,     1,     3,     3,     3,     1,     3,     3,
       1,     3,     3,     1,     3,     3,     3,     3,     3,     1,
       3,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     5,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     1,     2,     1,     3,     2,     2,
       2,     1,     3,     1,     3,     3,     1,     3,     3,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     5,
       7,     5,     3,     1,     2,     2,     1,     2,     3,     2,
       1,     1,     1,     1,     5,     7,     9,     1,     1,     1,
       1,     1,     3,     8,     1,     1,     1,     1,     1,     2,
       2,     3,     4,     3,     3,     3,     3,     3,     4,     2,
       2,     1,     2,     6,     2,     2,     2,     2,     5,     2,
       4,     1,     3,     4,     1,     2,     1,     1,     5,     3,
       1,     2,     1,     1,     1,     1,     1,     1,     1,     7,
       2,     2,     4,     1,     3,     3,     1,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     6,
       1,     3,     3,     5,     2,     7,     1,     1,     1,     1,
       1,     1,     3,     4,     1,     1,     1,     7,     2,     2,
       3,     3,     1,     1,     2,     6,     8,     6,     5,     7,
       1,     3,     3,     4,     2,     2,     1,     1,     1,     7,
       1,     1,     1,     1,     1,     1,     1,     1,    10,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     7,     7,     4,     5,     5,
       5,     6,     6,     7,     2,     3,     1,     2,     1,     2,
       1,     1,     2,     3,     1,     2,     3,     4,     1,     3,
       1,     1,     7,     2,     3,     1,     2,     1,     1,     1,
       1,     8,     0,     1,     7,     2,     2,     4,     4,     6,
      10,     7,     2,     3,     4,     1,     3,     2,     4,     9,
       1,     1,     2,     3,     4,     1,     3,     2,     1,     1,
       3,     5,     3,     1,     3,     3,     2,     2,     1,     1,
       1,     3,     3,     0,     1,     0,     1,     0,     1,     0,
       1,     0,     1,     0,     1,     0,     1,     0,     1,     0,
       1,     0,     1,     0,     1,     0,     1,     0,     1,     0,
       1,     0,     1,     0,     1,     0,     1,     0,     1,     0,
       1,     0,     1,     0,     1,     0,     1,     0,     1,     0,
       1,     0,     1,     0,     1,     0,     1,     0,     1,     0,
       1,     0,     1,     0,     1,     0,     1,     0,     1,     0,
       1,     1,     1,     1,     0,     1,     1,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
     461,     0,     0,   462,   254,   256,   257,   465,   429,     0,
     430,     8,     1,   255,     0,     0,   262,   465,   260,   263,
     264,   265,   266,   267,   268,   466,   410,   411,   249,   504,
     259,     0,     0,     0,   251,   419,     0,   415,   497,   418,
       9,   261,   412,   513,   520,   510,   512,   518,   511,   509,
     508,   516,   514,   515,   517,     0,   505,   506,     0,   430,
      10,   431,     0,   461,   433,     0,   413,     0,   498,   417,
       0,     0,     0,     0,     0,   507,   258,   252,   465,   434,
     250,   414,   416,     0,    66,    67,    68,     0,    69,    70,
      71,    72,    73,     0,    74,    75,    76,     0,    77,    85,
       0,    78,    79,     0,    80,     0,     0,     2,     3,     4,
       5,     6,     7,     0,     0,     0,     0,     0,     0,     0,
      47,   100,    48,    49,    50,     0,    51,    52,     0,    53,
      54,    55,    56,    57,    90,    91,    92,    58,    59,    60,
      61,   113,   107,   108,   109,   117,   120,   123,   129,   132,
     134,   136,   138,   140,   142,   156,   157,    83,     0,   423,
      62,   467,    21,    26,    33,    24,    35,    34,    29,    31,
      14,    25,    27,    15,    30,    32,    28,   297,    18,   296,
      11,    13,    17,    19,    20,    22,    23,     0,    12,    16,
       0,   493,   489,   483,     0,     0,     0,    87,     0,     0,
     370,    11,     9,     0,     0,     0,   110,    62,   111,    21,
      26,    33,    24,    35,    34,    29,    31,    14,    25,    27,
      15,    30,    32,    28,   370,     0,    62,   101,   102,   103,
     104,   105,   106,    88,    89,   437,     0,    82,     0,     0,
     420,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   145,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   422,     0,     0,   468,     0,   427,
     435,   369,   371,     0,   426,     0,   494,     0,     0,   490,
       0,     0,   484,     0,   253,    86,     0,     0,   437,   435,
     500,   439,     0,   370,   370,     0,     0,    63,     0,     0,
     438,    42,    44,     0,    64,    65,    84,     0,   144,   114,
     115,   116,   113,   118,   119,   121,   122,    39,    40,    38,
     370,   128,    36,    37,   126,   127,   124,   125,   130,   131,
     133,   135,   137,   139,   141,     0,   424,     0,   425,    39,
      40,    38,   270,   271,   465,   433,   374,   436,     0,   372,
     465,   402,   465,   433,   273,   383,   465,   433,   364,   465,
     433,     0,   432,    98,     0,   440,   441,     0,    97,    96,
      99,   112,    46,    41,    45,     0,    81,   421,     0,     0,
       0,   288,   465,   276,   278,   279,   280,     0,   281,   282,
     465,   283,   284,   285,   286,   287,   504,     0,   269,   375,
     373,   472,   301,   473,     0,   496,   405,     0,     0,   401,
     465,   385,   387,   388,   389,   390,   392,     0,   382,   368,
     465,   366,     0,   363,    93,   487,   442,    94,    95,    43,
     143,   272,   274,   277,   443,   300,   299,   294,   314,   504,
     508,   515,     0,     0,     0,   275,   465,   305,   306,   304,
     474,     0,     0,   465,   407,   403,   386,   393,     0,   384,
     367,   365,   380,   381,   488,   378,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   453,     0,   453,
       0,     0,     0,   176,   370,    51,    55,    56,    90,     0,
     107,   108,   192,   174,   162,   163,   444,   164,   160,   161,
       0,     0,   165,     0,   166,   197,   198,   167,   210,   211,
     212,   213,   168,   224,   225,   226,   227,   228,   169,   170,
     171,   172,    62,     0,     0,   324,   325,     0,     0,     0,
       0,   370,     0,   326,   327,   328,     0,     0,   370,     0,
       0,     0,   430,   302,   370,   409,   404,   406,     0,     0,
     370,     0,     0,   376,   229,   246,   370,   230,     0,   447,
       0,     0,     0,     0,     0,     0,   454,     0,     0,     0,
       0,   247,     0,   180,   181,   183,   175,   178,   179,   189,
       0,   173,     0,     0,     0,     0,     0,     0,   323,   370,
     370,     0,     0,     0,     0,   183,   298,     0,   298,   479,
     357,   465,   303,   158,   408,   370,     0,     0,     0,   377,
     379,   185,   186,     0,     0,   217,   221,   448,   218,     0,
     370,     0,   233,   231,   159,     0,     0,   234,     0,   235,
       0,     0,   236,   455,   241,   237,     0,     0,     0,     0,
     177,   370,     0,     0,   370,   370,   337,   336,   349,   350,
     354,   353,   334,   335,   347,   348,   330,   331,   332,   333,
     341,   344,   342,   343,   352,   351,   346,   345,     0,     0,
       0,     0,   465,     0,   293,   479,   465,   503,   502,   501,
       0,   475,   477,     0,   480,     0,     0,   465,     0,   465,
       0,     0,     0,     0,   449,     0,   232,     0,     0,     0,
       0,   245,   238,     0,   242,   456,   239,     0,   240,     0,
     182,   184,     0,   362,   361,     0,     0,     0,     0,   289,
     315,     0,   320,     0,     0,     0,     0,   317,   476,   308,
       0,   478,   309,     0,     0,     0,   481,   399,     0,     0,
       0,     0,     0,   187,   188,     0,   222,   219,   450,     0,
       0,   199,   248,   445,   201,    38,   459,   244,   214,   479,
     370,   370,   370,   370,   465,   318,   370,   465,   307,   295,
     313,   312,   311,   310,     0,   482,   358,     0,   396,   395,
     394,     0,     0,   451,     0,     0,     0,     0,   446,   203,
       0,   206,     0,   460,     0,     0,     0,     0,     0,     0,
     321,   322,     0,     0,     0,     0,     0,     0,   391,   215,
     452,   220,     0,     0,   200,     0,   209,   204,   205,   207,
     202,     0,   316,   356,   355,   329,     0,   319,   437,   437,
       0,   398,   397,     0,   223,   208,   243,   370,     0,     0,
     400,   216,     0,   359,   360,   338
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   120,     9,   178,    58,   494,   180,   181,   182,   183,
     184,   185,   186,   331,   332,   382,   310,   311,   121,   122,
     123,   124,   125,   126,   127,   296,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   252,   312,   614,   635,   503,   504,
     505,   506,   507,   508,   509,   510,   583,   584,   511,   621,
     622,   512,   513,   514,   515,   516,   764,   798,   799,   800,
     801,   517,   518,   519,   520,   627,   758,   820,   628,   521,
     522,   523,   524,   525,   526,   527,   528,   642,   643,   644,
     715,   645,   529,   530,   531,     2,    16,    33,    64,     3,
       4,     5,     6,    17,    18,   391,    20,   277,   353,   355,
     392,   429,   394,   395,   396,   397,   187,   604,   447,   411,
     412,   460,   398,   690,   691,   692,   782,   399,   400,   448,
     401,   550,   731,   732,   402,   453,   542,   543,   678,   544,
     679,   545,   403,   551,   785,   404,   405,    21,   292,   370,
     430,   431,   188,   281,   282,   357,   473,   474,   475,    22,
     289,   367,   420,   421,   422,   468,   423,   751,   424,   425,
      23,   286,   363,   415,   416,    24,    25,    26,    27,    36,
      37,    38,    68,   158,   159,   189,   190,   207,    40,   197,
      80,   358,   313,   376,   437,   533,   802,   629,   759,   822,
     577,   716,   646,   804,     7,    28,   413,   278,   407,   414,
     461,   739,   742,   693,   786,   293,   432,   476,   290,   427,
     287,   418,    69,   301,   694,    55,    56,    57
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -673
static const yytype_int16 yypact[] =
{
     -33,   -59,    68,   -33,  -673,  -673,  -673,    19,  -673,   -37,
     -21,    22,  -673,  -673,   -59,   -59,  -673,    10,  -673,  -673,
    -673,  -673,  -673,  -673,  -673,  -673,    48,  -673,  -673,   308,
    -673,   -59,   -59,   114,  -673,  -673,   -64,  -673,   127,    60,
      22,  -673,  -673,  -673,  -673,  -673,  -673,  -673,  -673,  -673,
    -673,  -673,  -673,  -673,  -673,   161,   308,  -673,    94,  -673,
      22,  -673,   -59,   -33,   130,   -38,  -673,  2008,  -673,  -673,
     -59,  2138,   -59,   -59,   -59,  -673,  -673,  -673,   -17,  -673,
    -673,  -673,  -673,    70,  -673,  -673,  -673,   134,  -673,  -673,
    -673,  -673,  -673,  2204,  -673,  -673,  -673,   155,  -673,  -673,
     167,  -673,  -673,   170,  -673,  2008,  2008,  -673,  -673,  -673,
    -673,  -673,  -673,  1784,  2008,  2008,  2008,  2008,  2008,  2008,
    -673,    55,  -673,  -673,  -673,   177,  -673,  -673,   148,  -673,
    -673,  -673,  -673,  -673,  -673,  -673,  -673,  -673,  -673,  -673,
    -673,   824,  -673,  -673,  -673,   136,   -36,   201,     3,   244,
     183,   198,   220,   246,   -35,  -673,  -673,  -673,   165,  -673,
     225,   228,  -673,  -673,  -673,  -673,  -673,  -673,  -673,  -673,
    -673,  -673,  -673,  -673,  -673,  -673,  -673,   229,  -673,   233,
     235,  -673,  -673,  -673,  -673,  -673,  -673,   -59,  -673,  -673,
     242,   249,   258,   267,   239,   -59,  2008,  -673,  2008,   229,
     286,   266,   171,  2204,  2204,  2008,  -673,  -673,  -673,   287,
     288,   290,   292,   294,   295,   296,   297,   298,   299,   301,
     302,   304,   306,   309,   313,   314,   312,  -673,  -673,  -673,
    -673,  -673,  -673,  -673,  -673,  1672,   -59,  -673,   -59,  2008,
    -673,  -673,  -673,  -673,  -673,  -673,  -673,  -673,  -673,  -673,
    -673,  -673,  2008,  2008,  2008,  2008,  2008,  2008,  2008,  2008,
    2223,  2008,  2008,  2008,  2008,  2008,  2008,  2008,  2008,  2008,
    2008,  2008,  2008,   -59,  -673,  2008,   -10,  -673,   270,  -673,
     317,   235,  -673,   319,  -673,   132,  -673,   277,   -59,  -673,
     300,   -59,  -673,   303,  -673,  -673,    29,   316,  1672,  1896,
    -673,   235,  2008,   324,   325,   326,  2008,  -673,  2008,  2008,
     321,  -673,  -673,   327,  -673,  -673,  -673,   176,  -673,  -673,
    -673,  -673,  -673,   136,   136,   -36,   -36,   320,   328,    52,
    -673,  -673,  -673,   329,   201,   201,   201,   201,     3,     3,
     244,   183,   198,   220,   246,   322,  -673,   225,  -673,  -673,
    -673,  -673,   330,   334,   157,   130,  -673,   335,   315,  -673,
      53,  -673,   184,   130,  -673,   334,   187,   130,   334,   188,
     130,  2008,  -673,  -673,   338,   235,   333,   341,  -673,  -673,
    -673,  -673,  -673,  -673,  -673,  1672,  -673,  -673,  2008,   -59,
     -59,  -673,   191,  -673,  -673,  -673,  -673,   203,  -673,  -673,
      48,  -673,  -673,  -673,  -673,  -673,   168,   339,  -673,  -673,
    -673,   348,  -673,   217,   351,   355,  -673,   -59,   342,  -673,
     207,  -673,  -673,  -673,  -673,  -673,   422,   343,  -673,  -673,
     208,  -673,   344,  -673,  -673,  1560,  -673,  -673,  -673,  -673,
    -673,   334,  -673,  -673,  1211,  -673,  -673,  -673,  -673,   308,
     412,    -3,   -59,  1002,   921,  -673,    48,  -673,  -673,  -673,
    -673,  2204,   345,   211,   349,  -673,  -673,  -673,  2119,  -673,
    -673,  -673,  -673,  -673,   369,  -673,   353,   354,   101,  2204,
     357,  1335,   373,   378,    12,   379,   380,  2008,   381,  2008,
     365,   104,   387,  -673,   -59,   -51,   -50,    21,    57,   824,
      69,    87,  -673,  -673,  -673,  -673,  1211,  -673,  -673,  -673,
     368,   370,  -673,   371,  -673,  -673,  -673,  -673,  -673,  -673,
    -673,  -673,  -673,  -673,  -673,  -673,  -673,  -673,  -673,  -673,
    -673,  -673,   102,   375,   474,  -673,  -673,   395,   396,   459,
     461,   462,   365,  -673,  -673,  -673,  2204,  2204,   -25,   -59,
     383,   365,   402,  -673,   -59,  -673,  -673,  -673,  2008,  2204,
     -16,   -59,  1448,  -673,  -673,  -673,   -59,  -673,   434,  1784,
    2204,  2008,   384,   385,  2008,  2008,  -673,   386,  2008,   388,
     219,  -673,  2008,   414,  -673,   394,  -673,  -673,  -673,  -673,
    1211,  -673,  2204,   413,   416,  2204,  2204,   557,  -673,   -59,
     -59,   399,   419,   -44,   404,   122,    22,   423,    22,    34,
    -673,    53,  -673,  -673,  -673,   -59,   403,   407,   426,  -673,
    -673,   428,  -673,   411,   430,  -673,  -673,  -673,   432,   415,
     -59,   429,  -673,  -673,  -673,   431,   433,  -673,   435,  -673,
     448,   365,   514,   552,  -673,  -673,   554,   456,   -59,  1560,
    -673,   -59,   365,   365,   460,   464,  -673,  -673,  -673,  -673,
    -673,  -673,  -673,  -673,  -673,  -673,  -673,  -673,  -673,  -673,
    -673,  -673,  -673,  -673,  -673,  -673,  -673,  -673,   465,   466,
      43,    79,    48,   503,  -673,    34,    53,  -673,  -673,  -673,
     450,    49,    32,   269,  -673,   469,   447,    48,   293,    53,
     -59,  2008,  2008,  2008,  2008,   544,  -673,  1335,  1335,   454,
     -10,  -673,  -673,   105,  -673,  -673,  -673,   365,  -673,  1335,
    -673,  -673,   463,  -673,  -673,  2204,  2204,  2204,  2204,  -673,
    -673,    31,  -673,  2204,   453,   458,   477,  -673,  -673,  -673,
     509,  -673,  -673,   518,   215,   215,   479,  -673,    45,   470,
     473,   480,   484,  -673,  -673,   495,  -673,  -673,  -673,   478,
    2008,   567,  -673,   116,  -673,  -673,   -59,  -673,  -673,    34,
     -59,   -59,   -59,   -59,    48,  -673,   -59,    48,  -673,  -673,
    -673,  -673,  -673,  -673,    41,  -673,  -673,   483,   531,   533,
    -673,   485,   486,  2008,   507,  1335,  2008,   488,   116,  -673,
    1087,  -673,   490,  -673,   510,   493,   513,   515,   516,   519,
    -673,  -673,    62,   523,   524,   293,   505,   506,  -673,  -673,
    -673,   432,   526,  1335,  -673,   512,  -673,  -673,  1211,  -673,
    -673,   365,  -673,  -673,  -673,  -673,  2204,  -673,  1672,  1672,
     520,  -673,  -673,  1335,  -673,  -673,  -673,   -59,   532,   541,
    -673,  -673,   543,  -673,  -673,  -673
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -673,  -673,  -673,   -12,  -673,   -70,   560,  -673,  -673,  -673,
    -673,   374,  -673,  -673,  -272,   352,  -673,   275,  -673,  -673,
    -673,  -673,  -673,  -381,  -673,   587,  -673,  -673,   -15,    -7,
    -673,    11,  -673,  -673,  -673,  -673,  -673,  -673,    38,   160,
     204,  -673,   117,   121,     5,   110,   397,   418,   393,   409,
     410,  -673,  -673,   261,  -673,   318,  -556,  -574,  -497,  -475,
    -392,  -135,  -673,  -673,  -673,   111,  -512,    35,  -673,    85,
     -13,  -673,  -557,  -673,  -673,  -673,  -673,  -673,  -108,  -673,
    -109,  -673,  -673,  -673,  -673,  -673,  -673,  -673,   -99,  -673,
    -673,  -673,  -673,  -673,  -673,  -673,  -673,  -673,  -673,    59,
      61,    66,  -673,  -673,  -673,  -673,  -673,  -673,  -673,  -673,
     692,  -673,  -673,  -673,   686,    37,  -673,  -673,  -270,  -673,
    -673,  -295,  -673,  -673,  -673,  -673,  -255,  -533,  -673,  -673,
     255,  -673,  -673,  -656,    23,    25,   -32,  -673,  -673,  -673,
    -673,  -673,  -672,   -57,  -673,  -673,  -673,  -673,  -673,  -673,
    -673,  -673,  -673,  -673,  -673,  -673,  -673,  -673,  -673,  -673,
    -673,   291,   468,   421,  -259,  -673,   347,  -673,  -529,  -673,
    -673,  -673,  -673,   311,  -673,  -673,  -673,   -95,  -673,  -673,
    -673,  -673,  -673,  -673,   271,  -673,  -673,  -673,   707,  -673,
     670,  -673,  -673,   497,   467,  -673,  -673,    -1,     1,   -94,
    -112,  -673,  -287,  -673,  -673,  -673,  -673,  -673,  -673,  -673,
     248,  -673,  -673,  -673,   675,   661,     0,  -673,  -673,  -585,
    -673,  -673,  -673,  -305,  -673,  -673,  -673,  -673,  -673,  -673,
    -673,  -673,  -673,  -673,  -673,  -367,  -673,   687
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -496
static const yytype_int16 yytable[] =
{
      10,   179,    11,    35,   352,   446,   568,    29,   647,   586,
    -464,   374,   626,    34,    39,   631,   607,    29,   365,  -463,
     571,   368,   359,   200,    14,   748,   695,   237,   572,   735,
      59,    61,    60,   620,   349,   687,   603,   687,   601,   454,
       1,   260,    65,   224,    19,   813,     8,   616,   536,   271,
     350,    14,   687,    35,    19,  -190,  -193,  -190,  -193,   393,
      14,    77,   648,   495,    39,    66,   160,     8,    12,   161,
      59,   191,   192,   193,   256,   257,  -190,  -193,    29,   688,
       8,   688,   534,   684,   261,   262,   565,   272,   681,     8,
      30,    81,    59,   650,   202,     8,   688,   443,   580,   581,
     495,   736,     8,    31,   814,   812,   689,   300,   689,  -463,
    -479,    15,   226,   805,   752,    19,   359,     8,   722,   441,
     721,   263,   264,   689,   796,   495,  -479,  -194,   755,  -194,
     757,    32,   797,   303,   304,   371,  -464,   774,    15,   163,
     233,   234,   164,   206,   208,   754,   756,    15,  -194,   700,
     598,   774,   227,   228,   229,   230,   231,   232,   372,   610,
     775,  -471,   235,  -191,   236,  -191,   -18,   168,   774,  -430,
     729,    43,   169,    70,   787,  -195,    15,  -195,    71,   195,
     -18,    15,    72,   196,  -191,   648,   283,   171,   495,   172,
     330,   837,    44,  -196,   295,  -196,  -195,    73,   196,   549,
     174,   175,    59,    59,   176,    45,   730,  -430,   198,   495,
      46,   205,   710,   561,  -196,    47,  -430,    48,    49,   450,
      51,    76,    74,    62,    52,   590,   444,   451,   640,   444,
     444,  -430,   761,   762,    67,   314,   626,   315,   160,    63,
     825,   198,    54,   408,   768,   641,   649,  -430,   329,   711,
     253,   419,   254,   255,   239,   428,   240,    79,   433,    59,
     723,   724,   203,   457,   351,   458,   334,   335,   336,   337,
     459,   273,   347,   274,   204,    59,   364,   205,   302,   364,
      32,   452,   273,  -469,   387,    15,   238,    59,   258,   259,
      59,   319,   320,   321,   322,   322,   322,   322,   267,   322,
     322,   322,   322,   322,   322,   322,   322,   322,   322,   322,
    -495,    43,    15,  -491,  -485,    15,    15,  -470,   268,    15,
     824,   767,   495,   265,   266,   767,   495,   495,   444,   270,
     445,   586,    44,  -492,  -486,    15,    15,   556,   495,    15,
     444,   269,   780,   279,   381,    45,   744,   745,   844,   275,
      46,   276,   781,   781,   406,    47,   284,    48,    49,    50,
      51,  -370,   417,   280,    52,   294,   426,    53,   851,   406,
     749,   750,   285,   323,   324,   338,   339,   364,   442,   325,
     326,   288,    54,   541,   548,   157,   740,   743,    59,    59,
     291,   554,   406,   298,   299,   354,   -66,   -67,   560,   -68,
     449,   -69,   362,   -70,   -71,   -72,   -73,   -74,   -75,   566,
     -76,   -77,   495,   -78,   495,   -79,   464,  -430,   -80,   495,
     426,   306,   307,   356,   373,   366,   360,   385,   369,   496,
     406,   225,   378,   379,   380,   386,   389,   497,   766,   846,
     390,   409,   495,   532,   410,   388,   434,   495,   -14,   438,
     537,   538,    59,   552,   456,   498,   -15,   -12,   435,   462,
      59,   463,   495,   417,   467,   455,   496,    59,   465,   469,
     471,   535,   555,   558,   497,   562,   599,   600,    59,   563,
     569,   564,   499,   573,   567,   570,   574,   575,   578,   615,
     444,   496,   498,   585,   582,   587,   592,   588,   589,   497,
     630,   591,   593,   594,   595,   532,   596,   597,   609,   611,
     624,   632,   633,   637,   157,   639,   297,   498,   649,   499,
     648,   652,   651,   305,   653,   654,   655,   682,   683,   685,
     686,   697,   698,   699,   700,   701,   602,   702,   703,   707,
     641,   708,   704,   709,   499,    59,    59,   605,    59,   606,
     608,   848,   849,   612,   496,   710,   706,   316,    59,   617,
     618,   713,   497,   717,   719,   623,   734,   725,   226,    59,
     318,   726,   727,   728,   747,   496,   737,   746,   760,   763,
     498,   777,   656,   497,   778,   779,   744,   795,   769,   532,
     345,    59,   791,   348,    59,    59,   745,   788,   623,   585,
     789,   498,   784,   792,   500,   793,   790,   499,   815,   816,
     817,   826,   818,   819,   696,   823,   830,   157,   831,   832,
     377,   833,   657,   834,   835,   836,   383,   383,   499,   705,
     838,   839,   841,   842,   843,   845,   658,   659,   660,   661,
     853,   500,   662,   663,   664,   665,   850,   585,   501,   854,
      59,   855,   608,   201,   128,   770,   771,   772,   773,   361,
     439,   384,   342,   776,   340,   828,   500,   666,   667,   668,
     669,   670,   671,   672,   673,   674,   675,   676,   677,   343,
     625,   344,   733,   720,   680,   501,   341,   753,   496,   316,
     827,   829,   496,   496,   821,    13,   497,   733,   765,   623,
     497,   497,   714,    41,   496,   502,   440,   718,   712,    59,
     501,   553,   497,   783,   498,   741,   738,   810,   498,   498,
     840,   470,   375,   436,    59,    59,    59,    59,   333,   500,
     498,   466,    59,    42,   557,    82,   317,   579,    78,   194,
     346,   499,   502,    75,     0,   499,   499,     0,     0,     0,
     500,     0,     0,   472,     0,     0,     0,   499,     0,     0,
       0,     0,     0,     0,     0,   803,   847,   502,     0,   806,
     807,   808,   809,   501,   733,   811,     0,   733,   496,     0,
     496,     0,     0,     0,     0,   496,   497,     0,   497,     0,
       0,     0,     0,   497,   501,     0,     0,     0,     0,   532,
       0,     0,     0,     0,   498,   576,   498,   576,   496,     0,
       0,   498,     0,   496,     0,     0,   497,     0,     0,     0,
       0,   497,     0,     0,     0,     0,     0,   532,   496,     0,
     502,   499,     0,   499,   498,    59,   497,     0,   499,   498,
       0,     0,     0,     0,     0,     0,   852,     0,     0,     0,
       0,   502,     0,     0,   498,     0,     0,     0,     0,     0,
       0,   499,     0,   500,     0,     0,   499,   500,   500,     0,
       0,     0,     0,     0,     0,     0,   613,     0,     0,   500,
     472,   499,     0,     0,     0,     0,     0,     0,     0,   613,
       0,     0,   634,   636,     0,     0,   638,     0,     0,     0,
     634,     0,     0,     0,     0,     0,     0,   501,     0,     0,
       0,   501,   501,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   501,     0,     0,   162,     0,   163,     0,
       0,   164,     0,    70,   546,     0,   165,     0,    71,     0,
     166,     0,    72,   547,     0,     0,     0,     0,   251,   167,
       0,     0,     0,   500,     0,   500,   168,    73,     0,     0,
     500,   169,     0,     0,   502,   170,     0,   472,   502,   502,
       0,     0,     0,     0,     0,     0,   171,     0,   172,     0,
     502,   173,    74,   500,     0,     0,     0,     0,   500,   174,
     175,     0,     0,   176,     0,     0,   177,   501,     0,   501,
       0,     0,     0,   500,   501,     0,     0,   162,     0,   163,
       0,     0,   164,     0,     0,     0,     0,   165,     0,   613,
     634,   166,   634,     0,     0,   539,     8,   501,     0,     0,
     167,     0,   501,     0,     0,   540,     0,   168,     0,     0,
       0,     0,   169,     0,     0,     0,   170,   501,     0,     0,
       0,     0,     0,     0,   502,     0,   502,   171,     0,   172,
       0,   502,   173,     0,     0,     0,     0,     0,     0,     0,
     174,   175,     0,     0,   176,     0,     0,   199,   794,     0,
       0,     0,     0,     0,   502,     0,     0,     0,     0,   502,
       0,    83,   209,   477,   210,   796,     0,   211,   478,     0,
     479,   480,   212,   797,   502,   481,   213,     8,     0,     0,
       0,     0,     0,     0,   613,   214,   482,   483,   484,   485,
       0,     0,   215,     0,     0,     0,   486,   216,     0,    93,
       0,   217,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   487,   218,     0,   219,    97,     0,   220,     0,   488,
      99,   489,     0,   490,   100,   221,   222,   491,     0,   223,
       0,     0,   199,   492,     0,     0,     0,     0,     0,     0,
       0,     0,   105,   106,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   107,   108,   109,   110,
     111,   112,     8,     0,   113,     0,     0,   114,   115,   116,
     117,   118,   119,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   444,     0,   493,    83,   209,   477,   210,     0,
       0,   211,   478,     0,   479,   480,   212,     0,     0,   481,
     213,     0,     0,     0,     0,     0,     0,     0,     0,   214,
     482,   483,   484,   485,     0,     0,   215,     0,     0,     0,
     486,   216,     0,    93,     0,   217,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   487,   218,     0,   219,    97,
       0,   220,     0,   488,    99,   489,     0,   490,   100,   221,
     222,   491,     0,   223,     0,     0,   199,   492,     0,     0,
       0,     0,     0,     0,     0,     0,   105,   106,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     107,   108,   109,   110,   111,   112,     8,     0,   113,     0,
       0,   114,   115,   116,   117,   118,   119,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   444,     0,   493,    83,
      84,   477,    85,     0,     0,    86,   478,     0,     0,   480,
      88,     0,     0,   481,    89,     0,     0,     0,     0,     0,
       0,     0,     0,    90,   482,   483,   484,   485,     0,     0,
      91,     0,     0,     0,   486,    92,     0,    93,     0,    94,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   487,
      95,     0,    96,    97,     0,    98,     0,   488,    99,   489,
       0,   490,   100,   101,   102,   491,     0,   104,     0,     0,
       0,   492,     0,     0,     0,     0,     0,     0,     0,     0,
     105,   106,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   107,   108,   109,   110,   111,   112,
       8,     0,   113,     0,     0,   114,   115,   116,   117,   118,
     119,     0,    83,    84,     0,    85,     0,     0,    86,    87,
     444,     0,   493,    88,     0,     0,     0,    89,     0,     0,
       0,     0,     0,     0,     0,     0,    90,     0,     0,     0,
       0,     0,     0,    91,     0,     0,     0,     0,    92,     0,
      93,     0,    94,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    95,     0,    96,    97,     0,    98,     0,
       0,    99,     0,     0,     0,   100,   101,   102,   103,     0,
     104,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   105,   106,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   107,   108,   109,
     110,   111,   112,     8,     0,   113,     0,     0,   114,   115,
     116,   117,   118,   119,    83,    84,     0,    85,     0,     0,
      86,    87,     0,   435,   619,    88,     0,     0,     0,    89,
       0,     0,     0,     0,     0,     0,     0,     0,    90,     0,
       0,     0,     0,     0,     0,    91,     0,     0,     0,     0,
      92,     0,    93,     0,    94,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    95,     0,    96,    97,     0,
      98,     0,     0,    99,     0,     0,     0,   100,   101,   102,
     103,     0,   104,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   105,   106,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   107,
     108,   109,   110,   111,   112,     8,     0,   113,     0,     0,
     114,   115,   116,   117,   118,   119,    83,    84,     0,    85,
       0,     0,    86,    87,     0,   435,     0,    88,     0,     0,
       0,    89,     0,     0,     0,     0,     0,     0,     0,     0,
      90,     0,     0,     0,     0,     0,     0,    91,     0,     0,
       0,     0,    92,     0,    93,     0,    94,     0,   308,     0,
       0,     0,     0,     0,     0,   309,     0,    95,     0,    96,
      97,     0,    98,     0,     0,    99,     0,     0,     0,   100,
     101,   102,   103,     0,   104,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   105,   106,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   107,   108,   109,   110,   111,   112,     8,     0,   113,
       0,     0,   114,   115,   116,   117,   118,   119,    83,   209,
       0,   210,     0,     0,   211,    87,     0,     0,     0,   212,
       0,     0,     0,   213,     0,     0,     0,     0,     0,     0,
       0,     0,   214,     0,     0,     0,     0,     0,     0,   215,
       0,     0,     0,     0,   216,     0,    93,     0,   217,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   218,
       0,   219,    97,     0,   220,     0,     0,    99,     0,     0,
       0,   100,   221,   222,   103,     0,   223,     0,     0,   199,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   105,
     106,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   107,   108,   109,   110,   111,   112,     8,
       0,   113,     0,     0,   114,   115,   116,   117,   118,   119,
      83,    84,     0,    85,     0,     0,    86,    87,     0,     0,
       0,    88,     0,     0,     0,    89,     0,     0,     0,     0,
       0,     0,     0,     0,    90,     0,     0,     0,     0,     0,
       0,    91,     0,     0,     0,     0,    92,     0,    93,     0,
      94,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    95,     0,    96,    97,     0,    98,     0,     0,    99,
       0,     0,     0,   100,   101,   102,   103,     0,   104,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   105,   106,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   107,   108,   109,   110,   111,
     112,     8,   356,   113,     0,     0,   114,   115,   116,   117,
     118,   119,    83,    84,     0,    85,     0,     0,    86,    87,
       0,     0,     0,    88,     0,     0,     0,    89,     0,     0,
       0,     0,     0,     0,     0,     0,    90,     0,     0,     0,
       0,     0,     0,    91,     0,     0,     0,     0,    92,     0,
      93,     0,    94,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    95,     0,    96,    97,     0,    98,     0,
       0,    99,     0,     0,     0,   100,   101,   102,   103,     0,
     104,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   105,   106,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   107,   108,   109,
     110,   111,   112,     8,     0,   113,     0,     0,   114,   115,
     116,   117,   118,   119,   162,     0,   163,     0,     0,   164,
       0,     0,     0,     0,   165,     0,     0,     0,   166,     0,
       0,   559,     0,   162,     0,   163,     0,   167,   164,     0,
       0,     0,     0,   165,   168,     0,     0,   166,     0,   169,
       0,     0,     0,   170,     0,     0,   167,     0,     0,     0,
       0,     0,     0,   168,   171,     0,   172,     0,   169,   173,
       0,     0,   170,     0,     0,     0,     0,   174,   175,     0,
       0,   176,     0,   171,   177,   172,     0,     0,   173,     0,
       0,     0,     0,     0,     0,     0,   174,   175,     0,   162,
     176,   163,     0,   177,   164,     0,     0,     0,     0,   165,
       0,     0,     0,   166,     8,     0,     0,     0,   162,     0,
     163,     0,   167,   164,     0,     0,     0,     0,   165,   168,
       0,     0,   166,     8,   169,     0,     0,     0,   170,     0,
       0,   167,     0,     0,     0,     0,     0,     0,   168,   171,
       0,   172,     0,   169,   173,     0,     0,   327,     0,     0,
       0,     0,   174,   175,     0,     0,   176,     0,   171,   199,
     172,     0,     0,   328,     0,     0,     0,     0,     0,     0,
       0,   174,   175,     0,     0,   176,     0,     0,   199,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     8,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     8
};

static const yytype_int16 yycheck[] =
{
       1,    71,     1,    15,   276,   397,   481,     7,   582,   506,
       0,   298,   569,    14,    15,   571,   549,    17,   288,     0,
       8,   291,   281,    93,    41,   697,   611,   121,    16,   685,
      31,    32,    31,   562,    44,     3,   548,     3,    63,   406,
      73,    38,   106,   113,     7,     4,   105,    63,    51,    84,
      60,    41,     3,    65,    17,   106,   106,   108,   108,   354,
      41,    62,   106,   444,    65,   129,    67,   105,     0,    70,
      71,    72,    73,    74,   110,   111,   127,   127,    78,    47,
     105,    47,   449,   127,    81,    82,   478,   122,   600,   105,
     127,   129,    93,   590,    93,   105,    47,   392,   490,   491,
     481,   686,   105,   124,    63,   777,    74,   201,    74,   126,
      78,   128,   113,   769,   699,    78,   375,   105,   651,   389,
     649,   118,   119,    74,     8,   506,    77,   106,   702,   108,
     704,   109,    16,   203,   204,   106,   126,   106,   128,     7,
      85,    86,    10,   105,   106,   701,   703,   128,   127,   106,
     542,   106,   114,   115,   116,   117,   118,   119,   129,   551,
     129,   108,   107,   106,   109,   108,   114,    35,   106,   109,
     127,     3,    40,    12,   129,   106,   128,   108,    17,   109,
     128,   128,    21,   128,   127,   106,   187,    55,   569,    57,
     260,   129,    24,   106,   195,   108,   127,    36,   128,   454,
      68,    69,   203,   204,    72,    37,   127,   105,   107,   590,
      42,   107,   107,   468,   127,    47,   114,    49,    50,    51,
      52,   127,    61,   109,    56,   123,   125,    59,     9,   125,
     125,   109,   707,   708,   107,   236,   793,   238,   239,   125,
     796,   107,    74,   355,   719,    26,   124,   125,   260,   641,
     114,   363,   116,   117,   106,   367,   108,   127,   370,   260,
     652,   653,   107,    46,   276,    48,   261,   262,   263,   264,
      53,   106,   273,   108,   107,   276,   288,   107,   107,   291,
     109,   113,   106,   126,   108,   128,   109,   288,    87,    88,
     291,   253,   254,   255,   256,   257,   258,   259,   115,   261,
     262,   263,   264,   265,   266,   267,   268,   269,   270,   271,
     126,     3,   128,   126,   126,   128,   128,   126,   120,   128,
     795,   713,   703,    79,    80,   717,   707,   708,   125,    83,
     127,   828,    24,   126,   126,   128,   128,   126,   719,   128,
     125,   121,   127,   114,   306,    37,    77,    78,   823,   124,
      42,   123,   744,   745,   354,    47,   114,    49,    50,    51,
      52,   128,   362,   128,    56,   126,   366,    59,   843,   369,
      77,    78,   123,   256,   257,   265,   266,   389,   390,   258,
     259,   123,    74,   453,   454,    67,   691,   692,   389,   390,
     123,   461,   392,   107,   128,   125,   109,   109,   468,   109,
     400,   109,   125,   109,   109,   109,   109,   109,   109,   479,
     109,   109,   793,   109,   795,   109,   417,   105,   109,   800,
     420,   108,   108,   106,   108,   125,   107,   106,   125,   444,
     430,   113,   108,   108,   108,   108,   106,   444,   710,   831,
     106,   106,   823,   444,   129,   123,   108,   828,   128,   108,
     451,   452,   453,   454,   106,   444,   128,   128,   125,   108,
     461,   106,   843,   463,    42,   126,   481,   468,   126,   126,
     126,    59,   127,   124,   481,   106,   546,   547,   479,   126,
     107,   127,   444,   484,   127,   107,   107,   107,   107,   559,
     125,   506,   481,   494,   107,   127,    22,   127,   127,   506,
     570,   126,   107,   107,    45,   506,    45,    45,   125,   107,
      76,   127,   127,   127,   196,   127,   198,   506,   124,   481,
     106,   108,   592,   205,   108,   595,   596,   128,   109,   125,
     107,   128,   125,   107,   106,   124,   548,   107,   106,   108,
      26,   108,   127,   108,   506,   546,   547,   548,   549,   548,
     549,   838,   839,   554,   569,   107,   127,   239,   559,   560,
     561,     9,   569,     9,   108,   566,    63,   107,   569,   570,
     252,   107,   107,   107,   127,   590,   126,   108,    34,   125,
     569,   128,    25,   590,   126,   108,    77,    20,   125,   590,
     272,   592,   108,   275,   595,   596,    78,   127,   599,   600,
     127,   590,   123,   108,   444,   127,   126,   569,   125,    78,
      77,   123,   127,   127,   615,   108,   126,   299,   108,   126,
     302,   108,    65,   108,   108,   106,   308,   309,   590,   630,
     107,   107,   127,   127,   108,   123,    79,    80,    81,    82,
     108,   481,    85,    86,    87,    88,   126,   648,   444,   108,
     651,   108,   651,    93,    67,   725,   726,   727,   728,   285,
     385,   309,   269,   733,   267,   800,   506,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   270,
     569,   271,   682,   648,   599,   481,   268,   700,   703,   371,
     798,   800,   707,   708,   793,     3,   703,   697,   710,   700,
     707,   708,   643,    17,   719,   444,   388,   646,   642,   710,
     506,   456,   719,   745,   703,   692,   691,   774,   707,   708,
     815,   430,   301,   376,   725,   726,   727,   728,   260,   569,
     719,   420,   733,    26,   463,    65,   239,   489,    63,    78,
     273,   703,   481,    56,    -1,   707,   708,    -1,    -1,    -1,
     590,    -1,    -1,   435,    -1,    -1,    -1,   719,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   766,   836,   506,    -1,   770,
     771,   772,   773,   569,   774,   776,    -1,   777,   793,    -1,
     795,    -1,    -1,    -1,    -1,   800,   793,    -1,   795,    -1,
      -1,    -1,    -1,   800,   590,    -1,    -1,    -1,    -1,   800,
      -1,    -1,    -1,    -1,   793,   487,   795,   489,   823,    -1,
      -1,   800,    -1,   828,    -1,    -1,   823,    -1,    -1,    -1,
      -1,   828,    -1,    -1,    -1,    -1,    -1,   828,   843,    -1,
     569,   793,    -1,   795,   823,   836,   843,    -1,   800,   828,
      -1,    -1,    -1,    -1,    -1,    -1,   847,    -1,    -1,    -1,
      -1,   590,    -1,    -1,   843,    -1,    -1,    -1,    -1,    -1,
      -1,   823,    -1,   703,    -1,    -1,   828,   707,   708,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   558,    -1,    -1,   719,
     562,   843,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   571,
      -1,    -1,   574,   575,    -1,    -1,   578,    -1,    -1,    -1,
     582,    -1,    -1,    -1,    -1,    -1,    -1,   703,    -1,    -1,
      -1,   707,   708,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,   719,    -1,    -1,     5,    -1,     7,    -1,
      -1,    10,    -1,    12,    13,    -1,    15,    -1,    17,    -1,
      19,    -1,    21,    22,    -1,    -1,    -1,    -1,   124,    28,
      -1,    -1,    -1,   793,    -1,   795,    35,    36,    -1,    -1,
     800,    40,    -1,    -1,   703,    44,    -1,   649,   707,   708,
      -1,    -1,    -1,    -1,    -1,    -1,    55,    -1,    57,    -1,
     719,    60,    61,   823,    -1,    -1,    -1,    -1,   828,    68,
      69,    -1,    -1,    72,    -1,    -1,    75,   793,    -1,   795,
      -1,    -1,    -1,   843,   800,    -1,    -1,     5,    -1,     7,
      -1,    -1,    10,    -1,    -1,    -1,    -1,    15,    -1,   701,
     702,    19,   704,    -1,    -1,    23,   105,   823,    -1,    -1,
      28,    -1,   828,    -1,    -1,    33,    -1,    35,    -1,    -1,
      -1,    -1,    40,    -1,    -1,    -1,    44,   843,    -1,    -1,
      -1,    -1,    -1,    -1,   793,    -1,   795,    55,    -1,    57,
      -1,   800,    60,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      68,    69,    -1,    -1,    72,    -1,    -1,    75,   760,    -1,
      -1,    -1,    -1,    -1,   823,    -1,    -1,    -1,    -1,   828,
      -1,     4,     5,     6,     7,     8,    -1,    10,    11,    -1,
      13,    14,    15,    16,   843,    18,    19,   105,    -1,    -1,
      -1,    -1,    -1,    -1,   796,    28,    29,    30,    31,    32,
      -1,    -1,    35,    -1,    -1,    -1,    39,    40,    -1,    42,
      -1,    44,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    54,    55,    -1,    57,    58,    -1,    60,    -1,    62,
      63,    64,    -1,    66,    67,    68,    69,    70,    -1,    72,
      -1,    -1,    75,    76,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    85,    86,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    99,   100,   101,   102,
     103,   104,   105,    -1,   107,    -1,    -1,   110,   111,   112,
     113,   114,   115,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   125,    -1,   127,     4,     5,     6,     7,    -1,
      -1,    10,    11,    -1,    13,    14,    15,    -1,    -1,    18,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    28,
      29,    30,    31,    32,    -1,    -1,    35,    -1,    -1,    -1,
      39,    40,    -1,    42,    -1,    44,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    54,    55,    -1,    57,    58,
      -1,    60,    -1,    62,    63,    64,    -1,    66,    67,    68,
      69,    70,    -1,    72,    -1,    -1,    75,    76,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    85,    86,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      99,   100,   101,   102,   103,   104,   105,    -1,   107,    -1,
      -1,   110,   111,   112,   113,   114,   115,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   125,    -1,   127,     4,
       5,     6,     7,    -1,    -1,    10,    11,    -1,    -1,    14,
      15,    -1,    -1,    18,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    28,    29,    30,    31,    32,    -1,    -1,
      35,    -1,    -1,    -1,    39,    40,    -1,    42,    -1,    44,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    54,
      55,    -1,    57,    58,    -1,    60,    -1,    62,    63,    64,
      -1,    66,    67,    68,    69,    70,    -1,    72,    -1,    -1,
      -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      85,    86,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    99,   100,   101,   102,   103,   104,
     105,    -1,   107,    -1,    -1,   110,   111,   112,   113,   114,
     115,    -1,     4,     5,    -1,     7,    -1,    -1,    10,    11,
     125,    -1,   127,    15,    -1,    -1,    -1,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    35,    -1,    -1,    -1,    -1,    40,    -1,
      42,    -1,    44,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    55,    -1,    57,    58,    -1,    60,    -1,
      -1,    63,    -1,    -1,    -1,    67,    68,    69,    70,    -1,
      72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    85,    86,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    99,   100,   101,
     102,   103,   104,   105,    -1,   107,    -1,    -1,   110,   111,
     112,   113,   114,   115,     4,     5,    -1,     7,    -1,    -1,
      10,    11,    -1,   125,   126,    15,    -1,    -1,    -1,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,
      -1,    -1,    -1,    -1,    -1,    35,    -1,    -1,    -1,    -1,
      40,    -1,    42,    -1,    44,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    55,    -1,    57,    58,    -1,
      60,    -1,    -1,    63,    -1,    -1,    -1,    67,    68,    69,
      70,    -1,    72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    85,    86,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    99,
     100,   101,   102,   103,   104,   105,    -1,   107,    -1,    -1,
     110,   111,   112,   113,   114,   115,     4,     5,    -1,     7,
      -1,    -1,    10,    11,    -1,   125,    -1,    15,    -1,    -1,
      -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      28,    -1,    -1,    -1,    -1,    -1,    -1,    35,    -1,    -1,
      -1,    -1,    40,    -1,    42,    -1,    44,    -1,    46,    -1,
      -1,    -1,    -1,    -1,    -1,    53,    -1,    55,    -1,    57,
      58,    -1,    60,    -1,    -1,    63,    -1,    -1,    -1,    67,
      68,    69,    70,    -1,    72,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,    86,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    99,   100,   101,   102,   103,   104,   105,    -1,   107,
      -1,    -1,   110,   111,   112,   113,   114,   115,     4,     5,
      -1,     7,    -1,    -1,    10,    11,    -1,    -1,    -1,    15,
      -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    28,    -1,    -1,    -1,    -1,    -1,    -1,    35,
      -1,    -1,    -1,    -1,    40,    -1,    42,    -1,    44,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,
      -1,    57,    58,    -1,    60,    -1,    -1,    63,    -1,    -1,
      -1,    67,    68,    69,    70,    -1,    72,    -1,    -1,    75,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,
      86,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    99,   100,   101,   102,   103,   104,   105,
      -1,   107,    -1,    -1,   110,   111,   112,   113,   114,   115,
       4,     5,    -1,     7,    -1,    -1,    10,    11,    -1,    -1,
      -1,    15,    -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    35,    -1,    -1,    -1,    -1,    40,    -1,    42,    -1,
      44,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    55,    -1,    57,    58,    -1,    60,    -1,    -1,    63,
      -1,    -1,    -1,    67,    68,    69,    70,    -1,    72,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    85,    86,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    99,   100,   101,   102,   103,
     104,   105,   106,   107,    -1,    -1,   110,   111,   112,   113,
     114,   115,     4,     5,    -1,     7,    -1,    -1,    10,    11,
      -1,    -1,    -1,    15,    -1,    -1,    -1,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    35,    -1,    -1,    -1,    -1,    40,    -1,
      42,    -1,    44,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    55,    -1,    57,    58,    -1,    60,    -1,
      -1,    63,    -1,    -1,    -1,    67,    68,    69,    70,    -1,
      72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    85,    86,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    99,   100,   101,
     102,   103,   104,   105,    -1,   107,    -1,    -1,   110,   111,
     112,   113,   114,   115,     5,    -1,     7,    -1,    -1,    10,
      -1,    -1,    -1,    -1,    15,    -1,    -1,    -1,    19,    -1,
      -1,    22,    -1,     5,    -1,     7,    -1,    28,    10,    -1,
      -1,    -1,    -1,    15,    35,    -1,    -1,    19,    -1,    40,
      -1,    -1,    -1,    44,    -1,    -1,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    35,    55,    -1,    57,    -1,    40,    60,
      -1,    -1,    44,    -1,    -1,    -1,    -1,    68,    69,    -1,
      -1,    72,    -1,    55,    75,    57,    -1,    -1,    60,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    68,    69,    -1,     5,
      72,     7,    -1,    75,    10,    -1,    -1,    -1,    -1,    15,
      -1,    -1,    -1,    19,   105,    -1,    -1,    -1,     5,    -1,
       7,    -1,    28,    10,    -1,    -1,    -1,    -1,    15,    35,
      -1,    -1,    19,   105,    40,    -1,    -1,    -1,    44,    -1,
      -1,    28,    -1,    -1,    -1,    -1,    -1,    -1,    35,    55,
      -1,    57,    -1,    40,    60,    -1,    -1,    44,    -1,    -1,
      -1,    -1,    68,    69,    -1,    -1,    72,    -1,    55,    75,
      57,    -1,    -1,    60,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    68,    69,    -1,    -1,    72,    -1,    -1,    75,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   105,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   105
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    73,   235,   239,   240,   241,   242,   344,   105,   132,
     327,   328,     0,   240,    41,   128,   236,   243,   244,   245,
     246,   287,   299,   310,   315,   316,   317,   318,   345,   346,
     127,   124,   109,   237,   327,   133,   319,   320,   321,   327,
     328,   244,   318,     3,    24,    37,    42,    47,    49,    50,
      51,    52,    56,    59,    74,   365,   366,   367,   134,   327,
     328,   327,   109,   125,   238,   106,   129,   107,   322,   362,
      12,    17,    21,    36,    61,   367,   127,   327,   344,   127,
     330,   129,   320,     4,     5,     7,    10,    11,    15,    19,
      28,    35,    40,    42,    44,    55,    57,    58,    60,    63,
      67,    68,    69,    70,    72,    85,    86,    99,   100,   101,
     102,   103,   104,   107,   110,   111,   112,   113,   114,   115,
     131,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   185,   323,   324,
     327,   327,     5,     7,    10,    15,    19,    28,    35,    40,
      44,    55,    57,    60,    68,    69,    72,    75,   133,   135,
     136,   137,   138,   139,   140,   141,   142,   256,   292,   325,
     326,   327,   327,   327,   345,   109,   128,   329,   107,    75,
     135,   136,   328,   107,   107,   107,   168,   327,   168,     5,
       7,    10,    15,    19,    28,    35,    40,    44,    55,    57,
      60,    68,    69,    72,   135,   185,   327,   168,   168,   168,
     168,   168,   168,    85,    86,   107,   109,   329,   109,   106,
     108,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,   124,   184,   114,   116,   117,   110,   111,    87,    88,
      38,    81,    82,   118,   119,    79,    80,   115,   120,   121,
      83,    84,   122,   106,   108,   124,   123,   247,   347,   114,
     128,   293,   294,   327,   114,   123,   311,   360,   123,   300,
     358,   123,   288,   355,   126,   327,   155,   185,   107,   128,
     329,   363,   107,   135,   135,   185,   108,   108,    46,    53,
     146,   147,   185,   332,   327,   327,   185,   323,   185,   168,
     168,   168,   168,   172,   172,   173,   173,    44,    60,   133,
     135,   143,   144,   292,   174,   174,   174,   174,   175,   175,
     176,   177,   178,   179,   180,   185,   324,   327,   185,    44,
      60,   133,   144,   248,   125,   249,   106,   295,   331,   294,
     107,   141,   125,   312,   133,   248,   125,   301,   248,   125,
     289,   106,   129,   108,   332,   293,   333,   185,   108,   108,
     108,   168,   145,   185,   145,   106,   108,   108,   123,   106,
     106,   245,   250,   251,   252,   253,   254,   255,   262,   267,
     268,   270,   274,   282,   285,   286,   346,   348,   330,   106,
     129,   259,   260,   346,   349,   313,   314,   346,   361,   330,
     302,   303,   304,   306,   308,   309,   346,   359,   330,   251,
     290,   291,   356,   330,   108,   125,   296,   334,   108,   147,
     185,   248,   133,   251,   125,   127,   190,   258,   269,   346,
      51,    59,   113,   275,   365,   126,   106,    46,    48,    53,
     261,   350,   108,   106,   327,   126,   303,    42,   305,   126,
     291,   126,   185,   296,   297,   298,   357,     6,    11,    13,
      14,    18,    29,    30,    31,    32,    39,    54,    62,    64,
      66,    70,    76,   127,   135,   153,   158,   159,   161,   168,
     169,   170,   183,   188,   189,   190,   191,   192,   193,   194,
     195,   198,   201,   202,   203,   204,   205,   211,   212,   213,
     214,   219,   220,   221,   222,   223,   224,   225,   226,   232,
     233,   234,   327,   335,   365,    59,    51,   327,   327,    23,
      33,   135,   276,   277,   279,   281,    13,    22,   135,   256,
     271,   283,   327,   260,   135,   127,   126,   314,   124,    22,
     135,   256,   106,   126,   127,   190,   135,   127,   189,   107,
     107,     8,    16,   327,   107,   107,   185,   340,   107,   340,
     190,   190,   107,   196,   197,   327,   188,   127,   127,   127,
     123,   126,    22,   107,   107,    45,    45,    45,   190,   135,
     135,    63,   133,   196,   257,   327,   328,   257,   328,   125,
     190,   107,   327,   185,   186,   135,    63,   327,   327,   126,
     298,   199,   200,   327,    76,   195,   202,   215,   218,   337,
     135,   186,   127,   127,   185,   187,   185,   127,   185,   127,
       9,    26,   227,   228,   229,   231,   342,   187,   106,   124,
     188,   135,   108,   108,   135,   135,    25,    65,    79,    80,
      81,    82,    85,    86,    87,    88,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   278,   280,
     199,   196,   128,   109,   127,   125,   107,     3,    47,    74,
     263,   264,   265,   353,   364,   349,   327,   128,   125,   107,
     106,   124,   107,   106,   127,   327,   127,   108,   108,   108,
     107,   190,   231,     9,   229,   230,   341,     9,   230,   108,
     197,   298,   257,   190,   190,   107,   107,   107,   107,   127,
     127,   272,   273,   346,    63,   263,   349,   126,   265,   351,
     353,   264,   352,   353,    77,    78,   108,   127,   272,    77,
      78,   307,   349,   200,   186,   187,   202,   187,   216,   338,
      34,   189,   189,   125,   206,   133,   144,   190,   189,   125,
     135,   135,   135,   135,   106,   129,   135,   128,   126,   108,
     127,   190,   266,   266,   123,   284,   354,   129,   127,   127,
     126,   108,   108,   127,   185,    20,     8,    16,   207,   208,
     209,   210,   336,   327,   343,   263,   327,   327,   327,   327,
     273,   327,   272,     4,    63,   125,    78,    77,   127,   127,
     217,   218,   339,   108,   189,   186,   123,   208,   191,   210,
     126,   108,   126,   108,   108,   108,   106,   129,   107,   107,
     307,   127,   127,   108,   189,   123,   190,   135,   332,   332,
     126,   189,   327,   108,   108,   108
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

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


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

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
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

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
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 14:
#line 278 "src/baseGram.ycc"
    { (yyval.typeDef)= DictBuiltInTypes::getPredefined(DictBuiltInTypes::objectBt); ;}
    break;

  case 15:
#line 280 "src/baseGram.ycc"
    { (yyval.typeDef)= DictBuiltInTypes::getPredefined(DictBuiltInTypes::stringBt); ;}
    break;

  case 18:
#line 290 "src/baseGram.ycc"
    { (yyval.typeDef)= new UnresolvedType((yyvsp[(1) - (1)].identifier)); ;}
    break;

  case 21:
#line 297 "src/baseGram.ycc"
    { (yyval.typeDef)= DictBuiltInTypes::getPredefined(DictBuiltInTypes::boolBt); ;}
    break;

  case 24:
#line 304 "src/baseGram.ycc"
    { (yyval.typeDef)= DictBuiltInTypes::getPredefined(DictBuiltInTypes::decimalBt); ;}
    break;

  case 25:
#line 309 "src/baseGram.ycc"
    { (yyval.typeDef)= DictBuiltInTypes::getPredefined(DictBuiltInTypes::sbyteBt); ;}
    break;

  case 26:
#line 311 "src/baseGram.ycc"
    { (yyval.typeDef)= DictBuiltInTypes::getPredefined(DictBuiltInTypes::byteBt); ;}
    break;

  case 27:
#line 313 "src/baseGram.ycc"
    { (yyval.typeDef)= DictBuiltInTypes::getPredefined(DictBuiltInTypes::shortBt); ;}
    break;

  case 28:
#line 315 "src/baseGram.ycc"
    { (yyval.typeDef)= DictBuiltInTypes::getPredefined(DictBuiltInTypes::ushortBt); ;}
    break;

  case 29:
#line 317 "src/baseGram.ycc"
    { (yyval.typeDef)= DictBuiltInTypes::getPredefined(DictBuiltInTypes::intBt); ;}
    break;

  case 30:
#line 319 "src/baseGram.ycc"
    { (yyval.typeDef)= DictBuiltInTypes::getPredefined(DictBuiltInTypes::uintBt); ;}
    break;

  case 31:
#line 321 "src/baseGram.ycc"
    { (yyval.typeDef)= DictBuiltInTypes::getPredefined(DictBuiltInTypes::longBt); ;}
    break;

  case 32:
#line 323 "src/baseGram.ycc"
    { (yyval.typeDef)= DictBuiltInTypes::getPredefined(DictBuiltInTypes::ulongBt); ;}
    break;

  case 33:
#line 325 "src/baseGram.ycc"
    { (yyval.typeDef)= DictBuiltInTypes::getPredefined(DictBuiltInTypes::charBt); ;}
    break;

  case 34:
#line 330 "src/baseGram.ycc"
    { (yyval.typeDef)= DictBuiltInTypes::getPredefined(DictBuiltInTypes::floatBt); ;}
    break;

  case 35:
#line 332 "src/baseGram.ycc"
    { (yyval.typeDef)= DictBuiltInTypes::getPredefined(DictBuiltInTypes::doubleBt); ;}
    break;

  case 38:
#line 342 "src/baseGram.ycc"
    { (yyval.typeDef)= new UnresolvedType((yyvsp[(1) - (1)].identifier)); ;}
    break;

  case 39:
#line 344 "src/baseGram.ycc"
    { (yyval.typeDef)= DictBuiltInTypes::getPredefined(DictBuiltInTypes::objectBt); ;}
    break;

  case 40:
#line 346 "src/baseGram.ycc"
    { (yyval.typeDef)= DictBuiltInTypes::getPredefined(DictBuiltInTypes::stringBt); ;}
    break;

  case 42:
#line 378 "src/baseGram.ycc"
    { (yyval.blList)= new ListExprBl((yyvsp[(1) - (1)].expression)); ;}
    break;

  case 43:
#line 380 "src/baseGram.ycc"
    { (yyval.blList)->add((yyvsp[(3) - (3)].expression)); ;}
    break;

  case 45:
#line 386 "src/baseGram.ycc"
    { (yyval.expression)= new ModifiedArgExpr((yyvsp[(2) - (2)].expression), ModifiedArgExpr::refMod); ;}
    break;

  case 46:
#line 388 "src/baseGram.ycc"
    { (yyval.expression)= new ModifiedArgExpr((yyvsp[(2) - (2)].expression), ModifiedArgExpr::outMod); ;}
    break;

  case 47:
#line 393 "src/baseGram.ycc"
    { (yyval.expression)= new LiteralExpr((yyvsp[(1) - (1)].literal)); ;}
    break;

  case 48:
#line 395 "src/baseGram.ycc"
    { (yyval.expression)= new SymbolExpr((yyvsp[(1) - (1)].identifier)); ;}
    break;

  case 63:
#line 416 "src/baseGram.ycc"
    { (yyval.expression)= new ParenExpr((yyvsp[(2) - (3)].expression)); ;}
    break;

  case 64:
#line 420 "src/baseGram.ycc"
    { (yyval.expression)= new MemberAccessExpr((yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].identifier)); ;}
    break;

  case 65:
#line 422 "src/baseGram.ycc"
    { (yyval.expression)= new MemberAccessExpr((yyvsp[(1) - (3)].typeDef), (yyvsp[(3) - (3)].identifier)); ;}
    break;

  case 66:
#line 427 "src/baseGram.ycc"
    { (yyval.typeDef)= DictBuiltInTypes::getPredefined(DictBuiltInTypes::boolBt); ;}
    break;

  case 67:
#line 429 "src/baseGram.ycc"
    { (yyval.typeDef)= DictBuiltInTypes::getPredefined(DictBuiltInTypes::byteBt); ;}
    break;

  case 68:
#line 431 "src/baseGram.ycc"
    { (yyval.typeDef)= DictBuiltInTypes::getPredefined(DictBuiltInTypes::charBt); ;}
    break;

  case 69:
#line 433 "src/baseGram.ycc"
    { (yyval.typeDef)= DictBuiltInTypes::getPredefined(DictBuiltInTypes::decimalBt); ;}
    break;

  case 70:
#line 435 "src/baseGram.ycc"
    { (yyval.typeDef)= DictBuiltInTypes::getPredefined(DictBuiltInTypes::doubleBt); ;}
    break;

  case 71:
#line 437 "src/baseGram.ycc"
    { (yyval.typeDef)= DictBuiltInTypes::getPredefined(DictBuiltInTypes::floatBt); ;}
    break;

  case 72:
#line 439 "src/baseGram.ycc"
    { (yyval.typeDef)= DictBuiltInTypes::getPredefined(DictBuiltInTypes::intBt); ;}
    break;

  case 73:
#line 441 "src/baseGram.ycc"
    { (yyval.typeDef)= DictBuiltInTypes::getPredefined(DictBuiltInTypes::longBt); ;}
    break;

  case 74:
#line 443 "src/baseGram.ycc"
    { (yyval.typeDef)= DictBuiltInTypes::getPredefined(DictBuiltInTypes::objectBt); ;}
    break;

  case 75:
#line 445 "src/baseGram.ycc"
    { (yyval.typeDef)= DictBuiltInTypes::getPredefined(DictBuiltInTypes::sbyteBt); ;}
    break;

  case 76:
#line 447 "src/baseGram.ycc"
    { (yyval.typeDef)= DictBuiltInTypes::getPredefined(DictBuiltInTypes::shortBt); ;}
    break;

  case 77:
#line 449 "src/baseGram.ycc"
    { (yyval.typeDef)= DictBuiltInTypes::getPredefined(DictBuiltInTypes::stringBt); ;}
    break;

  case 78:
#line 451 "src/baseGram.ycc"
    { (yyval.typeDef)= DictBuiltInTypes::getPredefined(DictBuiltInTypes::uintBt); ;}
    break;

  case 79:
#line 453 "src/baseGram.ycc"
    { (yyval.typeDef)= DictBuiltInTypes::getPredefined(DictBuiltInTypes::ulongBt); ;}
    break;

  case 80:
#line 455 "src/baseGram.ycc"
    { (yyval.typeDef)= DictBuiltInTypes::getPredefined(DictBuiltInTypes::ushortBt); ;}
    break;

  case 81:
#line 460 "src/baseGram.ycc"
    {
    // Warning: check cast on $3.
    (yyval.expression)= new InvokeExpr((yyvsp[(1) - (4)].expression), (ListExprBl *)(yyvsp[(3) - (4)].blList));
  ;}
    break;

  case 82:
#line 468 "src/baseGram.ycc"
    {
    // Warning: check cast on $2.
    (yyval.expression)= new ArrayAccessExpr((yyvsp[(1) - (2)].expression), (ListExprBl *)(yyvsp[(2) - (2)].blList));
  ;}
    break;

  case 83:
#line 476 "src/baseGram.ycc"
    { (yyval.blList)= new ListExprBl((yyvsp[(1) - (1)].expression)); ;}
    break;

  case 84:
#line 478 "src/baseGram.ycc"
    { (yyval.blList)->add((yyvsp[(3) - (3)].expression)); ;}
    break;

  case 85:
#line 483 "src/baseGram.ycc"
    { (yyval.expression)= SymbolExpr::getSpecialSymbol(SymbolExpr::baseSym); ;}
    break;

  case 86:
#line 488 "src/baseGram.ycc"
    { (yyval.expression)= new MemberAccessExpr(SymbolExpr::getSpecialSymbol(SymbolExpr::baseSym), (yyvsp[(3) - (3)].identifier)); ;}
    break;

  case 87:
#line 490 "src/baseGram.ycc"
    {
    // Warning: check cast on $2.
    (yyval.expression)= new ArrayAccessExpr(SymbolExpr::getSpecialSymbol(SymbolExpr::baseSym), (ListExprBl *)(yyvsp[(2) - (2)].blList));
  ;}
    break;

  case 88:
#line 498 "src/baseGram.ycc"
    { (yyval.expression)= new PrePostExpr((yyvsp[(1) - (2)].expression), PrePostExpr::postIncr); ;}
    break;

  case 89:
#line 503 "src/baseGram.ycc"
    { (yyval.expression)= new PrePostExpr((yyvsp[(1) - (2)].expression), PrePostExpr::postDecr); ;}
    break;

  case 93:
#line 514 "src/baseGram.ycc"
    {
    // Warning: check cast on $4.
    (yyval.expression)= new NewInstExpr((yyvsp[(2) - (5)].typeDef), (ListExprBl *)(yyvsp[(4) - (5)].blList));
  ;}
    break;

  case 94:
#line 523 "src/baseGram.ycc"
    {
    // Warning: check casts on $3, $4.
    (yyval.expression)= new NewInstExpr((yyvsp[(2) - (5)].typeDef), (ListExprBl *)(yyvsp[(3) - (5)].blList), (ListSizesBl *)(yyvsp[(4) - (5)].blList), (yyvsp[(5) - (5)].expression));
  ;}
    break;

  case 95:
#line 531 "src/baseGram.ycc"
    { (yyval.expression)= new NewInstExpr((yyvsp[(2) - (5)].identifier), (yyvsp[(4) - (5)].expression)); ;}
    break;

  case 96:
#line 536 "src/baseGram.ycc"
    { (yyval.expression)= new OperatorExpr((yyvsp[(3) - (4)].typeDef), OperatorExpr::typeofOp); ;}
    break;

  case 97:
#line 541 "src/baseGram.ycc"
    { (yyval.expression)= new OperatorExpr((yyvsp[(3) - (4)].typeDef), OperatorExpr::sizeofOp); ;}
    break;

  case 98:
#line 545 "src/baseGram.ycc"
    { (yyval.expression)= new OperatorExpr((yyvsp[(3) - (4)].expression), OperatorExpr::checkedOp); ;}
    break;

  case 99:
#line 550 "src/baseGram.ycc"
    { (yyval.expression)= new OperatorExpr((yyvsp[(3) - (4)].expression), OperatorExpr::uncheckedOp); ;}
    break;

  case 101:
#line 556 "src/baseGram.ycc"
    { (yyval.expression)= new OperatorExpr((yyvsp[(2) - (2)].expression), OperatorExpr::addOp); ;}
    break;

  case 102:
#line 558 "src/baseGram.ycc"
    { (yyval.expression)= new OperatorExpr((yyvsp[(2) - (2)].expression), OperatorExpr::subOp); ;}
    break;

  case 103:
#line 560 "src/baseGram.ycc"
    { (yyval.expression)= new OperatorExpr((yyvsp[(2) - (2)].expression), OperatorExpr::notOp); ;}
    break;

  case 104:
#line 562 "src/baseGram.ycc"
    { (yyval.expression)= new OperatorExpr((yyvsp[(2) - (2)].expression), OperatorExpr::xorOp); ;}
    break;

  case 105:
#line 564 "src/baseGram.ycc"
    { (yyval.expression)= new OperatorExpr((yyvsp[(2) - (2)].expression), OperatorExpr::multOp); ;}
    break;

  case 106:
#line 566 "src/baseGram.ycc"
    { (yyval.expression)= new OperatorExpr((yyvsp[(2) - (2)].expression), OperatorExpr::andOp); ;}
    break;

  case 110:
#line 574 "src/baseGram.ycc"
    { (yyval.expression)= new PrePostExpr((yyvsp[(2) - (2)].expression), PrePostExpr::preIncr); ;}
    break;

  case 111:
#line 579 "src/baseGram.ycc"
    { (yyval.expression)= new PrePostExpr((yyvsp[(2) - (2)].expression), PrePostExpr::preDecr); ;}
    break;

  case 112:
#line 584 "src/baseGram.ycc"
    { (yyval.expression)= new CastExpr((yyvsp[(2) - (4)].typeDef), (yyvsp[(4) - (4)].expression)); ;}
    break;

  case 114:
#line 590 "src/baseGram.ycc"
    { (yyval.expression)= new BinaryExpr(OperatorExpr::multOp, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); ;}
    break;

  case 115:
#line 592 "src/baseGram.ycc"
    { (yyval.expression)= new BinaryExpr(OperatorExpr::divOp, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); ;}
    break;

  case 116:
#line 594 "src/baseGram.ycc"
    { (yyval.expression)= new BinaryExpr(OperatorExpr::modOp, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); ;}
    break;

  case 118:
#line 600 "src/baseGram.ycc"
    { (yyval.expression)= new BinaryExpr(OperatorExpr::addOp, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); ;}
    break;

  case 119:
#line 602 "src/baseGram.ycc"
    { (yyval.expression)= new BinaryExpr(OperatorExpr::subOp, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); ;}
    break;

  case 121:
#line 608 "src/baseGram.ycc"
    { (yyval.expression)= new BinaryExpr(OperatorExpr::leftShiftOp, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); ;}
    break;

  case 122:
#line 610 "src/baseGram.ycc"
    { (yyval.expression)= new BinaryExpr(OperatorExpr::rightShiftOp, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); ;}
    break;

  case 124:
#line 616 "src/baseGram.ycc"
    { (yyval.expression)= new BinaryExpr(OperatorExpr::ltOp, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); ;}
    break;

  case 125:
#line 618 "src/baseGram.ycc"
    { (yyval.expression)= new BinaryExpr(OperatorExpr::gtOp, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); ;}
    break;

  case 126:
#line 620 "src/baseGram.ycc"
    { (yyval.expression)= new BinaryExpr(OperatorExpr::leOp, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); ;}
    break;

  case 127:
#line 622 "src/baseGram.ycc"
    { (yyval.expression)= new BinaryExpr(OperatorExpr::geOp, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); ;}
    break;

  case 128:
#line 624 "src/baseGram.ycc"
    { (yyval.expression)= new TypeCheckExpr((yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].typeDef)); ;}
    break;

  case 130:
#line 630 "src/baseGram.ycc"
    { (yyval.expression)= new BinaryExpr(OperatorExpr::eqOp, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); ;}
    break;

  case 131:
#line 632 "src/baseGram.ycc"
    { (yyval.expression)= new BinaryExpr(OperatorExpr::neOp, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); ;}
    break;

  case 133:
#line 638 "src/baseGram.ycc"
    { (yyval.expression)= new BinaryExpr(OperatorExpr::andOp, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); ;}
    break;

  case 135:
#line 644 "src/baseGram.ycc"
    { (yyval.expression)= new BinaryExpr(OperatorExpr::xorOp, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); ;}
    break;

  case 137:
#line 650 "src/baseGram.ycc"
    { (yyval.expression)= new BinaryExpr(OperatorExpr::orOp, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); ;}
    break;

  case 139:
#line 656 "src/baseGram.ycc"
    { (yyval.expression)= new BinaryExpr(OperatorExpr::andCndOp, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); ;}
    break;

  case 141:
#line 662 "src/baseGram.ycc"
    { (yyval.expression)= new BinaryExpr(OperatorExpr::orCndOp, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); ;}
    break;

  case 143:
#line 668 "src/baseGram.ycc"
    { (yyval.expression)= new TernaryExpr((yyvsp[(1) - (5)].expression), (yyvsp[(3) - (5)].expression), (yyvsp[(5) - (5)].expression)); ;}
    break;

  case 144:
#line 673 "src/baseGram.ycc"
    { (yyval.expression)= new AssignExpr((OperatorExpr::Operators)(yyvsp[(2) - (3)].integerNumber), (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); ;}
    break;

  case 145:
#line 678 "src/baseGram.ycc"
    { (yyval.integerNumber)= OperatorExpr::assignOp; ;}
    break;

  case 146:
#line 680 "src/baseGram.ycc"
    { (yyval.integerNumber)= OperatorExpr::addOp; ;}
    break;

  case 147:
#line 682 "src/baseGram.ycc"
    { (yyval.integerNumber)= OperatorExpr::subOp; ;}
    break;

  case 148:
#line 684 "src/baseGram.ycc"
    { (yyval.integerNumber)= OperatorExpr::multOp; ;}
    break;

  case 149:
#line 686 "src/baseGram.ycc"
    { (yyval.integerNumber)= OperatorExpr::divOp; ;}
    break;

  case 150:
#line 688 "src/baseGram.ycc"
    { (yyval.integerNumber)= OperatorExpr::modOp; ;}
    break;

  case 151:
#line 690 "src/baseGram.ycc"
    { (yyval.integerNumber)= OperatorExpr::andOp; ;}
    break;

  case 152:
#line 692 "src/baseGram.ycc"
    { (yyval.integerNumber)= OperatorExpr::orOp; ;}
    break;

  case 153:
#line 694 "src/baseGram.ycc"
    { (yyval.integerNumber)= OperatorExpr::xorOp; ;}
    break;

  case 154:
#line 696 "src/baseGram.ycc"
    { (yyval.integerNumber)= OperatorExpr::leftShiftOp; ;}
    break;

  case 155:
#line 698 "src/baseGram.ycc"
    { (yyval.integerNumber)= OperatorExpr::rightShiftOp; ;}
    break;

  case 173:
#line 735 "src/baseGram.ycc"
    {
    // TODO: Make sure that ListStmtBl>BlockListAk.
    (yyval.statement)= new BlockStmt((ListStmtBl *)(yyvsp[(2) - (3)].blList));
  ;}
    break;

  case 174:
#line 743 "src/baseGram.ycc"
    { (yyval.blList)= new ListStmtBl((yyvsp[(1) - (1)].statement)); ;}
    break;

  case 175:
#line 745 "src/baseGram.ycc"
    { (yyvsp[(1) - (2)].blList)->add((yyvsp[(2) - (2)].statement)); ;}
    break;

  case 176:
#line 750 "src/baseGram.ycc"
    { (yyval.statement)= new EmptyStatement(); ;}
    break;

  case 177:
#line 754 "src/baseGram.ycc"
    { (yyval.statement)= new LabeledStmt((yyvsp[(1) - (3)].identifier), (yyvsp[(3) - (3)].statement)); ;}
    break;

  case 178:
#line 759 "src/baseGram.ycc"
    { 
    // TODO: Make sure that ListVarDeclBl>BlockListAk.
    (yyval.statement)= new DeclarationStmt((ListVarDeclBl *)(yyvsp[(1) - (2)].blList));
  ;}
    break;

  case 179:
#line 764 "src/baseGram.ycc"
    { (yyval.statement)= new DeclarationStmt(NULL /* TMPTMP */); /* TODO */ ;}
    break;

  case 180:
#line 769 "src/baseGram.ycc"
    {
    ((ListVarDeclBl *)(yyvsp[(2) - (2)].blList))->broadcastType((yyvsp[(1) - (2)].typeDef));
    (yyval.blList)= (yyvsp[(2) - (2)].blList);
  ;}
    break;

  case 181:
#line 777 "src/baseGram.ycc"
    {
     (yyval.blList)= new ListVarDeclBl((yyvsp[(1) - (1)].varDecl));
  ;}
    break;

  case 182:
#line 781 "src/baseGram.ycc"
    { (yyval.blList)->add((yyvsp[(3) - (3)].varDecl)); ;}
    break;

  case 183:
#line 786 "src/baseGram.ycc"
    {
    // TODO: Make sure that IdentifierSrp>BaseIdentifierSrp.
    (yyval.varDecl)= new VarDeclarationSrp((IdentifierSrp *)(yyvsp[(1) - (1)].identifier));
  ;}
    break;

  case 184:
#line 791 "src/baseGram.ycc"
    {
    // TODO: Make sure that IdentifierSrp>BaseIdentifierSrp.
    (yyval.varDecl)= new VarDeclarationSrp((IdentifierSrp *)(yyvsp[(1) - (3)].identifier), (yyvsp[(3) - (3)].expression));
  ;}
    break;

  case 188:
#line 814 "src/baseGram.ycc"
    {/* TODO */;}
    break;

  case 189:
#line 819 "src/baseGram.ycc"
    { (yyval.statement)= new ExpressionStmt((yyvsp[(1) - (2)].expression)); ;}
    break;

  case 199:
#line 839 "src/baseGram.ycc"
    { (yyval.statement)= new IfStmt((yyvsp[(3) - (5)].expression), (yyvsp[(5) - (5)].statement), NULL); ;}
    break;

  case 200:
#line 841 "src/baseGram.ycc"
    { (yyval.statement)= new IfStmt((yyvsp[(3) - (7)].expression), (yyvsp[(5) - (7)].statement), (yyvsp[(7) - (7)].statement)); ;}
    break;

  case 201:
#line 846 "src/baseGram.ycc"
    { 
    // TODO: Make sure that $5 is ListStmtBl>BlockListAk.
    (yyval.statement)= new SwitchStmt((yyvsp[(3) - (5)].expression), (ListStmtBl *)(yyvsp[(5) - (5)].blList));
  ;}
    break;

  case 202:
#line 854 "src/baseGram.ycc"
    { (yyval.blList)= (yyvsp[(2) - (3)].blList); ;}
    break;

  case 203:
#line 859 "src/baseGram.ycc"
    { (yyval.blList)= new ListStmtBl((yyvsp[(1) - (1)].statement)); ;}
    break;

  case 204:
#line 861 "src/baseGram.ycc"
    { (yyval.blList)->add((yyvsp[(2) - (2)].statement)); ;}
    break;

  case 205:
#line 866 "src/baseGram.ycc"
    {
    // TODO: Make sure that ListExprBl>BlockListAk.
    (yyval.statement)= new LabeledStmt((ListExprBl *)(yyvsp[(1) - (2)].blList), (ListStmtBl *)(yyvsp[(2) - (2)].blList));
  ;}
    break;

  case 206:
#line 874 "src/baseGram.ycc"
    { (yyval.blList)= new ListExprBl((yyvsp[(1) - (1)].expression)); ;}
    break;

  case 207:
#line 876 "src/baseGram.ycc"
    { (yyval.blList)->add((yyvsp[(2) - (2)].expression)); ;}
    break;

  case 208:
#line 881 "src/baseGram.ycc"
    { (yyval.expression)= (yyvsp[(2) - (3)].expression); ;}
    break;

  case 209:
#line 883 "src/baseGram.ycc"
    { (yyval.expression)= new ExpressionSrp(); ;}
    break;

  case 214:
#line 895 "src/baseGram.ycc"
    { (yyval.statement)= new WhileStmt((yyvsp[(3) - (5)].expression), (yyvsp[(5) - (5)].statement)); ;}
    break;

  case 215:
#line 900 "src/baseGram.ycc"
    { (yyval.statement)= new DoStmt((yyvsp[(5) - (7)].expression), (yyvsp[(2) - (7)].statement)); ;}
    break;

  case 216:
#line 905 "src/baseGram.ycc"
    {
    // TODO: Make sure that ListStmtBl>BLockListAk.
    (yyval.statement)= new ForStmt((yyvsp[(3) - (9)].blList), (yyvsp[(5) - (9)].expression), (ListStmtBl *)(yyvsp[(7) - (9)].blList), (yyvsp[(9) - (9)].statement));
  ;}
    break;

  case 221:
#line 925 "src/baseGram.ycc"
    { (yyval.blList)= new ListStmtBl(new ExpressionStmt((yyvsp[(1) - (1)].expression))); ;}
    break;

  case 222:
#line 927 "src/baseGram.ycc"
    { (yyval.blList)->add(new ExpressionStmt((yyvsp[(3) - (3)].expression))); ;}
    break;

  case 223:
#line 932 "src/baseGram.ycc"
    {
     // TODO: Make sure that IdentifierSrp>BaseIdentifierSrp.
     (yyval.statement)= new ForEachStmt((yyvsp[(3) - (8)].typeDef), (IdentifierSrp *)(yyvsp[(4) - (8)].identifier), (yyvsp[(6) - (8)].expression), (yyvsp[(8) - (8)].statement));
  ;}
    break;

  case 229:
#line 948 "src/baseGram.ycc"
    { (yyval.statement)= new JumpStmt(DictStatements::breakSt); ;}
    break;

  case 230:
#line 953 "src/baseGram.ycc"
    { (yyval.statement)= new JumpStmt(DictStatements::continueSt); ;}
    break;

  case 231:
#line 958 "src/baseGram.ycc"
    {
    // TODO: Make sure that IdentifierSrp>BaseIdentifierSrp.
    (yyval.statement)= new GotoStmt((IdentifierSrp *)(yyvsp[(2) - (3)].identifier));
  ;}
    break;

  case 232:
#line 963 "src/baseGram.ycc"
    { (yyval.statement)= new GotoStmt((yyvsp[(3) - (4)].expression)); ;}
    break;

  case 233:
#line 965 "src/baseGram.ycc"
    { (yyval.statement)= new GotoStmt(new ExpressionSrp()); ;}
    break;

  case 234:
#line 970 "src/baseGram.ycc"
    { (yyval.statement)= new ReturnStmt((yyvsp[(2) - (3)].expression)); ;}
    break;

  case 235:
#line 975 "src/baseGram.ycc"
    { (yyval.statement)= new ThrowStmt((yyvsp[(2) - (3)].expression)); ;}
    break;

  case 236:
#line 980 "src/baseGram.ycc"
    {
    // TODO: Must make sure that BlockStmt>StatementSrp.
    (yyval.statement)= new TryCatchStmt((BlockStmt *)(yyvsp[(2) - (3)].statement), (yyvsp[(3) - (3)].clauseHolder)->getSpecificClauses(), (yyvsp[(3) - (3)].clauseHolder)->getGeneralClause(), NULL);
  ;}
    break;

  case 237:
#line 985 "src/baseGram.ycc"
    { (yyval.statement)= new TryCatchStmt((BlockStmt *)(yyvsp[(2) - (3)].statement), NULL, NULL, (BlockStmt *)(yyvsp[(3) - (3)].statement)); ;}
    break;

  case 238:
#line 987 "src/baseGram.ycc"
    { (yyval.statement)= new TryCatchStmt((BlockStmt *)(yyvsp[(2) - (4)].statement), (yyvsp[(3) - (4)].clauseHolder)->getSpecificClauses(), (yyvsp[(3) - (4)].clauseHolder)->getGeneralClause(), (BlockStmt *)(yyvsp[(4) - (4)].statement)); ;}
    break;

  case 239:
#line 992 "src/baseGram.ycc"
    {
    // TODO: Make sure that ListSpecCatchBl>BlockListAk.
    // TODO: Make sure that BlockStmt>StatementSrp.
    (yyval.clauseHolder)= new ClauseHolderSrp((ListSpecCatchBl *)(yyvsp[(1) - (2)].blList), (BlockStmt *)(yyvsp[(2) - (2)].statement));
  ;}
    break;

  case 240:
#line 998 "src/baseGram.ycc"
    {
    // TODO: Make sure that ListSpecCatchBl>BlockListAk.
    // TODO: Make sure that BlockStmt>StatementSrp.
    (yyval.clauseHolder)= new ClauseHolderSrp((ListSpecCatchBl *)(yyvsp[(1) - (2)].blList), (BlockStmt *)(yyvsp[(2) - (2)].statement));
  ;}
    break;

  case 241:
#line 1007 "src/baseGram.ycc"
    { (yyval.blList)= new ListSpecCatchBl((yyvsp[(1) - (1)].catchHelper)); ;}
    break;

  case 242:
#line 1009 "src/baseGram.ycc"
    { (yyval.blList)->add((yyvsp[(2) - (2)].catchHelper)); ;}
    break;

  case 243:
#line 1014 "src/baseGram.ycc"
    {
    // TODO: Make sure that IdentifierSrp>BaseIdentifierSrp.
    // TODO: Make sure that BlockStmt>StatementSrp.
    (yyval.catchHelper)= new CatchStmtHelper((yyvsp[(3) - (6)].typeDef), (IdentifierSrp *)(yyvsp[(4) - (6)].identifier), (BlockStmt *)(yyvsp[(6) - (6)].statement));
  ;}
    break;

  case 244:
#line 1023 "src/baseGram.ycc"
    { (yyval.statement)= (yyvsp[(2) - (2)].statement); ;}
    break;

  case 245:
#line 1028 "src/baseGram.ycc"
    { (yyval.statement)= (yyvsp[(2) - (2)].statement); ;}
    break;

  case 246:
#line 1033 "src/baseGram.ycc"
    {
    // TODO: Make sure that BlockStmt>StatementSrp.
    (yyval.statement)= new MemBoundedStmt(true, (BlockStmt *)(yyvsp[(2) - (2)].statement));
  ;}
    break;

  case 247:
#line 1041 "src/baseGram.ycc"
    {
    // TODO: Make sure that BlockStmt>StatementSrp.
    (yyval.statement)= new MemBoundedStmt(false, (BlockStmt *)(yyvsp[(2) - (2)].statement));
  ;}
    break;

  case 248:
#line 1049 "src/baseGram.ycc"
    { (yyval.statement)= new LockStmt((yyvsp[(3) - (5)].expression), (yyvsp[(5) - (5)].statement)); ;}
    break;

  case 251:
#line 1062 "src/baseGram.ycc"
    {/* TODO */;}
    break;

  case 273:
#line 1117 "src/baseGram.ycc"
    {/* TODO */;}
    break;

  case 292:
#line 1155 "src/baseGram.ycc"
    {/* TODO */;}
    break;

  case 294:
#line 1184 "src/baseGram.ycc"
    {
    (yyvsp[(1) - (2)].methodDef)->addBody((yyvsp[(2) - (2)].statement));
    std::cout << "@DBG [baseGram]: method_declaration: method_header method_body\n";
  ;}
    break;

  case 295:
#line 1192 "src/baseGram.ycc"
    {  
	   //TODO: transfer all values into the definition.
	   (yyval.methodDef)= new MethodDefinition();
	   (yyvsp[(4) - (7)].identifier)->showNameDBG();
    std::cout << "@DBG [baseGram]: method_header: attributes.Opt unifiedModList.Opt return_type member_name '(' formal_parameter_list.Opt ')'\n";
  ;}
    break;

  case 297:
#line 1203 "src/baseGram.ycc"
    { (yyval.typeDef)= DictBuiltInTypes::getPredefined(DictBuiltInTypes::voidBt); ;}
    break;

  case 300:
#line 1218 "src/baseGram.ycc"
    { (yyval.statement)= new CoreBlockStmt(); ;}
    break;

  case 313:
#line 1261 "src/baseGram.ycc"
    { (yyval.statement)= new CoreBlockStmt(); ;}
    break;

  case 318:
#line 1283 "src/baseGram.ycc"
    {/* TODO */;}
    break;

  case 319:
#line 1285 "src/baseGram.ycc"
    {/* TODO */;}
    break;

  case 329:
#line 1314 "src/baseGram.ycc"
    {/* TODO */;}
    break;

  case 338:
#line 1329 "src/baseGram.ycc"
    {/* TODO */;}
    break;

  case 358:
#line 1361 "src/baseGram.ycc"
    {/* TODO */;}
    break;

  case 371:
#line 1408 "src/baseGram.ycc"
    { (yyval.blList)= new ListSizesBl((yyvsp[(1) - (1)].integerNumber)); ;}
    break;

  case 372:
#line 1410 "src/baseGram.ycc"
    { ((ListSizesBl *)(yyval.blList))->add((yyvsp[(2) - (2)].integerNumber)); ;}
    break;

  case 373:
#line 1415 "src/baseGram.ycc"
    { (yyval.integerNumber)= (yyvsp[(2) - (3)].integerNumber); ;}
    break;

  case 374:
#line 1419 "src/baseGram.ycc"
    { (yyval.integerNumber)= 1; ;}
    break;

  case 375:
#line 1421 "src/baseGram.ycc"
    { (yyval.integerNumber)= (yyval.integerNumber)+1; ;}
    break;

  case 376:
#line 1426 "src/baseGram.ycc"
    {
    // TODO: Make sure that the class spec is OK.
    (yyval.expression)= new InitArrayExpr((ListExprBl *)(yyvsp[(2) - (3)].blList));
  ;}
    break;

  case 377:
#line 1431 "src/baseGram.ycc"
    {
    // TODO: Make sure that the class spec is OK.
    (yyval.expression)= new InitArrayExpr((ListExprBl *)(yyvsp[(2) - (4)].blList));
    ((InitArrayExpr *)(yyval.expression))->setContinuation();
  ;}
    break;

  case 378:
#line 1440 "src/baseGram.ycc"
    { (yyval.blList)= new ListExprBl((yyvsp[(1) - (1)].expression)); ;}
    break;

  case 379:
#line 1442 "src/baseGram.ycc"
    { (yyval.blList)->add((yyvsp[(3) - (3)].expression)); ;}
    break;

  case 417:
#line 1557 "src/baseGram.ycc"
    {/* TODO */;}
    break;

  case 425:
#line 1592 "src/baseGram.ycc"
    {/* TODO */;}
    break;

  case 426:
#line 1603 "src/baseGram.ycc"
    { (yyval.typeDef)= new PointerTypeDef((yyvsp[(1) - (2)].typeDef)); ;}
    break;

  case 427:
#line 1605 "src/baseGram.ycc"
    { (yyval.typeDef)= new PointerTypeDef(); ;}
    break;

  case 431:
#line 1621 "src/baseGram.ycc"
    {
	  if (!(yyvsp[(1) - (3)].identifier)->isQualified()) {
	   (yyval.identifier)= new QualifiedIdentSrp((IdentifierSrp *)(yyvsp[(1) - (3)].identifier));
	  }
    ((QualifiedIdentSrp *)(yyval.identifier))->push((IdentifierSrp *)(yyvsp[(3) - (3)].identifier));
    std::cout << "@DBG [baseGram]: dottedIdentifier: dottedIdent . ident\n";
	;}
    break;

  case 432:
#line 1632 "src/baseGram.ycc"
    { (yyval.blList)= (yyvsp[(2) - (3)].blList); ;}
    break;

  case 435:
#line 1642 "src/baseGram.ycc"
    { (yyval.integerNumber)= 0; ;}
    break;

  case 437:
#line 1648 "src/baseGram.ycc"
    { (yyval.blList)= NULL; ;}
    break;

  case 439:
#line 1654 "src/baseGram.ycc"
    { (yyval.blList)= NULL; ;}
    break;

  case 441:
#line 1660 "src/baseGram.ycc"
    { (yyval.expression)= NULL; ;}
    break;

  case 443:
#line 1666 "src/baseGram.ycc"
    { (yyval.blList)= NULL; ;}
    break;

  case 445:
#line 1672 "src/baseGram.ycc"
    { (yyval.blList)= NULL; ;}
    break;

  case 447:
#line 1678 "src/baseGram.ycc"
    { (yyval.blList)= NULL; ;}
    break;

  case 449:
#line 1684 "src/baseGram.ycc"
    { (yyval.expression)= NULL; ;}
    break;

  case 451:
#line 1690 "src/baseGram.ycc"
    { (yyval.blList)= NULL; ;}
    break;

  case 453:
#line 1696 "src/baseGram.ycc"
    { (yyval.expression)= NULL; ;}
    break;

  case 455:
#line 1702 "src/baseGram.ycc"
    { (yyval.statement)= NULL; ;}
    break;

  case 457:
#line 1708 "src/baseGram.ycc"
    { (yyval.blList)= NULL; ;}
    break;

  case 459:
#line 1714 "src/baseGram.ycc"
    { (yyval.identifier)= NULL; ;}
    break;

  case 487:
#line 1785 "src/baseGram.ycc"
    { (yyval.blList)= NULL; ;}
    break;

  case 499:
#line 1815 "src/baseGram.ycc"
    { (yyval.blList)= NULL; ;}
    break;


/* Line 1267 of yacc.c.  */
#line 3868 "autoSyntax.tab.ccc"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
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
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
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

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


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

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



