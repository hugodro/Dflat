/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

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
/* Line 1529 of yacc.c.  */
#line 278 "autoSyntax.tab.hcc"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE srplval;

