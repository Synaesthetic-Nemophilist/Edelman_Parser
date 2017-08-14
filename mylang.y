
%{ /* C declarations used in actions */
 #include <stdio.h>
%}


%TOKEN ID INT DOUBLE
%RIGHT INC_OP DEC_OP NOT
%LEFT MUL DIV MOD 
%LEFT PLUS MINUS
%LEFT LT GT LT_EQ GT_EQ
%LEFT EQ NOT_EQ
%LEFT BIN_AND
%LEFT AND
%LEFT OR
%RIGHT ASSIGN MUL_ASSIGN DIV_ASSIGN MOD_ASSIGN ADD_ASSIGN SUB_ASSIGN

%%


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