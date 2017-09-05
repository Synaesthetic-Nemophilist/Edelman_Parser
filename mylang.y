
%{ /* C declarations used in actions */
 #include <stdio.h>
 #define YYSTYPE double
%}


%token ID INT DOUBLE CHAR
%right INC_OP DEC_OP NOT
%left MUL DIV MOD
%left PLUS MINUS
%left LT GT LT_EQ GT_EQ
%left EQ NOT_EQ
%left BIN_AND
%left AND
%left OR
%right ASSIGN MUL_ASSIGN DIV_ASSIGN MOD_ASSIGN ADD_ASSIGN SUB_ASSIGN

%%


expr:
		ID
	|	'('expr')'	{ $$ = $2; }
	|	"true"
	|	"false"
	|	"NULL"
	|	INT
	|	CHAR
	|	DOUBLE
	|	

expr_list:
		expr
	|	expr_list','expr
	;

const_expr:
		expr
		;


un_op:
		BIN_AND
	|	MUL
	|	PLUS
	|	MINUS
	|	NOT
	;

bin_op:	
		MUL
	|	DIV
	|	MOD
	|	PLUS
	|	MINUS
	|	LT
	|	GT
	|	LT_EQ
	|	GT_EQ
	|	EQ
	|	NOT_EQ
	|	AND
	|	OR
	;

un_assgn_op:	
		INC_OP
	|	DEC_OP
	;

bin_assgn_op:	
		ASSIGN
	|	MUL_ASSIGN
	|	DIV_ASSIGN
	|	MOD_ASSIGN
	|	ADD_ASSIGN
	|	SUB_ASSIGN
	;


%%
 
#include <stdio.h>
#include <ctype.ha>
char *progname;
 
main( argc, argv )
char *argv[];
{
  progname = argv[0];
  yyparse();
}
 
yyerror( s )
char *s;
{
  fprintf( stderr ,"%s: %s\n" , progname , s );