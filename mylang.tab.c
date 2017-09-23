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
     SEMICOL = 271,
     COMMA = 272,
     ID = 273,
     INT = 274,
     DOUBLE = 275,
     CHAR = 276,
     STRING = 277,
     CHARDEC = 278,
     BOOLDEC = 279,
     DOUBDEC = 280,
     VOIDDEC = 281,
     INTDEC = 282,
     LARR = 283,
     RARR = 284,
     LPAR = 285,
     RPAR = 286,
     LCURL = 287,
     RCURL = 288,
     SUB_ASSIGN = 289,
     ADD_ASSIGN = 290,
     MOD_ASSIGN = 291,
     DIV_ASSIGN = 292,
     MUL_ASSIGN = 293,
     ASSIGN = 294,
     OR = 295,
     AND = 296,
     BIN_AND = 297,
     GT_EQ = 298,
     LT_EQ = 299,
     GT = 300,
     LT = 301,
     NOT_EQ = 302,
     EQ = 303,
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
#define SEMICOL 271
#define COMMA 272
#define ID 273
#define INT 274
#define DOUBLE 275
#define CHAR 276
#define STRING 277
#define CHARDEC 278
#define BOOLDEC 279
#define DOUBDEC 280
#define VOIDDEC 281
#define INTDEC 282
#define LARR 283
#define RARR 284
#define LPAR 285
#define RPAR 286
#define LCURL 287
#define RCURL 288
#define SUB_ASSIGN 289
#define ADD_ASSIGN 290
#define MOD_ASSIGN 291
#define DIV_ASSIGN 292
#define MUL_ASSIGN 293
#define ASSIGN 294
#define OR 295
#define AND 296
#define BIN_AND 297
#define GT_EQ 298
#define LT_EQ 299
#define GT 300
#define LT 301
#define NOT_EQ 302
#define EQ 303
#define MINUS 304
#define PLUS 305
#define MOD 306
#define DIV 307
#define MUL 308
#define BYREF 309
#define NOT 310
#define DEC_OP 311
#define INC_OP 312




/* Copy the first part of user declarations.  */
#line 2 "mylang.y"
 /* C declarations used in actions */
 #include <stdio.h>
 #include <string.h>

 #define MAX_TABLE_SIZE 100


extern int yylex();
extern int yyparse();
extern FILE *yyin;

int line;
extern int line;
extern char* yytext;


// Type Declaration vars
char* declaredVars[MAX_TABLE_SIZE];
int varIndex;

char* declaredFuncts[MAX_TABLE_SIZE];
int functIndex;

// utility function for looking up declared IDs
int searchDeclared(char**, int, char*);

int errors;
int errorIndex;

struct errorData
{
   int line;
   char errorMsg[100];
};

struct errorData *ptr;



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
#line 42 "mylang.y"
{
  char *str;
}
/* Line 193 of yacc.c.  */
#line 253 "mylang.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 266 "mylang.tab.c"

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
# if defined YYENABLE_NLS && YYENABLE_NLS
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
#define YYFINAL  15
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   3223

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  58
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  23
/* YYNRULES -- Number of rules.  */
#define YYNRULES  138
/* YYNRULES -- Number of states.  */
#define YYNSTATES  266

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   312

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      55,    56,    57
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     7,     9,    12,    14,    16,    18,
      20,    23,    27,    32,    36,    38,    42,    45,    46,    49,
      51,    53,    55,    57,    59,    61,    63,    65,    70,    72,
      80,    87,    94,   100,   104,   106,   110,   113,   118,   122,
     124,   135,   145,   155,   164,   167,   168,   171,   173,   175,
     178,   182,   190,   196,   208,   219,   230,   240,   251,   261,
     271,   280,   290,   299,   308,   316,   325,   333,   341,   348,
     352,   355,   359,   362,   366,   369,   372,   373,   376,   379,
     381,   385,   387,   389,   391,   393,   395,   397,   399,   402,
     406,   410,   415,   420,   423,   427,   430,   433,   437,   442,
     448,   454,   457,   460,   463,   465,   469,   472,   474,   477,
     479,   481,   483,   485,   487,   491,   493,   495,   497,   499,
     501,   503,   505,   507,   509,   511,   513,   515,   517,   521,
     523,   525,   529,   531,   533,   535,   537,   539,   541
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      59,     0,    -1,    60,    -1,     1,    -1,    61,    -1,    61,
      60,    -1,     1,    -1,    62,    -1,    67,    -1,    70,    -1,
       1,    16,    -1,    65,    63,    16,    -1,    65,    64,    63,
      16,    -1,    62,     1,    16,    -1,    66,    -1,    63,    17,
      66,    -1,     1,    16,    -1,    -1,    64,    53,    -1,     1,
      -1,    27,    -1,    23,    -1,    24,    -1,    25,    -1,    26,
      -1,     1,    -1,    18,    -1,    18,    28,    76,    29,    -1,
       1,    -1,    65,    64,    18,    30,    68,    31,    16,    -1,
      65,    64,    18,    30,    31,    16,    -1,    65,    18,    30,
      68,    31,    16,    -1,    65,    18,    30,    31,    16,    -1,
      67,     1,    16,    -1,    69,    -1,    68,    17,    69,    -1,
       1,    16,    -1,    54,    65,    64,    18,    -1,    65,    64,
      18,    -1,     1,    -1,    65,    64,    18,    30,    68,    31,
      32,    71,    73,    33,    -1,    65,    64,    18,    30,    31,
      32,    71,    73,    33,    -1,    65,    18,    30,    68,    31,
      32,    71,    73,    33,    -1,    65,    18,    30,    31,    32,
      71,    73,    33,    -1,    70,     1,    -1,    -1,    71,    61,
      -1,     1,    -1,    16,    -1,    74,    16,    -1,    32,    73,
      33,    -1,     3,    30,    74,    31,    72,     4,    72,    -1,
       3,    30,    74,    31,    72,    -1,    18,     6,     5,    30,
      74,    16,    74,    16,    74,    31,    72,    -1,    18,     6,
       5,    30,    74,    16,    74,    16,    31,    72,    -1,    18,
       6,     5,    30,    74,    16,    16,    74,    31,    72,    -1,
      18,     6,     5,    30,    74,    16,    16,    31,    72,    -1,
      18,     6,     5,    30,    16,    74,    16,    74,    31,    72,
      -1,    18,     6,     5,    30,    16,    74,    16,    31,    72,
      -1,    18,     6,     5,    30,    16,    16,    74,    31,    72,
      -1,    18,     6,     5,    30,    16,    16,    31,    72,    -1,
       5,    30,    74,    16,    74,    16,    74,    31,    72,    -1,
       5,    30,    74,    16,    74,    16,    31,    72,    -1,     5,
      30,    74,    16,    16,    74,    31,    72,    -1,     5,    30,
      74,    16,    16,    31,    72,    -1,     5,    30,    16,    74,
      16,    74,    31,    72,    -1,     5,    30,    16,    74,    16,
      31,    72,    -1,     5,    30,    16,    16,    74,    31,    72,
      -1,     5,    30,    16,    16,    31,    72,    -1,     7,    18,
      16,    -1,     7,    16,    -1,     9,    18,    16,    -1,     9,
      16,    -1,     8,    74,    16,    -1,     8,    16,    -1,     1,
      16,    -1,    -1,    73,    72,    -1,    73,     1,    -1,    18,
      -1,    30,    74,    31,    -1,    10,    -1,    11,    -1,    12,
      -1,    19,    -1,    21,    -1,    20,    -1,    22,    -1,    30,
      31,    -1,    18,    30,    31,    -1,    30,    75,    31,    -1,
      18,    30,    75,    31,    -1,    74,    28,    74,    29,    -1,
      77,    74,    -1,    74,    78,    74,    -1,    79,    74,    -1,
      74,    79,    -1,    74,    80,    74,    -1,    30,    65,    31,
      74,    -1,    74,    13,    74,     6,    74,    -1,    14,    65,
      28,    74,    29,    -1,    14,    65,    -1,    15,    74,    -1,
      74,     1,    -1,    74,    -1,    75,    17,    74,    -1,    75,
       1,    -1,    74,    -1,    76,     1,    -1,    42,    -1,    53,
      -1,    50,    -1,    49,    -1,    55,    -1,    77,     1,    16,
      -1,    53,    -1,    52,    -1,    51,    -1,    50,    -1,    49,
      -1,    46,    -1,    45,    -1,    44,    -1,    43,    -1,    48,
      -1,    47,    -1,    41,    -1,    40,    -1,    78,     1,    16,
      -1,    57,    -1,    56,    -1,    79,     1,    16,    -1,    39,
      -1,    38,    -1,    37,    -1,    36,    -1,    35,    -1,    34,
      -1,    80,     1,    16,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    65,    65,    66,    71,    72,    73,    77,    78,    79,
      80,    85,    86,    87,    93,    94,    95,    99,   101,   102,
     107,   108,   109,   110,   111,   112,   117,   118,   119,   124,
     125,   126,   127,   128,   132,   133,   134,   138,   139,   140,
     145,   152,   159,   166,   173,   177,   179,   180,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   215,   217,   218,   222,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     251,   252,   262,   263,   264,   265,   266,   267,   268,   269,
     270,   271,   272,   273,   277,   278,   279,   283,   284,   289,
     290,   291,   292,   293,   294,   298,   299,   300,   301,   302,
     303,   304,   305,   306,   307,   308,   309,   310,   311,   315,
     316,   317,   321,   322,   323,   324,   325,   326,   327
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IF", "ELSE", "FOR", "COLON", "CONT",
  "RET", "BREAK", "TRU", "FALS", "NUL", "QUE", "NEW", "DEL", "SEMICOL",
  "COMMA", "ID", "INT", "DOUBLE", "CHAR", "STRING", "CHARDEC", "BOOLDEC",
  "DOUBDEC", "VOIDDEC", "INTDEC", "LARR", "RARR", "LPAR", "RPAR", "LCURL",
  "RCURL", "SUB_ASSIGN", "ADD_ASSIGN", "MOD_ASSIGN", "DIV_ASSIGN",
  "MUL_ASSIGN", "ASSIGN", "OR", "AND", "BIN_AND", "GT_EQ", "LT_EQ", "GT",
  "LT", "NOT_EQ", "EQ", "MINUS", "PLUS", "MOD", "DIV", "MUL", "BYREF",
  "NOT", "DEC_OP", "INC_OP", "$accept", "program", "dec_list", "dec",
  "var_dec", "declarative_list", "stars", "basic_data_type", "declarative",
  "func_dec", "parameter_list", "parameter", "func_def", "declare_list",
  "statement", "statement_list", "expr", "expr_list", "const_expr",
  "un_op", "bin_op", "un_assgn_op", "bin_assgn_op", 0
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
     305,   306,   307,   308,   309,   310,   311,   312
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    58,    59,    59,    60,    60,    60,    61,    61,    61,
      61,    62,    62,    62,    63,    63,    63,    64,    64,    64,
      65,    65,    65,    65,    65,    65,    66,    66,    66,    67,
      67,    67,    67,    67,    68,    68,    68,    69,    69,    69,
      70,    70,    70,    70,    70,    71,    71,    71,    72,    72,
      72,    72,    72,    72,    72,    72,    72,    72,    72,    72,
      72,    72,    72,    72,    72,    72,    72,    72,    72,    72,
      72,    72,    72,    72,    72,    72,    73,    73,    73,    74,
      74,    74,    74,    74,    74,    74,    74,    74,    74,    74,
      74,    74,    74,    74,    74,    74,    74,    74,    74,    74,
      74,    74,    74,    74,    75,    75,    75,    76,    76,    77,
      77,    77,    77,    77,    77,    78,    78,    78,    78,    78,
      78,    78,    78,    78,    78,    78,    78,    78,    78,    79,
      79,    79,    80,    80,    80,    80,    80,    80,    80
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     2,     1,     1,     1,     1,
       2,     3,     4,     3,     1,     3,     2,     0,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     4,     1,     7,
       6,     6,     5,     3,     1,     3,     2,     4,     3,     1,
      10,     9,     9,     8,     2,     0,     2,     1,     1,     2,
       3,     7,     5,    11,    10,    10,     9,    10,     9,     9,
       8,     9,     8,     8,     7,     8,     7,     7,     6,     3,
       2,     3,     2,     3,     2,     2,     0,     2,     2,     1,
       3,     1,     1,     1,     1,     1,     1,     1,     2,     3,
       3,     4,     4,     2,     3,     2,     2,     3,     4,     5,
       5,     2,     2,     2,     1,     3,     2,     1,     2,     1,
       1,     1,     1,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     1,
       1,     3,     1,     1,     1,     1,     1,     1,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    25,    21,    22,    23,    24,    20,     0,     2,     0,
       0,     0,     0,     0,    10,     1,    25,     5,     0,    19,
      26,     0,     0,    14,     0,    44,    13,    16,     0,     0,
      11,     0,    28,    26,    18,     0,    33,    81,    82,    83,
       0,     0,    79,    84,    86,    85,    87,     0,   109,   112,
     111,   110,   113,   130,   129,     0,     0,     0,     0,    25,
       0,     0,     0,     0,    34,    28,    26,    15,     0,    12,
      25,   101,     0,     0,    88,     0,     0,     0,   103,     0,
       0,   137,   136,   135,   134,   133,   132,   127,   126,   123,
     122,   121,   120,   125,   124,   119,   118,   117,   116,   115,
       0,     0,     0,   108,    27,     0,     0,     0,     0,    36,
      32,     0,     0,    19,     0,     0,     0,     0,     0,     0,
      89,     0,     0,     0,    80,   106,     0,    90,     0,     0,
       0,     0,     0,     0,   114,   131,    47,     0,     0,    38,
      25,    35,    31,     0,    30,     0,     0,     0,    91,     0,
       0,     0,    92,   128,   138,    25,    46,     0,    37,     0,
       0,    29,     0,   100,     0,    78,     0,     0,     0,     0,
       0,    48,    79,    76,    43,    77,     0,     0,     0,     0,
      75,     0,     0,    70,     0,    74,     0,    72,     0,     0,
       0,    49,    42,    41,     0,     0,     0,     0,    69,    73,
      71,     0,    50,    40,     0,     0,     0,     0,     0,     0,
      52,     0,     0,     0,     0,     0,     0,     0,     0,    68,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    51,
      67,    66,     0,    64,     0,     0,     0,     0,     0,     0,
       0,     0,    65,    63,    62,     0,    60,     0,     0,     0,
       0,     0,     0,    61,    59,    58,     0,    56,     0,     0,
       0,    57,    55,    54,     0,    53
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     7,     8,   156,    10,    21,    22,    11,    23,    12,
      63,    64,    13,   137,   175,   157,   176,    77,    56,    57,
     100,    58,   102
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -178
static const yytype_int16 yypact[] =
{
     218,    50,  -178,  -178,  -178,  -178,  -178,     8,  -178,   207,
     289,     0,   347,   405,  -178,  -178,    77,  -178,     4,    96,
      55,   165,     6,  -178,     7,  -178,  -178,  -178,  3166,    38,
    -178,    30,    40,    58,  -178,   167,  -178,  -178,  -178,  -178,
     226,  3166,   -14,  -178,  -178,  -178,  -178,  1424,  -178,  -178,
    -178,  -178,  -178,  -178,  -178,  1455,     9,    89,  2436,   135,
      62,   226,    14,    -5,  -178,  -178,    48,  -178,   101,  -178,
    -178,    93,   549,  2553,  -178,    74,  1235,     5,  -178,  3166,
    3166,  -178,  -178,  -178,  -178,  -178,  -178,  -178,  -178,  -178,
    -178,  -178,  -178,  -178,  -178,  -178,  -178,  -178,  -178,  -178,
    2486,   602,  2536,  -178,  -178,   114,   655,   121,   708,  -178,
    -178,   462,    14,  -178,   -16,   133,    64,    90,   116,  3166,
    -178,  1276,    16,  3166,  -178,  -178,  3166,  -178,  1508,  1549,
     124,   761,   127,   814,  -178,  -178,  -178,   519,   -13,  -178,
     145,  -178,  -178,   462,  -178,   462,   104,  1590,  -178,   867,
    1317,  3166,  -178,  -178,  -178,   148,  -178,   977,  -178,   519,
     519,  -178,   462,  -178,   920,   153,    87,   119,   149,  2601,
     156,  -178,    19,  -178,  -178,  -178,  1643,  1034,  1091,   519,
    -178,  3166,  2618,  -178,   162,  -178,  1696,  -178,   174,   188,
    1148,  -178,  -178,  -178,  1205,  1737,  2666,  1790,  -178,  -178,
    -178,   131,  -178,  -178,  1374,  2683,  1843,  2731,  2748,   153,
     190,  1374,  1884,  2796,  2844,  1937,  2892,  1990,  1374,  -178,
    1374,  1374,  2031,  1374,  2072,  2909,  2957,  2125,  3005,  -178,
    -178,  -178,  1374,  -178,  1374,  1374,  2166,  1374,  2207,  3022,
    3070,  2260,  -178,  -178,  -178,  1374,  -178,  1374,  1374,  2301,
    1374,  2342,  3118,  -178,  -178,  -178,  1374,  -178,  1374,  1374,
    2383,  -178,  -178,  -178,  1374,  -178
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -178,  -178,   186,    75,  -178,   177,   -58,   -26,   170,  -178,
     128,    88,  -178,  -134,  -177,   -44,   -28,   129,  -178,  -178,
    -178,    42,  -178
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -108
static const yytype_int16 yytable[] =
{
      55,    19,   139,    62,   114,   158,   125,    32,    15,   159,
     103,   160,   115,    72,    71,   113,    73,   125,    20,    76,
      26,    75,   126,    36,    33,   189,   116,   210,   179,   106,
     108,    65,   -17,   126,   219,   112,   127,    34,   104,    59,
      34,   229,    62,   230,   231,   121,   233,   148,    66,    73,
      -3,   128,   129,   -17,   138,   242,    27,   243,   244,    34,
     246,     2,     3,     4,     5,     6,    14,   -17,   253,    60,
     254,   255,   131,   257,   133,     9,    28,    -6,   110,   261,
     142,   262,   263,    28,     9,    29,    28,   265,    68,    62,
     105,   147,    61,    14,   111,   149,   143,   101,   150,    37,
      38,    39,    59,    40,    41,   123,   144,    42,    43,    44,
      45,    46,    27,   -28,   101,   177,   178,   181,   101,    47,
     161,   119,   145,   164,     2,     3,     4,     5,     6,   190,
     134,    48,   117,   115,   140,   194,   162,   135,    49,    50,
     153,   186,    51,   154,    52,    53,    54,   146,   101,   182,
     101,   109,   -39,   195,   197,    61,     2,     3,     4,     5,
       6,   208,   -39,   101,    14,   183,   -39,   184,   206,   180,
     101,   101,   187,   101,   188,   101,   -39,   212,   198,   215,
     217,    30,    31,    69,    31,   222,   224,    61,   227,   101,
     200,   101,   101,   201,   218,    17,   118,   236,   238,    35,
     241,    67,   122,   141,     0,     0,   101,    -4,    16,     0,
       0,   249,   251,     0,     0,     0,     0,     0,   101,     1,
       0,     0,     0,     0,   260,     0,     0,    70,   101,     0,
       2,     3,     4,     5,     6,     0,     0,   101,     0,   101,
       0,     2,     3,     4,     5,     6,     0,     0,   101,     2,
       3,     4,     5,     6,   101,     0,     0,   101,     0,   101,
       0,     0,     0,     0,   101,     0,   101,     0,     0,   101,
       0,     0,     0,     0,     0,     0,     0,     0,   101,     0,
     101,     0,     0,   101,     0,     0,     0,     0,     0,    -7,
      18,   101,    -7,   101,    -7,     0,    -7,    -7,    -7,    -7,
      -7,    -7,   101,    -7,    -7,    -7,     0,    -7,    -7,    -7,
      -7,    -7,    -7,    -7,    -7,    -7,    -7,     0,     0,    -7,
       0,    -7,    -7,     0,     0,     0,     0,     0,     0,     0,
       0,    -7,     0,     0,     0,     0,     0,     0,    -7,    -7,
       0,     0,    -7,     0,    -7,    -7,    -7,    -8,    24,     0,
      -8,     0,    -8,     0,    -8,    -8,    -8,    -8,    -8,    -8,
       0,    -8,    -8,    -8,     0,    -8,    -8,    -8,    -8,    -8,
      -8,    -8,    -8,    -8,    -8,     0,     0,    -8,     0,    -8,
      -8,     0,     0,     0,     0,     0,     0,     0,     0,    -8,
       0,     0,     0,     0,     0,     0,    -8,    -8,     0,     0,
      -8,     0,    -8,    -8,    -8,    -9,    25,     0,    -9,     0,
      -9,     0,    -9,    -9,    -9,    -9,    -9,    -9,     0,    -9,
      -9,    -9,     0,    -9,    -9,    -9,    -9,    -9,    -9,    -9,
      -9,    -9,    -9,     0,     0,    -9,     0,    -9,    -9,     0,
       0,     0,     0,     0,     0,     0,     0,    -9,     0,     0,
       0,     0,     0,     0,    -9,    -9,     0,     0,    -9,     0,
      -9,    -9,    -9,   136,     0,   -45,     0,   -45,     0,   -45,
     -45,   -45,   -45,   -45,   -45,     0,   -45,   -45,   -45,     0,
     -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,
       0,     0,   -45,     0,   -45,   -45,     0,     0,     0,     0,
       0,     0,     0,     0,   -45,     0,     0,     0,     0,     0,
       0,   -45,   -45,     0,     0,   -45,     0,   -45,   -45,   -45,
     155,     0,   -76,     0,   -76,     0,   -76,   -76,   -76,   -76,
     -76,   -76,     0,   -76,   -76,   -76,     0,   -76,   -76,   -76,
     -76,   -76,     2,     3,     4,     5,     6,     0,     0,   -76,
      78,   -76,   -76,     0,     0,  -102,     0,     0,     0,     0,
       0,   -76,    79,     0,     0,  -102,  -102,     0,   -76,   -76,
       0,     0,   -76,     0,   -76,   -76,   -76,    80,  -102,     0,
    -102,     0,     0,    81,    82,    83,    84,    85,    86,    87,
      88,     0,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   107,     0,    53,    54,     0,   -96,     0,
       0,     0,     0,     0,     0,   -96,     0,     0,   -96,   -96,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -96,   -96,     0,   -96,     0,     0,   -96,   -96,   -96,   -96,
     -96,   -96,   -96,   -96,     0,   -96,   -96,   -96,   -96,   -96,
     -96,   -96,   -96,   -96,   -96,   -96,    78,     0,   -96,   -96,
       0,   -93,     0,     0,     0,     0,     0,     0,    79,     0,
       0,   -93,   -93,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    80,   -93,     0,   -93,     0,     0,    81,
      82,    83,    84,    85,    86,    87,    88,     0,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,    78,
       0,    53,    54,     0,   -95,     0,     0,     0,     0,     0,
       0,    79,     0,     0,   -95,   -95,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    80,   -95,     0,   -95,
       0,     0,    81,    82,    83,    84,    85,    86,    87,    88,
       0,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,    78,     0,    53,    54,     0,   -94,     0,     0,
       0,     0,     0,     0,    79,     0,     0,   -94,   -94,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    80,
     -94,     0,   -94,     0,     0,    81,    82,    83,    84,    85,
      86,    87,    88,     0,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,    78,     0,    53,    54,     0,
     -97,     0,     0,     0,     0,     0,     0,    79,     0,     0,
     -97,   -97,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    80,   -97,     0,   -97,     0,     0,    81,    82,
      83,    84,    85,    86,    87,    88,     0,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,    78,     0,
      53,    54,     0,   -98,     0,     0,     0,     0,     0,     0,
      79,     0,     0,   -98,   -98,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    80,   -98,     0,   -98,     0,
       0,    81,    82,    83,    84,    85,    86,    87,    88,     0,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,    78,     0,    53,    54,     0,   -99,     0,     0,     0,
       0,     0,     0,    79,     0,     0,   -99,   -99,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    80,   -99,
       0,   -99,     0,     0,    81,    82,    83,    84,    85,    86,
      87,    88,     0,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,     0,     0,    53,    54,   165,     0,
     166,     0,   167,     0,   168,   169,   170,    37,    38,    39,
       0,    40,    41,   171,     0,   172,    43,    44,    45,    46,
       0,     0,     0,     0,     0,     0,     0,    47,     0,   173,
     174,     0,     0,     0,     0,     0,     0,     0,     0,    48,
       0,     0,     0,     0,     0,     0,    49,    50,     0,     0,
      51,     0,    52,    53,    54,   165,     0,   166,     0,   167,
       0,   168,   169,   170,    37,    38,    39,     0,    40,    41,
     171,     0,   172,    43,    44,    45,    46,     0,     0,     0,
       0,     0,     0,     0,    47,     0,   173,   192,     0,     0,
       0,     0,     0,     0,     0,     0,    48,     0,     0,     0,
       0,     0,     0,    49,    50,     0,     0,    51,     0,    52,
      53,    54,   165,     0,   166,     0,   167,     0,   168,   169,
     170,    37,    38,    39,     0,    40,    41,   171,     0,   172,
      43,    44,    45,    46,     0,     0,     0,     0,     0,     0,
       0,    47,     0,   173,   193,     0,     0,     0,     0,     0,
       0,     0,     0,    48,     0,     0,     0,     0,     0,     0,
      49,    50,     0,     0,    51,     0,    52,    53,    54,   165,
       0,   166,     0,   167,     0,   168,   169,   170,    37,    38,
      39,     0,    40,    41,   171,     0,   172,    43,    44,    45,
      46,     0,     0,     0,     0,     0,     0,     0,    47,     0,
     173,   202,     0,     0,     0,     0,     0,     0,     0,     0,
      48,     0,     0,     0,     0,     0,     0,    49,    50,     0,
       0,    51,     0,    52,    53,    54,   165,     0,   166,     0,
     167,     0,   168,   169,   170,    37,    38,    39,     0,    40,
      41,   171,     0,   172,    43,    44,    45,    46,     0,     0,
       0,     0,     0,     0,     0,    47,    78,   173,   203,     0,
       0,     0,     0,     0,     0,     0,     0,    48,    79,     0,
       0,     0,  -104,     0,    49,    50,     0,     0,    51,     0,
      52,    53,    54,    80,     0,     0,   124,     0,     0,    81,
      82,    83,    84,    85,    86,    87,    88,    78,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,    79,
       0,    53,    54,  -104,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    80,     0,     0,  -104,     0,     0,
      81,    82,    83,    84,    85,    86,    87,    88,    78,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
      79,     0,    53,    54,  -105,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    80,     0,     0,  -105,     0,
       0,    81,    82,    83,    84,    85,    86,    87,    88,     0,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,     0,     0,    53,    54,   209,     0,   166,     0,   167,
       0,   168,   169,   170,    37,    38,    39,     0,    40,    41,
     171,     0,   172,    43,    44,    45,    46,     0,     0,     0,
       0,     0,     0,     0,    47,     0,   173,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    48,     0,     0,     0,
       0,     0,     0,    49,    50,    70,     0,    51,     0,    52,
      53,    54,     0,     0,    37,    38,    39,     0,    40,    41,
       0,     0,    42,    43,    44,    45,    46,     2,     3,     4,
       5,     6,     0,     0,    47,    74,    78,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    48,     0,    79,     0,
       0,     0,     0,    49,    50,     0,     0,    51,     0,    52,
      53,    54,     0,    80,  -107,     0,     0,     0,     0,    81,
      82,    83,    84,    85,    86,    87,    88,     0,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,    78,
       0,    53,    54,     0,   151,     0,     0,     0,     0,     0,
       0,    79,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    80,     0,     0,     0,
       0,     0,    81,    82,    83,    84,    85,    86,    87,    88,
      78,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,    79,     0,    53,    54,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    80,   152,     0,
       0,     0,     0,    81,    82,    83,    84,    85,    86,    87,
      88,    78,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,    79,     0,    53,    54,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    80,   163,
       0,     0,     0,     0,    81,    82,    83,    84,    85,    86,
      87,    88,     0,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,    78,     0,    53,    54,     0,     0,
       0,     0,     0,     0,     0,     0,    79,     0,     0,   191,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    80,     0,     0,     0,     0,     0,    81,    82,    83,
      84,    85,    86,    87,    88,     0,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,    78,     0,    53,
      54,     0,     0,     0,     0,     0,     0,     0,     0,    79,
       0,     0,   199,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    80,     0,     0,     0,     0,     0,
      81,    82,    83,    84,    85,    86,    87,    88,    78,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
      79,     0,    53,    54,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    80,     0,     0,   204,     0,
       0,    81,    82,    83,    84,    85,    86,    87,    88,     0,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,    78,     0,    53,    54,     0,     0,     0,     0,     0,
       0,     0,     0,    79,     0,     0,   207,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    80,     0,
       0,     0,     0,     0,    81,    82,    83,    84,    85,    86,
      87,    88,     0,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,    78,     0,    53,    54,     0,     0,
       0,     0,     0,     0,     0,     0,    79,     0,     0,   213,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    80,     0,     0,     0,     0,     0,    81,    82,    83,
      84,    85,    86,    87,    88,    78,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,    79,     0,    53,
      54,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    80,     0,     0,   220,     0,     0,    81,    82,
      83,    84,    85,    86,    87,    88,     0,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,    78,     0,
      53,    54,     0,     0,     0,     0,     0,     0,     0,     0,
      79,     0,     0,   225,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    80,     0,     0,     0,     0,
       0,    81,    82,    83,    84,    85,    86,    87,    88,     0,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,    78,     0,    53,    54,     0,     0,     0,     0,     0,
       0,     0,     0,    79,     0,     0,   228,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    80,     0,
       0,     0,     0,     0,    81,    82,    83,    84,    85,    86,
      87,    88,    78,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,    79,     0,    53,    54,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    80,
       0,     0,   232,     0,     0,    81,    82,    83,    84,    85,
      86,    87,    88,    78,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,    79,     0,    53,    54,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      80,     0,     0,   234,     0,     0,    81,    82,    83,    84,
      85,    86,    87,    88,     0,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,    78,     0,    53,    54,
       0,     0,     0,     0,     0,     0,     0,     0,    79,     0,
       0,   239,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    80,     0,     0,     0,     0,     0,    81,
      82,    83,    84,    85,    86,    87,    88,    78,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,    79,
       0,    53,    54,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    80,     0,     0,   245,     0,     0,
      81,    82,    83,    84,    85,    86,    87,    88,    78,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
      79,     0,    53,    54,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    80,     0,     0,   247,     0,
       0,    81,    82,    83,    84,    85,    86,    87,    88,     0,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,    78,     0,    53,    54,     0,     0,     0,     0,     0,
       0,     0,     0,    79,     0,     0,   252,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    80,     0,
       0,     0,     0,     0,    81,    82,    83,    84,    85,    86,
      87,    88,    78,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,    79,     0,    53,    54,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    80,
       0,     0,   256,     0,     0,    81,    82,    83,    84,    85,
      86,    87,    88,    78,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,    79,     0,    53,    54,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      80,     0,     0,   258,     0,     0,    81,    82,    83,    84,
      85,    86,    87,    88,    78,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,    79,     0,    53,    54,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    80,     0,     0,   264,     0,     0,    81,    82,    83,
      84,    85,    86,    87,    88,     0,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   107,     0,    53,
      54,     0,     0,     0,     0,     0,    37,    38,    39,     0,
      40,    41,     0,     0,    42,    43,    44,    45,    46,     0,
       0,     0,     0,     0,     0,     0,    47,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    48,     0,
       0,     0,     0,     0,     0,    49,    50,   130,     0,    51,
       0,    52,    53,    54,     0,     0,    37,    38,    39,     0,
      40,    41,     0,     0,    42,    43,    44,    45,    46,     0,
       0,     0,     0,     0,     0,     0,    47,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    48,     0,
       0,     0,     0,     0,     0,    49,    50,   132,     0,    51,
       0,    52,    53,    54,     0,     0,    37,    38,    39,     0,
      40,    41,     0,     0,    42,    43,    44,    45,    46,     0,
       0,     0,     0,    37,    38,    39,    47,    40,    41,     0,
       0,    42,    43,    44,    45,    46,     0,     0,    48,     0,
       0,     0,     0,    47,   120,    49,    50,     0,     0,    51,
       0,    52,    53,    54,     0,    48,     0,     0,     0,     0,
       0,     0,    49,    50,     0,     0,    51,     0,    52,    53,
      54,    37,    38,    39,     0,    40,    41,   185,     0,    42,
      43,    44,    45,    46,     0,     0,     0,     0,    37,    38,
      39,    47,    40,    41,   196,     0,    42,    43,    44,    45,
      46,     0,     0,    48,     0,     0,     0,     0,    47,     0,
      49,    50,     0,     0,    51,     0,    52,    53,    54,     0,
      48,     0,     0,     0,     0,     0,     0,    49,    50,     0,
       0,    51,     0,    52,    53,    54,    37,    38,    39,     0,
      40,    41,   205,     0,    42,    43,    44,    45,    46,     0,
       0,     0,     0,    37,    38,    39,    47,    40,    41,     0,
       0,    42,    43,    44,    45,    46,     0,     0,    48,     0,
       0,     0,     0,    47,   211,    49,    50,     0,     0,    51,
       0,    52,    53,    54,     0,    48,     0,     0,     0,     0,
       0,     0,    49,    50,     0,     0,    51,     0,    52,    53,
      54,    37,    38,    39,     0,    40,    41,   214,     0,    42,
      43,    44,    45,    46,     0,     0,     0,     0,    37,    38,
      39,    47,    40,    41,   216,     0,    42,    43,    44,    45,
      46,     0,     0,    48,     0,     0,     0,     0,    47,     0,
      49,    50,     0,     0,    51,     0,    52,    53,    54,     0,
      48,     0,     0,     0,     0,     0,     0,    49,    50,     0,
       0,    51,     0,    52,    53,    54,    37,    38,    39,     0,
      40,    41,     0,     0,    42,    43,    44,    45,    46,     0,
       0,     0,     0,     0,     0,     0,    47,   221,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    48,     0,
       0,     0,     0,     0,     0,    49,    50,     0,     0,    51,
       0,    52,    53,    54,    37,    38,    39,     0,    40,    41,
       0,     0,    42,    43,    44,    45,    46,     0,     0,     0,
       0,     0,     0,     0,    47,   223,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    48,     0,     0,     0,
       0,     0,     0,    49,    50,     0,     0,    51,     0,    52,
      53,    54,    37,    38,    39,     0,    40,    41,   226,     0,
      42,    43,    44,    45,    46,     0,     0,     0,     0,    37,
      38,    39,    47,    40,    41,     0,     0,    42,    43,    44,
      45,    46,     0,     0,    48,     0,     0,     0,     0,    47,
     235,    49,    50,     0,     0,    51,     0,    52,    53,    54,
       0,    48,     0,     0,     0,     0,     0,     0,    49,    50,
       0,     0,    51,     0,    52,    53,    54,    37,    38,    39,
       0,    40,    41,     0,     0,    42,    43,    44,    45,    46,
       0,     0,     0,     0,     0,     0,     0,    47,   237,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    48,
       0,     0,     0,     0,     0,     0,    49,    50,     0,     0,
      51,     0,    52,    53,    54,    37,    38,    39,     0,    40,
      41,   240,     0,    42,    43,    44,    45,    46,     0,     0,
       0,     0,    37,    38,    39,    47,    40,    41,     0,     0,
      42,    43,    44,    45,    46,     0,     0,    48,     0,     0,
       0,     0,    47,   248,    49,    50,     0,     0,    51,     0,
      52,    53,    54,     0,    48,     0,     0,     0,     0,     0,
       0,    49,    50,     0,     0,    51,     0,    52,    53,    54,
      37,    38,    39,     0,    40,    41,     0,     0,    42,    43,
      44,    45,    46,     0,     0,     0,     0,     0,     0,     0,
      47,   250,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    48,     0,     0,     0,     0,     0,     0,    49,
      50,     0,     0,    51,     0,    52,    53,    54,    37,    38,
      39,     0,    40,    41,     0,     0,    42,    43,    44,    45,
      46,     0,     0,     0,     0,     0,     0,     0,    47,   259,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      48,     0,     0,     0,     0,     0,     0,    49,    50,     0,
       0,    51,     0,    52,    53,    54,    37,    38,    39,     0,
      40,    41,     0,     0,    42,    43,    44,    45,    46,     0,
       0,     0,     0,     0,     0,     0,    47,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    48,     0,
       0,     0,     0,     0,     0,    49,    50,     0,     0,    51,
       0,    52,    53,    54
};

static const yytype_int16 yycheck[] =
{
      28,     1,    18,    29,    62,    18,     1,     1,     0,   143,
       1,   145,    17,    41,    40,     1,    30,     1,    18,    47,
      16,    47,    17,    16,    18,     6,    31,   204,   162,    57,
      58,     1,    18,    17,   211,    61,    31,    53,    29,     1,
      53,   218,    68,   220,   221,    73,   223,    31,    18,    30,
       0,    79,    80,    53,   112,   232,    16,   234,   235,    53,
     237,    23,    24,    25,    26,    27,    16,    53,   245,    31,
     247,   248,   100,   250,   102,     0,    28,     0,    16,   256,
      16,   258,   259,    28,     9,    30,    28,   264,    30,   115,
       1,   119,    54,    16,    32,   123,    32,    55,   126,    10,
      11,    12,     1,    14,    15,    31,    16,    18,    19,    20,
      21,    22,    16,    17,    72,   159,   160,    30,    76,    30,
      16,    28,    32,   151,    23,    24,    25,    26,    27,   173,
      16,    42,    31,    17,     1,   179,    32,    16,    49,    50,
      16,   169,    53,    16,    55,    56,    57,    31,   106,    30,
     108,    16,    17,   181,   182,    54,    23,    24,    25,    26,
      27,    30,    17,   121,    16,    16,    31,    18,   196,    16,
     128,   129,    16,   131,    18,   133,    31,   205,    16,   207,
     208,    16,    17,    16,    17,   213,   214,    54,   216,   147,
      16,   149,   150,     5,     4,     9,    68,   225,   226,    22,
     228,    31,    73,   115,    -1,    -1,   164,     0,     1,    -1,
      -1,   239,   240,    -1,    -1,    -1,    -1,    -1,   176,     1,
      -1,    -1,    -1,    -1,   252,    -1,    -1,     1,   186,    -1,
      23,    24,    25,    26,    27,    -1,    -1,   195,    -1,   197,
      -1,    23,    24,    25,    26,    27,    -1,    -1,   206,    23,
      24,    25,    26,    27,   212,    -1,    -1,   215,    -1,   217,
      -1,    -1,    -1,    -1,   222,    -1,   224,    -1,    -1,   227,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   236,    -1,
     238,    -1,    -1,   241,    -1,    -1,    -1,    -1,    -1,     0,
       1,   249,     3,   251,     5,    -1,     7,     8,     9,    10,
      11,    12,   260,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    -1,    -1,    30,
      -1,    32,    33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    42,    -1,    -1,    -1,    -1,    -1,    -1,    49,    50,
      -1,    -1,    53,    -1,    55,    56,    57,     0,     1,    -1,
       3,    -1,     5,    -1,     7,     8,     9,    10,    11,    12,
      -1,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    -1,    -1,    30,    -1,    32,
      33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      -1,    -1,    -1,    -1,    -1,    -1,    49,    50,    -1,    -1,
      53,    -1,    55,    56,    57,     0,     1,    -1,     3,    -1,
       5,    -1,     7,     8,     9,    10,    11,    12,    -1,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    -1,    -1,    30,    -1,    32,    33,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    -1,    -1,
      -1,    -1,    -1,    -1,    49,    50,    -1,    -1,    53,    -1,
      55,    56,    57,     1,    -1,     3,    -1,     5,    -1,     7,
       8,     9,    10,    11,    12,    -1,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      -1,    -1,    30,    -1,    32,    33,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    42,    -1,    -1,    -1,    -1,    -1,
      -1,    49,    50,    -1,    -1,    53,    -1,    55,    56,    57,
       1,    -1,     3,    -1,     5,    -1,     7,     8,     9,    10,
      11,    12,    -1,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    -1,    -1,    30,
       1,    32,    33,    -1,    -1,     6,    -1,    -1,    -1,    -1,
      -1,    42,    13,    -1,    -1,    16,    17,    -1,    49,    50,
      -1,    -1,    53,    -1,    55,    56,    57,    28,    29,    -1,
      31,    -1,    -1,    34,    35,    36,    37,    38,    39,    40,
      41,    -1,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,     1,    -1,    56,    57,    -1,     6,    -1,
      -1,    -1,    -1,    -1,    -1,    13,    -1,    -1,    16,    17,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      28,    29,    -1,    31,    -1,    -1,    34,    35,    36,    37,
      38,    39,    40,    41,    -1,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,     1,    -1,    56,    57,
      -1,     6,    -1,    -1,    -1,    -1,    -1,    -1,    13,    -1,
      -1,    16,    17,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    28,    29,    -1,    31,    -1,    -1,    34,
      35,    36,    37,    38,    39,    40,    41,    -1,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,     1,
      -1,    56,    57,    -1,     6,    -1,    -1,    -1,    -1,    -1,
      -1,    13,    -1,    -1,    16,    17,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    28,    29,    -1,    31,
      -1,    -1,    34,    35,    36,    37,    38,    39,    40,    41,
      -1,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,     1,    -1,    56,    57,    -1,     6,    -1,    -1,
      -1,    -1,    -1,    -1,    13,    -1,    -1,    16,    17,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    28,
      29,    -1,    31,    -1,    -1,    34,    35,    36,    37,    38,
      39,    40,    41,    -1,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,     1,    -1,    56,    57,    -1,
       6,    -1,    -1,    -1,    -1,    -1,    -1,    13,    -1,    -1,
      16,    17,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    28,    29,    -1,    31,    -1,    -1,    34,    35,
      36,    37,    38,    39,    40,    41,    -1,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,     1,    -1,
      56,    57,    -1,     6,    -1,    -1,    -1,    -1,    -1,    -1,
      13,    -1,    -1,    16,    17,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    28,    29,    -1,    31,    -1,
      -1,    34,    35,    36,    37,    38,    39,    40,    41,    -1,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,     1,    -1,    56,    57,    -1,     6,    -1,    -1,    -1,
      -1,    -1,    -1,    13,    -1,    -1,    16,    17,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    28,    29,
      -1,    31,    -1,    -1,    34,    35,    36,    37,    38,    39,
      40,    41,    -1,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    -1,    -1,    56,    57,     1,    -1,
       3,    -1,     5,    -1,     7,     8,     9,    10,    11,    12,
      -1,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,    32,
      33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      -1,    -1,    -1,    -1,    -1,    -1,    49,    50,    -1,    -1,
      53,    -1,    55,    56,    57,     1,    -1,     3,    -1,     5,
      -1,     7,     8,     9,    10,    11,    12,    -1,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    30,    -1,    32,    33,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    -1,    -1,    -1,
      -1,    -1,    -1,    49,    50,    -1,    -1,    53,    -1,    55,
      56,    57,     1,    -1,     3,    -1,     5,    -1,     7,     8,
       9,    10,    11,    12,    -1,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    30,    -1,    32,    33,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    42,    -1,    -1,    -1,    -1,    -1,    -1,
      49,    50,    -1,    -1,    53,    -1,    55,    56,    57,     1,
      -1,     3,    -1,     5,    -1,     7,     8,     9,    10,    11,
      12,    -1,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,
      32,    33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      42,    -1,    -1,    -1,    -1,    -1,    -1,    49,    50,    -1,
      -1,    53,    -1,    55,    56,    57,     1,    -1,     3,    -1,
       5,    -1,     7,     8,     9,    10,    11,    12,    -1,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    30,     1,    32,    33,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    13,    -1,
      -1,    -1,    17,    -1,    49,    50,    -1,    -1,    53,    -1,
      55,    56,    57,    28,    -1,    -1,    31,    -1,    -1,    34,
      35,    36,    37,    38,    39,    40,    41,     1,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    13,
      -1,    56,    57,    17,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    28,    -1,    -1,    31,    -1,    -1,
      34,    35,    36,    37,    38,    39,    40,    41,     1,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      13,    -1,    56,    57,    17,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    28,    -1,    -1,    31,    -1,
      -1,    34,    35,    36,    37,    38,    39,    40,    41,    -1,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    -1,    -1,    56,    57,     1,    -1,     3,    -1,     5,
      -1,     7,     8,     9,    10,    11,    12,    -1,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    30,    -1,    32,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    -1,    -1,    -1,
      -1,    -1,    -1,    49,    50,     1,    -1,    53,    -1,    55,
      56,    57,    -1,    -1,    10,    11,    12,    -1,    14,    15,
      -1,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    -1,    -1,    30,    31,     1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    -1,    13,    -1,
      -1,    -1,    -1,    49,    50,    -1,    -1,    53,    -1,    55,
      56,    57,    -1,    28,    29,    -1,    -1,    -1,    -1,    34,
      35,    36,    37,    38,    39,    40,    41,    -1,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,     1,
      -1,    56,    57,    -1,     6,    -1,    -1,    -1,    -1,    -1,
      -1,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,
      -1,    -1,    34,    35,    36,    37,    38,    39,    40,    41,
       1,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    13,    -1,    56,    57,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    28,    29,    -1,
      -1,    -1,    -1,    34,    35,    36,    37,    38,    39,    40,
      41,     1,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    13,    -1,    56,    57,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    28,    29,
      -1,    -1,    -1,    -1,    34,    35,    36,    37,    38,    39,
      40,    41,    -1,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,     1,    -1,    56,    57,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    13,    -1,    -1,    16,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    28,    -1,    -1,    -1,    -1,    -1,    34,    35,    36,
      37,    38,    39,    40,    41,    -1,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,     1,    -1,    56,
      57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    13,
      -1,    -1,    16,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,    -1,    -1,
      34,    35,    36,    37,    38,    39,    40,    41,     1,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      13,    -1,    56,    57,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    28,    -1,    -1,    31,    -1,
      -1,    34,    35,    36,    37,    38,    39,    40,    41,    -1,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,     1,    -1,    56,    57,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    13,    -1,    -1,    16,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,
      -1,    -1,    -1,    -1,    34,    35,    36,    37,    38,    39,
      40,    41,    -1,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,     1,    -1,    56,    57,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    13,    -1,    -1,    16,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    28,    -1,    -1,    -1,    -1,    -1,    34,    35,    36,
      37,    38,    39,    40,    41,     1,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    13,    -1,    56,
      57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    28,    -1,    -1,    31,    -1,    -1,    34,    35,
      36,    37,    38,    39,    40,    41,    -1,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,     1,    -1,
      56,    57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      13,    -1,    -1,    16,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,    -1,
      -1,    34,    35,    36,    37,    38,    39,    40,    41,    -1,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,     1,    -1,    56,    57,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    13,    -1,    -1,    16,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,
      -1,    -1,    -1,    -1,    34,    35,    36,    37,    38,    39,
      40,    41,     1,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    13,    -1,    56,    57,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    28,
      -1,    -1,    31,    -1,    -1,    34,    35,    36,    37,    38,
      39,    40,    41,     1,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    13,    -1,    56,    57,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      28,    -1,    -1,    31,    -1,    -1,    34,    35,    36,    37,
      38,    39,    40,    41,    -1,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,     1,    -1,    56,    57,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    13,    -1,
      -1,    16,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    28,    -1,    -1,    -1,    -1,    -1,    34,
      35,    36,    37,    38,    39,    40,    41,     1,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    13,
      -1,    56,    57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    28,    -1,    -1,    31,    -1,    -1,
      34,    35,    36,    37,    38,    39,    40,    41,     1,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      13,    -1,    56,    57,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    28,    -1,    -1,    31,    -1,
      -1,    34,    35,    36,    37,    38,    39,    40,    41,    -1,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,     1,    -1,    56,    57,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    13,    -1,    -1,    16,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,
      -1,    -1,    -1,    -1,    34,    35,    36,    37,    38,    39,
      40,    41,     1,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    13,    -1,    56,    57,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    28,
      -1,    -1,    31,    -1,    -1,    34,    35,    36,    37,    38,
      39,    40,    41,     1,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    13,    -1,    56,    57,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      28,    -1,    -1,    31,    -1,    -1,    34,    35,    36,    37,
      38,    39,    40,    41,     1,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    13,    -1,    56,    57,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    28,    -1,    -1,    31,    -1,    -1,    34,    35,    36,
      37,    38,    39,    40,    41,    -1,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,     1,    -1,    56,
      57,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,    -1,
      14,    15,    -1,    -1,    18,    19,    20,    21,    22,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    -1,
      -1,    -1,    -1,    -1,    -1,    49,    50,     1,    -1,    53,
      -1,    55,    56,    57,    -1,    -1,    10,    11,    12,    -1,
      14,    15,    -1,    -1,    18,    19,    20,    21,    22,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    -1,
      -1,    -1,    -1,    -1,    -1,    49,    50,     1,    -1,    53,
      -1,    55,    56,    57,    -1,    -1,    10,    11,    12,    -1,
      14,    15,    -1,    -1,    18,    19,    20,    21,    22,    -1,
      -1,    -1,    -1,    10,    11,    12,    30,    14,    15,    -1,
      -1,    18,    19,    20,    21,    22,    -1,    -1,    42,    -1,
      -1,    -1,    -1,    30,    31,    49,    50,    -1,    -1,    53,
      -1,    55,    56,    57,    -1,    42,    -1,    -1,    -1,    -1,
      -1,    -1,    49,    50,    -1,    -1,    53,    -1,    55,    56,
      57,    10,    11,    12,    -1,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    -1,    -1,    -1,    -1,    10,    11,
      12,    30,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    -1,    -1,    42,    -1,    -1,    -1,    -1,    30,    -1,
      49,    50,    -1,    -1,    53,    -1,    55,    56,    57,    -1,
      42,    -1,    -1,    -1,    -1,    -1,    -1,    49,    50,    -1,
      -1,    53,    -1,    55,    56,    57,    10,    11,    12,    -1,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    -1,
      -1,    -1,    -1,    10,    11,    12,    30,    14,    15,    -1,
      -1,    18,    19,    20,    21,    22,    -1,    -1,    42,    -1,
      -1,    -1,    -1,    30,    31,    49,    50,    -1,    -1,    53,
      -1,    55,    56,    57,    -1,    42,    -1,    -1,    -1,    -1,
      -1,    -1,    49,    50,    -1,    -1,    53,    -1,    55,    56,
      57,    10,    11,    12,    -1,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    -1,    -1,    -1,    -1,    10,    11,
      12,    30,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    -1,    -1,    42,    -1,    -1,    -1,    -1,    30,    -1,
      49,    50,    -1,    -1,    53,    -1,    55,    56,    57,    -1,
      42,    -1,    -1,    -1,    -1,    -1,    -1,    49,    50,    -1,
      -1,    53,    -1,    55,    56,    57,    10,    11,    12,    -1,
      14,    15,    -1,    -1,    18,    19,    20,    21,    22,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    -1,
      -1,    -1,    -1,    -1,    -1,    49,    50,    -1,    -1,    53,
      -1,    55,    56,    57,    10,    11,    12,    -1,    14,    15,
      -1,    -1,    18,    19,    20,    21,    22,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    30,    31,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    -1,    -1,    -1,
      -1,    -1,    -1,    49,    50,    -1,    -1,    53,    -1,    55,
      56,    57,    10,    11,    12,    -1,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    -1,    -1,    -1,    -1,    10,
      11,    12,    30,    14,    15,    -1,    -1,    18,    19,    20,
      21,    22,    -1,    -1,    42,    -1,    -1,    -1,    -1,    30,
      31,    49,    50,    -1,    -1,    53,    -1,    55,    56,    57,
      -1,    42,    -1,    -1,    -1,    -1,    -1,    -1,    49,    50,
      -1,    -1,    53,    -1,    55,    56,    57,    10,    11,    12,
      -1,    14,    15,    -1,    -1,    18,    19,    20,    21,    22,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      -1,    -1,    -1,    -1,    -1,    -1,    49,    50,    -1,    -1,
      53,    -1,    55,    56,    57,    10,    11,    12,    -1,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    -1,    -1,
      -1,    -1,    10,    11,    12,    30,    14,    15,    -1,    -1,
      18,    19,    20,    21,    22,    -1,    -1,    42,    -1,    -1,
      -1,    -1,    30,    31,    49,    50,    -1,    -1,    53,    -1,
      55,    56,    57,    -1,    42,    -1,    -1,    -1,    -1,    -1,
      -1,    49,    50,    -1,    -1,    53,    -1,    55,    56,    57,
      10,    11,    12,    -1,    14,    15,    -1,    -1,    18,    19,
      20,    21,    22,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      30,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    -1,    -1,    -1,    -1,    -1,    -1,    49,
      50,    -1,    -1,    53,    -1,    55,    56,    57,    10,    11,
      12,    -1,    14,    15,    -1,    -1,    18,    19,    20,    21,
      22,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      42,    -1,    -1,    -1,    -1,    -1,    -1,    49,    50,    -1,
      -1,    53,    -1,    55,    56,    57,    10,    11,    12,    -1,
      14,    15,    -1,    -1,    18,    19,    20,    21,    22,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    -1,
      -1,    -1,    -1,    -1,    -1,    49,    50,    -1,    -1,    53,
      -1,    55,    56,    57
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,    23,    24,    25,    26,    27,    59,    60,    61,
      62,    65,    67,    70,    16,     0,     1,    60,     1,     1,
      18,    63,    64,    66,     1,     1,    16,    16,    28,    30,
      16,    17,     1,    18,    53,    63,    16,    10,    11,    12,
      14,    15,    18,    19,    20,    21,    22,    30,    42,    49,
      50,    53,    55,    56,    57,    74,    76,    77,    79,     1,
      31,    54,    65,    68,    69,     1,    18,    66,    30,    16,
       1,    65,    74,    30,    31,    65,    74,    75,     1,    13,
      28,    34,    35,    36,    37,    38,    39,    40,    41,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      78,    79,    80,     1,    29,     1,    74,     1,    74,    16,
      16,    32,    65,     1,    64,    17,    31,    31,    68,    28,
      31,    74,    75,    31,    31,     1,    17,    31,    74,    74,
       1,    74,     1,    74,    16,    16,     1,    71,    64,    18,
       1,    69,    16,    32,    16,    32,    31,    74,    31,    74,
      74,     6,    29,    16,    16,     1,    61,    73,    18,    71,
      71,    16,    32,    29,    74,     1,     3,     5,     7,     8,
       9,    16,    18,    32,    33,    72,    74,    73,    73,    71,
      16,    30,    30,    16,    18,    16,    74,    16,    18,     6,
      73,    16,    33,    33,    73,    74,    16,    74,    16,    16,
      16,     5,    33,    33,    31,    16,    74,    16,    30,     1,
      72,    31,    74,    16,    16,    74,    16,    74,     4,    72,
      31,    31,    74,    31,    74,    16,    16,    74,    16,    72,
      72,    72,    31,    72,    31,    31,    74,    31,    74,    16,
      16,    74,    72,    72,    72,    31,    72,    31,    31,    74,
      31,    74,    16,    72,    72,    72,    31,    72,    31,    31,
      74,    72,    72,    72,    31,    72
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
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
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
        case 26:
#line 117 "mylang.y"
    { declaredVars[varIndex] = (yyvsp[(1) - (1)].str); varIndex++; ;}
    break;

  case 27:
#line 118 "mylang.y"
    { declaredVars[varIndex] = (yyvsp[(1) - (4)].str); varIndex++; ;}
    break;

  case 29:
#line 124 "mylang.y"
    { declaredFuncts[functIndex] = (yyvsp[(3) - (7)].str); functIndex++; ;}
    break;

  case 30:
#line 125 "mylang.y"
    { declaredFuncts[functIndex] = (yyvsp[(3) - (6)].str); functIndex++; ;}
    break;

  case 31:
#line 126 "mylang.y"
    { declaredFuncts[functIndex] = (yyvsp[(2) - (6)].str); functIndex++; ;}
    break;

  case 32:
#line 127 "mylang.y"
    { declaredFuncts[functIndex] = (yyvsp[(2) - (5)].str); functIndex++; ;}
    break;

  case 40:
#line 145 "mylang.y"
    {
                                                                                                        if(!searchDeclared(declaredFuncts, functIndex, (yyvsp[(3) - (10)].str)))
                                                                                                        {
                                                                                                            declaredFuncts[functIndex] = (yyvsp[(3) - (10)].str);
                                                                                                            functIndex++;
                                                                                                        }
                                                                                                    ;}
    break;

  case 41:
#line 152 "mylang.y"
    {
                                                                                                        if(!searchDeclared(declaredFuncts, functIndex, (yyvsp[(3) - (9)].str)))
                                                                                                        {
                                                                                                            declaredFuncts[functIndex] = (yyvsp[(3) - (9)].str);
                                                                                                            functIndex++;
                                                                                                        }
                                                                                                    ;}
    break;

  case 42:
#line 159 "mylang.y"
    {
                                                                                                        if(!searchDeclared(declaredFuncts, functIndex, (yyvsp[(2) - (9)].str)))
                                                                                                        {
                                                                                                            declaredFuncts[functIndex] = (yyvsp[(2) - (9)].str);
                                                                                                            functIndex++;
                                                                                                        }
                                                                                                    ;}
    break;

  case 43:
#line 166 "mylang.y"
    {
                                                                                                        if(!searchDeclared(declaredFuncts, functIndex, (yyvsp[(2) - (8)].str)))
                                                                                                        {
                                                                                                            declaredFuncts[functIndex] = (yyvsp[(2) - (8)].str);
                                                                                                            functIndex++;
                                                                                                        }
                                                                                                    ;}
    break;

  case 79:
#line 222 "mylang.y"
    {
                                    if(!searchDeclared(declaredVars, varIndex, (yyvsp[(1) - (1)].str)))
                                    {
                                        //varDecError = realloc(varDecError, 100 * sizeof(char));
                                        char varDecError[100];

                                        sprintf(varDecError, "%s undeclared ", (yyvsp[(1) - (1)].str));
                                        yyerror(varDecError);
                                    }
                                ;}
    break;

  case 89:
#line 241 "mylang.y"
    {
                                    if(!searchDeclared(declaredFuncts, functIndex, (yyvsp[(1) - (3)].str)))
                                    {
                                        //functDecError = realloc(functDecError, 100 * sizeof(char));
                                        char functDecError[100];

                                        sprintf(functDecError, "%s undeclared ", (yyvsp[(1) - (3)].str));
                                        yyerror(functDecError);
                                    }
                                ;}
    break;

  case 91:
#line 252 "mylang.y"
    {
                                    if(!searchDeclared(declaredFuncts, functIndex, (yyvsp[(1) - (4)].str)))
                                    {
                                        //functDecError = realloc(functDecError, 100 * sizeof(char));

                                        char functDecError[100];
                                        sprintf(functDecError, "%s undeclared ", (yyvsp[(1) - (4)].str));
                                        yyerror(functDecError);
                                    }
                                ;}
    break;


/* Line 1267 of yacc.c.  */
#line 2414 "mylang.tab.c"
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


#line 331 "mylang.y"


#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>


int main(int args, char** argv) {
	// open a file handle to a particular file:
	FILE *myfile = fopen(argv[1], "r");

	// make sure it is valid:
	if (!myfile) {
		printf("I can't open input.txt!");
		return -1;
	}

	// set flex to read from it instead of defaulting to STDIN:
	yyin = myfile;

	//yydebug = 1;
	line = 1;
	errorIndex = 5;
	ptr = (struct errorData*) malloc(errorIndex * sizeof(struct errorData));


	// parse through the input until there is no more:
	do {
		yyparse();
	} while (!feof(yyin));

    if(errors == 0){
        printf("\n\n---------------------------------------\n");
	    printf("Syntax is correct!!!\n");
    } else {
        printf("\n\n---------------------------------------\n");
        printf("DEBUG\n");
        printf("---------------------------------------\n");
        printf("Syntax is incorrect!!!\n Total errors: %d\n", errors);
        for(int i = 0; i < errors; ++i) {
            printf("ERROR: %s in line: %d\n", ptr[i].errorMsg, ptr[i].line);
        }

    }
    free(ptr);

}

yyerror(const char *s) {

    // Save errorMsg and errorline to dynamic array of structs
    strcpy(ptr[errors].errorMsg, s);
	ptr[errors].line = line;
	errors++;
	errorIndex++;
	ptr = realloc(ptr, errorIndex);

}




int searchDeclared(char** dec, int idx, char* id) {
    for(int searchIndex = 0; searchIndex < idx; searchIndex++)
    {
        if(!strcmp(dec[searchIndex], id))
        {
            return 1;  // id already declared
        }
    }
    return 0;  // id never declared before
}
