
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "java_compiler.y"

#include <stdio.h>	 			
int yyerror(char const *msg);	
int yylex(void);
extern int yylineno;



/* Line 189 of yacc.c  */
#line 82 "java_compiler.tab.c"

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


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     STRING = 258,
     CLASS = 259,
     SYSTEM_OUT_PRINTLN = 260,
     EXTENDS = 261,
     RETURN = 262,
     STATIC = 263,
     PRIVATE = 264,
     PUBLIC = 265,
     MAIN = 266,
     DO = 267,
     IF = 268,
     ELSE = 269,
     NEW = 270,
     THIS = 271,
     VOID = 272,
     WHILE = 273,
     TYPE_INT = 274,
     TYPE_BOOLEAN = 275,
     TYPE_STRING = 276,
     TYPE_TAB_INT = 277,
     TYPE_TAB_STRING = 278,
     LENGTH = 279,
     PARENTHESE_OUVRANTE = 280,
     PARENTHESE_FERMANTE = 281,
     ACCOLADE_OUVRANTE = 282,
     ACCOLADE_FERMANTE = 283,
     BRACKET_OUVRANTE = 284,
     BRACKET_FERMANTE = 285,
     BOOLEAN_LITERAL = 286,
     IDENTIFIER = 287,
     INTEGER_LITERAL = 288,
     COMMENT_BLOCK = 289,
     MULTILINE_COMMENT = 290,
     VIRGULE = 291,
     POINT_VIRGULE = 292,
     NOT = 293,
     AND = 294,
     OR = 295,
     POINT = 296,
     AFFECT = 297,
     DIFFERENT = 298,
     EQUAL = 299,
     ADD = 300,
     MINUS = 301,
     MULT = 302,
     DIV = 303,
     MOD = 304,
     MORE = 305,
     LESS = 306
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 175 "java_compiler.tab.c"

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
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
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
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
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
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  8
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   860

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  52
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  20
/* YYNRULES -- Number of rules.  */
#define YYNRULES  103
/* YYNRULES -- Number of states.  */
#define YYNSTATES  302

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   306

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
      45,    46,    47,    48,    49,    50,    51
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,     8,    12,    28,    44,    60,    76,
      92,   108,   124,   140,   156,   173,   176,   178,   186,   194,
     202,   205,   206,   209,   210,   224,   238,   252,   266,   280,
     294,   308,   310,   311,   315,   317,   320,   323,   324,   328,
     332,   334,   336,   338,   340,   342,   344,   346,   349,   350,
     354,   358,   366,   374,   382,   390,   396,   402,   408,   414,
     420,   425,   430,   435,   440,   446,   452,   458,   463,   468,
     476,   484,   492,   496,   501,   506,   511,   515,   522,   529,
     536,   538,   540,   542,   544,   550,   556,   562,   567,   572,
     577,   580,   584,   588,   592,   594,   596,   598,   600,   602,
     604,   608,   609,   612
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      53,     0,    -1,    54,    55,    -1,    54,    -1,    54,    55,
       1,    -1,     4,    32,    27,    10,     8,    17,    11,    25,
      23,    32,    26,    27,    67,    28,    28,    -1,     1,    32,
      27,    10,     8,    17,    11,    25,    23,    32,    26,    27,
      67,    28,    28,    -1,     4,     1,    27,    10,     8,    17,
      11,    25,    23,    32,    26,    27,    67,    28,    28,    -1,
       4,    32,     1,    10,     8,    17,    11,    25,    23,    32,
      26,    27,    67,    28,    28,    -1,     4,    32,    27,    10,
       8,    17,     1,    25,    23,    32,    26,    27,    67,    28,
      28,    -1,     4,    32,    27,    10,     8,    17,    11,     1,
      23,    32,    26,    27,    67,    28,    28,    -1,     4,    32,
      27,    10,     8,    17,    11,    25,    23,    32,     1,    27,
      67,    28,    28,    -1,     4,    32,    27,    10,     8,    17,
      11,    25,    23,    32,    26,    27,    67,     1,    28,    -1,
       4,    32,    27,    10,     8,    17,    11,    25,    23,    32,
      26,    27,    67,    28,     1,    -1,     4,    32,    27,    10,
       8,    17,    11,    25,    23,    32,    26,    27,    67,    66,
      28,    28,    -1,    56,    55,    -1,    56,    -1,     4,    32,
      57,    27,    63,    58,    28,    -1,     4,    32,    57,     1,
      63,    58,    28,    -1,     4,    32,    57,    27,    63,    58,
       1,    -1,     6,    32,    -1,    -1,    59,    58,    -1,    -1,
      10,    65,    32,    25,    60,    26,    27,    63,    66,     7,
      68,    37,    28,    -1,    10,    65,    32,     1,    60,    26,
      27,    63,    66,     7,    68,    37,    28,    -1,    10,    65,
      32,    25,    60,     1,    27,    63,    66,     7,    68,    37,
      28,    -1,    10,    65,    32,    25,    60,    26,     1,    63,
      66,     7,    68,    37,    28,    -1,    10,    65,    32,    25,
      60,    26,    27,    63,    66,     1,    68,    37,    28,    -1,
      10,    65,    32,    25,    60,    26,    27,    63,    66,     7,
      68,     1,    28,    -1,    10,    65,    32,    25,    60,    26,
      27,    63,    66,     7,    68,    37,     1,    -1,    61,    -1,
      -1,    62,    36,    60,    -1,    62,    -1,    65,    32,    -1,
      64,    63,    -1,    -1,    65,    32,    37,    -1,    65,    32,
       1,    -1,    20,    -1,    19,    -1,    21,    -1,    22,    -1,
      23,    -1,    32,    -1,    17,    -1,    67,    66,    -1,    -1,
      27,    66,    28,    -1,    27,    66,     1,    -1,    13,    25,
      68,    26,    67,    14,    67,    -1,    13,     1,    68,    26,
      67,    14,    67,    -1,    13,    25,    68,     1,    67,    14,
      67,    -1,    13,    25,    68,    26,    67,    14,     1,    -1,
      18,    25,    68,    26,    67,    -1,    18,     1,    68,    26,
      67,    -1,    18,    25,    68,     1,    67,    -1,    18,    25,
      68,    26,     1,    -1,     5,    25,    68,    26,    37,    -1,
       5,    25,    26,    37,    -1,     5,     1,    26,    37,    -1,
       5,    25,     1,    37,    -1,     5,    25,    26,     1,    -1,
       5,     1,    68,    26,    37,    -1,     5,    25,    68,     1,
      37,    -1,     5,    25,    68,    26,     1,    -1,    32,    42,
      68,    37,    -1,    32,    42,    68,     1,    -1,    32,    29,
      68,    30,    42,    68,    37,    -1,    32,    29,    68,     1,
      42,    68,    37,    -1,    32,    29,    68,    30,    42,    68,
       1,    -1,    68,    69,    68,    -1,    68,    29,    68,    30,
      -1,    68,     1,    68,    30,    -1,    68,    29,    68,     1,
      -1,    68,    41,    24,    -1,    68,    41,    32,    25,    71,
      26,    -1,    68,    41,    32,    25,    71,     1,    -1,    68,
      41,    32,     1,    71,    26,    -1,    33,    -1,    31,    -1,
      32,    -1,    16,    -1,    15,    19,    29,    68,    30,    -1,
      15,    19,     1,    68,    30,    -1,    15,    19,    29,    68,
       1,    -1,    15,    32,    25,    26,    -1,    15,    32,     1,
      26,    -1,    15,    32,    25,     1,    -1,    38,    68,    -1,
      25,    68,    26,    -1,     1,    68,    26,    -1,    25,    68,
       1,    -1,     3,    -1,    39,    -1,    51,    -1,    45,    -1,
      46,    -1,    47,    -1,    70,    36,    68,    -1,    -1,    68,
      70,    -1,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    63,    63,    64,    65,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    78,    79,    81,    82,    83,
      85,    86,    88,    89,    91,    92,    93,    94,    95,    96,
      97,    99,   100,   102,   103,   105,   107,   108,   110,   111,
     113,   114,   115,   116,   117,   118,   119,   121,   122,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   172,   172,   172,   172,   172,
     173,   174,   176,   177
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "STRING", "CLASS", "SYSTEM_OUT_PRINTLN",
  "EXTENDS", "RETURN", "STATIC", "PRIVATE", "PUBLIC", "MAIN", "DO", "IF",
  "ELSE", "NEW", "THIS", "VOID", "WHILE", "TYPE_INT", "TYPE_BOOLEAN",
  "TYPE_STRING", "TYPE_TAB_INT", "TYPE_TAB_STRING", "LENGTH",
  "PARENTHESE_OUVRANTE", "PARENTHESE_FERMANTE", "ACCOLADE_OUVRANTE",
  "ACCOLADE_FERMANTE", "BRACKET_OUVRANTE", "BRACKET_FERMANTE",
  "BOOLEAN_LITERAL", "IDENTIFIER", "INTEGER_LITERAL", "COMMENT_BLOCK",
  "MULTILINE_COMMENT", "VIRGULE", "POINT_VIRGULE", "NOT", "AND", "OR",
  "POINT", "AFFECT", "DIFFERENT", "EQUAL", "ADD", "MINUS", "MULT", "DIV",
  "MOD", "MORE", "LESS", "$accept", "programme", "MainClass",
  "ClassesDeclaration", "ClassDeclaration", "ExtendStatement",
  "MethodsDeclaration", "MethodDeclaration", "ArgsDeclaration",
  "ArgsDeclaration2", "ArgDeclaration", "VarsDeclaration",
  "VarDeclaration", "Types", "Statements", "Statement", "Expression",
  "OpLogic", "Exp1", "Exp2", 0
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
     305,   306
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    52,    53,    53,    53,    54,    54,    54,    54,    54,
      54,    54,    54,    54,    54,    55,    55,    56,    56,    56,
      57,    57,    58,    58,    59,    59,    59,    59,    59,    59,
      59,    60,    60,    61,    61,    62,    63,    63,    64,    64,
      65,    65,    65,    65,    65,    65,    65,    66,    66,    67,
      67,    67,    67,    67,    67,    67,    67,    67,    67,    67,
      67,    67,    67,    67,    67,    67,    67,    67,    67,    67,
      67,    67,    68,    68,    68,    68,    68,    68,    68,    68,
      68,    68,    68,    68,    68,    68,    68,    68,    68,    68,
      68,    68,    68,    68,    68,    69,    69,    69,    69,    69,
      70,    70,    71,    71
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     3,    15,    15,    15,    15,    15,
      15,    15,    15,    15,    16,     2,     1,     7,     7,     7,
       2,     0,     2,     0,    13,    13,    13,    13,    13,    13,
      13,     1,     0,     3,     1,     2,     2,     0,     3,     3,
       1,     1,     1,     1,     1,     1,     1,     2,     0,     3,
       3,     7,     7,     7,     7,     5,     5,     5,     5,     5,
       4,     4,     4,     4,     5,     5,     5,     4,     4,     7,
       7,     7,     3,     4,     4,     4,     3,     6,     6,     6,
       1,     1,     1,     1,     5,     5,     5,     4,     4,     4,
       2,     3,     3,     3,     1,     1,     1,     1,     1,     1,
       3,     0,     2,     0
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     3,     0,     0,     0,     1,     0,
       0,    16,     0,     0,     0,     0,    21,     4,    15,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    20,
      37,    37,     0,     0,     0,     0,    46,    41,    40,    42,
      43,    44,    45,    23,    37,     0,    23,     0,     0,     0,
       0,     0,     0,     0,    23,    36,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    18,    22,    39,    38,    19,
      17,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    32,    32,     0,     0,     0,     0,
       0,     0,     0,     0,    31,    34,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    32,    35,     0,     0,
       0,     0,     0,    48,     0,     0,     0,     0,     0,     0,
       0,     0,    37,    33,    37,    37,    37,     0,     0,     0,
       0,     0,     0,     0,    48,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    48,    48,    48,    48,
       0,    94,     0,    83,     0,     0,    81,    82,    80,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    50,    49,
      47,     0,     0,     6,     7,     8,     9,    10,    11,    12,
      13,     5,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    61,     0,     0,     0,     0,    95,     0,    97,    98,
      99,    96,     0,    62,    63,    60,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    67,    14,     0,
       0,     0,     0,     0,    92,     0,     0,     0,     0,     0,
      91,     0,    64,     0,    76,     0,     0,    65,    66,    59,
       0,    82,     0,     0,    56,    57,    58,    55,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    88,    89,    87,
      74,     0,    73,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    85,     0,    84,     0,
       0,     0,    52,    53,    54,    51,    70,     0,    69,    25,
      26,    27,    28,    29,    30,    24,   102,    79,    78,    77,
       0,     0
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     4,    10,    11,    24,    53,    54,    93,    94,
      95,    43,    44,    45,   133,   134,   231,   202,   296,   280
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -128
static const yytype_int16 yypact[] =
{
      32,    -1,    20,    67,    74,    18,   104,    64,  -128,   103,
     119,    74,   128,   139,   156,   157,   162,  -128,  -128,   155,
     166,   167,   176,   164,    76,   171,   172,   186,   187,  -128,
     640,   640,   190,   194,   200,   168,  -128,  -128,  -128,  -128,
    -128,  -128,  -128,   205,   640,   185,   205,   191,   193,   197,
     199,   117,   640,   198,   205,  -128,     6,    19,   196,   204,
     210,   213,   216,   217,   209,  -128,  -128,  -128,  -128,  -128,
    -128,   211,   218,   219,   220,   224,   226,   131,   202,   222,
     235,   236,   237,    82,   640,   640,   215,   238,   239,   241,
     246,   248,   252,   257,  -128,   228,   253,    87,    17,    17,
      17,    17,    17,    17,    17,   260,   640,  -128,   261,    80,
     132,   133,   147,    17,    45,   265,   267,   270,   271,   272,
     273,   821,   640,  -128,   640,   640,   640,   691,   710,   805,
     805,   805,   805,    41,    17,   805,   805,   274,   276,   278,
     282,   283,   288,   289,    58,   293,    17,    17,    17,    17,
     805,  -128,   151,  -128,   805,   285,  -128,  -128,  -128,   805,
     268,   729,     9,   279,   302,   311,   334,   343,  -128,  -128,
    -128,   363,   366,  -128,  -128,  -128,  -128,  -128,  -128,  -128,
    -128,  -128,   295,   320,   322,   325,    78,   390,    24,   153,
     399,  -128,   184,   805,   296,   805,  -128,     5,  -128,  -128,
    -128,  -128,   805,  -128,  -128,  -128,   748,    11,    17,   672,
      17,    17,   672,   827,   596,   247,   617,  -128,  -128,   805,
     805,   805,   805,   805,  -128,   805,   805,   308,    88,    25,
    -128,   419,  -128,   422,  -128,   170,   208,  -128,  -128,  -128,
     324,    45,   328,   331,  -128,  -128,  -128,  -128,   805,   805,
     442,   453,   473,   476,   496,   510,   529,  -128,  -128,  -128,
    -128,   114,  -128,   767,   767,    17,    17,   828,   544,   559,
     318,   323,   326,   327,   786,    72,  -128,   161,  -128,   231,
     310,   115,  -128,  -128,  -128,  -128,  -128,   651,  -128,  -128,
    -128,  -128,  -128,  -128,  -128,  -128,   303,  -128,  -128,  -128,
     805,   245
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -128,  -128,  -128,   348,  -128,  -128,    36,  -128,    -5,  -128,
    -128,   -20,  -128,   -46,   -37,   -85,  -127,  -128,  -128,    97
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -104
static const yytype_int16 yytable[] =
{
     160,   163,   164,   165,   166,   167,    64,    67,   171,   172,
     204,    46,   238,   115,   116,   117,   118,   119,   120,   121,
      69,     6,   110,   187,    55,   225,   150,   190,   151,   234,
     111,     5,   192,     1,   187,   112,     2,   235,    96,    96,
     152,   153,   168,    68,   113,    12,   205,    70,   239,   114,
     154,   -93,     7,   226,   -93,   -93,   156,   157,   158,   180,
      96,   -93,   -93,   159,   -93,    14,   -93,     8,   233,   169,
     -93,   -93,   -93,   294,   135,   236,   -93,    30,     9,   222,
      97,   125,    57,    91,   145,   223,   181,   136,   108,   258,
      66,    15,   250,   251,   252,   253,   254,   170,   255,   256,
     295,   123,   146,    31,   147,   148,   149,   126,    92,   183,
     184,   185,   186,   109,   259,   150,   298,   151,    62,    -2,
      17,   268,   269,   240,   242,   243,   244,   245,   247,   152,
     153,    13,    84,   127,   129,    16,   279,   279,    19,   154,
     -75,   299,    63,   -75,   -75,   156,   157,   158,   131,    20,
     -75,   -75,   159,   -75,   227,   -75,    85,   128,   130,   -75,
     -75,   -75,   150,    25,   151,   -75,    21,    22,    23,    50,
     188,   263,   132,   301,    26,    27,   152,   153,   228,    51,
     282,   283,   285,   189,    28,   193,   154,   -86,    32,    33,
     -86,   -86,   156,   157,   158,   264,    29,   -86,   -86,   159,
     -86,    47,   -86,    34,    35,    48,   -86,   -86,   -86,   193,
     -90,    49,   -86,   195,   -90,    52,    58,    56,    59,    71,
     -90,   -90,    60,   196,    61,   197,    65,    72,    86,   198,
     199,   200,   193,    73,   -72,   201,    74,   195,   -72,    75,
      76,    77,    98,    78,   -72,   -72,   193,   196,    87,   197,
      79,    80,    81,   198,   199,   200,    82,  -101,    83,   201,
     195,    88,    89,    90,   106,    99,   100,  -101,   101,   193,
     196,  -100,   197,   102,   195,   103,   198,   199,   200,   104,
     206,  -100,   201,   105,   196,   107,   197,   122,   124,   249,
     198,   199,   200,   137,   194,   138,   201,   195,   139,   140,
     141,   142,   173,   193,   174,   207,   175,   196,   195,   197,
     176,   177,   209,   198,   199,   200,   178,   179,   196,   201,
     197,   182,   191,   218,   198,   199,   200,   219,   208,   220,
     201,   195,   221,   232,   257,   193,   297,   210,   265,   300,
     195,   196,   266,   197,   212,   267,   289,   198,   199,   200,
     196,   290,   197,   201,   291,   292,   198,   199,   200,    18,
     211,   281,   201,   195,   214,     0,     0,   216,     0,   213,
       0,     0,   195,   196,     0,   197,     0,     0,     0,   198,
     199,   200,   196,     0,   197,   201,     0,     0,   198,   199,
     200,   193,   195,   215,   201,   195,     0,     0,     0,     0,
     229,     0,   196,   217,   197,   196,     0,   197,   198,   199,
     200,   198,   199,   200,   201,     0,   224,   201,     0,   195,
     193,     0,     0,   261,     0,   230,     0,     0,   195,   196,
       0,   197,     0,     0,     0,   198,   199,   200,   196,     0,
     197,   201,     0,   193,   198,   199,   200,     0,   195,   260,
     201,   195,   262,     0,   193,     0,     0,     0,   196,     0,
     197,   196,     0,   197,   198,   199,   200,   198,   199,   200,
     201,   195,     0,   201,   193,     0,     0,   193,     0,   270,
       0,   196,   195,   197,     0,     0,     0,   198,   199,   200,
     271,     0,   196,   201,   197,     0,     0,   274,   198,   199,
     200,     0,   195,     0,   201,   195,     0,     0,     0,     0,
     272,   193,   196,   273,   197,   196,     0,   197,   198,   199,
     200,   198,   199,   200,   201,   195,     0,   201,     0,     0,
     277,     0,     0,   275,     0,   196,     0,   197,     0,   195,
     276,   198,   199,   200,     0,   193,     0,   201,     0,   196,
       0,   197,     0,     0,     0,   198,   199,   200,   195,   278,
     287,   201,     0,     0,     0,     0,     0,     0,   196,     0,
     197,     0,     0,   195,   198,   199,   200,     0,     0,     0,
     201,   286,     0,   196,     0,   197,     0,     0,   195,   198,
     199,   200,     0,     0,     0,   201,   288,   150,   196,   151,
     197,     0,     0,     0,   198,   199,   200,     0,     0,     0,
     201,   152,   153,     0,     0,     0,     0,     0,   150,     0,
     151,   154,   -68,     0,   -68,     0,     0,   156,   157,   158,
     -68,   -68,   152,   153,   159,   -68,     0,     0,   248,     0,
       0,     0,   154,     0,   -68,   -68,     0,     0,   156,   157,
     158,     0,   150,     0,   151,   159,   -71,    36,   -71,    37,
      38,    39,    40,    41,   -71,   -71,   152,   153,     0,   -71,
       0,     0,    42,   150,     0,   151,   154,   110,   -71,   -71,
       0,     0,   156,   157,   158,   111,     0,   152,   153,   159,
     112,     0,   150,     0,   151,     0,     0,   154,     0,   113,
       0,     0,     0,   156,   241,   158,   152,   153,     0,     0,
     159,   161,     0,   151,     0,     0,   154,   155,     0,     0,
       0,     0,   156,   157,   158,   152,   153,     0,     0,   159,
     150,     0,   151,     0,     0,   154,   162,     0,     0,     0,
       0,   156,   157,   158,   152,   153,     0,     0,   159,   150,
       0,   151,     0,     0,   154,     0,     0,     0,     0,     0,
     156,   157,   158,   152,   153,     0,   203,   159,   150,     0,
     151,     0,     0,   154,     0,     0,     0,     0,     0,   156,
     157,   158,   152,   153,     0,   237,   159,   150,     0,   151,
       0,     0,   154,  -103,     0,     0,     0,     0,   156,   157,
     158,   152,   153,     0,     0,   159,   150,     0,   151,     0,
       0,   154,     0,     0,   293,     0,     0,   156,   157,   158,
     152,   153,   143,     0,   159,     0,   110,     0,   246,   284,
     154,     0,   110,   110,   111,     0,   156,   157,   158,   112,
     111,   111,     0,   159,     0,   112,   112,     0,   113,   144,
       0,     0,     0,   114,   113,   113,     0,     0,     0,   114,
     114
};

static const yytype_int16 yycheck[] =
{
     127,   128,   129,   130,   131,   132,    52,     1,   135,   136,
       1,    31,     1,    98,    99,   100,   101,   102,   103,   104,
       1,     1,     5,   150,    44,     1,     1,   154,     3,    24,
      13,    32,   159,     1,   161,    18,     4,    32,    84,    85,
      15,    16,     1,    37,    27,    27,    37,    28,    37,    32,
      25,    26,    32,    29,    29,    30,    31,    32,    33,     1,
     106,    36,    37,    38,    39,     1,    41,     0,   195,    28,
      45,    46,    47,     1,    29,   202,    51,     1,     4,     1,
      85,     1,    46,     1,   121,     7,    28,    42,     1,     1,
      54,    27,   219,   220,   221,   222,   223,   134,   225,   226,
      28,   106,   122,    27,   124,   125,   126,    27,    26,   146,
     147,   148,   149,    26,    26,     1,     1,     3,     1,     0,
       1,   248,   249,   208,   209,   210,   211,   212,   213,    15,
      16,    27,     1,     1,     1,    32,   263,   264,    10,    25,
      26,    26,    25,    29,    30,    31,    32,    33,     1,    10,
      36,    37,    38,    39,     1,    41,    25,    25,    25,    45,
      46,    47,     1,     8,     3,    51,    10,    10,     6,     1,
      19,     1,    25,   300,     8,     8,    15,    16,    25,    11,
     265,   266,   267,    32,     8,     1,    25,    26,    17,    17,
      29,    30,    31,    32,    33,    25,    32,    36,    37,    38,
      39,    11,    41,    17,    17,    11,    45,    46,    47,     1,
      26,    11,    51,    29,    30,    10,    25,    32,    25,    23,
      36,    37,    25,    39,    25,    41,    28,    23,    26,    45,
      46,    47,     1,    23,    26,    51,    23,    29,    30,    23,
      23,    32,    27,    32,    36,    37,     1,    39,    26,    41,
      32,    32,    32,    45,    46,    47,    32,    26,    32,    51,
      29,    26,    26,    26,    36,    27,    27,    36,    27,     1,
      39,    26,    41,    27,    29,    27,    45,    46,    47,    27,
       1,    36,    51,    26,    39,    32,    41,    27,    27,    42,
      45,    46,    47,    28,    26,    28,    51,    29,    28,    28,
      28,    28,    28,     1,    28,    26,    28,    39,    29,    41,
      28,    28,     1,    45,    46,    47,    28,    28,    39,    51,
      41,    28,    37,    28,    45,    46,    47,     7,    26,     7,
      51,    29,     7,    37,    26,     1,    26,    26,    14,    36,
      29,    39,    14,    41,     1,    14,    28,    45,    46,    47,
      39,    28,    41,    51,    28,    28,    45,    46,    47,    11,
      26,   264,    51,    29,     1,    -1,    -1,     1,    -1,    26,
      -1,    -1,    29,    39,    -1,    41,    -1,    -1,    -1,    45,
      46,    47,    39,    -1,    41,    51,    -1,    -1,    45,    46,
      47,     1,    29,    30,    51,    29,    -1,    -1,    -1,    -1,
       1,    -1,    39,    37,    41,    39,    -1,    41,    45,    46,
      47,    45,    46,    47,    51,    -1,    26,    51,    -1,    29,
       1,    -1,    -1,     1,    -1,    26,    -1,    -1,    29,    39,
      -1,    41,    -1,    -1,    -1,    45,    46,    47,    39,    -1,
      41,    51,    -1,     1,    45,    46,    47,    -1,    29,    30,
      51,    29,    30,    -1,     1,    -1,    -1,    -1,    39,    -1,
      41,    39,    -1,    41,    45,    46,    47,    45,    46,    47,
      51,    29,    -1,    51,     1,    -1,    -1,     1,    -1,    37,
      -1,    39,    29,    41,    -1,    -1,    -1,    45,    46,    47,
      37,    -1,    39,    51,    41,    -1,    -1,     1,    45,    46,
      47,    -1,    29,    -1,    51,    29,    -1,    -1,    -1,    -1,
      37,     1,    39,    37,    41,    39,    -1,    41,    45,    46,
      47,    45,    46,    47,    51,    29,    -1,    51,    -1,    -1,
       1,    -1,    -1,    37,    -1,    39,    -1,    41,    -1,    29,
      30,    45,    46,    47,    -1,     1,    -1,    51,    -1,    39,
      -1,    41,    -1,    -1,    -1,    45,    46,    47,    29,    30,
       1,    51,    -1,    -1,    -1,    -1,    -1,    -1,    39,    -1,
      41,    -1,    -1,    29,    45,    46,    47,    -1,    -1,    -1,
      51,    37,    -1,    39,    -1,    41,    -1,    -1,    29,    45,
      46,    47,    -1,    -1,    -1,    51,    37,     1,    39,     3,
      41,    -1,    -1,    -1,    45,    46,    47,    -1,    -1,    -1,
      51,    15,    16,    -1,    -1,    -1,    -1,    -1,     1,    -1,
       3,    25,     5,    -1,     7,    -1,    -1,    31,    32,    33,
      13,    14,    15,    16,    38,    18,    -1,    -1,    42,    -1,
      -1,    -1,    25,    -1,    27,    28,    -1,    -1,    31,    32,
      33,    -1,     1,    -1,     3,    38,     5,    17,     7,    19,
      20,    21,    22,    23,    13,    14,    15,    16,    -1,    18,
      -1,    -1,    32,     1,    -1,     3,    25,     5,    27,    28,
      -1,    -1,    31,    32,    33,    13,    -1,    15,    16,    38,
      18,    -1,     1,    -1,     3,    -1,    -1,    25,    -1,    27,
      -1,    -1,    -1,    31,    32,    33,    15,    16,    -1,    -1,
      38,     1,    -1,     3,    -1,    -1,    25,    26,    -1,    -1,
      -1,    -1,    31,    32,    33,    15,    16,    -1,    -1,    38,
       1,    -1,     3,    -1,    -1,    25,    26,    -1,    -1,    -1,
      -1,    31,    32,    33,    15,    16,    -1,    -1,    38,     1,
      -1,     3,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,
      31,    32,    33,    15,    16,    -1,    37,    38,     1,    -1,
       3,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    31,
      32,    33,    15,    16,    -1,    37,    38,     1,    -1,     3,
      -1,    -1,    25,    26,    -1,    -1,    -1,    -1,    31,    32,
      33,    15,    16,    -1,    -1,    38,     1,    -1,     3,    -1,
      -1,    25,    -1,    -1,    28,    -1,    -1,    31,    32,    33,
      15,    16,     1,    -1,    38,    -1,     5,    -1,     1,     1,
      25,    -1,     5,     5,    13,    -1,    31,    32,    33,    18,
      13,    13,    -1,    38,    -1,    18,    18,    -1,    27,    28,
      -1,    -1,    -1,    32,    27,    27,    -1,    -1,    -1,    32,
      32
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     4,    53,    54,    32,     1,    32,     0,     4,
      55,    56,    27,    27,     1,    27,    32,     1,    55,    10,
      10,    10,    10,     6,    57,     8,     8,     8,     8,    32,
       1,    27,    17,    17,    17,    17,    17,    19,    20,    21,
      22,    23,    32,    63,    64,    65,    63,    11,    11,    11,
       1,    11,    10,    58,    59,    63,    32,    58,    25,    25,
      25,    25,     1,    25,    65,    28,    58,     1,    37,     1,
      28,    23,    23,    23,    23,    23,    23,    32,    32,    32,
      32,    32,    32,    32,     1,    25,    26,    26,    26,    26,
      26,     1,    26,    60,    61,    62,    65,    60,    27,    27,
      27,    27,    27,    27,    27,    26,    36,    32,     1,    26,
       5,    13,    18,    27,    32,    67,    67,    67,    67,    67,
      67,    67,    27,    60,    27,     1,    27,     1,    25,     1,
      25,     1,    25,    66,    67,    29,    42,    28,    28,    28,
      28,    28,    28,     1,    28,    66,    63,    63,    63,    63,
       1,     3,    15,    16,    25,    26,    31,    32,    33,    38,
      68,     1,    26,    68,    68,    68,    68,    68,     1,    28,
      66,    68,    68,    28,    28,    28,    28,    28,    28,    28,
       1,    28,    28,    66,    66,    66,    66,    68,    19,    32,
      68,    37,    68,     1,    26,    29,    39,    41,    45,    46,
      47,    51,    69,    37,     1,    37,     1,    26,    26,     1,
      26,    26,     1,    26,     1,    30,     1,    37,    28,     7,
       7,     7,     1,     7,    26,     1,    29,     1,    25,     1,
      26,    68,    37,    68,    24,    32,    68,    37,     1,    37,
      67,    32,    67,    67,    67,    67,     1,    67,    42,    42,
      68,    68,    68,    68,    68,    68,    68,    26,     1,    26,
      30,     1,    30,     1,    25,    14,    14,    14,    68,    68,
      37,    37,    37,    37,     1,    37,    30,     1,    30,    68,
      71,    71,    67,    67,     1,    67,    37,     1,    37,    28,
      28,    28,    28,    28,     1,    28,    70,    26,     1,    26,
      36,    68
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
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
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
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
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


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

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
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

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
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
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
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
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

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
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
        case 4:

/* Line 1455 of yacc.c  */
#line 65 "java_compiler.y"
    {yyerror ("Declaration is Invalid!"); ;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 68 "java_compiler.y"
    {yyerror ("Declaration is Invalid : missing class keyword"); ;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 69 "java_compiler.y"
    {yyerror ("Declaration is Invalid : class name is not found"); ;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 70 "java_compiler.y"
    {yyerror ("Declaration is Invalid : '{' expected but not found"); ;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 71 "java_compiler.y"
    {yyerror ("Declaration is Invalid : class main not found"); ;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 72 "java_compiler.y"
    {yyerror ("Declaration is Invalid : '(' expected but not found"); ;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 73 "java_compiler.y"
    {yyerror ("Declaration is Invalid : ')' expected but not found"); ;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 74 "java_compiler.y"
    {yyerror ("Declaration is Invalid : '}' expected but not found"); ;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 75 "java_compiler.y"
    {yyerror ("Declaration is Invalid : '}' expected but not found"); ;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 76 "java_compiler.y"
    {yyerror ("Declaration is Invalid : Too much Statements"); ;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 82 "java_compiler.y"
    { yyerror ("Declaration is Invalid: Missing '{'"); ;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 83 "java_compiler.y"
    { yyerror ("Declaration is Invalid: Missing '}'"); ;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 92 "java_compiler.y"
    {yyerror ("Declaration is Invalid : missing '('"); ;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 93 "java_compiler.y"
    {yyerror ("Declaration is Invalid : missing ')'"); ;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 94 "java_compiler.y"
    {yyerror ("Declaration is Invalid : missing '{'"); ;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 95 "java_compiler.y"
    {yyerror ("Declaration is Invalid : missing return Statement"); ;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 96 "java_compiler.y"
    {yyerror ("Declaration is Invalid : missing ';'"); ;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 97 "java_compiler.y"
    {yyerror ("Declaration is Invalid : missing '}'"); ;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 111 "java_compiler.y"
    {yyerror ("Declaration is Invalid : missing ';'"); ;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 125 "java_compiler.y"
    {yyerror ("Declaration is Invalid : '}' expected but not found"); ;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 127 "java_compiler.y"
    {yyerror ("Declaration is Invalid : '(' expected but not found"); ;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 128 "java_compiler.y"
    {yyerror ("Declaration is Invalid : ')' expected but not found"); ;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 129 "java_compiler.y"
    {yyerror ("Declaration is Invalid : missing else block"); ;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 131 "java_compiler.y"
    {yyerror ("Declaration is Invalid : '(' expected but not found"); ;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 132 "java_compiler.y"
    {yyerror ("Declaration is Invalid : ')' expected but not found"); ;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 133 "java_compiler.y"
    {yyerror ("Declaration is Invalid : missing loop block"); ;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 136 "java_compiler.y"
    {yyerror ("Declaration is Invalid : '(' expected but not found"); ;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 137 "java_compiler.y"
    {yyerror ("Declaration is Invalid : ')' expected but not found"); ;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 138 "java_compiler.y"
    {yyerror ("Declaration is Invalid : ';' expected but not found"); ;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 139 "java_compiler.y"
    {yyerror ("Declaration is Invalid : '(' expected but not found"); ;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 140 "java_compiler.y"
    {yyerror ("Declaration is Invalid : ')' expected but not found"); ;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 141 "java_compiler.y"
    {yyerror ("Declaration is Invalid : ';' expected but not found"); ;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 143 "java_compiler.y"
    {yyerror ("Declaration is Invalid : ';' expected but not found"); ;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 145 "java_compiler.y"
    {yyerror ("Declaration is Invalid : ']' expected but not found"); ;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 146 "java_compiler.y"
    {yyerror ("Declaration is Invalid : ';' expected but not found"); ;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 149 "java_compiler.y"
    {yyerror ("Declaration is Invalid : missing '['"); ;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 150 "java_compiler.y"
    {yyerror ("Declaration is Invalid : missing ']'"); ;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 153 "java_compiler.y"
    {yyerror ("Declaration is Invalid : missing ')'"); ;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 154 "java_compiler.y"
    {yyerror ("Declaration is Invalid : missing '('"); ;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 160 "java_compiler.y"
    {yyerror ("Declaration is Invalid : missing '[' "); ;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 161 "java_compiler.y"
    {yyerror ("Declaration is Invalid : missing ']' "); ;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 163 "java_compiler.y"
    {yyerror ("Declaration is Invalid : missing '(' "); ;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 164 "java_compiler.y"
    {yyerror ("Declaration is Invalid : missing ')' "); ;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 167 "java_compiler.y"
    {yyerror ("Declaration is Invalid : missing '(' "); ;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 168 "java_compiler.y"
    {yyerror ("Declaration is Invalid : missing ')' "); ;}
    break;



/* Line 1455 of yacc.c  */
#line 2055 "java_compiler.tab.c"
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
		      yytoken, &yylval);
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

#if !defined(yyoverflow) || YYERROR_VERBOSE
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



/* Line 1675 of yacc.c  */
#line 179 "java_compiler.y"
 

int yyerror(char const *msg) {
	fprintf(stderr, "%s in line %d\n", msg, yylineno-1);
	return 0;
}

extern FILE *yyin;

int main()
{
    yyparse(); 
}
