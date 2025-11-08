%code requires {
    #include <string>
}

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

std::vector<StmtNode*>* root = nullprt;

%}

%union 
{
    int Int;
    std::string* Id;
    StmtNode* stmtNode;
    ExprNode* exprNode; 
} 


%start program


%token FLOAT_HEX FLOAT_DEC INT_BINARY INT_OCTAL INT_HEXADECIMAL ELSE_IF
%token STRING_C INT_KW VAR_KW BOOL_KW CHARACTER_KW UINT_KW FLOAT_KW DOUBLE_KW CHAR_LITERAL STRING_KW
%token FUNC CLASS RETURN ELSE FOR IN WHILE IF SWITCH CASE DEFAULT
%token INIT DEINIT  
%token TRUE FALSE NIL
%token PUBLIC PRIVATE FILE_PRIVATE STATIC
%token BREAK CONTINUE

%token <Int> INT_DECIMAL
%token <Id> ID LET_KW


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

program : top_stmt_list {root = $1; $$ = $1;}
;

top_stmt_list:
      top_stmt { $$ = new std::vector<StmtNode*>*({$1}); }
    | stmt_list top_stmt { $$ = $1; $$->push_back($2); }
       
    ;

top_stmt:
    stmt { $$ = $1; }
    | func_decl ';' { $$ = $1; }
    | class_decl ';' { $$ = $1; }

stmt_list:
      stmt { $$ = new std::vector<StmtNode*>*({$1}); }
    | stmt_list stmt { $$ = $1; $$->push_back($2); }
    ;

stmt: 
      expr ';'
    | var_decl ';'
    | if_stmt
    | switch_statement
    | for_stmt
    | while_stmt
    | RETURN ';'
    | RETURN expr ';'
    | BREAK ';'
    | CONTINUE ';'
    ;

expr:
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
      INT_KW
    | BOOL_KW
    | CHARACTER_KW
    | UINT_KW
    | FLOAT_KW
    | DOUBLE_KW
    | STRING_KW
    | ID
    | '[' type ']'
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

var_decl: 
    LET_KW decl_items 
    | VAR_KW decl_items
    ;
func_decl:
    FUNC ID '(' func_param_list_e ')' '-' '>' type block
    | FUNC ID '(' func_param_list_e ')' block
    ;
class_decl:
    CLASS ID ':' ID '{' class_decl_list_e '}' 
    | CLASS ID '{' class_decl_list_e '}' 
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
    access_modifier var_decl
    | access_modifier func_decl
    | access_modifier STATIC var_decl
    | access_modifier STATIC func_decl
    | INIT '(' func_param_list_e ')' block
    | DEINIT block
    ;
	
class_decl_list_e:
    /*empty*/
    | class_decl_list 
    ;
			
if_stmt:
    IF expr block
    | IF expr block ELSE if_stmt
    | IF expr block ELSE block
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
    WHILE expr block 
    ;

block: 
    '{' stmt_list '}' 
    ;
	
%%

void yyerror(const char* s){
 std::cerr << s << std::endl;
} 