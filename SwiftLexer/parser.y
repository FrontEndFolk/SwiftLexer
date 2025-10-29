%{
#include <iostream>
#include <string>
#include <memory>
#include <vector>
#include <map>
#include "nodes.h"
using namespace std;

void yyerror(const char* s);
int yylex(void);

%}

%start program

%token INT_DECIMAL FLOAT_HEX FLOAT_DEC INT_BINARY INT_OCTAL INT_HEXADECIMAL STRING_C ID INT_KW LET_KW VAR_KW FUNC PUBLIC FILE_PRIVATE PRIVATE CLASS SWITCH CASE DEFAULT FOR IN WHILE IF ELSE_IF ELSE RETURN DEINIT STAIC VOID

/* Operators */
%left ','              
%left '='
%left EQ NE '>' '<' GE LE                
%left '+' '-'
%left '*' '/'
%right UNMINUS
%left '[' ']'

%%

// ---- Grammar rules ----

program:
      /* empty */
    | stmt_list YYEOF
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
    | '-' expr %prec UNMINUS
    | expr '[' expr ']'
    ;

primary_expr:
      INT_DECIMAL
    | FLOAT_HEX
    | FLOAT_DEC
    | INT_BINARY
    | INT_OCTAL
    | INT_HEXADECIMAL
    | STRING_C
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

type: 
	  INT_KW
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
    | ID ':' '[' type ']' '=' '[' expr_list_e ']'
    ;
	
decl: 
      LET_KW decl_items 
    | VAR_KW decl_items 
	| func_id '(' func_param_list_e ')' '-' '>' ID '{' stmt '}'
	| func_id '(' func_param_list_e ')' '-' '>' VOID '{' stmt '}'
	| func_id '(' func_param_list_e ')' '{' stmt '}'
    | CLASS ID ':' ID '{' class_decl_list_e '}' 
	| CLASS ID ':' '{' class_decl_list_e '}' 
	;


func_id: FUNC ID;

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
	| access_modifier STAIC decl
    | DEINIT '{' stmt '}'
    ;
	
class_decl_list_e:
	/*empty*/
	| class_decl_list 
	;
			
if_stmt: 
	  IF '(' expr ')' '{' stmt '}'
	| ELSE_IF '(' expr ')' '{' stmt '}' 
	| IF '(' expr ')' ELSE '{' stmt '}'
	;

switch_statement
    : SWITCH expr '{' switch_case_list '}'
    ;
	
switch_case_list:
	  switch_case
	| switch_case_list switch_case
	;
	
switch_case:
	  CASE expr_list ':' stmt
	| DEFAULT ':' stmt
	;
	
for_stmt: FOR expr IN expr '{' stmt '}' ;

while_stmt: WHILE expr '{' stmt '}' ;


%%
void yyerror(const char* s){
 std::cerr << s << std::endl;
} 