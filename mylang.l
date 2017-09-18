%{
#include "mylang.tab.h"
#include <string.h>


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

"int"   { return INTDEC; }
"char"  { return CHARDEC; }
"bool"  { return BOOLDEC; }
"double" { return DOUBDEC; }
"void"  { return VOIDDEC; }
"byref" { return BYREF; }
"if"    { return IF; }
"else"  { return ELSE; }
"continue" { return CONT; }
"return"    { return RET; }
"break" { return BREAK; }
"true"  { return TRU; }
"false" { return FALS; }
"null"  { return NUL; }
"?"     { return QUE; }
"new"   { return NEW; }
"delete" { return DEL; }

{idd}       { printf("Text entered\n");return ID; }
{floatt}    { printf("Float entered\n"); return DOUBLE; }
{intt}      { printf("Int entered\n"); return INT; }
{charr}     { return CHAR; }
{stringg}   { return STRING; }
"{"     { return LCURL; }
"}"     { return RCURL; }
"["     { return LARR; }
"]"     { return RARR; }
"("     { return LPAR; }
")"     { return RPAR; }
";"     { return SEMICOL; }
","     { return COMMA; }
"="     { return ASSIGN; }
"*="    { return MUL_ASSIGN; }
"/="    { return DIV_ASSIGN; }
"%="    { return MOD_ASSIGN; }
"+="    { return ADD_ASSIGN; }
"-="    { return SUB_ASSIGN; }
"++"    { return INC_OP; }
"--"    { return DEC_OP; }
"*"     { return MUL; }
"/"     { return DIV; }
"%"     { return MOD; }
"+"     { return PLUS; }
"-"     { return MINUS; }
"<"     { return LT; }
">"     { return GT; }
"<="    { return LT_EQ; }
">="    { return GT_EQ; }
"=="    { return EQ; }
"!="    { return NOT_EQ; }
"&&"    { return AND; }
"||"    { return OR; }
"&"     { return BIN_AND; }
"!"     { return NOT; }

[ \t]           {printf("KENO\n");}
[\n]            {++line; }



\/\*    { BEGIN(MULTICOMMENT); }

<MULTICOMMENT>\*\/    {   // end of a comment: go back to normal parsing.
                	        BEGIN(INITIAL);
                	  }
<MULTICOMMENT>\n      { ++line; }
<MULTICOMMENT>.       ;


\/\/    { BEGIN(SINGLECOMMENT); }
<SINGLECOMMENT>\n   {   // end of a comment: go back to normal parsing.
                	        BEGIN(INITIAL);
                	        ++line;
                   }
<SINGLECOMMENT>.       ;

%%


