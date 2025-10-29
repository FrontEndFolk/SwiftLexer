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

%token INT_DECIMAL FLOAT_HEX FLOAT_DEC INT_BINARY INT_OCTAL INT_HEXADECIMAL STRING_C ID 
%token INT_KW LET_KW VAR_KW FUNC PUBLIC FILE_PRIVATE PRIVATE CLASS SWITCH CASE DEFAULT 
%token FOR IN WHILE IF ELSE_IF ELSE RETURN DEINIT STAIC VOID
%token BOOL_KW STRING_KW DOUBLE_KW FLOAT_KW  /* Additional type keywords */
%token TRUE FALSE NIL  /* Boolean and nil literals */
%token AND OR NOT      /* Logical operators for И, ИЛИ, НЕ */

/* Operators */
%left ','              
%right '='
%left OR               /* Logical OR (ИЛИ) */
%left AND              /* Logical AND (И) */
%left EQ NE '>' '<' GE LE                
%left '+' '-'
%left '*' '/'
%right UNMINUS NOT     /* Unary minus and NOT (НЕ) */
%left '[' ']'
%left '?'              /* Optional type operator */

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

// ============================================================
// ENHANCED: Expressions with logical operators and multidimensional arrays
// ============================================================
expr:
      primary_expr
    /* Arithmetic operators */
    | expr '+' expr
    | expr '-' expr
    | expr '*' expr
    | expr '/' expr
    /* Comparison operators */
    | expr EQ expr
    | expr NE expr
    | expr '>' expr
    | expr '<' expr
    | expr GE expr
    | expr LE expr
    /* Logical operators (И, ИЛИ, НЕ) - ENHANCED */
    | expr AND expr     { cout << "Logical AND (И)" << endl; }
    | expr OR expr      { cout << "Logical OR (ИЛИ)" << endl; }
    | NOT expr          { cout << "Logical NOT (НЕ)" << endl; }
    /* Assignment */
    | expr '=' expr
    /* Unary minus */
    | '-' expr %prec UNMINUS
    /* Single subscript - array[0] or dict["key"] */
    | expr '[' expr ']'
    /* ENHANCED: Chained subscript for multidimensional arrays - table[0][1] */
    | expr '[' expr ']' '[' expr ']'     { cout << "2D array access" << endl; }
    /* ENHANCED: Triple subscript - array[0][1][2] */
    | expr '[' expr ']' '[' expr ']' '[' expr ']'  { cout << "3D array access" << endl; }
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
    | TRUE              /* Boolean literal */
    | FALSE             /* Boolean literal */
    | NIL               /* Nil literal */
    /* ENHANCED: Array literals */
    | '[' expr_list_e ']'     { cout << "Array literal" << endl; }
    /* ENHANCED: Dictionary literals */
    | '[' dict_elements_e ']' { cout << "Dictionary literal" << endl; }
    | '[' ':' ']'             { cout << "Empty dictionary [:]" << endl; }
    ;

expr_list:
      expr
    | expr_list ',' expr
    ;

expr_list_e:
    /*empty*/
    | expr_list
    ;

// ============================================================
// ENHANCED: Dictionary elements for dictionary literals
// ============================================================
dict_elements:
      expr ':' expr
    | dict_elements ',' expr ':' expr
    ;

dict_elements_e:
    /*empty*/
    | dict_elements
    ;

// ============================================================
// ENHANCED: Type system with optional, array, and dictionary types
// ============================================================
type: 
      INT_KW
    | BOOL_KW
    | STRING_KW
    | DOUBLE_KW
    | FLOAT_KW
    | ID
    /* ENHANCED: Optional type - Type? */
    | type '?'                 { cout << "Optional type" << endl; }
    /* ENHANCED: Array type - [Type] */
    | '[' type ']'             { cout << "Array type" << endl; }
    /* ENHANCED: Dictionary type - [KeyType: ValueType] */
    | '[' type ':' type ']'    { cout << "Dictionary type" << endl; }
    /* ENHANCED: Dictionary with array values - [String: [String]] */
    | '[' type ':' '[' type ']' ']'  { cout << "Dictionary with array values" << endl; }
    /* ENHANCED: Nested dictionaries - [Type: [Type: Type]] */
    | '[' type ':' '[' type ':' type ']' ']'  { cout << "Nested dictionary type" << endl; }
    ;

// ============================================================
// ENHANCED: Variable declarations with complex types
// ============================================================
decl_items:
      decl_item
    | decl_items ',' decl_item
    ;

decl_item:
      ID '=' expr
    | ID ':' type
    | ID ':' type '=' expr
    /* ENHANCED: Array declaration with type annotation */
    | ID ':' '[' type ']' '=' '[' expr_list_e ']'
    /* ENHANCED: Dictionary declaration - var dict: [String: Int] = [:] */
    | ID ':' '[' type ':' type ']' '=' '[' dict_elements_e ']'
    /* ENHANCED: Dictionary with array values - var sasd: [String: [String]] */
    | ID ':' '[' type ':' '[' type ']' ']' '=' expr
    /* ENHANCED: Multidimensional array - var table = [[1,2], [3,4]] */
    | ID ':' '[' type ']' '=' '[' array_literal_list ']'
    | ID '=' '[' array_literal_list ']'  { cout << "Multidimensional array assignment" << endl; }
    ;

// ============================================================
// ENHANCED: Nested array literals for multidimensional arrays
// ============================================================
array_literal_list:
      '[' expr_list_e ']'
    | array_literal_list ',' '[' expr_list_e ']'
    ;

decl: 
      LET_KW decl_items 
    | VAR_KW decl_items 
    | func_id '(' func_param_list_e ')' '-' '>' ID '{' stmt '}'
    | func_id '(' func_param_list_e ')' '-' '>' VOID '{' stmt '}'
    | func_id '(' func_param_list_e ')' '{' stmt '}'
    | CLASS ID ':' ID '{' class_decl_list_e '}' 
    | CLASS ID '{' class_decl_list_e '}'  /* Fixed: removed extra colon */
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
    | IF '(' expr ')' '{' stmt '}' ELSE '{' stmt '}'  /* Fixed: added braces around IF body */
    ;

switch_statement:
      SWITCH expr '{' switch_case_list '}'
    ;

switch_case_list:
      switch_case
    | switch_case_list switch_case
    ;

switch_case:
      CASE expr_list ':' stmt
    | DEFAULT ':' stmt
    ;

for_stmt: 
      FOR expr IN expr '{' stmt '}' 
    ;

while_stmt: 
      WHILE expr '{' stmt '}' 
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