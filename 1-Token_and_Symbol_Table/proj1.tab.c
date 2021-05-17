/* A Bison parser, made by GNU Bison 2.7.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2012 Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.7"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
/* Line 371 of yacc.c  */
#line 1 "proj1.y"

	#include<stdio.h>
	#include<stdlib.h>
	int v = 1;
	#include<string.h>
	#include<math.h>
	#include <ctype.h>
	#define null 0
	int size = 0;
	int g = 0;
	void insert(char* l,char* t,int v,char* s,int ln);
	int search(char lab[]);
	void display();
	int yyerror();
	int var = 0;
	int yylex(void);
	int lineno = 1;
	struct symbtab
	{
		int val;
		char label[20];
		char type[20];
		int value;
		char scope[20];
		int lineno;
		struct symbtab *next;
	};
	int error = 0;
	struct symbtab *first,*last,*temp;
	char* op;

/* Line 371 of yacc.c  */
#line 100 "proj1.tab.c"

# ifndef YY_NULL
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULL nullptr
#  else
#   define YY_NULL 0
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
   by #include "proj1.tab.h".  */
#ifndef YY_YY_PROJ1_TAB_H_INCLUDED
# define YY_YY_PROJ1_TAB_H_INCLUDED
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     DIGITS = 258,
     ID = 259,
     PLUS = 260,
     MINUS = 261,
     MUL = 262,
     DIVIDE = 263,
     NUM = 264,
     STRING = 265,
     INTEGER = 266,
     SPECIAL = 267,
     NL = 268,
     SPACE = 269,
     KEYWORD = 270,
     SPECIAL_START = 271,
     SPECIAL_END = 272,
     IF = 273,
     ELSE = 274,
     WHILE = 275,
     SEP = 276,
     END = 277,
     OR = 278,
     AND = 279,
     NOT = 280,
     IN = 281,
     NOTIN = 282,
     T = 283,
     F = 284,
     COLON = 285,
     SQUAREBRACKET_START = 286,
     SQUAREBRACKET_END = 287,
     MOD = 288,
     EQUAL = 289,
     PLUSEQUAL = 290,
     PRINT = 291,
     COMMENT = 292,
     RANGE = 293,
     SINGLEQUOTE = 294,
     DOUBLEQUOTE = 295,
     EXPONENTIAL = 296,
     COMMA = 297,
     INDENT = 298,
     LIST = 299,
     DIVIDEEQUAL = 300,
     MINUSEQUAL = 301,
     MULEQUAL = 302,
     LESSTHAN = 303,
     LESSTHANEQUAL = 304,
     GREATERTHAN = 305,
     GREATERTHANEQUAL = 306,
     DOUBLEEQUAL = 307,
     NOTEQUAL = 308
   };
#endif


#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;

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

#endif /* !YY_YY_PROJ1_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

/* Line 390 of yacc.c  */
#line 219 "proj1.tab.c"

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
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(N) (N)
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
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

# define YYCOPY_NEEDED 1

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
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  55
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   170

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  54
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  49
/* YYNRULES -- Number of rules.  */
#define YYNRULES  111
/* YYNRULES -- Number of states.  */
#define YYNSTATES  185

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   308

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
      45,    46,    47,    48,    49,    50,    51,    52,    53
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     8,    11,    14,    18,    19,    22,
      25,    29,    33,    37,    39,    41,    43,    45,    47,    51,
      55,    59,    64,    69,    74,    77,    80,    82,    84,    93,
      99,   101,   103,   105,   107,   109,   111,   115,   119,   121,
     123,   127,   129,   131,   134,   137,   140,   144,   148,   152,
     154,   158,   160,   164,   166,   168,   170,   172,   176,   178,
     180,   182,   184,   187,   190,   193,   200,   206,   211,   217,
     219,   223,   225,   229,   231,   234,   236,   240,   242,   244,
     248,   250,   252,   254,   256,   258,   260,   262,   264,   266,
     268,   270,   272,   274,   276,   278,   280,   282,   286,   287,
     292,   303,   311,   319,   321,   325,   327,   329,   331,   333,
     335,   337
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      55,     0,    -1,    56,    -1,    57,    56,    -1,    79,    56,
      -1,   101,    56,    -1,    43,    57,    56,    -1,    -1,    58,
     102,    -1,    98,   102,    -1,     4,    59,    73,    -1,     4,
      34,    73,    -1,     4,    35,    73,    -1,    60,    -1,    72,
      -1,    45,    -1,    47,    -1,    46,    -1,     4,    34,    61,
      -1,     4,    35,    61,    -1,    31,    60,    32,    -1,    44,
      16,    64,    17,    -1,    31,    60,    32,    62,    -1,    31,
      60,    32,    63,    -1,     7,    11,    -1,     5,    11,    -1,
      68,    -1,    69,    -1,    38,    16,    65,    42,    66,    42,
      67,    17,    -1,    38,    16,    42,    42,    17,    -1,     9,
      -1,    11,    -1,     9,    -1,    11,    -1,     9,    -1,    11,
      -1,     9,    42,    68,    -1,    11,    42,    68,    -1,     9,
      -1,    11,    -1,    70,    42,    69,    -1,    70,    -1,    10,
      -1,    10,    62,    -1,    10,    71,    -1,     5,    10,    -1,
       4,    34,    10,    -1,     4,    35,    10,    -1,    73,    77,
      74,    -1,    74,    -1,    74,    78,    75,    -1,    75,    -1,
      76,    41,    75,    -1,    76,    -1,     9,    -1,    11,    -1,
       4,    -1,    16,    73,    17,    -1,     5,    -1,     6,    -1,
       7,    -1,     8,    -1,    80,   102,    -1,    81,   102,    -1,
      83,   102,    -1,    18,    84,    30,   102,    96,    82,    -1,
      18,    84,    30,   102,    96,    -1,    19,    30,   102,    96,
      -1,    20,    84,    30,   102,    96,    -1,    85,    -1,    85,
      93,    86,    -1,    86,    -1,    86,    94,    87,    -1,    87,
      -1,    95,    87,    -1,    88,    -1,    16,    85,    17,    -1,
      89,    -1,    92,    -1,    89,    90,    73,    -1,     4,    -1,
       9,    -1,    11,    -1,    91,    -1,    26,    -1,    27,    -1,
      48,    -1,    49,    -1,    50,    -1,    51,    -1,    52,    -1,
      53,    -1,    28,    -1,    29,    -1,    23,    -1,    24,    -1,
      25,    -1,    43,    97,    56,    -1,    -1,    36,    16,    99,
      17,    -1,    36,    16,    99,    21,    34,    10,    22,    34,
      10,    17,    -1,    36,    16,    99,    21,    34,    10,    17,
      -1,    36,    16,    99,    22,    34,    10,    17,    -1,   100,
      -1,   100,    42,    99,    -1,    10,    -1,    61,    -1,     4,
      -1,     9,    -1,    11,    -1,    37,    -1,    13,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    36,    36,    38,    39,    40,    41,    42,    44,    45,
      47,    75,    85,   104,   105,   107,   108,   109,   111,   112,
     114,   115,   116,   117,   119,   121,   124,   125,   127,   128,
     130,   131,   133,   134,   136,   137,   139,   140,   141,   142,
     144,   145,   147,   148,   149,   151,   154,   155,   158,   164,
     166,   172,   174,   175,   177,   178,   179,   191,   194,   195,
     197,   198,   201,   202,   203,   206,   208,   210,   212,   214,
     216,   217,   219,   220,   222,   223,   225,   226,   227,   229,
     230,   231,   232,   234,   235,   236,   238,   239,   240,   241,
     242,   243,   245,   246,   248,   250,   252,   255,   257,   260,
     261,   262,   263,   266,   267,   269,   270,   271,   272,   273,
     275,   276
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "DIGITS", "ID", "PLUS", "MINUS", "MUL",
  "DIVIDE", "NUM", "STRING", "INTEGER", "SPECIAL", "NL", "SPACE",
  "KEYWORD", "SPECIAL_START", "SPECIAL_END", "IF", "ELSE", "WHILE", "SEP",
  "END", "OR", "AND", "NOT", "IN", "NOTIN", "T", "F", "COLON",
  "SQUAREBRACKET_START", "SQUAREBRACKET_END", "MOD", "EQUAL", "PLUSEQUAL",
  "PRINT", "COMMENT", "RANGE", "SINGLEQUOTE", "DOUBLEQUOTE", "EXPONENTIAL",
  "COMMA", "INDENT", "LIST", "DIVIDEEQUAL", "MINUSEQUAL", "MULEQUAL",
  "LESSTHAN", "LESSTHANEQUAL", "GREATERTHAN", "GREATERTHANEQUAL",
  "DOUBLEEQUAL", "NOTEQUAL", "$accept", "P", "S", "Simple", "Assignment",
  "opassgn", "list", "Arr", "mul", "add", "Range", "start", "stop", "step",
  "listnum", "liststr", "Str", "addstr", "string", "E1", "E2", "E3", "E4",
  "OP1", "OP2", "Compound", "if_else", "only_if", "else_1", "while_loop",
  "condition", "cond", "cond1", "cond2", "cond3", "relexp", "relop",
  "comparison", "bool", "opor", "opand", "opnot", "IND", "A", "Print",
  "toprint", "X", "comment", "LB", YY_NULL
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
     305,   306,   307,   308
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    54,    55,    56,    56,    56,    56,    56,    57,    57,
      58,    58,    58,    58,    58,    59,    59,    59,    60,    60,
      61,    61,    61,    61,    62,    63,    60,    60,    64,    64,
      65,    65,    66,    66,    67,    67,    68,    68,    68,    68,
      69,    69,    70,    70,    70,    71,    72,    72,    73,    73,
      74,    74,    75,    75,    76,    76,    76,    76,    77,    77,
      78,    78,    79,    79,    79,    80,    81,    82,    83,    84,
      85,    85,    86,    86,    87,    87,    88,    88,    88,    89,
      89,    89,    89,    90,    90,    90,    91,    91,    91,    91,
      91,    91,    92,    92,    93,    94,    95,    96,    97,    98,
      98,    98,    98,    99,    99,   100,   100,   100,   100,   100,
     101,   102
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     2,     2,     3,     0,     2,     2,
       3,     3,     3,     1,     1,     1,     1,     1,     3,     3,
       3,     4,     4,     4,     2,     2,     1,     1,     8,     5,
       1,     1,     1,     1,     1,     1,     3,     3,     1,     1,
       3,     1,     1,     2,     2,     2,     3,     3,     3,     1,
       3,     1,     3,     1,     1,     1,     1,     3,     1,     1,
       1,     1,     2,     2,     2,     6,     5,     4,     5,     1,
       3,     1,     3,     1,     2,     1,     3,     1,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     0,     4,
      10,     7,     7,     1,     3,     1,     1,     1,     1,     1,
       1,     1
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       7,     0,    38,    42,    39,     0,     0,     0,   110,     0,
       0,     2,     7,     0,    13,    26,    27,    41,    14,     7,
       0,     0,     0,     0,     7,     0,     0,    15,    17,    16,
       0,     0,     0,     0,    43,    44,     0,    80,    81,    82,
       0,    96,    92,    93,     0,    69,    71,    73,    75,    77,
      78,     0,     0,     0,     7,     1,     3,   111,     8,     0,
       4,    62,    63,    64,     9,     5,    56,    54,    46,    55,
       0,     0,     0,    18,    11,    49,    51,    53,    47,    19,
      12,    10,    36,    45,    24,    37,     0,     0,    94,     0,
      95,     0,    84,    85,    86,    87,    88,    89,    90,    91,
       0,    83,    74,     0,   107,   108,   105,   109,   106,     0,
     103,     6,    40,     0,     0,     0,     0,    58,    59,     0,
      60,    61,     0,     0,    76,     0,    70,    72,    79,     0,
      99,     0,     0,     0,    57,     0,     0,    20,     0,     0,
      48,    50,    52,    98,    66,    68,     0,     0,   104,     0,
      22,    23,     0,    21,     7,     0,    65,     0,     0,    25,
      30,    31,     0,     0,    97,     0,   101,     0,   102,     0,
       0,     0,     0,    29,    32,    33,     0,    67,     0,     0,
     100,    34,    35,     0,    28
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    10,    11,    12,    13,    30,    14,    73,    34,   151,
     139,   163,   176,   183,    15,    16,    17,    35,    18,    74,
      75,    76,    77,   119,   122,    19,    20,    21,   156,    22,
      44,    45,    46,    47,    48,    49,   100,   101,    50,    89,
      91,    51,   144,   154,    23,   109,   110,    24,    58
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -124
static const yytype_int16 yypact[] =
{
      52,    -4,   -27,    53,   -16,    98,    98,    21,  -124,    55,
      81,  -124,    52,    77,  -124,  -124,  -124,    62,  -124,    52,
      77,    77,    77,    77,    52,     9,    13,  -124,  -124,  -124,
      69,    68,   103,    97,  -124,  -124,    68,  -124,  -124,  -124,
      98,  -124,  -124,  -124,    99,   105,    93,  -124,  -124,    48,
    -124,    98,   100,    24,    52,  -124,  -124,  -124,  -124,   121,
    -124,  -124,  -124,  -124,  -124,  -124,  -124,  -124,  -124,  -124,
      69,    83,   116,  -124,    45,   112,  -124,    92,  -124,  -124,
      45,    45,  -124,  -124,  -124,  -124,    22,    77,  -124,    98,
    -124,    98,  -124,  -124,  -124,  -124,  -124,  -124,  -124,  -124,
      69,  -124,  -124,    77,  -124,  -124,  -124,  -124,  -124,    89,
      95,  -124,  -124,     4,    87,   102,   101,  -124,  -124,    69,
    -124,  -124,    69,    69,  -124,   104,    93,  -124,    45,   104,
    -124,   106,   108,    24,  -124,   -17,   -17,    79,   119,   124,
     112,  -124,  -124,  -124,   117,  -124,   128,   133,  -124,   137,
    -124,  -124,    27,  -124,    52,   114,  -124,    32,   132,  -124,
    -124,  -124,   109,   110,  -124,    77,  -124,   120,  -124,   136,
      94,   104,   140,  -124,  -124,  -124,   113,  -124,   139,   107,
    -124,  -124,  -124,   141,  -124
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -124,  -124,    -8,   148,  -124,  -124,    88,   -21,    23,  -124,
    -124,  -124,  -124,  -124,    40,   111,  -124,  -124,  -124,   -18,
      42,     2,  -124,  -124,  -124,  -124,  -124,  -124,  -124,  -124,
     156,   123,    75,   -44,  -124,  -124,  -124,  -124,  -124,  -124,
    -124,  -124,  -123,  -124,  -124,    33,  -124,  -124,   -20
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      61,    62,    63,    64,    56,    79,   145,   102,    80,   117,
     118,    60,    81,    66,    71,    31,    65,    66,    67,    68,
      69,   134,    67,    78,    69,    70,    36,    72,   104,    70,
      25,    26,   108,   105,   106,   107,   160,    53,   161,   124,
      71,    27,    28,    29,    71,    88,   111,   127,   177,   166,
     117,   118,   113,    72,   167,    71,     1,    72,    32,     1,
      33,     2,     3,     4,     2,     3,     4,   125,    72,   162,
       5,    82,     6,    66,    92,    93,    85,     2,    67,     4,
      69,    55,   128,   129,   149,    70,    33,   114,     7,     8,
      57,     7,     2,     3,     4,     9,    94,    95,    96,    97,
      98,    99,    37,   174,    59,   175,   130,    38,    84,    39,
     131,   132,   108,    83,    40,    79,   181,    90,   182,   120,
     121,   135,   136,    41,   141,   142,    42,    43,    88,    87,
     103,     3,   116,   123,   137,   152,   155,   133,   157,   138,
     146,   153,   147,   158,   165,   171,   164,   143,   159,   168,
     178,   169,   170,   173,   172,   179,   180,    54,   184,   115,
     150,   140,    52,    86,   126,     0,   148,     0,     0,     0,
     112
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-124)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
      20,    21,    22,    23,    12,    26,   129,    51,    26,     5,
       6,    19,    30,     4,    31,    42,    24,     4,     9,    10,
      11,    17,     9,    10,    11,    16,    42,    44,     4,    16,
      34,    35,    53,     9,    10,    11,     9,    16,    11,    17,
      31,    45,    46,    47,    31,    23,    54,    91,   171,    17,
       5,     6,    70,    44,    22,    31,     4,    44,     5,     4,
       7,     9,    10,    11,     9,    10,    11,    87,    44,    42,
      18,    31,    20,     4,    26,    27,    36,     9,     9,    11,
      11,     0,   100,   103,     5,    16,     7,     4,    36,    37,
      13,    36,     9,    10,    11,    43,    48,    49,    50,    51,
      52,    53,     4,     9,    42,    11,    17,     9,    11,    11,
      21,    22,   133,    10,    16,   136,     9,    24,    11,     7,
       8,    34,    35,    25,   122,   123,    28,    29,    23,    30,
      30,    10,    16,    41,    32,    16,    19,    42,    10,    38,
      34,    17,    34,    10,    30,   165,   154,    43,    11,    17,
      10,    42,    42,    17,    34,    42,    17,     9,    17,    71,
     137,   119,     6,    40,    89,    -1,   133,    -1,    -1,    -1,
      59
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     4,     9,    10,    11,    18,    20,    36,    37,    43,
      55,    56,    57,    58,    60,    68,    69,    70,    72,    79,
      80,    81,    83,    98,   101,    34,    35,    45,    46,    47,
      59,    42,     5,     7,    62,    71,    42,     4,     9,    11,
      16,    25,    28,    29,    84,    85,    86,    87,    88,    89,
      92,    95,    84,    16,    57,     0,    56,    13,   102,    42,
      56,   102,   102,   102,   102,    56,     4,     9,    10,    11,
      16,    31,    44,    61,    73,    74,    75,    76,    10,    61,
      73,    73,    68,    10,    11,    68,    85,    30,    23,    93,
      24,    94,    26,    27,    48,    49,    50,    51,    52,    53,
      90,    91,    87,    30,     4,     9,    10,    11,    61,    99,
     100,    56,    69,    73,     4,    60,    16,     5,     6,    77,
       7,     8,    78,    41,    17,   102,    86,    87,    73,   102,
      17,    21,    22,    42,    17,    34,    35,    32,    38,    64,
      74,    75,    75,    43,    96,    96,    34,    34,    99,     5,
      62,    63,    16,    17,    97,    19,    82,    10,    10,    11,
       9,    11,    42,    65,    56,    30,    17,    22,    17,    42,
      42,   102,    34,    17,     9,    11,    66,    96,    10,    42,
      17,     9,    11,    67,    17
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
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

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
      YYERROR;							\
    }								\
while (YYID (0))

/* Error token number */
#define YYTERROR	1
#define YYERRCODE	256


/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
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
  FILE *yyo = yyoutput;
  YYUSE (yyo);
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
  YYSIZE_T yysize0 = yytnamerr (YY_NULL, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULL;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
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
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULL, yytname[yyx]);
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




/* The lookahead symbol.  */
int yychar;


#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval YY_INITIAL_VALUE(yyval_default);

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
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

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

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
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

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
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
  if (yypact_value_is_default (yyn))
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
        case 6:
/* Line 1792 of yacc.c  */
#line 41 "proj1.y"
    {g=0;}
    break;

  case 10:
/* Line 1792 of yacc.c  */
#line 47 "proj1.y"
    {
    						temp = search((yyvsp[(1) - (3)]));
    						if(temp != NULL){
    							var = temp->value;
	    						if((yyvsp[(2) - (3)])==1){
	    							var/=(yyvsp[(3) - (3)]);
	    						}
	    						if((yyvsp[(2) - (3)])==2){
	    							var*=(yyvsp[(3) - (3)]);
	    						}
	    						if((yyvsp[(2) - (3)])==3){
	    							var-=(yyvsp[(3) - (3)]);
	    						}
	    						if(g==1){
	    							insert((yyvsp[(1) - (3)]),"IDENTIFIER",var,"local",lineno);
	    							g = 0;
	    						}
	    						else {
	    							insert((yyvsp[(1) - (3)]),"IDENTIFIER",var,"global",lineno);
	    						}
	    							
    						}
    						else{
    							printf("\n------------------ERROR : %s Undeclared at line number %d--------------------\n",(yyvsp[(1) - (3)]),lineno);
    							error = 1;
    						}
    						
    					}
    break;

  case 11:
/* Line 1792 of yacc.c  */
#line 75 "proj1.y"
    {
						if(g==1){
	    							insert((yyvsp[(1) - (3)]),"IDENTIFIER",(yyvsp[(3) - (3)]),"local",lineno);
	    							g = 1;
	    						}
	    						else{
	    							insert((yyvsp[(1) - (3)]),"IDENTIFIER",(yyvsp[(3) - (3)]),"global",lineno);
	    						}
						//printf("inserted-----------\n");
					}
    break;

  case 12:
/* Line 1792 of yacc.c  */
#line 85 "proj1.y"
    {
    						temp = search((yyvsp[(1) - (3)]));
    						if(temp != NULL){
	    						var = temp->value;
	    						var += (yyvsp[(3) - (3)]);
	    						if(g==1){
	    							insert((yyvsp[(1) - (3)]),"IDENTIFIER",var,"local",lineno);
	    							g = 0;
	    						}
	    						else{
	    							insert((yyvsp[(1) - (3)]),"IDENTIFIER",var,"global",lineno);
	    						}
    						}
    						else{
    							printf("\n------------------ERROR : %s Undeclared at line number %d--------------------\n",(yyvsp[(1) - (3)]),lineno);
    							error = 1;
    						}
    						
    					}
    break;

  case 15:
/* Line 1792 of yacc.c  */
#line 107 "proj1.y"
    {(yyval)=1;}
    break;

  case 16:
/* Line 1792 of yacc.c  */
#line 108 "proj1.y"
    {(yyval)=2;}
    break;

  case 17:
/* Line 1792 of yacc.c  */
#line 109 "proj1.y"
    {(yyval)=3;}
    break;

  case 48:
/* Line 1792 of yacc.c  */
#line 158 "proj1.y"
    {
    					if((yyvsp[(2) - (3)])==1)
    						{(yyval)=(yyvsp[(1) - (3)])+(yyvsp[(3) - (3)]);}
    					else if((yyvsp[(2) - (3)])==2)
    						{(yyval)=(yyvsp[(1) - (3)])-(yyvsp[(3) - (3)]);}
    				}
    break;

  case 50:
/* Line 1792 of yacc.c  */
#line 166 "proj1.y"
    {
    					if((yyvsp[(2) - (3)])==3)
    						{(yyval)=(yyvsp[(1) - (3)])*(yyvsp[(3) - (3)]);}
    					else if((yyvsp[(2) - (3)])==4)
    						{(yyval)=(yyvsp[(1) - (3)])/(yyvsp[(3) - (3)]);}
    				}
    break;

  case 54:
/* Line 1792 of yacc.c  */
#line 177 "proj1.y"
    {(yyval)=atoi((yyvsp[(1) - (1)]));}
    break;

  case 55:
/* Line 1792 of yacc.c  */
#line 178 "proj1.y"
    {(yyval)=atoi((yyvsp[(1) - (1)]));}
    break;

  case 56:
/* Line 1792 of yacc.c  */
#line 179 "proj1.y"
    {
                					temp = search((yyvsp[(1) - (1)]));
                					if(temp != NULL){
                						var = temp->value;
                						(yyval) = var;
                					}
                					else{
                						printf("\n------------------ERROR : %s Undeclared at line number %d--------------------\n",(yyvsp[(1) - (1)]),lineno);
    								error = 1;
                					}	
                					
                				}
    break;

  case 57:
/* Line 1792 of yacc.c  */
#line 191 "proj1.y"
    {(yyval)=(yyvsp[(2) - (3)]);}
    break;

  case 58:
/* Line 1792 of yacc.c  */
#line 194 "proj1.y"
    {(yyval)=1;}
    break;

  case 59:
/* Line 1792 of yacc.c  */
#line 195 "proj1.y"
    {(yyval)=2;}
    break;

  case 60:
/* Line 1792 of yacc.c  */
#line 197 "proj1.y"
    {(yyval)=3;}
    break;

  case 61:
/* Line 1792 of yacc.c  */
#line 198 "proj1.y"
    {(yyval)=4;}
    break;

  case 98:
/* Line 1792 of yacc.c  */
#line 257 "proj1.y"
    {g=1;}
    break;

  case 110:
/* Line 1792 of yacc.c  */
#line 275 "proj1.y"
    {lineno += 1;}
    break;

  case 111:
/* Line 1792 of yacc.c  */
#line 276 "proj1.y"
    {lineno += 1;}
    break;


/* Line 1792 of yacc.c  */
#line 1785 "proj1.tab.c"
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


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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
                  yytoken, &yylval);
    }
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


/* Line 2055 of yacc.c  */
#line 279 "proj1.y"


int yyerror(){
        printf("\n------------------SYNTAX ERROR : at line number %d -------------------------\n",lineno);
    	error = 1;
	v=0;
        return 0;
}
 void insert(char* l,char* t,int v,char* s,int ln)
{
	struct symbtab *n;
	n=search(l);
	if(n!=NULL)
        {
              	n->value = v;
              	n->lineno = ln;
              	strcpy(n->scope,s);  
        }
        else
        {
        	struct symbtab *p;
                p=malloc(sizeof(struct symbtab));
                strcpy(p->label,l);
                strcpy(p->type,t);
                p->value = v;
                p->lineno = ln;
                strcpy(p->scope,s);
                p->next=null;
                if(size==0)
                {
		        first=p;
		        last=p;
                }
                else
                {
                        last->next=p;
                        last=p;
                }
                size++;
        }
}

void display()
{
        int i;
        struct symbtab *p;
        p=first;
        printf("\n------------------SYMBOL TABLE----------------\n");
        printf("----------------------------------------------\n");
        printf("LABEL\tTYPE\t\tVALUE\tSCOPE\tLINENO\n");
        for(i=0;i<size;i++)
        {
                printf("%s\t%s\t%d\t%s\t%d\n",p->label,p->type,p->value,p->scope,p->lineno);
                p=p->next;
        }
}
int search(char lab[])
{
        int i=0;
        struct symbtab *p,*flag;
        p=first;
        for(i=0;i<size;i++)
        {
                if(strcmp(p->label,lab)==0)
                {
                	flag=p;
                	return flag;
                }
                p=p->next;
        }
        p=NULL;
        return p;
}
int main(){
         extern FILE* yyin;
	 yyin = fopen("inp.py","r");
	 yyparse();
	 if(v)
	 {
	    printf("------------------------------PARSE SUCCESSFUL---------------------------\n");
	 }
	 if(!error){
	 	display();
	 }
	 return 1;
	
}
