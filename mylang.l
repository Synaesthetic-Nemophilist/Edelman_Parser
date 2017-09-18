%{
#include "mylang.tab.h"
#include <string.h>
#define YYSTYPE char*


extern int line;
%}

%option noyywrap


idd         [a-zA-Z_][a-zA-Z0-9_]*
floatt      [0-9]+.[0-9]*
intt        [0-9]+
charr       ^'[a-zA-Z]'$
stringg     ^"[a-zA-Z0-9_][a-zA-Z0-9_]*"$



%x MULTICOMMENT
%x SINGLECOMMENT


%%

"int"   { yylval.str = strdup(yytext); ECHO; return INTDEC; }
"char"  { yylval.str = strdup(yytext); ECHO; return CHARDEC; }
"bool"  { yylval.str = strdup(yytext); ECHO; return BOOLDEC; }
"double" { yylval.str = strdup(yytext); ECHO; return DOUBDEC; }
"void"  { yylval.str = strdup(yytext); ECHO; return VOIDDEC; }
"byref" { yylval.str = strdup(yytext); ECHO; return BYREF; }
"if"    { yylval.str = strdup(yytext); ECHO; return IF; }
"else"  { yylval.str = strdup(yytext); ECHO; return ELSE; }
"continue" { yylval.str = strdup(yytext); ECHO; return CONT; }
"return"    { yylval.str = strdup(yytext); ECHO; return RET; }
"break" { yylval.str = strdup(yytext); ECHO; return BREAK; }
"true"  { yylval.str = strdup(yytext); ECHO; return TRU; }
"false" { yylval.str = strdup(yytext); ECHO; return FALS; }
"null"  { yylval.str = strdup(yytext); ECHO; return NUL; }
"new"   { yylval.str = strdup(yytext); ECHO; return NEW; }
"delete" { yylval.str = strdup(yytext); ECHO; return DEL; }

{idd}       { yylval.str = strdup(yytext); ECHO; return ID; }
{floatt}    { yylval.str = strdup(yytext); ECHO; return DOUBLE; }
{intt}      { yylval.str = strdup(yytext); ECHO; return INT; }
{charr}     { yylval.str = strdup(yytext); ECHO; return CHAR; }
{stringg}   { yylval.str = strdup(yytext); ECHO; return STRING; }
"?"     { yylval.str = strdup(yytext); ECHO; return QUE; }
":"     { yylval.str = strdup(yytext); ECHO; return COLON; }
"{"     { yylval.str = strdup(yytext); ECHO; return LCURL; }
"}"     { yylval.str = strdup(yytext); ECHO; return RCURL; }
"["     { yylval.str = strdup(yytext); ECHO; return LARR; }
"]"     { yylval.str = strdup(yytext); ECHO; return RARR; }
"("     { yylval.str = strdup(yytext); ECHO; return LPAR; }
")"     { yylval.str = strdup(yytext); ECHO; return RPAR; }
";"     { yylval.str = strdup(yytext); ECHO; return SEMICOL; }
","     { yylval.str = strdup(yytext); ECHO; return COMMA; }
"="     { yylval.str = strdup(yytext); ECHO; return ASSIGN; }
"*="    { yylval.str = strdup(yytext); ECHO; return MUL_ASSIGN; }
"/="    { yylval.str = strdup(yytext); ECHO; return DIV_ASSIGN; }
"%="    { yylval.str = strdup(yytext); ECHO; return MOD_ASSIGN; }
"+="    { yylval.str = strdup(yytext); ECHO; return ADD_ASSIGN; }
"-="    { yylval.str = strdup(yytext); ECHO; return SUB_ASSIGN; }
"++"    { yylval.str = strdup(yytext); ECHO; return INC_OP; }
"--"    { yylval.str = strdup(yytext); ECHO; return DEC_OP; }
"*"     { yylval.str = strdup(yytext); ECHO; return MUL; }
"/"     { yylval.str = strdup(yytext); ECHO; return DIV; }
"%"     { yylval.str = strdup(yytext); ECHO; return MOD; }
"+"     { yylval.str = strdup(yytext); ECHO; return PLUS; }
"-"     { yylval.str = strdup(yytext); ECHO; return MINUS; }
"<"     { yylval.str = strdup(yytext); ECHO; return LT; }
">"     { yylval.str = strdup(yytext); ECHO; return GT; }
"<="    { yylval.str = strdup(yytext); ECHO; return LT_EQ; }
">="    { yylval.str = strdup(yytext); ECHO; return GT_EQ; }
"=="    { yylval.str = strdup(yytext); ECHO; return EQ; }
"!="    { yylval.str = strdup(yytext); ECHO; return NOT_EQ; }
"&&"    { yylval.str = strdup(yytext); ECHO; return AND; }
"||"    { yylval.str = strdup(yytext); ECHO; return OR; }
"&"     { yylval.str = strdup(yytext); ECHO; return BIN_AND; }
"!"     { yylval.str = strdup(yytext); ECHO; return NOT; }

[ \t]           {yylval.str = strdup(yytext); ECHO;}
[\n]            {yylval.str = strdup(yytext); ECHO; ++line; }



\/\*    {   yylval.str = strdup(yytext); ECHO;
            BEGIN(MULTICOMMENT);
        }

<MULTICOMMENT>\*\/    {   // end of a comment: go back to normal parsing.
                          yylval.str = strdup(yytext); ECHO;
                	      BEGIN(INITIAL);
                	  }
<MULTICOMMENT>\n      {
                          yylval.str = strdup(yytext); ECHO;
                          ++line;
                      }
<MULTICOMMENT>.       yylval.str = strdup(yytext); ECHO;


\/\/                  {
                          yylval.str = strdup(yytext); ECHO;
                          BEGIN(SINGLECOMMENT);
                      }
<SINGLECOMMENT>\n     {
                          // end of a comment: go back to normal parsing.
                          yylval.str = strdup(yytext); ECHO;
                	      BEGIN(INITIAL);
                	      ++line;
                      }
<SINGLECOMMENT>.      yylval.str = strdup(yytext); ECHO;

%%


