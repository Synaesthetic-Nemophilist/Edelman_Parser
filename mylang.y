
%{ /* C declarations used in actions */
 #include <stdio.h>
 #include <string.h>

 #define YYDEBUG 1
 #define MAX_TABLE_SIZE 100


extern int yylex();
extern int yyparse();
extern FILE *yyin;

int line;
extern int line;
extern char* yytext;


// Type Declaration vars
char* declaredVars[MAX_TABLE_SIZE];
int varIndex;

char* declaredFuncts[MAX_TABLE_SIZE];
int functIndex;

// utility function for looking up declared IDs
int searchDeclared(char**, int, char*);

int errors;
int errorIndex;

struct errorData
{
   int line;
   char errorMsg[100];
};

struct errorData *ptr;

%}


%union{
  char *str;
}

%start program
%token IF ELSE FOR COLON CONT RET BREAK TRU FALS NUL QUE NEW DEL SEMICOL COMMA
%token <str> ID INT DOUBLE CHAR STRING CHARDEC BOOLDEC DOUBDEC VOIDDEC INTDEC
%token LARR RARR LPAR RPAR LCURL RCURL
%right ASSIGN MUL_ASSIGN DIV_ASSIGN MOD_ASSIGN ADD_ASSIGN SUB_ASSIGN
%left OR
%left AND
%left BIN_AND
%left EQ NOT_EQ LT GT LT_EQ GT_EQ
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
		ID                          { declaredVars[varIndex] = $1; varIndex++; }
	|	ID LARR const_expr RARR     { declaredVars[varIndex] = $1; varIndex++; }
	|   error SEMICOL
	;


func_dec:
		basic_data_type stars ID LPAR parameter_list RPAR SEMICOL   { declaredFuncts[functIndex] = $3; functIndex++; }
	|	basic_data_type stars ID LPAR RPAR SEMICOL                  { declaredFuncts[functIndex] = $3; functIndex++; }
	|	basic_data_type ID LPAR parameter_list RPAR SEMICOL         { declaredFuncts[functIndex] = $2; functIndex++; }
    |	basic_data_type ID LPAR RPAR SEMICOL                        { declaredFuncts[functIndex] = $2; functIndex++; }
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
		basic_data_type stars ID LPAR parameter_list RPAR LCURL declare_list statement_list RCURL   {
                                                                                                        if(!searchDeclared(declaredFuncts, functIndex, $3))
                                                                                                        {
                                                                                                            declaredFuncts[functIndex] = $3;
                                                                                                            functIndex++;
                                                                                                        }
                                                                                                    }
	|	basic_data_type stars ID LPAR RPAR LCURL declare_list statement_list RCURL                  {
                                                                                                        if(!searchDeclared(declaredFuncts, functIndex, $3))
                                                                                                        {
                                                                                                            declaredFuncts[functIndex] = $3;
                                                                                                            functIndex++;
                                                                                                        }
                                                                                                    }
	|	basic_data_type ID LPAR parameter_list RPAR LCURL declare_list statement_list RCURL         {
                                                                                                        if(!searchDeclared(declaredFuncts, functIndex, $2))
                                                                                                        {
                                                                                                            declaredFuncts[functIndex] = $2;
                                                                                                            functIndex++;
                                                                                                        }
                                                                                                    }
    |	basic_data_type ID LPAR RPAR LCURL declare_list statement_list RCURL                        {
                                                                                                        if(!searchDeclared(declaredFuncts, functIndex, $2))
                                                                                                        {
                                                                                                            declaredFuncts[functIndex] = $2;
                                                                                                            functIndex++;
                                                                                                        }
                                                                                                    }
	|   func_def error SEMICOL
	;


declare_list:

	|   declare_list dec
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

    |	statement_list statement
	|   error SEMICOL
	;

expr:
        ID                      {
                                    if(!searchDeclared(declaredVars, varIndex, $1))
                                    {
                                        //varDecError = realloc(varDecError, 100 * sizeof(char));
                                        char varDecError[100];

                                        sprintf(varDecError, "%s undeclared ", $1);
                                        yyerror(varDecError);
                                    }
                                }
	|	LPAR expr RPAR
	|	TRU
	|	FALS
	|	NUL
	|	INT
	|	CHAR
	|	DOUBLE
	|	STRING
	|	LPAR RPAR
	|	ID LPAR RPAR            {
                                    if(!searchDeclared(declaredFuncts, functIndex, $1))
                                    {
                                        //functDecError = realloc(functDecError, 100 * sizeof(char));
                                        char functDecError[100];

                                        sprintf(functDecError, "%s undeclared ", $1);
                                        yyerror(functDecError);
                                    }
                                }
	|	LPAR expr_list RPAR
	|	ID LPAR expr_list RPAR  {
                                    if(!searchDeclared(declaredFuncts, functIndex, $1))
                                    {
                                        //functDecError = realloc(functDecError, 100 * sizeof(char));

                                        char functDecError[100];
                                        sprintf(functDecError, "%s undeclared ", $1);
                                        yyerror(functDecError);
                                    }
                                }
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
	|   error
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
	FILE *myfile = fopen(argv[1], "r");

	// make sure it is valid:
	if (!myfile) {
		printf("I can't open input.txt!");
		return -1;
	}

	// set flex to read from it instead of defaulting to STDIN:
	yyin = myfile;

	yydebug = 1;
	line = 1;
	errorIndex = 5;
	ptr = (struct errorData*) malloc(errorIndex * sizeof(struct errorData));


	// parse through the input until there is no more:
	do {
		yyparse();
	} while (!feof(yyin));

    if(errors == 0){
        printf("\n\n---------------------------------------\n");
	    printf("Syntax is correct!!!\n");
    } else {
        printf("\n\n---------------------------------------\n");
        printf("DEBUG\n");
        printf("---------------------------------------\n");
        printf("Syntax is incorrect!!!\n Total errors: %d\n", errors);
        for(int i = 0; i < errors; ++i) {
            printf("ERROR: %s in line: %d\n", ptr[i].errorMsg, ptr[i].line);
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




int searchDeclared(char** dec, int idx, char* id) {
    for(int searchIndex = 0; searchIndex < idx; searchIndex++)
    {
        if(!strcmp(dec[searchIndex], id))
        {
            return 1;  // id already declared
        }
    }
    return 0;  // id never declared before
}