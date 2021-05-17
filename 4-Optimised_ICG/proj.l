digits  [0-9]
num [0-9]+(\.[0-9]+)?([Ee][\+|\-]?[0-9]+)?
integer [0-9]+
string  (\".*\"|\'.*\')
divideequal \/=
mulequal   \*=
minusequal  \-= 
equal  =
plusequal \+=
plus	\+
minus	\-
divide	\/
mul	\*
special_start \(
special_end   \)
alpha [a-zA-Z]
%{
#include<stdio.h>
#include"y.tab.h"
#include<string.h>
extern YYSTYPE yylval;
int t = 1;
int n = 0;
%}
%option yylineno

%%
#(.*)(\n) 	 		
(''')(.*\n)*(.*)(''')	

if                      {return IF;}
else                    {return ELSE;}
while                   {return WHILE;}
True                    {yylval=strdup(yytext);return T;}
False                   { yylval=strdup(yytext);return F;}
{plus}			{ yylval=strdup(yytext);return PLUS;}
{minus}			{ return MINUS;}
{mul}			{ return MUL;}
{divide}		{ return DIVIDE;}
{equal}			{ return EQUAL;}
{plusequal}		{ return PLUSEQUAL;}
{divideequal}           { return DIVIDEEQUAL;}
{mulequal}              { return MULEQUAL;}
{minusequal}            { return MINUSEQUAL;}
{special_start}         { return SPECIAL_START;}
{special_end}           { return SPECIAL_END;}
(\n)                      { return NL;}
or                    { return OR;}
and                    { return AND;}
not                     { return NOT;}
in                      { return IN;}
not\ in                 { return NOTIN;}
\<			{ return LESSTHAN;}
\<=			{ return LESSTHANEQUAL;}
\>=			{ return GREATERTHANEQUAL;}
\>			{ return GREATERTHAN;}
\==			{ return DOUBLEEQUAL;}
\!=			{ return NOTEQUAL;}
:                       { return COLON;}
\[                      { return SQUAREBRACKET_START;}
\]                      { return SQUAREBRACKET_END;}
\%                      { return MOD;}
sep			{ return SEP;}
end			{printf("end" );return END;}
print                   { return PRINT;}
range                   { return RANGE;}
list			{ return LIST;}
[a-zA-Z_][_a-zA-Z0-9]*  { yylval=strdup(yytext);return ID;}
{string}                { yylval=strdup(yytext);return STRING;}
{integer}               { yylval=strdup(yytext);return INTEGER;}
{num}                   { yylval=strdup(yytext);return NUM;}
[0-9;!,@#]*/(({alpha}|"_")({alpha}|{digits}|"_")*) 	
\'                       { return SINGLEQUOTE;}
\"                      { return DOUBLEQUOTE;}
\*\*                    { return EXPONENTIAL;}
,                       { return COMMA;}
\t			{ return INDENT;}

%%

int yywrap() {
    return 1;
}

