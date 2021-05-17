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
#line 1 "proj1.y" /* yacc.c:339  */

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


#line 152 "y.tab.c" /* yacc.c:339  */

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
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
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
/* Tokens.  */
#define DIGITS 258
#define ID 259
#define PLUS 260
#define MINUS 261
#define MUL 262
#define DIVIDE 263
#define NUM 264
#define STRING 265
#define INTEGER 266
#define SPECIAL 267
#define NL 268
#define SPACE 269
#define KEYWORD 270
#define SPECIAL_START 271
#define SPECIAL_END 272
#define IF 273
#define ELSE 274
#define WHILE 275
#define SEP 276
#define END 277
#define OR 278
#define AND 279
#define NOT 280
#define IN 281
#define NOTIN 282
#define T 283
#define F 284
#define COLON 285
#define SQUAREBRACKET_START 286
#define SQUAREBRACKET_END 287
#define MOD 288
#define EQUAL 289
#define PLUSEQUAL 290
#define PRINT 291
#define RANGE 292
#define SINGLEQUOTE 293
#define DOUBLEQUOTE 294
#define EXPONENTIAL 295
#define COMMA 296
#define INDENT 297
#define LIST 298
#define DIVIDEEQUAL 299
#define MINUSEQUAL 300
#define MULEQUAL 301
#define LESSTHAN 302
#define LESSTHANEQUAL 303
#define GREATERTHAN 304
#define GREATERTHANEQUAL 305
#define DOUBLEEQUAL 306
#define NOTEQUAL 307

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 307 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  37
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   110

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  53
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  37
/* YYNRULES -- Number of rules.  */
#define YYNRULES  79
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  125

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   307

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
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    90,    90,    92,    93,    94,    96,    97,    98,   100,
     101,   103,   104,   106,   115,   116,   117,   118,   119,   122,
     128,   130,   136,   138,   153,   168,   196,   199,   200,   202,
     203,   206,   207,   208,   210,   218,   218,   240,   240,   242,
     262,   264,   265,   267,   268,   270,   271,   273,   274,   278,
     280,   305,   306,   307,   309,   310,   311,   313,   314,   315,
     316,   317,   318,   320,   321,   323,   325,   327,   330,   333,
     334,   335,   336,   339,   340,   342,   343,   344,   345,   347
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
  "opor", "opand", "opnot", "IND", "Print", "toprint", "X", "LB", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
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

#define YYPACT_NINF -85

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-85)))

#define YYTABLE_NINF -36

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
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

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
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

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -85,   -85,    47,   -31,   -85,   -12,   -85,   -85,   -43,     8,
       6,   -85,   -85,    -9,   -85,   -85,   -85,   -85,   -85,   -85,
      88,    71,    39,   -23,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,   -84,   -85,    -1,   -85,   -10
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     5,     6,    98,    99,     7,     8,    19,    50,    51,
      52,    80,    83,     9,    10,    11,   108,   114,   118,    12,
      27,    28,    29,    30,    31,    32,    67,    68,    33,    56,
      58,    34,   100,    13,    75,    76,    40
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
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

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
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

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
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
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
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


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 90 "proj1.y" /* yacc.c:1646  */
    {dollardollar = (yyval);}
#line 1478 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 92 "proj1.y" /* yacc.c:1646  */
    {(yyval)=buildTree("SEQ",(yyvsp[-1]),(yyvsp[0]));}
#line 1484 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 93 "proj1.y" /* yacc.c:1646  */
    {(yyval)=buildTree("SEQ",(yyvsp[-1]),(yyvsp[0]));}
#line 1490 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 94 "proj1.y" /* yacc.c:1646  */
    {(yyval)=buildTree("NULL",NULL,NULL);}
#line 1496 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 96 "proj1.y" /* yacc.c:1646  */
    {(yyval)=buildTree("SEQ",(yyvsp[-1]),(yyvsp[0]));}
#line 1502 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 97 "proj1.y" /* yacc.c:1646  */
    {(yyval)=buildTree("SEQ",(yyvsp[-1]),(yyvsp[0]));}
#line 1508 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 98 "proj1.y" /* yacc.c:1646  */
    {(yyval)=buildTree("NULL",NULL,NULL);}
#line 1514 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 100 "proj1.y" /* yacc.c:1646  */
    {g=1;}
#line 1520 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 101 "proj1.y" /* yacc.c:1646  */
    {g=1;}
#line 1526 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 103 "proj1.y" /* yacc.c:1646  */
    {aeval = 0;(yyval)=(yyvsp[-1]);}
#line 1532 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 106 "proj1.y" /* yacc.c:1646  */
    {
		                                push((yyvsp[-2]));
		                                codegen_assign();
		                                
		                                (yyvsp[-2]) = buildTree((yyvsp[-2]),NULL,NULL);
		                                (yyval) = buildTree((yyvsp[-1]),(yyvsp[-2]),(yyvsp[0]));
		                                //addquad($2,$3,'_',$1);
    					}
#line 1545 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 115 "proj1.y" /* yacc.c:1646  */
    {(yyval)="/=";}
#line 1551 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 116 "proj1.y" /* yacc.c:1646  */
    {(yyval)="*=";}
#line 1557 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 117 "proj1.y" /* yacc.c:1646  */
    {(yyval)="-=";}
#line 1563 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 118 "proj1.y" /* yacc.c:1646  */
    {(yyval)="=";}
#line 1569 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 119 "proj1.y" /* yacc.c:1646  */
    {(yyval)="+=";}
#line 1575 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 122 "proj1.y" /* yacc.c:1646  */
    { 

    						sprintf(aeval_,"%d",aeval);
    						codegen(aeval,aeval_);
    						//$$=addquad($2,$1,$3,aeval_);
    					}
#line 1586 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 130 "proj1.y" /* yacc.c:1646  */
    {

    						sprintf(aeval_,"%d",aeval);
    						codegen(aeval,aeval_);
    						//$$=addquad($2,$1,$3,aeval_);
    					}
#line 1597 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 138 "proj1.y" /* yacc.c:1646  */
    {
    							abc=atoi((yyvsp[0]));
    							if(flag==1)
    								{aeval+=abc;}
    							else if(flag==2)
    								{aeval-=abc;}
    							else if(flag==3)
    								{aeval*=abc;}
    							else if(flag==4)
    								{aeval/=abc;}
    							else aeval=abc;
    							push((yyvsp[0]));
	          					(yyval)=(yyvsp[0]);
	          					//$$ = buildTree($1,NULL,NULL);
	          				}
#line 1617 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 153 "proj1.y" /* yacc.c:1646  */
    {
    							abc=atoi((yyvsp[0]));
    							if(flag==1)
    								{aeval+=abc;}
    							else if(flag==2)
    								{aeval-=abc;}
    							else if(flag==3)
    								{aeval*=abc;}
    							else if(flag==4)
    								{aeval/=abc;}
    							else aeval=abc;
    							push((yyvsp[0]));
	          					(yyval)=(yyvsp[0]);
	          					//$$ = buildTree($1,NULL,NULL);
	          				}
#line 1637 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 168 "proj1.y" /* yacc.c:1646  */
    {
                					t_ptr=search((yyvsp[0]));
                					
                					if(t_ptr==NULL)
                					{
                						printf("\n----------------------ERROR : variable %s undeclared-------------------\n",(yyvsp[0]));
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
                					push((yyvsp[0]));
	      						(yyval)=(yyvsp[0]);
	      						//$$ = buildTree($1,NULL,NULL);}
	      						}
	      					}
#line 1670 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 196 "proj1.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[-1]);}
#line 1676 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 199 "proj1.y" /* yacc.c:1646  */
    {flag = 1;push("+");(yyval)="+";}
#line 1682 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 200 "proj1.y" /* yacc.c:1646  */
    {flag = 2;push("-");(yyval)="-";}
#line 1688 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 202 "proj1.y" /* yacc.c:1646  */
    {flag = 3;push("*");(yyval)="*";}
#line 1694 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 203 "proj1.y" /* yacc.c:1646  */
    {flag = 4;push("/");(yyval)="/";}
#line 1700 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 210 "proj1.y" /* yacc.c:1646  */
    { 
    							strcpy(try1[x1],label);
    							codegen2();
    							x--;
    							x1++;
    							(yyval) = buildTree("IF",(yyvsp[-3]),(yyvsp[0]));
    						}
#line 1712 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 218 "proj1.y" /* yacc.c:1646  */
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
#line 1737 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 238 "proj1.y" /* yacc.c:1646  */
    { codegen2();x--;l_++;(yyval)=buildTree("SEQ",buildTree("IF",(yyvsp[-5]),(yyvsp[-2])),(yyvsp[0]));}
#line 1743 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 240 "proj1.y" /* yacc.c:1646  */
    {codegen3();}
#line 1749 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 240 "proj1.y" /* yacc.c:1646  */
    { (yyval)=buildTree("ELSE",(yyvsp[0]),NULL);}
#line 1755 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 242 "proj1.y" /* yacc.c:1646  */
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
    							(yyval)=buildTree("while",(yyvsp[-3]),(yyvsp[0]));
    						}
#line 1779 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 262 "proj1.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1785 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 264 "proj1.y" /* yacc.c:1646  */
    {(yyval)=buildTree("or",(yyvsp[-2]),(yyvsp[0]));}
#line 1791 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 267 "proj1.y" /* yacc.c:1646  */
    {(yyval)=buildTree("and",(yyvsp[-2]),(yyvsp[0]));}
#line 1797 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 270 "proj1.y" /* yacc.c:1646  */
    {(yyval)=buildTree("not",(yyvsp[0]),NULL);}
#line 1803 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 273 "proj1.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[-1]);}
#line 1809 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 274 "proj1.y" /* yacc.c:1646  */
    {
							codegen1();
		    					
						}
#line 1818 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 280 "proj1.y" /* yacc.c:1646  */
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
						(yyval)=buildTree((yyvsp[-1]),(yyvsp[-2]),(yyvsp[0]));
	    				}
#line 1847 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 305 "proj1.y" /* yacc.c:1646  */
    {push((yyvsp[0]));(yyval) = (yyvsp[0]);}
#line 1853 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 306 "proj1.y" /* yacc.c:1646  */
    {push((yyvsp[0]));(yyval) = (yyvsp[0]);}
#line 1859 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 307 "proj1.y" /* yacc.c:1646  */
    {push((yyvsp[0]));(yyval) = (yyvsp[0]);}
#line 1865 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 309 "proj1.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1871 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 313 "proj1.y" /* yacc.c:1646  */
    {(yyval)="<";push("<");}
#line 1877 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 314 "proj1.y" /* yacc.c:1646  */
    {(yyval)="<=";push("<=");}
#line 1883 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 315 "proj1.y" /* yacc.c:1646  */
    {(yyval)=">";push(">");}
#line 1889 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 316 "proj1.y" /* yacc.c:1646  */
    {(yyval)=">=";push(">=");}
#line 1895 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 317 "proj1.y" /* yacc.c:1646  */
    {(yyval)="==";push("==");}
#line 1901 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 318 "proj1.y" /* yacc.c:1646  */
    {(yyval)="!=";push("!=");}
#line 1907 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 330 "proj1.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1913 "y.tab.c" /* yacc.c:1646  */
    break;


#line 1917 "y.tab.c" /* yacc.c:1646  */
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
  /* Do not reclaim the symbols of the rule whose action triggered
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
  return yyresult;
}
#line 351 "proj1.y" /* yacc.c:1906  */


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
		
		strcat(ICG,result_rel_str);
		strcat(ICG," ");
		strcat(ICG,"\n");
		insert(temp,"identifier",result_rel,"-",yylineno-1);
	}
	
	else
	{
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
		insert(temp,"identifier",val,"-",yylineno-1);
	}
	
	
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

void codegen1(){



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
sprintf(res_str,"%d",res);
strcat(ICG,res_str);
strcat(ICG,"\n");

insert(temp,"identifier",res,"-",yylineno-1);

strcpy(label,"l");
sprintf(l__,"%d",l_);
strcat(label,l__);
strcat(ICG,"if ");
strcat(ICG,st[top]);
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
		f = fopen ("/home/tanvi/Desktop/CD/Target_Code/IntermediateCode.txt", "w");  
		fprintf (f, "%s", ICG);  
		fclose (f);
		
		
	}
	else
	{	
		printf("\nERROR\n");
	}
	 return 1;
	
}
