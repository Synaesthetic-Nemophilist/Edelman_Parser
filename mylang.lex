%{
/* need this for the call to atof() below */
#include <math.h>
%}


%%

[ \t\n]                      ;
[a-zA-Z_][a-zA-Z0-9_]*      { return ID; }
[0-9]+.[0-9]*               { return DOUBLE; }
[0-9]+                      { return INT; }
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
.       { printf("Unknown token: %s\n", yytext); yyterminate(); }


%%


int main(int argc, char **argv ) {
    ++argv, --argc;  /* skip over program name */
    if ( argc > 0 )
            yyin = fopen( argv[0], "r" );
    else
            yyin = stdin;

    yylex();
}
