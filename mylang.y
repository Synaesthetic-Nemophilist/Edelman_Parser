
%{ /* C declarations used in actions */
 #include <stdio.h>

 #define YYSTYPE char*


extern int yylex();
extern int yyparse();
extern FILE *yyin;

int line;
extern int line;
extern char* yytext;
int errors;
int errorIndex;

struct errorData
{
   int line;
   char errorMsg[50];
};

struct errorData *ptr;

%}


%union{
  char *str;
}

%start program
%token IF ELSE FOR COLON CONT RET BREAK TRU FALS NUL QUE NEW DEL SEMICOL COMMA
%token ID INT DOUBLE CHAR STRING CHARDEC BOOLDEC DOUBDEC VOIDDEC INTDEC
%token LARR RARR LPAR RPAR LCURL RCURL
%right ASSIGN MUL_ASSIGN DIV_ASSIGN MOD_ASSIGN ADD_ASSIGN SUB_ASSIGN
%left OR
%left AND
%left BIN_AND
%left EQ NOT_EQ
%left LT GT LT_EQ GT_EQ
%left PLUS MINUS
%left MUL DIV MOD
%right INC_OP DEC_OP NOT BYREF


%%


program:
		dec_list
    |   error SEMICOL
	;


dec_list:
		dec
 	|	dec dec_list
 	|   error SEMICOL
 	;

dec:
		var_dec
	|	func_dec
	|	func_def
	|   error SEMICOL
	;


var_dec:
		basic_data_type declarative_list SEMICOL
	|   basic_data_type stars declarative_list SEMICOL
	|   var_dec error SEMICOL
	;



declarative_list:
		declarative
	|	declarative_list COMMA declarative
	|   error SEMICOL
	;


stars:

	|   stars MUL
	|   error SEMICOL
	;


basic_data_type:
		INTDEC
	|	CHARDEC
	|	BOOLDEC
	|	DOUBDEC
	|   VOIDDEC
	|   error SEMICOL
	;


declarative:
		ID
	|	ID LARR const_expr RARR
	|   error SEMICOL
	;


func_dec:
		basic_data_type stars ID LPAR parameter_list RPAR SEMICOL
	|	basic_data_type stars ID LPAR RPAR SEMICOL
	|	basic_data_type ID LPAR parameter_list RPAR SEMICOL
    |	basic_data_type ID LPAR RPAR SEMICOL
	|   func_dec error SEMICOL
	;

parameter_list:
		parameter
	|	parameter_list COMMA parameter
	|   error SEMICOL
	;

parameter:
		BYREF basic_data_type stars ID
	|	basic_data_type stars ID
	|   error SEMICOL
	;


func_def:
		basic_data_type stars ID LPAR parameter_list RPAR LCURL declare_list statement_list RCURL
	|	basic_data_type stars ID LPAR RPAR LCURL declare_list statement_list RCURL
	|	basic_data_type ID LPAR parameter_list RPAR LCURL declare_list statement_list RCURL
    |	basic_data_type ID LPAR RPAR LCURL declare_list statement_list RCURL
	|   func_def error SEMICOL
	;


declare_list:
		declare_list dec
	|
	|   error SEMICOL
	;

statement:
		SEMICOL
	|	expr SEMICOL
	|	LCURL statement_list RCURL
	|	IF LPAR expr RPAR statement ELSE statement
	|	IF LPAR expr RPAR statement
	|	ID COLON FOR LPAR expr SEMICOL expr SEMICOL expr RPAR statement
	|	ID COLON FOR LPAR expr SEMICOL expr SEMICOL RPAR statement
	|	ID COLON FOR LPAR expr SEMICOL SEMICOL expr RPAR statement
	|	ID COLON FOR LPAR expr SEMICOL SEMICOL RPAR statement
	|	ID COLON FOR LPAR SEMICOL expr SEMICOL expr RPAR statement
	|	ID COLON FOR LPAR SEMICOL expr SEMICOL RPAR statement
	|	ID COLON FOR LPAR SEMICOL SEMICOL expr RPAR statement
	|	ID COLON FOR LPAR SEMICOL SEMICOL RPAR statement
	|	FOR LPAR expr SEMICOL expr SEMICOL expr RPAR statement
	|	FOR LPAR expr SEMICOL expr SEMICOL RPAR statement
	|	FOR LPAR expr SEMICOL SEMICOL expr RPAR statement
	|	FOR LPAR expr SEMICOL SEMICOL RPAR statement
	|	FOR LPAR SEMICOL expr SEMICOL expr RPAR statement
	|	FOR LPAR SEMICOL expr SEMICOL RPAR statement
	|	FOR LPAR SEMICOL SEMICOL expr RPAR statement
	|	FOR LPAR SEMICOL SEMICOL RPAR statement
	|	CONT ID SEMICOL
	|	CONT SEMICOL
	|	BREAK ID SEMICOL
	|	BREAK SEMICOL
	|	RET expr SEMICOL
	|	RET SEMICOL
	|   error SEMICOL
	;


statement_list:
		statement_list statement
	|
	|   error SEMICOL
	;

expr:
		ID
	|	LPAR expr RPAR
	|	TRU
	|	FALS
	|	NUL
	|	INT
	|	CHAR
	|	DOUBLE
	|	STRING
	|	LPAR RPAR
	|	ID LPAR RPAR
	|	LPAR expr_list RPAR
	|	ID LPAR expr_list RPAR
	|	expr LARR expr RARR
	|	un_op expr
	|	expr bin_op expr
	|	un_assgn_op expr
	|	expr un_assgn_op
	|	expr bin_assgn_op expr
	|	LPAR basic_data_type RPAR expr
	|	expr QUE expr COLON expr
	|	NEW basic_data_type LARR expr RARR
	|	NEW basic_data_type
	|	DEL expr
	|   error SEMICOL
	;

expr_list:
		expr
	|	expr_list','expr
	|   expr_list error SEMICOL
	;

const_expr:
		expr
    |   const_expr error SEMICOL
    ;


un_op:
		BIN_AND
	|	MUL
	|	PLUS
	|	MINUS
	|	NOT
	|   error SEMICOL
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
	|   error SEMICOL
	;

un_assgn_op:
		INC_OP
	|	DEC_OP
	|   error SEMICOL
	;

bin_assgn_op:
		ASSIGN
	|	MUL_ASSIGN
	|	DIV_ASSIGN
	|	MOD_ASSIGN
	|	ADD_ASSIGN
	|	SUB_ASSIGN
	|   bin_assgn_op error '\n'
	;


%%

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>


int main(int args, char** argv) {
	// open a file handle to a particular file:
	FILE *myfile = fopen("input.txt", "r");

	// make sure it is valid:
	if (!myfile) {
		printf("I can't open input.txt!");
		return -1;
	}

	// set flex to read from it instead of defaulting to STDIN:
	yyin = myfile;

	// parse through the input until there is no more:
	//yydebug = 1;
	line = 1;
	errorIndex = 2;
	ptr = (struct errorData*) malloc(errorIndex * sizeof(struct errorData));

	do {
		yyparse();
	} while (!feof(yyin));

    if(errors == 0){
        printf("\n\n---------------------------------------\n");
	    printf("Syntax is correct!!!\n");
    } else {
        printf("\n\n---------------------------------------\n");
        printf("Syntax is incorrect!!!\n Total errors: %d\n", yynerrs);
        for(int i = 0; i < errors; ++i) {
            printf("Error %s in line: %d\n", ptr[i].errorMsg, ptr[i].line);
        }

    }
    free(ptr);

}

yyerror(const char *s) {

    // Save errorMsg and errorline to dynamic array of structs
    strcpy(ptr[errors].errorMsg, s);
	ptr[errors].line = line;
	errors++;
	errorIndex++;
	ptr = realloc(ptr, errorIndex);

}

