%{
#include <iostream>
#include <string>
#include <memory>
#include <vector>
#include <map>
using namespace std;

int yylex(void);
void yyerror(const char *s);

%}

%language "c++"
%require "3.2"
%define parse.error verbose

%start program

%token FLOAT_HEX FLOAT_DEC INT_BINARY INT_OCTAL INT_HEXADECIMAL INT_DECIMAL
%token STRING_C ID INT_KW LET_KW VAR_KW BOOL_KW CHARACTER_KW UINT_KW FLOAT_KW DOUBLE_KW CHAR_LITERAL STRING_KW
%token FUNC CLASS RETURN ELSE FOR IN WHILE IF SWITCH CASE DEFAULT
%token INIT DEINIT  
%token TRUE FALSE NIL
%token PUBLIC PRIVATE FILE_PRIVATE STATIC
%token BREAK CONTINUE
%token AND OR NOT
%token EQ NE GE LE


/* Operators */
%left ',' 
%right '='
%left OR
%left AND
%left EQ NE '>' '<' GE LE                
%left '+' '-'
%left '*' '/' '%'
%right NOT UNMINUS
%left '.' '['
%nonassoc ')'

%%

// ---- Grammar rules ----

program : stmt_list
;

stmt_list:
      /* empty */
    | stmt_list stmt
    ;

stmt: 
      decl ';'
    | expr ';'
    | if_stmt
    | switch_statement
    | for_stmt
    | while_stmt
    | RETURN ';'
    | RETURN expr ';'
    | BREAK ';'
    | CONTINUE ';'
    | block 
    ;

expr:
      primary_expr
    | expr '+' expr
    | expr '-' expr
    | expr '*' expr
    | expr '/' expr
    | expr EQ expr
    | expr NE expr
    | expr '>' expr
    | expr '<' expr
    | expr GE expr
    | expr LE expr
    | expr '=' expr
    | expr AND expr
    | expr OR expr
    | '-' expr %prec UNMINUS
    | NOT expr
    | expr '[' expr ']'
    | expr '.' ID
    | expr '.' ID '(' func_arg_list ')'
    | '[' expr_list_e ']'
    ;

primary_expr:

      INT_DECIMAL
    | FLOAT_HEX
    | FLOAT_DEC
    | INT_BINARY
    | INT_OCTAL
    | INT_HEXADECIMAL
    | STRING_C
    | CHAR_LITERAL
    | TRUE
    | FALSE
    | NIL
    | ID
    | ID '(' func_arg_list ')'
    | '(' expr ')'
    ;

expr_list:
    expr
    | expr_list ',' expr
    ;
	
expr_list_e:
    /*empty*/
    | expr_list
    ;

type:
    base_type
    | array_type
    ;

array_type:
    '[' type ']'
    ;

base_type:
    INT_KW
    | BOOL_KW
    | CHARACTER_KW
    | UINT_KW
    | FLOAT_KW
    | DOUBLE_KW
    | STRING_KW
    | ID
    ;

decl_items:
    decl_item
    | decl_items ',' decl_item
    ;

decl_item:
    ID '=' expr
    | ID ':' type
    | ID ':' type '=' expr
    ;

decl: 
    LET_KW decl_items 
    | VAR_KW decl_items 
    | FUNC ID '(' func_param_list_e ')' '-' '>' type block
    | FUNC ID '(' func_param_list_e ')' block
    | CLASS ID ':' ID '{' class_decl_list_e '}' 
    | CLASS ID ':' '{' class_decl_list_e '}' 
    ;

func_param: 
    ID ':' type
    | ID ID ':' type 
    | '_' ID ':' type
    ;

func_param_list:
    func_param
    | func_param_list ',' func_param
    ;

func_param_list_e:
    /*empty*/
    | func_param_list
    ;
	
func_arg:
    ID ':' expr
    | expr
    ;
	
func_arg_list:
      /* empty */
    | func_arg_list_nonempty
    ;

func_arg_list_nonempty:
      func_arg
    | func_arg_list_nonempty ',' func_arg
    ;

access_modifier:
    /*empty*/
    | PUBLIC
    | FILE_PRIVATE
    | PRIVATE
    ;

class_decl_list:
    class_decl_list class_member
    | class_member
    ;

class_member:
    access_modifier decl
    | access_modifier STATIC decl
    | INIT '(' func_param_list_e ')' block
    | DEINIT block
    ;
	
class_decl_list_e:
    /*empty*/
    | class_decl_list 
    ;
			
if_stmt:
    IF '(' expr ')' block
    | IF '(' expr ')' block ELSE block
    ;

switch_statement:
    SWITCH expr '{' switch_case_list '}'
    ;
	
switch_case_list:
    switch_case
    | switch_case_list switch_case
    ;
	
switch_case:
    CASE expr_list ':' block
    | DEFAULT ':' block
    ;
	
for_stmt: 
    FOR ID IN expr block
    ;

while_stmt:
    WHILE '(' expr ')' block 
    ;

block: 
    '{' stmt_list '}' 
    ;


%%

// ---- Error handling ----

void yyerror(const char *s) {
    cerr << "Parse error: " << s << endl;
}

int main() {
    cout << "Parsing Swift-like source code..." << endl;
    yyparse();
    return 0;
}
