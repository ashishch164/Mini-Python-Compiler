/* A Bison parser, made by GNU Bison 2.7.  */

/* Bison interface for Yacc-like parsers in C
   
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
