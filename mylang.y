
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


func_def:
		result_type ID'('parameter_list')''{'declare_list statement_list'}'
	|	result_type ID'('')''{'declare_list statement_list'}'
	;


declare_list:
		declare_list declaration
	|
	;

statement:
		';'
	|	expr';'
	|	'{'statement_list'}'
	|	"if"'('expr')'statement"else"statement
	|	"if"'('expr')'statement
	|	ID':'"for"'('expr';'expr';'expr')'statement
	|	ID':'"for"'('expr';'expr';'')'statement
	|	ID':'"for"'('expr';'';'expr')'statement
	|	ID':'"for"'('expr';'';'')'statement
	|	ID':'"for"'('';'expr';'expr')'statement
	|	ID':'"for"'('';'expr';'')'statement
	|	ID':'"for"'('';'';'expr')'statement
	|	ID':'"for"'('';'';'')'statement
	|	"for"'('expr';'expr';'expr')'statement
	|	"for"'('expr';'expr';'')'statement
	|	"for"'('expr';'';'expr')'statement
	|	"for"'('expr';'';'')'statement
	|	"for"'('';'expr';'expr')'statement
	|	"for"'('';'expr';'')'statement
	|	"for"'('';'';'expr')'statement
	|	"for"'('';'';'')'statement
	|	"continue"ID';'
	|	"continue"';'
	|	"break"ID';'
	|	"break"';'
	|	"return"expr';'
	|	"return"';'
	;


statement_list:
		statement_list statement
	|
	;

expr:
		ID
	|	'('expr')'	{ $$ = $2; }
	|	"true"
	|	"false"
	|	"NULL"
	|	INT
	|	CHAR
	|	DOUBLE
	|	STRING
	|	'('')'
	|	ID'('')'
	|	'('expr_list')'
	|	ID'('expr_list')'
	|	expr'['expr']'
	|	un_op expr
	|	expr bin_op expr
	|	un_assgn_op expr
	|	expr un_assgn_op
	|	expr bin_assgn_op expr
	|	'('data_type')'expr
	|	expr'?'expr':'expr
	|	"new"data_type'['expr']'
	|	"new"data_type
	|	"delete"expr
	;

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