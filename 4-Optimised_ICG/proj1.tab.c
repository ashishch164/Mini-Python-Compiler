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
	#define YYSTYPE char*
	#include <stdlib.h>

   	int system(const char *command);
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
  	char val_str[100] = {'\0'};
  	char result_rel_str[100] = {'\0'};
  	char res_str[100] = {'\0'};
  	char res_str1[100] = {'\0'};
  	char res_str2[100] = {'\0'};
	char temp[2]="t";
	char ICG[10000]=""; //icg
	char try1[5][10];
	char try[5][10];
	int relexp = 0;
	int x=0;
	int x1=0;
	char aeval_[100] = {'\0'};
	char temp_quad = 'A';
	int i=0; //for quadruples
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
  	void displayquad();
	char addquad(char*,char*,char*,char*);
	typedef struct quadruples
  	{
	    char *op;
	    char *arg1;
	    char *arg2;
	    char *res;
  	}quad;
  	int quadlen = 0;
  	quad q[100];

        extern FILE *yyin;
        node* buildTree(char *,node *,node *);
        void printTree(node *);
        void push(char*);
	void codegen(int val,char* aeval_);
	void codegen_assign();
	void codegen2();
	void codegen3();
	void insert(char* l,char* t,int v,char* s,int ln);
	struct symbtab* search(char lab[]);
	void display();
	int yyerror();
	node *dollardollar;


/* Line 371 of yacc.c  */
#line 156 "proj1.tab.c"

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
#line 274 "proj1.tab.c"

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
#define YYLAST   110

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  53
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  37
/* YYNRULES -- Number of rules.  */
#define YYNRULES  79
/* YYNRULES -- Number of states.  */
#define YYNSTATES  125

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
      50,    52,    56,    58,    60,    62,    64,    68,    70,    72,
      74,    76,    79,    82,    85,    91,    92,   100,   101,   107,
     113,   115,   119,   121,   125,   127,   130,   132,   136,   138,
     140,   144,   146,   148,   150,   152,   154,   156,   158,   160,
     162,   164,   166,   168,   170,   172,   174,   176,   178,   180,
     185,   196,   204,   212,   214,   218,   220,   222,   224,   226
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      54,     0,    -1,    55,    -1,    58,    55,    -1,    66,    55,
      -1,    -1,    57,    58,    56,    -1,    57,    66,    56,    -1,
      -1,    42,    -1,    57,    42,    -1,    59,    89,    -1,    86,
      89,    -1,     4,    60,    61,    -1,    44,    -1,    46,    -1,
      45,    -1,    34,    -1,    35,    -1,    61,    64,    62,    -1,
      62,    -1,    62,    65,    63,    -1,    63,    -1,    11,    -1,
       9,    -1,     4,    -1,    16,    61,    17,    -1,     5,    -1,
       6,    -1,     7,    -1,     8,    -1,    68,    89,    -1,    67,
      89,    -1,    72,    89,    -1,    18,    73,    30,    89,    85,
      -1,    -1,    18,    73,    30,    89,    85,    69,    70,    -1,
      -1,    19,    71,    30,    89,    85,    -1,    20,    73,    30,
      89,    85,    -1,    74,    -1,    74,    82,    75,    -1,    75,
      -1,    75,    83,    76,    -1,    76,    -1,    84,    76,    -1,
      77,    -1,    16,    74,    17,    -1,    78,    -1,    81,    -1,
      78,    79,    61,    -1,     4,    -1,     9,    -1,    11,    -1,
      80,    -1,    26,    -1,    27,    -1,    47,    -1,    48,    -1,
      49,    -1,    50,    -1,    51,    -1,    52,    -1,    28,    -1,
      29,    -1,    23,    -1,    24,    -1,    25,    -1,    56,    -1,
      36,    16,    87,    17,    -1,    36,    16,    87,    21,    34,
      10,    22,    34,    10,    17,    -1,    36,    16,    87,    21,
      34,    10,    17,    -1,    36,    16,    87,    22,    34,    10,
      17,    -1,    88,    -1,    88,    41,    87,    -1,    10,    -1,
       4,    -1,     9,    -1,    11,    -1,    13,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    92,    92,    94,    95,    96,    98,    99,   100,   102,
     103,   105,   106,   108,   117,   118,   119,   120,   121,   124,
     130,   132,   138,   140,   155,   170,   198,   201,   202,   204,
     205,   208,   209,   210,   212,   220,   220,   242,   242,   244,
     264,   266,   267,   269,   270,   272,   273,   275,   276,   280,
     282,   307,   308,   309,   311,   312,   313,   315,   316,   317,
     318,   319,   320,   322,   323,   325,   327,   329,   332,   335,
     336,   337,   338,   341,   342,   344,   345,   346,   347,   349
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
  "opassgn", "E1", "E2", "E4", "OP1", "OP2", "Compound", "only_if",
  "if_else", "$@1", "else_1", "$@2", "while_loop", "condition", "cond",
  "cond1", "cond2", "cond3", "relexp", "relop", "comparison", "bool",
  "opor", "opand", "opnot", "IND", "Print", "toprint", "X", "LB", YY_NULL
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
      61,    62,    62,    63,    63,    63,    63,    64,    64,    65,
      65,    66,    66,    66,    67,    69,    68,    71,    70,    72,
      73,    74,    74,    75,    75,    76,    76,    77,    77,    77,
      78,    78,    78,    78,    79,    79,    79,    80,    80,    80,
      80,    80,    80,    81,    81,    82,    83,    84,    85,    86,
      86,    86,    86,    87,    87,    88,    88,    88,    88,    89
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     2,     0,     3,     3,     0,     1,
       2,     2,     2,     3,     1,     1,     1,     1,     1,     3,
       1,     3,     1,     1,     1,     1,     3,     1,     1,     1,
       1,     2,     2,     2,     5,     0,     7,     0,     5,     5,
       1,     3,     1,     3,     1,     2,     1,     3,     1,     1,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     4,
      10,     7,     7,     1,     3,     1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       5,     0,     0,     0,     0,     0,     2,     5,     0,     5,
       0,     0,     0,     0,    17,    18,    14,    16,    15,     0,
      51,    52,    53,     0,    67,    63,    64,     0,    40,    42,
      44,    46,    48,    49,     0,     0,     0,     1,     3,    79,
      11,     4,    32,    31,    33,    12,    25,    24,    23,     0,
      13,    20,    22,     0,     0,    65,     0,    66,     0,    55,
      56,    57,    58,    59,    60,    61,    62,     0,    54,    45,
       0,    76,    77,    75,    78,     0,    73,     0,    27,    28,
       0,    29,    30,     0,    47,     8,    41,    43,    50,     8,
      69,     0,     0,     0,    26,    19,    21,     9,    68,     0,
      34,    39,     0,     0,    74,    10,     8,     8,     0,     0,
       0,     6,     7,    37,    36,    71,     0,    72,     0,     0,
       0,     0,     8,    70,    38
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     5,     6,    98,    99,     7,     8,    19,    50,    51,
      52,    80,    83,     9,    10,    11,   108,   114,   118,    12,
      27,    28,    29,    30,    31,    32,    67,    68,    33,    56,
      58,    34,   100,    13,    75,    76,    40
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -85
static const yytype_int8 yypact[] =
{
       3,   -19,    36,    36,    -6,    14,   -85,     3,     9,     3,
       9,     9,     9,     9,   -85,   -85,   -85,   -85,   -85,    37,
     -85,   -85,   -85,    36,   -85,   -85,   -85,    -2,    20,    13,
     -85,   -85,   -18,   -85,    36,    19,    59,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,    37,
      52,    66,   -85,    -4,     9,   -85,    36,   -85,    36,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,    37,   -85,   -85,
       9,   -85,   -85,   -85,   -85,    50,    18,    45,   -85,   -85,
      37,   -85,   -85,    37,   -85,    24,    13,   -85,    52,    24,
     -85,    21,    43,    59,   -85,    66,   -85,   -85,   -85,     0,
      60,   -85,    68,    70,   -85,   -85,    24,    24,    62,    -5,
      65,   -85,   -85,   -85,   -85,   -85,    49,   -85,    54,    75,
       9,    69,    24,   -85,   -85
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -85,   -85,    47,   -31,   -85,   -12,   -85,   -85,   -43,     8,
       6,   -85,   -85,    -9,   -85,   -85,   -85,   -85,   -85,   -85,
      88,    71,    39,   -23,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,   -84,   -85,    -1,   -85,   -10
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -36
static const yytype_int8 yytable[] =
{
      42,    43,    44,    45,     1,   101,    77,     1,    59,    60,
      36,    69,   115,    84,    37,    14,    15,   116,     2,    55,
       3,     2,    39,     3,    88,    16,    17,    18,    54,    61,
      62,    63,    64,    65,    66,    87,     4,    57,   124,     4,
      20,    46,   105,    55,    85,    21,    47,    22,    48,    70,
      78,    79,    23,    49,    38,   102,    41,    78,    79,    93,
      89,    24,    94,    71,    25,    26,    97,    90,    72,    73,
      74,    91,    92,    81,    82,   111,   112,   103,   109,   -35,
     110,   113,   117,   119,   120,   121,   123,   106,    95,    96,
     107,    35,   104,     0,    53,    86,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     122
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-85)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int8 yycheck[] =
{
      10,    11,    12,    13,     4,    89,    49,     4,    26,    27,
      16,    34,    17,    17,     0,    34,    35,    22,    18,    23,
      20,    18,    13,    20,    67,    44,    45,    46,    30,    47,
      48,    49,    50,    51,    52,    58,    36,    24,   122,    36,
       4,     4,    42,    23,    54,     9,     9,    11,    11,    30,
       5,     6,    16,    16,     7,    34,     9,     5,     6,    41,
      70,    25,    17,     4,    28,    29,    42,    17,     9,    10,
      11,    21,    22,     7,     8,   106,   107,    34,    10,    19,
      10,    19,    17,    34,    30,    10,    17,    99,    80,    83,
      99,     3,    93,    -1,    23,    56,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     120
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     4,    18,    20,    36,    54,    55,    58,    59,    66,
      67,    68,    72,    86,    34,    35,    44,    45,    46,    60,
       4,     9,    11,    16,    25,    28,    29,    73,    74,    75,
      76,    77,    78,    81,    84,    73,    16,     0,    55,    13,
      89,    55,    89,    89,    89,    89,     4,     9,    11,    16,
      61,    62,    63,    74,    30,    23,    82,    24,    83,    26,
      27,    47,    48,    49,    50,    51,    52,    79,    80,    76,
      30,     4,     9,    10,    11,    87,    88,    61,     5,     6,
      64,     7,     8,    65,    17,    89,    75,    76,    61,    89,
      17,    21,    22,    41,    17,    62,    63,    42,    56,    57,
      85,    85,    34,    34,    87,    42,    58,    66,    69,    10,
      10,    56,    56,    19,    70,    17,    22,    17,    71,    34,
      30,    10,    89,    17,    85
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
#line 92 "proj1.y"
    {dollardollar = (yyval);}
    break;

  case 3:
/* Line 1792 of yacc.c  */
#line 94 "proj1.y"
    {(yyval)=buildTree("SEQ",(yyvsp[(1) - (2)]),(yyvsp[(2) - (2)]));}
    break;

  case 4:
/* Line 1792 of yacc.c  */
#line 95 "proj1.y"
    {(yyval)=buildTree("SEQ",(yyvsp[(1) - (2)]),(yyvsp[(2) - (2)]));}
    break;

  case 5:
/* Line 1792 of yacc.c  */
#line 96 "proj1.y"
    {(yyval)=buildTree("NULL",NULL,NULL);}
    break;

  case 6:
/* Line 1792 of yacc.c  */
#line 98 "proj1.y"
    {(yyval)=buildTree("SEQ",(yyvsp[(2) - (3)]),(yyvsp[(3) - (3)]));}
    break;

  case 7:
/* Line 1792 of yacc.c  */
#line 99 "proj1.y"
    {(yyval)=buildTree("SEQ",(yyvsp[(2) - (3)]),(yyvsp[(3) - (3)]));}
    break;

  case 8:
/* Line 1792 of yacc.c  */
#line 100 "proj1.y"
    {(yyval)=buildTree("NULL",NULL,NULL);}
    break;

  case 9:
/* Line 1792 of yacc.c  */
#line 102 "proj1.y"
    {g=1;}
    break;

  case 10:
/* Line 1792 of yacc.c  */
#line 103 "proj1.y"
    {g=1;}
    break;

  case 11:
/* Line 1792 of yacc.c  */
#line 105 "proj1.y"
    {aeval = 0;(yyval)=(yyvsp[(1) - (2)]);}
    break;

  case 13:
/* Line 1792 of yacc.c  */
#line 108 "proj1.y"
    {
		                                push((yyvsp[(1) - (3)]));
		                                codegen_assign();
		                                
		                                (yyvsp[(1) - (3)]) = buildTree((yyvsp[(1) - (3)]),NULL,NULL);
		                                (yyval) = buildTree((yyvsp[(2) - (3)]),(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]));
		                                //addquad($2,$3,'_',$1);
    					}
    break;

  case 14:
/* Line 1792 of yacc.c  */
#line 117 "proj1.y"
    {(yyval)="/=";}
    break;

  case 15:
/* Line 1792 of yacc.c  */
#line 118 "proj1.y"
    {(yyval)="*=";}
    break;

  case 16:
/* Line 1792 of yacc.c  */
#line 119 "proj1.y"
    {(yyval)="-=";}
    break;

  case 17:
/* Line 1792 of yacc.c  */
#line 120 "proj1.y"
    {(yyval)="=";}
    break;

  case 18:
/* Line 1792 of yacc.c  */
#line 121 "proj1.y"
    {(yyval)="+=";}
    break;

  case 19:
/* Line 1792 of yacc.c  */
#line 124 "proj1.y"
    { 

    						sprintf(aeval_,"%d",aeval);
    						codegen(aeval,aeval_);
    						//$$=addquad($2,$1,$3,aeval_);
    					}
    break;

  case 21:
/* Line 1792 of yacc.c  */
#line 132 "proj1.y"
    {

    						sprintf(aeval_,"%d",aeval);
    						codegen(aeval,aeval_);
    						//$$=addquad($2,$1,$3,aeval_);
    					}
    break;

  case 23:
/* Line 1792 of yacc.c  */
#line 140 "proj1.y"
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
	          					//$$ = buildTree($1,NULL,NULL);
	          				}
    break;

  case 24:
/* Line 1792 of yacc.c  */
#line 155 "proj1.y"
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
	          					//$$ = buildTree($1,NULL,NULL);
	          				}
    break;

  case 25:
/* Line 1792 of yacc.c  */
#line 170 "proj1.y"
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
	      						//$$ = buildTree($1,NULL,NULL);}
	      						}
	      					}
    break;

  case 26:
/* Line 1792 of yacc.c  */
#line 198 "proj1.y"
    {(yyval)=(yyvsp[(2) - (3)]);}
    break;

  case 27:
/* Line 1792 of yacc.c  */
#line 201 "proj1.y"
    {flag = 1;push("+");(yyval)="+";}
    break;

  case 28:
/* Line 1792 of yacc.c  */
#line 202 "proj1.y"
    {flag = 2;push("-");(yyval)="-";}
    break;

  case 29:
/* Line 1792 of yacc.c  */
#line 204 "proj1.y"
    {flag = 3;push("*");(yyval)="*";}
    break;

  case 30:
/* Line 1792 of yacc.c  */
#line 205 "proj1.y"
    {flag = 4;push("/");(yyval)="/";}
    break;

  case 34:
/* Line 1792 of yacc.c  */
#line 212 "proj1.y"
    { 
    							strcpy(try1[x1],label);
    							codegen2();
    							x--;
    							x1++;
    							(yyval) = buildTree("IF",(yyvsp[(2) - (5)]),(yyvsp[(5) - (5)]));
    						}
    break;

  case 35:
/* Line 1792 of yacc.c  */
#line 220 "proj1.y"
    {		strcat(ICG,"goto ");
    							char label_temp [2]= "l";
							sprintf(l__,"%d",l_);
							strcat(label_temp,l__);
							strcat(ICG,label_temp);
							
							//goto in quad
							q[quadlen].op = (char*)malloc(sizeof(char)*2);
						 	q[quadlen].res = (char*)malloc(sizeof(int)*strlen(label_temp));
						 	q[quadlen].arg1 = (char*)malloc(sizeof(char)*2);
							q[quadlen].arg2 = (char*)malloc(sizeof(char)*2);
							strcpy(q[quadlen].op,"goto");
							strcpy(q[quadlen].arg1,"");
							strcpy(q[quadlen].arg2,"");
						 	strcpy(q[quadlen].res,label_temp);
						 	quadlen++;	
							strcpy(try1[x1],label_temp);
							x1++;
    							strcat(ICG,"\n");
    							}
    break;

  case 36:
/* Line 1792 of yacc.c  */
#line 240 "proj1.y"
    { codegen2();x--;l_++;(yyval)=buildTree("SEQ",buildTree("IF",(yyvsp[(2) - (7)]),(yyvsp[(5) - (7)])),(yyvsp[(7) - (7)]));}
    break;

  case 37:
/* Line 1792 of yacc.c  */
#line 242 "proj1.y"
    {codegen3();}
    break;

  case 38:
/* Line 1792 of yacc.c  */
#line 242 "proj1.y"
    { (yyval)=buildTree("ELSE",(yyvsp[(5) - (5)]),NULL);}
    break;

  case 39:
/* Line 1792 of yacc.c  */
#line 244 "proj1.y"
    {
    							strcat(ICG,"goto ");
    							strcat(ICG,try1[--x1]);
    							strcat(ICG,"\n");
    							//goto in quad
							q[quadlen].op = (char*)malloc(sizeof(char)*2);
						 	q[quadlen].res = (char*)malloc(sizeof(int)*strlen(try1[--x1]));
						 	q[quadlen].arg1 = (char*)malloc(sizeof(char)*2);
							q[quadlen].arg2 = (char*)malloc(sizeof(char)*2);
							strcpy(q[quadlen].op,"goto");
							strcpy(q[quadlen].arg1,"");
							strcpy(q[quadlen].arg2,"");
						 	strcpy(q[quadlen].res,try1[--x1]);
						 	quadlen++;	
						 	
    							codegen2();
    							x--;
    							(yyval)=buildTree("while",(yyvsp[(2) - (5)]),(yyvsp[(5) - (5)]));
    						}
    break;

  case 40:
/* Line 1792 of yacc.c  */
#line 264 "proj1.y"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 41:
/* Line 1792 of yacc.c  */
#line 266 "proj1.y"
    {(yyval)=buildTree("or",(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]));}
    break;

  case 43:
/* Line 1792 of yacc.c  */
#line 269 "proj1.y"
    {(yyval)=buildTree("and",(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]));}
    break;

  case 45:
/* Line 1792 of yacc.c  */
#line 272 "proj1.y"
    {(yyval)=buildTree("not",(yyvsp[(2) - (2)]),NULL);}
    break;

  case 47:
/* Line 1792 of yacc.c  */
#line 275 "proj1.y"
    {(yyval)=(yyvsp[(2) - (3)]);}
    break;

  case 48:
/* Line 1792 of yacc.c  */
#line 276 "proj1.y"
    {
							codegen1();
		    					
						}
    break;

  case 50:
/* Line 1792 of yacc.c  */
#line 282 "proj1.y"
    {	
    						
						strcpy(label,"l");
						sprintf(l__,"%d",l_);
						strcat(label,l__);
						strcat(ICG,label);
						strcat(ICG,":\n");
						//label in quad
						q[quadlen].op = (char*)malloc(sizeof(char)*2);
					 	q[quadlen].res = (char*)malloc(sizeof(int)*strlen(label));
					 	q[quadlen].arg1 = (char*)malloc(sizeof(char)*2);
						q[quadlen].arg2 = (char*)malloc(sizeof(char)*2);
						strcpy(q[quadlen].op,"Label");
						strcpy(q[quadlen].arg1,"");
						strcpy(q[quadlen].arg2,"");
					 	strcpy(q[quadlen].res,label);
					 	quadlen++;
						strcpy(try1[x1],label);		//current label pushed onto stack try1 
						l_++;
						x1++;
						sprintf(aeval_,"%d",aeval);
						codegen(aeval,aeval_);
						(yyval)=buildTree((yyvsp[(2) - (3)]),(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]));
	    				}
    break;

  case 51:
/* Line 1792 of yacc.c  */
#line 307 "proj1.y"
    {push((yyvsp[(1) - (1)]));(yyval) = (yyvsp[(1) - (1)]);}
    break;

  case 52:
/* Line 1792 of yacc.c  */
#line 308 "proj1.y"
    {push((yyvsp[(1) - (1)]));(yyval) = (yyvsp[(1) - (1)]);}
    break;

  case 53:
/* Line 1792 of yacc.c  */
#line 309 "proj1.y"
    {push((yyvsp[(1) - (1)]));(yyval) = (yyvsp[(1) - (1)]);}
    break;

  case 54:
/* Line 1792 of yacc.c  */
#line 311 "proj1.y"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 57:
/* Line 1792 of yacc.c  */
#line 315 "proj1.y"
    {(yyval)="<";push("<");}
    break;

  case 58:
/* Line 1792 of yacc.c  */
#line 316 "proj1.y"
    {(yyval)="<=";push("<=");}
    break;

  case 59:
/* Line 1792 of yacc.c  */
#line 317 "proj1.y"
    {(yyval)=">";push(">");}
    break;

  case 60:
/* Line 1792 of yacc.c  */
#line 318 "proj1.y"
    {(yyval)=">=";push(">=");}
    break;

  case 61:
/* Line 1792 of yacc.c  */
#line 319 "proj1.y"
    {(yyval)="==";push("==");}
    break;

  case 62:
/* Line 1792 of yacc.c  */
#line 320 "proj1.y"
    {(yyval)="!=";push("!=");}
    break;

  case 68:
/* Line 1792 of yacc.c  */
#line 332 "proj1.y"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;


/* Line 1792 of yacc.c  */
#line 2025 "proj1.tab.c"
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
#line 353 "proj1.y"


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
        printf("\n------------------SYMBOL TABLE after Optimisations----------------\n");
        printf("------------------------------------------------------------------\n");
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
		printf("(");
	printf(" %s ",tree->name);
	if(tree->left!=NULL)
		printTree(tree->left);
	if(tree->right!=NULL)
		printTree(tree->right);
	if(tree->left!=NULL || tree->right!=NULL)
		printf(")");
	
}

void push(char *argu)
{
 //strcpy(st[++top],argu);
 strcpy(st[++top],argu);
 //printf("%s-----qwertyuio---%d\n",st[top],top);
 }
 
  
char* search_quad(char* op,char* arg1,char* arg2)
{
	int k = 0;
	while(k<quadlen)
	{
		if(!strcmp(q[k].op,op) && !strcmp(q[k].arg1,arg1) && !strcmp(q[k].arg2,arg2))
		{
			return (q[k].res);
		}
		k++;
	}
	return '\0';
		
	
}


void codegen(int val,char* aeval_)
{

	struct symbtab *v1,*v2;
	v1 = search(st[top-2]);
	v2 = search(st[top]);
	char t1_v[50] = {'\0'};
	char t2_v[50] = {'\0'};
	char* temp_search = search_quad(st[top-1],st[top-2],st[top]);
	if(temp_search != NULL)
	{
		strcpy(st[top],temp_search);
	}
	else
	{
		strcpy(temp,"t");
		sprintf(i__,"%d",i_);
		strcat(temp,i__);
		strcat(ICG,temp);
		strcat(ICG," ");
		strcat(ICG,"=");
		strcat(ICG," ");
		//char op[] = "+";
		//printf("DEBUGGING : %d",strcmp(st[top-1],op));
		int val_rel_operand1,val_rel_operand2,result_rel;
	
	
		//relexp 
		if(strcmp(st[top-1],"+") && strcmp(st[top-1],"-") && strcmp(st[top-1],"*") && strcmp(st[top-1],"/"))
		{
			//printf("INSIDE : %s\n",st[top-1]);
			if(v1!=NULL)
			{
				val_rel_operand1 = v1->value;
			}
			else
			{
				val_rel_operand1 = atoi(st[top-2]);
			}
		
			if(v2!=NULL)
			{
				val_rel_operand2 = v1->value;
			}
			else
			{
				val_rel_operand2 = atoi(st[top]);
			}
			
			if(!strcmp(st[top-1],">="))
				result_rel = val_rel_operand1 >= val_rel_operand2;
			else if(!strcmp(st[top-1],"<="))
				result_rel = val_rel_operand1 <= val_rel_operand2;
			else if(!strcmp(st[top-1],">"))
				result_rel = val_rel_operand1 > val_rel_operand2;
			else if(!strcmp(st[top-1],"<"))
				result_rel = val_rel_operand1 < val_rel_operand2;
			else if(!strcmp(st[top-1],"=="))
				result_rel = val_rel_operand1 == val_rel_operand2;
			else if(!strcmp(st[top-1],"!="))
				result_rel = val_rel_operand1 != val_rel_operand2;
			
			sprintf(result_rel_str,"%d",result_rel);
			
			//strcat(ICG,result_rel_str);
			
			
			//strcat(ICG," ");
			//strcat(ICG,"\n");
			
		}
		
		
		//Constant Propagation
		if(v1!=NULL)
		{
			sprintf(t1_v,"%d",v1->value);
			strcat(ICG,t1_v);
		

		}
		else
		{
			strcat(ICG,st[top-2]);
		}
	
		strcat(ICG," ");	
	
	
		strcat(ICG,st[top-1]);
		strcat(ICG," ");
		if(v2!=NULL)
		{
			sprintf(t2_v,"%d",v2->value);
			strcat(ICG,t2_v);
		}
		else
			strcat(ICG,st[top]);
		strcat(ICG," ");
		strcat(ICG,"\n");
	
		if(strcmp(st[top-1],"+") && strcmp(st[top-1],"-") && strcmp(st[top-1],"*") && strcmp(st[top-1],"/"))
			insert(temp,"identifier",result_rel,"-",yylineno-1);
		else
			insert(temp,"identifier",val,"-",yylineno-1);	
	
		q[quadlen].op = (char*)malloc(sizeof(char)*strlen(st[top-1]));
		q[quadlen].arg1 = (char*)malloc(sizeof(char)*strlen(st[top-2]));
		q[quadlen].arg2 = (char*)malloc(sizeof(char)*strlen(st[top]));
		q[quadlen].res = (char*)malloc(sizeof(int)*10);
		strcpy(q[quadlen].op,st[top-1]);
		strcpy(q[quadlen].arg1,st[top-2]);
		strcpy(q[quadlen].arg2,st[top]);
		
		strcpy(q[quadlen].res,temp);
		quadlen++;

		top-=2;
		strcpy(st[top],temp);
		i_++;
	}
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
	 sprintf(val_str,"%d",val);
	 
	 strcat(ICG,st[top]);
	 strcat(ICG," ");
	 strcat(ICG,"=");
	 strcat(ICG," ");
	 strcat(ICG,val_str);
	 strcat(ICG,"\n");
	 q[quadlen].op = (char*)malloc(sizeof(char)*2);
	 q[quadlen].arg1 = (char*)malloc(sizeof(char)*strlen(st[top-1]));
	 q[quadlen].arg2 = (char*)malloc(sizeof(char)*2);
	 q[quadlen].res = (char*)malloc(sizeof(int)*strlen(st[top]));
	 strcpy(q[quadlen].op,"=");
	 strcpy(q[quadlen].arg1,st[top-1]);
	 strcpy(q[quadlen].res,st[top]);
	 quadlen++;
	 top-=2;
 }

void codegen1()
{
	strcpy(temp,"t");
	sprintf(i__,"%d",i_);
	strcat(temp,i__);
	push(temp);
	//strcpy(st[top],temp);

	strcat(ICG,temp);
	strcat(ICG," ");
	strcat(ICG,"=");
	strcat(ICG," ");
	//strcat(ICG,"not ");

	temp2 = search(st[top-1]);
	int val;
	if(temp2!=NULL)
	{
		val=temp2->value;
	}
	else
	{
		val = atoi(st[top-1]);
	}


	int res = !(val);
	int r1 = val;
	sprintf(res_str,"%d",res);
	sprintf(res_str2,"%d",r1);
	strcat(ICG,"not ");
	strcat(ICG,res_str2);
	strcat(ICG,"\n");
	insert(temp,"identifier",res,"-",yylineno-1);

	strcpy(label,"l");
	sprintf(l__,"%d",l_);
	strcat(label,l__);
	strcat(ICG,"if ");
	temp2 = search(st[top]);
	int val1;
	if(temp2!=NULL)
	{
		val1=temp2->value;
	}
	else
	{
		val1 = atoi(st[top]);
	}

	int res1 = (val1);
	sprintf(res_str1,"%d",res1);
	strcat(ICG,res_str1);
	strcat(ICG," goto ");
	strcat(ICG,label);

	//goto in quadruple
	q[quadlen].op = (char*)malloc(sizeof(char)*2);
	q[quadlen].res = (char*)malloc(sizeof(int)*strlen(label));
	q[quadlen].arg1 = (char*)malloc(sizeof(char)*2);
	q[quadlen].arg2 = (char*)malloc(sizeof(char)*2);
	strcpy(q[quadlen].op,"goto");
	strcpy(q[quadlen].arg1,"");
	strcpy(q[quadlen].arg2,"");
	strcpy(q[quadlen].res,label);
	quadlen++;
	strcat(ICG,"\n");

	strcpy(try[x],label); 	//after finishing the cs go to label from try stack
	l_++;
	x++;
	i_++;
}

void codegen2()
{
	strcat(ICG,try[--x]);
	strcat(ICG,":\n");

	//Label in quadruple
	q[quadlen].op = (char*)malloc(sizeof(char)*2);
	q[quadlen].res = (char*)malloc(sizeof(int)*3);
	q[quadlen].arg1 = (char*)malloc(sizeof(char)*2);
	q[quadlen].arg2 = (char*)malloc(sizeof(char)*2);
	strcpy(q[quadlen].op,"Label");
	strcpy(q[quadlen].arg1,"");
	strcpy(q[quadlen].arg2,"");
	strcpy(q[quadlen].res,try[x]);
	quadlen++;
}

void codegen3()
{
	strcat(ICG,label);
	strcat(ICG,":\n");
	//Label in quadruple
	q[quadlen].op = (char*)malloc(sizeof(char)*2);
	q[quadlen].res = (char*)malloc(sizeof(int)*strlen(label));
	q[quadlen].arg1 = (char*)malloc(sizeof(char)*2);
	q[quadlen].arg2 = (char*)malloc(sizeof(char)*2);
	strcpy(q[quadlen].op,"Label");
	strcpy(q[quadlen].arg1,"");
	strcpy(q[quadlen].arg2,"");
	strcpy(q[quadlen].res,label);
	quadlen++;

	strcpy(label,"l");
	sprintf(l__,"%d",l_);
	strcat(label,l__);
	strcpy(try[x],label);		
	x++;
}


void displayquad()
{
	int j=0;
	printf("\top");
	printf("\targ1");
	printf("\targ2");
	printf("\tresult");
	printf("\n");
	while(j<quadlen)
	{
		printf("\t%s",q[j].op);
		printf("\t%s",q[j].arg1);
		printf("\t%s",q[j].arg2);
		printf("\t%s",q[j].res);
		printf("\n");
		j++;
	}
}
 
int main(){
	 extern FILE* yyin,*yyout;
	 yyin = fopen("inp.py","r");
	 yyparse();

	 if(!error)
	 {
	 	
	
	 	display();	//symbol table display
	 	printf("\n------------QUADRUPLES--------------\n");
	 	displayquad();
    		//printTree(dollardollar);
    		printf("\n");
	 	printf("\n-------------ICG with optimisations(Packing temporaries & Constant Propagation)-------------\n");
		printf("%s\n",ICG);
		FILE *f;  
		char buff[10000];  
		f = fopen ("IntermediateCode.txt", "w");  
		fprintf (f, "%s", ICG);  
		fclose (f);
		
		
	}
	else
	{	
		printf("\nERROR\n");
	}
	 return 1;
	
}
