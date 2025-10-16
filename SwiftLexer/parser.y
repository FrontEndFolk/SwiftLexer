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

// ---- Tokens ----
%token <sval> IDENTIFIER STRING_LITERAL
%token <ival> INTEGER_LITERAL
%token <fval> FLOAT_LITERAL
%token LET VAR FUNC RETURN IF ELSE WHILE FOR
%token TRUE FALSE
%token EQ NEQ LEQ GEQ AND OR
%token ASSIGN '+' '-' '*' '/' '<' '>' '(' ')' '{' '}' ';' ','

// ---- Union ----
%union {
    int ival;
    double fval;
    std::string* sval;
}

// ---- Types ----
%type <sval> expression
%type program statement var_decl func_decl if_stmt while_stmt for_stmt block param_list

// ---- Operator precedence ----
%left OR
%left AND
%left EQ NEQ
%left '<' '>' LEQ GEQ
%left '+' '-'
%left '*' '/'
%right UMINUS

%%

// ---- Grammar rules ----

program:
      /* empty */
    | program statement
    ;

statement:
      var_decl ';'
    | func_decl
    | if_stmt
    | while_stmt
    | for_stmt
    | RETURN expression ';' { cout << "return " << *$2 << endl; delete $2; }
    ;

var_decl:
      LET IDENTIFIER ASSIGN expression  { cout << "let " << *$2 << " = " << *$4 << endl; delete $2; delete $4; }
    | VAR IDENTIFIER ASSIGN expression  { cout << "var " << *$2 << " = " << *$4 << endl; delete $2; delete $4; }
    ;

func_decl:
      FUNC IDENTIFIER '(' ')' block  { cout << "func " << *$2 << "()" << endl; delete $2; }
    | FUNC IDENTIFIER '(' param_list ')' block { cout << "func " << *$2 << "(...)" << endl; delete $2; }
    ;

param_list:
      IDENTIFIER
    | param_list ',' IDENTIFIER
    ;

if_stmt:
      IF '(' expression ')' block
    | IF '(' expression ')' block ELSE block
    ;

while_stmt:
      WHILE '(' expression ')' block
    ;

for_stmt:
      FOR '(' var_decl ';' expression ';' expression ')' block
    ;

block:
      '{' program '}'
    ;

expression:
      INTEGER_LITERAL             { $$ = new string(to_string($1)); }
    | FLOAT_LITERAL               { $$ = new string(to_string($1)); }
    | STRING_LITERAL              { $$ = new string(*$1); delete $1; }
    | TRUE                        { $$ = new string("true"); }
    | FALSE                       { $$ = new string("false"); }
    | IDENTIFIER                  { $$ = new string(*$1); delete $1; }
    | expression '+' expression   { $$ = new string(*$1 + " + " + *$3); delete $1; delete $3; }
    | expression '-' expression   { $$ = new string(*$1 + " - " + *$3); delete $1; delete $3; }
    | expression '*' expression   { $$ = new string(*$1 + " * " + *$3); delete $1; delete $3; }
    | expression '/' expression   { $$ = new string(*$1 + " / " + *$3); delete $1; delete $3; }
    | expression EQ expression    { $$ = new string(*$1 + " == " + *$3); delete $1; delete $3; }
    | expression NEQ expression   { $$ = new string(*$1 + " != " + *$3); delete $1; delete $3; }
    | expression '<' expression   { $$ = new string(*$1 + " < " + *$3); delete $1; delete $3; }
    | expression '>' expression   { $$ = new string(*$1 + " > " + *$3); delete $1; delete $3; }
    | expression AND expression   { $$ = new string(*$1 + " && " + *$3); delete $1; delete $3; }
    | expression OR expression    { $$ = new string(*$1 + " || " + *$3); delete $1; delete $3; }
    | '(' expression ')'          { $$ = $2; }
    | '-' expression %prec UMINUS { $$ = new string("-" + *$2); delete $2; }
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
