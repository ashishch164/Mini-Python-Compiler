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
	#include<string.h>
	#include<math.h>
	#include <ctype.h>
	#define null 0
	#define COUNT 5
	#define YYSTYPE char*
	int size = 0; // size of symbol table
	int v = 1;	// yyerror
	int g = 0; //scope
	int abc = 0;	//temporary value
	int aeval = 0;  //AE evaluation
	int lineno = 1;
	extern int yylineno;
	int flag=0;	//for operator identification
	char label[2]="l"; // labels
	int l_ = 0;	//count of labels(l1,l2,....)
  	char l__[100] = {'\0'}; //labels
	char st[100][10];  //stack used in icg generation
	int top=0;	//top of stack
	int i_=0;	//count of temp variables in icg
  	char i__[100] = {'\0'};	//temp variables (t1,t2,...)
	char temp[2]="t";
	char ICG[10000]=""; //icg
	char try1[5][10];
	char try[5][10];
	int relexp = 0;
	int x=0;
	int x1=0;
	struct symbtab
	{
		char label[20];
		char type[20];
		int value;
		char scope[20];
		int lineno;
		struct symbtab *next;
	};
	int error = 0;
	struct symbtab *first,*last,*temp1,*temp2;
	char* op;
	typedef struct Abstract_syntax_tree
  	{
	  	char *name;
	  	struct Abstract_syntax_tree *left;
	  	struct Abstract_syntax_tree *right;
  	}node; 
  	struct symbtab* t_ptr;	//AE evaluation
        extern FILE *yyin;
        node* buildTree(char *,node *,node *);
        void printTree(node *);
        void push(char*);
	void codegen(int val);
	void codegen_assign();
	void codegen2();
	void codegen3();
	void insert(char* l,char* t,int v,char* s,int ln);
	struct symbtab* search(char lab[]);
	void display();
	int yyerror();
	node *dollardollar;


/* Line 371 of yacc.c  */
#line 134 "proj1.tab.c"

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
     RANGE = 292,
     SINGLEQUOTE = 293,
     DOUBLEQUOTE = 294,
     EXPONENTIAL = 295,
     COMMA = 296,
     INDENT = 297,
     LIST = 298,
     DIVIDEEQUAL = 299,
     MINUSEQUAL = 300,
     MULEQUAL = 301,
     LESSTHAN = 302,
     LESSTHANEQUAL = 303,
     GREATERTHAN = 304,
     GREATERTHANEQUAL = 305,
     DOUBLEEQUAL = 306,
     NOTEQUAL = 307
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
#line 252 "proj1.tab.c"

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
#define YYFINAL  37
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   114

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  53
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  39
/* YYNRULES -- Number of rules.  */
#define YYNRULES  82
/* YYNRULES -- Number of states.  */
#define YYNSTATES  129

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   307

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
      45,    46,    47,    48,    49,    50,    51,    52
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     5,     8,    11,    12,    16,    20,    21,
      23,    26,    29,    32,    36,    38,    40,    42,    44,    46,
      50,    52,    56,    58,    59,    64,    66,    68,    70,    72,
      76,    78,    80,    82,    84,    87,    90,    93,    99,   100,
     108,   109,   115,   121,   123,   127,   129,   133,   135,   138,
     140,   144,   146,   148,   152,   154,   156,   158,   160,   162,
     164,   166,   168,   170,   172,   174,   176,   178,   180,   182,
     184,   186,   188,   193,   204,   212,   220,   222,   226,   228,
     230,   232,   234
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      54,     0,    -1,    55,    -1,    58,    55,    -1,    68,    55,
      -1,    -1,    57,    58,    56,    -1,    57,    68,    56,    -1,
      -1,    42,    -1,    57,    42,    -1,    59,    91,    -1,    88,
      91,    -1,     4,    60,    61,    -1,    44,    -1,    46,    -1,
      45,    -1,    34,    -1,    35,    -1,    61,    66,    62,    -1,
      62,    -1,    62,    67,    63,    -1,    63,    -1,    -1,    65,
      40,    64,    63,    -1,    65,    -1,    11,    -1,     9,    -1,
       4,    -1,    16,    61,    17,    -1,     5,    -1,     6,    -1,
       7,    -1,     8,    -1,    70,    91,    -1,    69,    91,    -1,
      74,    91,    -1,    18,    75,    30,    91,    87,    -1,    -1,
      18,    75,    30,    91,    87,    71,    72,    -1,    -1,    19,
      73,    30,    91,    87,    -1,    20,    75,    30,    91,    87,
      -1,    76,    -1,    76,    84,    77,    -1,    77,    -1,    77,
      85,    78,    -1,    78,    -1,    86,    78,    -1,    79,    -1,
      16,    76,    17,    -1,    80,    -1,    83,    -1,    80,    81,
      61,    -1,     4,    -1,     9,    -1,    11,    -1,    82,    -1,
      26,    -1,    27,    -1,    47,    -1,    48,    -1,    49,    -1,
      50,    -1,    51,    -1,    52,    -1,    28,    -1,    29,    -1,
      23,    -1,    24,    -1,    25,    -1,    56,    -1,    36,    16,
      89,    17,    -1,    36,    16,    89,    21,    34,    10,    22,
      34,    10,    17,    -1,    36,    16,    89,    21,    34,    10,
      17,    -1,    36,    16,    89,    22,    34,    10,    17,    -1,
      90,    -1,    90,    41,    89,    -1,    10,    -1,     4,    -1,
       9,    -1,    11,    -1,    13,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    70,    70,    72,    73,    74,    76,    77,    78,    80,
      81,    83,    84,    86,    93,    94,    95,    96,    97,   100,
     104,   106,   110,   112,   112,   113,   115,   130,   145,   172,
     175,   176,   178,   179,   182,   183,   184,   186,   194,   194,
     205,   205,   207,   217,   219,   220,   222,   223,   225,   226,
     228,   229,   233,   235,   250,   251,   252,   254,   255,   256,
     258,   259,   260,   261,   262,   263,   265,   266,   268,   270,
     272,   275,   278,   279,   280,   281,   284,   285,   287,   288,
     289,   290,   292
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
  "PRINT", "RANGE", "SINGLEQUOTE", "DOUBLEQUOTE", "EXPONENTIAL", "COMMA",
  "INDENT", "LIST", "DIVIDEEQUAL", "MINUSEQUAL", "MULEQUAL", "LESSTHAN",
  "LESSTHANEQUAL", "GREATERTHAN", "GREATERTHANEQUAL", "DOUBLEEQUAL",
  "NOTEQUAL", "$accept", "P", "S", "IS", "In", "Simple", "Assignment",
  "opassgn", "E1", "E2", "E3", "$@1", "E4", "OP1", "OP2", "Compound",
  "only_if", "if_else", "$@2", "else_1", "$@3", "while_loop", "condition",
  "cond", "cond1", "cond2", "cond3", "relexp", "relop", "comparison",
  "bool", "opor", "opand", "opnot", "IND", "Print", "toprint", "X", "LB", YY_NULL
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
     305,   306,   307
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    53,    54,    55,    55,    55,    56,    56,    56,    57,
      57,    58,    58,    59,    60,    60,    60,    60,    60,    61,
      61,    62,    62,    64,    63,    63,    65,    65,    65,    65,
      66,    66,    67,    67,    68,    68,    68,    69,    71,    70,
      73,    72,    74,    75,    76,    76,    77,    77,    78,    78,
      79,    79,    79,    80,    80,    80,    80,    81,    81,    81,
      82,    82,    82,    82,    82,    82,    83,    83,    84,    85,
      86,    87,    88,    88,    88,    88,    89,    89,    90,    90,
      90,    90,    91
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     2,     0,     3,     3,     0,     1,
       2,     2,     2,     3,     1,     1,     1,     1,     1,     3,
       1,     3,     1,     0,     4,     1,     1,     1,     1,     3,
       1,     1,     1,     1,     2,     2,     2,     5,     0,     7,
       0,     5,     5,     1,     3,     1,     3,     1,     2,     1,
       3,     1,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     4,    10,     7,     7,     1,     3,     1,     1,
       1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       5,     0,     0,     0,     0,     0,     2,     5,     0,     5,
       0,     0,     0,     0,    17,    18,    14,    16,    15,     0,
      54,    55,    56,     0,    70,    66,    67,     0,    43,    45,
      47,    49,    51,    52,     0,     0,     0,     1,     3,    82,
      11,     4,    35,    34,    36,    12,    28,    27,    26,     0,
      13,    20,    22,    25,     0,     0,    68,     0,    69,     0,
      58,    59,    60,    61,    62,    63,    64,    65,     0,    57,
      48,     0,    79,    80,    78,    81,     0,    76,     0,    30,
      31,     0,    32,    33,     0,    23,    50,     8,    44,    46,
      53,     8,    72,     0,     0,     0,    29,    19,    21,     0,
       9,    71,     0,    37,    42,     0,     0,    77,    24,    10,
       8,     8,     0,     0,     0,     6,     7,    40,    39,    74,
       0,    75,     0,     0,     0,     0,     8,    73,    41
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     5,     6,   101,   102,     7,     8,    19,    50,    51,
      52,    99,    53,    81,    84,     9,    10,    11,   112,   118,
     122,    12,    27,    28,    29,    30,    31,    32,    68,    69,
      33,    57,    59,    34,   103,    13,    76,    77,    40
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -87
static const yytype_int8 yypact[] =
{
       3,    23,    37,    37,    31,    56,   -87,     3,    24,     3,
      24,    24,    24,    24,   -87,   -87,   -87,   -87,   -87,     8,
     -87,   -87,   -87,    37,   -87,   -87,   -87,    42,    50,    51,
     -87,   -87,   -18,   -87,    37,    44,    40,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,     8,
      58,     6,   -87,    36,     5,    24,   -87,    37,   -87,    37,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,     8,   -87,
     -87,    24,   -87,   -87,   -87,   -87,    38,    39,    10,   -87,
     -87,     8,   -87,   -87,     8,   -87,   -87,    35,    51,   -87,
      58,    35,   -87,    47,    48,    40,   -87,     6,   -87,     8,
     -87,   -87,     0,    59,   -87,    69,    73,   -87,   -87,   -87,
      35,    35,    65,    21,    68,   -87,   -87,   -87,   -87,   -87,
      52,   -87,    57,    78,    24,    72,    35,   -87,   -87
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -87,   -87,    45,   -40,   -87,   -12,   -87,   -87,   -43,    11,
     -73,   -87,   -87,   -87,   -87,   -11,   -87,   -87,   -87,   -87,
     -87,   -87,    90,    71,    41,   -24,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,   -86,   -87,     1,   -87,   -10
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -39
static const yytype_int16 yytable[] =
{
      42,    43,    44,    45,     1,   104,    78,     1,    60,    61,
      70,    98,    46,    82,    83,    79,    80,    47,     2,    48,
       3,     2,    86,     3,    49,    90,   108,    96,    56,    62,
      63,    64,    65,    66,    67,    89,     4,    39,   119,     4,
     128,    20,   109,   120,    72,    87,    21,    36,    22,    73,
      74,    75,    38,    23,    41,    92,    37,    14,    15,    93,
      94,    91,    24,    79,    80,    25,    26,    16,    17,    18,
     115,   116,    55,    56,    71,    58,    85,   100,   -38,   113,
      95,   105,   106,   114,   117,   121,   123,   124,   125,   127,
     110,   111,    97,    35,    54,     0,   107,     0,    88,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   126
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-87)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int8 yycheck[] =
{
      10,    11,    12,    13,     4,    91,    49,     4,    26,    27,
      34,    84,     4,     7,     8,     5,     6,     9,    18,    11,
      20,    18,    17,    20,    16,    68,    99,    17,    23,    47,
      48,    49,    50,    51,    52,    59,    36,    13,    17,    36,
     126,     4,    42,    22,     4,    55,     9,    16,    11,     9,
      10,    11,     7,    16,     9,    17,     0,    34,    35,    21,
      22,    71,    25,     5,     6,    28,    29,    44,    45,    46,
     110,   111,    30,    23,    30,    24,    40,    42,    19,    10,
      41,    34,    34,    10,    19,    17,    34,    30,    10,    17,
     102,   102,    81,     3,    23,    -1,    95,    -1,    57,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   124
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     4,    18,    20,    36,    54,    55,    58,    59,    68,
      69,    70,    74,    88,    34,    35,    44,    45,    46,    60,
       4,     9,    11,    16,    25,    28,    29,    75,    76,    77,
      78,    79,    80,    83,    86,    75,    16,     0,    55,    13,
      91,    55,    91,    91,    91,    91,     4,     9,    11,    16,
      61,    62,    63,    65,    76,    30,    23,    84,    24,    85,
      26,    27,    47,    48,    49,    50,    51,    52,    81,    82,
      78,    30,     4,     9,    10,    11,    89,    90,    61,     5,
       6,    66,     7,     8,    67,    40,    17,    91,    77,    78,
      61,    91,    17,    21,    22,    41,    17,    62,    63,    64,
      42,    56,    57,    87,    87,    34,    34,    89,    63,    42,
      58,    68,    71,    10,    10,    56,    56,    19,    72,    17,
      22,    17,    73,    34,    30,    10,    91,    17,    87
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
        case 2:
/* Line 1792 of yacc.c  */
#line 70 "proj1.y"
    {dollardollar = (yyval);}
    break;

  case 3:
/* Line 1792 of yacc.c  */
#line 72 "proj1.y"
    {(yyval)=buildTree("SEQ",(yyvsp[(1) - (2)]),(yyvsp[(2) - (2)]));}
    break;

  case 4:
/* Line 1792 of yacc.c  */
#line 73 "proj1.y"
    {(yyval)=buildTree("SEQ",(yyvsp[(1) - (2)]),(yyvsp[(2) - (2)]));}
    break;

  case 5:
/* Line 1792 of yacc.c  */
#line 74 "proj1.y"
    {(yyval)=buildTree("NULL",NULL,NULL);}
    break;

  case 6:
/* Line 1792 of yacc.c  */
#line 76 "proj1.y"
    {(yyval)=buildTree("SEQ",(yyvsp[(2) - (3)]),(yyvsp[(3) - (3)]));}
    break;

  case 7:
/* Line 1792 of yacc.c  */
#line 77 "proj1.y"
    {(yyval)=buildTree("SEQ",(yyvsp[(2) - (3)]),(yyvsp[(3) - (3)]));}
    break;

  case 8:
/* Line 1792 of yacc.c  */
#line 78 "proj1.y"
    {(yyval)=buildTree("NULL",NULL,NULL);}
    break;

  case 9:
/* Line 1792 of yacc.c  */
#line 80 "proj1.y"
    {g=1;}
    break;

  case 10:
/* Line 1792 of yacc.c  */
#line 81 "proj1.y"
    {g=1;}
    break;

  case 11:
/* Line 1792 of yacc.c  */
#line 83 "proj1.y"
    {aeval = 0;(yyval)=(yyvsp[(1) - (2)]);}
    break;

  case 13:
/* Line 1792 of yacc.c  */
#line 86 "proj1.y"
    {
    						push((yyvsp[(1) - (3)]));
    						codegen_assign();
		                                (yyvsp[(1) - (3)]) = buildTree((yyvsp[(1) - (3)]),NULL,NULL);
		                                (yyval) = buildTree((yyvsp[(2) - (3)]),(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]));
    					}
    break;

  case 14:
/* Line 1792 of yacc.c  */
#line 93 "proj1.y"
    {(yyval)="/=";}
    break;

  case 15:
/* Line 1792 of yacc.c  */
#line 94 "proj1.y"
    {(yyval)="*=";}
    break;

  case 16:
/* Line 1792 of yacc.c  */
#line 95 "proj1.y"
    {(yyval)="-=";}
    break;

  case 17:
/* Line 1792 of yacc.c  */
#line 96 "proj1.y"
    {(yyval)="=";}
    break;

  case 18:
/* Line 1792 of yacc.c  */
#line 97 "proj1.y"
    {(yyval)="+=";}
    break;

  case 19:
/* Line 1792 of yacc.c  */
#line 100 "proj1.y"
    { 
    						codegen(aeval);
    						(yyval)=buildTree((yyvsp[(2) - (3)]),(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]));
    					}
    break;

  case 21:
/* Line 1792 of yacc.c  */
#line 106 "proj1.y"
    {
    						codegen(aeval);
    						(yyval)=buildTree((yyvsp[(2) - (3)]),(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]));
    					}
    break;

  case 23:
/* Line 1792 of yacc.c  */
#line 112 "proj1.y"
    {push("**");}
    break;

  case 24:
/* Line 1792 of yacc.c  */
#line 112 "proj1.y"
    {codegen(aeval);}
    break;

  case 26:
/* Line 1792 of yacc.c  */
#line 115 "proj1.y"
    {
    							abc=atoi((yyvsp[(1) - (1)]));
    							if(flag==1)
    								{aeval+=abc;}
    							else if(flag==2)
    								{aeval-=abc;}
    							else if(flag==3)
    								{aeval*=abc;}
    							else if(flag==4)
    								{aeval/=abc;}
    							else aeval=abc;
    							push((yyvsp[(1) - (1)]));
	          					(yyval)=(yyvsp[(1) - (1)]);
	          					(yyval) = buildTree((yyvsp[(1) - (1)]),NULL,NULL);
	          				}
    break;

  case 27:
/* Line 1792 of yacc.c  */
#line 130 "proj1.y"
    {
    							abc=atoi((yyvsp[(1) - (1)]));
    							if(flag==1)
    								{aeval+=abc;}
    							else if(flag==2)
    								{aeval-=abc;}
    							else if(flag==3)
    								{aeval*=abc;}
    							else if(flag==4)
    								{aeval/=abc;}
    							else aeval=abc;
    							push((yyvsp[(1) - (1)]));
	          					(yyval)=(yyvsp[(1) - (1)]);
	          					(yyval) = buildTree((yyvsp[(1) - (1)]),NULL,NULL);
	          				}
    break;

  case 28:
/* Line 1792 of yacc.c  */
#line 145 "proj1.y"
    {
                					t_ptr=search((yyvsp[(1) - (1)]));
                					
                					if(t_ptr==NULL)
                					{
                						printf("\n----------------------ERROR : variable %s undeclared-------------------\n",(yyvsp[(1) - (1)]));
                						error = 1;
                					}
                					else
                					{
                					abc = t_ptr->value;
                					
                					if(flag == 1)
                						{aeval += abc;}
                					else if(flag == 2)
                						{aeval -= abc;}
                					
                					else if(flag==3)
                						{aeval *= abc;}
                					else if(flag==4)
                						{aeval /= abc;}
                					else
                						 aeval = abc;
                					push((yyvsp[(1) - (1)]));
	      						(yyval)=(yyvsp[(1) - (1)]);
	      						(yyval) = buildTree((yyvsp[(1) - (1)]),NULL,NULL);}
	      						}
    break;

  case 29:
/* Line 1792 of yacc.c  */
#line 172 "proj1.y"
    {(yyval)=(yyvsp[(2) - (3)]);}
    break;

  case 30:
/* Line 1792 of yacc.c  */
#line 175 "proj1.y"
    {flag = 1;push("+");(yyval)="+";}
    break;

  case 31:
/* Line 1792 of yacc.c  */
#line 176 "proj1.y"
    {flag = 2;push("-");(yyval)="-";}
    break;

  case 32:
/* Line 1792 of yacc.c  */
#line 178 "proj1.y"
    {flag = 3;push("*");(yyval)="*";}
    break;

  case 33:
/* Line 1792 of yacc.c  */
#line 179 "proj1.y"
    {flag = 4;push("/");(yyval)="/";}
    break;

  case 37:
/* Line 1792 of yacc.c  */
#line 186 "proj1.y"
    { 
    							strcpy(try1[x1],label);
    							codegen2();
    							x--;
    							x1++;
    							(yyval) = buildTree("IF",(yyvsp[(2) - (5)]),(yyvsp[(5) - (5)]));
    						}
    break;

  case 38:
/* Line 1792 of yacc.c  */
#line 194 "proj1.y"
    {		strcat(ICG,"goto ");
    							char label_temp [2]= "l";
							sprintf(l__,"%d",l_);
							strcat(label_temp,l__);
							strcat(ICG,label_temp);
							strcpy(try1[x1],label_temp);
							x1++;
    							strcat(ICG,"\n");
    							}
    break;

  case 39:
/* Line 1792 of yacc.c  */
#line 203 "proj1.y"
    { codegen2();x--;l_++;(yyval)=buildTree("SEQ",buildTree("IF",(yyvsp[(2) - (7)]),(yyvsp[(5) - (7)])),(yyvsp[(7) - (7)]));}
    break;

  case 40:
/* Line 1792 of yacc.c  */
#line 205 "proj1.y"
    {codegen3();}
    break;

  case 41:
/* Line 1792 of yacc.c  */
#line 205 "proj1.y"
    { (yyval)=buildTree("ELSE",(yyvsp[(5) - (5)]),NULL);}
    break;

  case 42:
/* Line 1792 of yacc.c  */
#line 207 "proj1.y"
    {
    							strcat(ICG,"goto ");
    							strcat(ICG,try1[--x1]);
    							strcat(ICG,"\n");
    						
    							codegen2();
    							x--;
    							(yyval)=buildTree("while",(yyvsp[(2) - (5)]),(yyvsp[(5) - (5)]));
    						}
    break;

  case 43:
/* Line 1792 of yacc.c  */
#line 217 "proj1.y"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 44:
/* Line 1792 of yacc.c  */
#line 219 "proj1.y"
    {(yyval)=buildTree("or",(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]));}
    break;

  case 46:
/* Line 1792 of yacc.c  */
#line 222 "proj1.y"
    {(yyval)=buildTree("and",(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]));}
    break;

  case 48:
/* Line 1792 of yacc.c  */
#line 225 "proj1.y"
    {(yyval)=buildTree("not",(yyvsp[(2) - (2)]),NULL);}
    break;

  case 50:
/* Line 1792 of yacc.c  */
#line 228 "proj1.y"
    {(yyval)=(yyvsp[(2) - (3)]);}
    break;

  case 51:
/* Line 1792 of yacc.c  */
#line 229 "proj1.y"
    {
							codegen1();
		    					
						}
    break;

  case 53:
/* Line 1792 of yacc.c  */
#line 235 "proj1.y"
    {	
    						
						strcpy(label,"l");
						sprintf(l__,"%d",l_);
						strcat(label,l__);
						strcat(ICG,label);
						strcat(ICG," : ");
						strcpy(try1[x1],label);		//current label pushed onto stack try1 
						l_++;
						x1++;

						codegen(aeval);
						(yyval)=buildTree((yyvsp[(2) - (3)]),(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]));
	    				}
    break;

  case 54:
/* Line 1792 of yacc.c  */
#line 250 "proj1.y"
    {push((yyvsp[(1) - (1)]));(yyval) = buildTree((yyvsp[(1) - (1)]),NULL,NULL);}
    break;

  case 55:
/* Line 1792 of yacc.c  */
#line 251 "proj1.y"
    {push((yyvsp[(1) - (1)]));(yyval) = buildTree((yyvsp[(1) - (1)]),NULL,NULL);}
    break;

  case 56:
/* Line 1792 of yacc.c  */
#line 252 "proj1.y"
    {push((yyvsp[(1) - (1)]));(yyval) = buildTree((yyvsp[(1) - (1)]),NULL,NULL);}
    break;

  case 57:
/* Line 1792 of yacc.c  */
#line 254 "proj1.y"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 60:
/* Line 1792 of yacc.c  */
#line 258 "proj1.y"
    {(yyval)="<";push("<");}
    break;

  case 61:
/* Line 1792 of yacc.c  */
#line 259 "proj1.y"
    {(yyval)="<=";push("<=");}
    break;

  case 62:
/* Line 1792 of yacc.c  */
#line 260 "proj1.y"
    {(yyval)=">";push(">");}
    break;

  case 63:
/* Line 1792 of yacc.c  */
#line 261 "proj1.y"
    {(yyval)=">=";push(">=");}
    break;

  case 64:
/* Line 1792 of yacc.c  */
#line 262 "proj1.y"
    {(yyval)="==";push("==");}
    break;

  case 65:
/* Line 1792 of yacc.c  */
#line 263 "proj1.y"
    {(yyval)="!=";push("!=");}
    break;

  case 71:
/* Line 1792 of yacc.c  */
#line 275 "proj1.y"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;


/* Line 1792 of yacc.c  */
#line 1982 "proj1.tab.c"
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
#line 296 "proj1.y"


int yyerror(){
	printf("\n------------------SYNTAX ERROR : at line number %d -------------------------\n",yylineno-1);
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
        printf("\n------------------SYMBOL TABLE before Optimisations----------------\n");
        printf("-------------------------------------------------------------------\n");
        printf("LABEL\tTYPE\t\tVALUE\tSCOPE\tLINENO\n");
        for(i=0;i<size;i++)
        {
                printf("%s\t%s\t%d\t%s\t%d\n",p->label,p->type,p->value,p->scope,p->lineno);
                p=p->next;
        }
}
struct symbtab* search(char lab[])
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


node* buildTree(char *op,node *left,node *right)
{
	node *new = (node*)malloc(sizeof(node));
	char *newstr = (char *)malloc(strlen(op)+1);
	strcpy(newstr,op);
	new->left=left;
	new->right=right;
	new->name=newstr;
	return new;
}
 
void printTree(node *tree)
{
	if(tree->left!=NULL || tree->right!=NULL)
	{	printf("(");}
	printf(" %s ",tree->name);
	if(tree->left!=NULL)
		printTree(tree->left);
	if(tree->right!=NULL)
		printTree(tree->right);
	if(tree->left!=NULL || tree->right!=NULL)
	{	printf(")");}
	
	
}

void push(char *argu)
{
 //strcpy(st[++top],argu);
 strcpy(st[++top],argu);
 //printf("%s-----qwertyuio---%d\n",st[top],top);
 }
void codegen(int val)
 {

 strcpy(temp,"t");
 sprintf(i__,"%d",i_);
 strcat(temp,i__);
 strcat(ICG,temp);
 strcat(ICG,"=");
 strcat(ICG,st[top-2]);
  strcat(ICG,st[top-1]);
  strcat(ICG,st[top]);
  strcat(ICG,"\n");
  insert(temp,"identifier",val,"-",yylineno-1);
  top-=2;
 strcpy(st[top],temp);
 i_++;
 }


void codegen_assign()
 {
 temp2 = search(st[top-1]);
 int val;
 if(temp2!=NULL)
 {
 	val=temp2->value;
 	if(g==1)
 		insert(st[top],"identifier",val,"local",yylineno-1);
 	else
 		insert(st[top],"identifier",val,"global",yylineno-1);
 }
 else
 {
 	val = atoi(st[top-1]);
 	if(g==1)
 		insert(st[top],"identifier",val,"local",yylineno-1);
 	else
 		insert(st[top],"identifier",val,"global",yylineno-1);
 }
 strcat(ICG,st[top]);
 strcat(ICG,"=");
 strcat(ICG,st[top-1]);
 strcat(ICG,"\n");
 
 top-=2;
 }

void codegen1(){

strcpy(label,"l");
sprintf(l__,"%d",l_);
strcat(label,l__);
strcat(ICG,"if not ");
strcat(ICG,st[top]);
strcat(ICG," goto ");
strcat(ICG,label);

strcat(ICG,"\n");

strcpy(try[x],label); 	//after finishing the cs go to label from try stack
l_++;
x++;

}

void codegen2()
{
strcat(ICG,try[--x]);
strcat(ICG," : ");

}

void codegen3()
{
strcat(ICG,label);
strcat(ICG," : ");
strcpy(label,"l");
sprintf(l__,"%d",l_);
strcat(label,l__);
strcpy(try[x],label);		
x++;
}

 
int main(){
	 extern FILE* yyin,*yyout;
	 yyin = fopen("inp.py","r");
	 yyparse();
	 
	 if(!error)
	 {
	 	//display();	//symbol table display
	 	printf("\n------------Abstract Syntax Tree--------------\n");
    		printTree(dollardollar);
    		printf("\n");
	 	
	}
	else
	{	
		printf("\nERROR\n");
	}
	 return 1;
	
}
