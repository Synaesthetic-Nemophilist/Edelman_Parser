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
     IF = 258,
     ELSE = 259,
     FOR = 260,
     COLON = 261,
     CONT = 262,
     RET = 263,
     BREAK = 264,
     TRU = 265,
     FALS = 266,
     NUL = 267,
     QUE = 268,
     NEW = 269,
     DEL = 270,
     ID = 271,
     INT = 272,
     DOUBLE = 273,
     CHAR = 274,
     STRING = 275,
     CHARDEC = 276,
     BOOLDEC = 277,
     DOUBDEC = 278,
     VOIDDEC = 279,
     INTDEC = 280,
     LARR = 281,
     RARR = 282,
     LPAR = 283,
     RPAR = 284,
     LCURL = 285,
     RCURL = 286,
     SEMICOL = 287,
     COMMA = 288,
     SUB_ASSIGN = 289,
     ADD_ASSIGN = 290,
     MOD_ASSIGN = 291,
     DIV_ASSIGN = 292,
     MUL_ASSIGN = 293,
     ASSIGN = 294,
     OR = 295,
     AND = 296,
     BIN_AND = 297,
     NOT_EQ = 298,
     EQ = 299,
     GT_EQ = 300,
     LT_EQ = 301,
     GT = 302,
     LT = 303,
     MINUS = 304,
     PLUS = 305,
     MOD = 306,
     DIV = 307,
     MUL = 308,
     BYREF = 309,
     NOT = 310,
     DEC_OP = 311,
     INC_OP = 312
   };
#endif
/* Tokens.  */
#define IF 258
#define ELSE 259
#define FOR 260
#define COLON 261
#define CONT 262
#define RET 263
#define BREAK 264
#define TRU 265
#define FALS 266
#define NUL 267
#define QUE 268
#define NEW 269
#define DEL 270
#define ID 271
#define INT 272
#define DOUBLE 273
#define CHAR 274
#define STRING 275
#define CHARDEC 276
#define BOOLDEC 277
#define DOUBDEC 278
#define VOIDDEC 279
#define INTDEC 280
#define LARR 281
#define RARR 282
#define LPAR 283
#define RPAR 284
#define LCURL 285
#define RCURL 286
#define SEMICOL 287
#define COMMA 288
#define SUB_ASSIGN 289
#define ADD_ASSIGN 290
#define MOD_ASSIGN 291
#define DIV_ASSIGN 292
#define MUL_ASSIGN 293
#define ASSIGN 294
#define OR 295
#define AND 296
#define BIN_AND 297
#define NOT_EQ 298
#define EQ 299
#define GT_EQ 300
#define LT_EQ 301
#define GT 302
#define LT 303
#define MINUS 304
#define PLUS 305
#define MOD 306
#define DIV 307
#define MUL 308
#define BYREF 309
#define NOT 310
#define DEC_OP 311
#define INC_OP 312




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

