%code requires {
    #include <string>
    #include <vector>
    #include "nodes.h"
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

Program* root = nullptr;

%}

%union 
{
    long long Int;
    double Float;
    bool boolVal;
    std::string* Id;
    StmtNode* stmtNode;
    ExprNode* exprNode; 
    DataType* dataType;
    std::vector<StmtNode*>* SL;
    std::vector<ExprNode*>* EL;
    Program* program;
} 

%debug



 
%token LET_KW VAR_KW FUNC CLASS RETURN ELSE FOR IN WHILE IF SWITCH CASE DEFAULT NIL BREAK CONTINUE ARROW INT_KW BOOL_KW UINT_KW FLOAT_KW DOUBLE_KW STRING_KW PUBLIC PRIVATE FILE_PRIVATE STATIC

%token <boolVal> TRUE FALSE
%token <Int> INT_DEC INT_BINARY INT_OCTAL INT_HEXADECIMAL
%token <Id> ID STRING_C  '_' INIT DEINIT   
%token <Float> FLOAT_HEX FLOAT_DEC

%type <program> program
%type <SL> stmt_list top_stmt_list class_decl_list switch_case_list block class_decl_list_e
%type <EL> expr_list decl_items func_param_list func_param_list_e func_arg_list func_arg_list_nonempty expr_list_e
%type <stmtNode> stmt top_stmt func_decl class_decl var_decl if_stmt switch_stmt for_stmt while_stmt class_member  switch_case
%type <exprNode> expr decl_item func_param func_arg  
%type <Id> access_modifier
%type <dataType> type

%start program

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

program : top_stmt_list {root = new Program($1); $$ = root; root->print();}
;

top_stmt_list:
      top_stmt           { $$ = new std::vector<StmtNode*>({$1}); }
    | stmt_list top_stmt { $$ = $1; $$->push_back($2); }      
    ;

top_stmt:
    stmt             { $$ = $1; }
    | func_decl ';'  { $$ = $1; }
    | class_decl ';' { $$ = $1; }

stmt_list:
      stmt           { $$ = new std::vector<StmtNode*>({$1}); }
    | stmt_list stmt { $$ = $1; $$->push_back($2); }
    ;

stmt: 
      expr ';'         { $$ = StmtNode::createExprAsStmt($1); }
    | var_decl ';'     { $$ = $1;}
    | if_stmt          { $$ = $1; }
    | switch_stmt      { $$ = $1; }
    | for_stmt         { $$ = $1; }
    | while_stmt       { $$ = $1; }
    | RETURN ';'       { $$ = StmtNode::createReturnStmt(nullptr); }
    | RETURN expr ';'  { $$ = StmtNode::createReturnStmt($2); }
    | BREAK ';'        { $$ = StmtNode::createBreakStmt(); }
    | CONTINUE ';'     { $$ = StmtNode::createContinueStmt(); }
    ;

expr:
      INT_DEC                           { $$ = ExprNode::createInt($1); }
    | FLOAT_DEC                         { $$ = ExprNode::createFloat($1); }
    | STRING_C                          { $$ = ExprNode::createString($1); }
    | TRUE                              { $$ = ExprNode::createBool($1); }
    | FALSE                             { $$ = ExprNode::createBool($1); }
    | expr '+' expr                     { $$ = ExprNode::createBinOperation($1,$3,ExprType::Add); }
    | expr '-' expr                     { $$ = ExprNode::createBinOperation($1,$3,ExprType::Sub); }
    | expr '*' expr                     { $$ = ExprNode::createBinOperation($1,$3,ExprType::Mul); }
    | expr '/' expr                     { $$ = ExprNode::createBinOperation($1,$3,ExprType::Div); }
    | expr EQ expr                      { $$ = ExprNode::createBinOperation($1,$3,ExprType::Eq); }
    | expr NE expr                      { $$ = ExprNode::createBinOperation($1,$3,ExprType::Ne); }
    | expr '>' expr                     { $$ = ExprNode::createBinOperation($1,$3,ExprType::Gt); }
    | expr '<' expr                     { $$ = ExprNode::createBinOperation($1,$3,ExprType::Lt); }
    | expr GE expr                      { $$ = ExprNode::createBinOperation($1,$3,ExprType::Ge); }
    | expr LE expr                      { $$ = ExprNode::createBinOperation($1,$3,ExprType::Le); }
    | expr '=' expr                     { $$ = ExprNode::createBinOperation($1,$3,ExprType::Eq); }
    | expr AND expr                     { $$ = ExprNode::createBinOperation($1,$3,ExprType::And); }
    | expr OR expr                      { $$ = ExprNode::createBinOperation($1,$3,ExprType::Or); }
    | '-' expr %prec UNMINUS            { $$ = ExprNode::createUnOperation($2,ExprType::UMinus); }
    | NOT expr                          { $$ = ExprNode::createUnOperation($2,ExprType::Not); }      
    | expr '[' expr ']'                 { $$ = ExprNode::createSubscriptNode($1,$3); }
    | expr '.' ID                       { $$ = ExprNode::createFieldAccessNode($1,$3); }
    | expr '.' ID '(' func_arg_list ')' { ExprNode* access = ExprNode::createFieldAccessNode($1, $3); $$ = ExprNode::createFieldAccessCall(access, $5);} 
    | '[' expr_list_e ']'               { $$ = ExprNode::createArray($2);}
    | ID                                { $$ = ExprNode::createId($1);}
    | ID '(' func_arg_list ')'          { $$ = ExprNode::createFuncCall($3,$1,nullptr);}
    | '(' expr ')'                      { $$ = $2;}
    ;


expr_list:
    expr                  { $$ = new std::vector<ExprNode*>({$1}); }
    | expr_list ',' expr  { $$ = $1; $$->push_back($3); }
    ;
	
expr_list_e:
    /*empty*/   { $$ = nullptr; }
    | expr_list { $$ = $1; }
    ;

type:
      INT_KW        { $$ = new DataType(new std::string("Int"));           }
    | BOOL_KW       { $$ = new DataType(new std::string("Bool"));          }
    | UINT_KW       { $$ = new DataType(new std::string("Uint"));          }
    | FLOAT_KW      { $$ = new DataType(new std::string("Float"));          }
    | STRING_KW     { $$ = new DataType(new std::string("String"));        }
    | '[' type ']'  { $2->arDimension++; $$ = $2; }
    | ID            { $$ = new DataType(new std::string(*$1));             }
    ;

decl_items:
    decl_item                   { $$ = new std::vector<ExprNode*>({$1}); }
    | decl_items ',' decl_item  { $$ = $1; $$->push_back($3); }
    ;

decl_item:
    ID '=' expr            { $$ = ExprNode::createDeclExpr($1,$3,nullptr); }
    | ID ':' type          { $$ = ExprNode::createDeclExpr($1,nullptr,$3); }
    | ID ':' type '=' expr { $$ = ExprNode::createDeclExpr($1,$5,$3);   }
    ;

var_decl: 
    LET_KW decl_items   { $$ = StmtNode::createDeclStmt($2, StmtType::letDecl); }
    | VAR_KW decl_items { $$ = StmtNode::createDeclStmt($2, StmtType::varDecl); }
    ;

func_decl:
    FUNC ID '(' func_param_list_e ')' ARROW type block { $$ = StmtNode::createFuncDecl($2,$4,$7,$8); }
    | FUNC ID '(' func_param_list_e ')' block            { $$ = StmtNode::createFuncDecl($2,$4,nullptr,$6); }
    ;

class_decl:
    CLASS ID ':' ID '{' class_decl_list_e '}' { $$ = StmtNode::createClassDecl($2,$4,$6);} 
    | CLASS ID '{' class_decl_list_e '}'      { $$ = StmtNode::createClassDecl($2,nullptr,$4);} 
    ;

func_param: 
    ID ':' type       { $$ = ExprNode::createFuncParamExpr($1,nullptr,$3); }
    | ID ID ':' type  { $$ = ExprNode::createFuncParamExpr($2,$1,$4); }
    | '_' ID ':' type { $$ = ExprNode::createFuncParamExpr($2,$1,$4); }
    ;

func_param_list:
    func_param                       { $$ = new std::vector<ExprNode*>({$1}); }
    | func_param_list ',' func_param { $$ = $1; $$->push_back($3); }
    ;

func_param_list_e:
    /*empty*/         { $$ = nullptr; }
    | func_param_list { $$ = $1; }
    ;
	
func_arg:
    ID ':' expr { $$ = ExprNode::createFuncArgExpr($1,$3); }
    | expr      { $$ = ExprNode::createFuncArgExpr(nullptr,$1); }
    ;
	
func_arg_list:
      /* empty */            { $$ = nullptr; }
    | func_arg_list_nonempty { $$ = $1; }
    ;

func_arg_list_nonempty:
      func_arg                             { $$ = new std::vector<ExprNode*>({$1}); }
    | func_arg_list_nonempty ',' func_arg  { $$ = $1; $$->push_back($3); }
    ;

access_modifier:
    /*empty*/      { $$ = nullptr; }
    | PUBLIC       { $$ = new std::string("PUBLIC"); }
    | FILE_PRIVATE { $$ = new std::string("FILE_PRIVATE"); }
    | PRIVATE      { $$ = new std::string("PRIVATE"); }
    ;

class_decl_list:
    class_decl_list class_member { $$ = $1; $$->push_back($2); }
    | class_member { $$ = new std::vector<StmtNode*>({$1}); }
    ;

class_member:
    access_modifier var_decl                               { $$ = StmtNode::createClassMember($2,$1,false,StmtType::classMemberVar);}
    | access_modifier func_decl                            { $$ = StmtNode::createClassMember($2,$1,false,StmtType::classMemberFunc);}
    | access_modifier STATIC var_decl                      { $$ = StmtNode::createClassMember($3,$1,true,StmtType::classMemberVar);}
    | access_modifier STATIC func_decl                     { $$ = StmtNode::createClassMember($3,$1,true,StmtType::classMemberFunc);}
    | access_modifier INIT '(' func_param_list_e ')' block { StmtNode* f = StmtNode::createFuncDecl($2,$4,nullptr,$6);
                                                             $$ =  StmtNode::createClassMember(f,$1,false,StmtType::classMemberInit);  
                                                           }
    | DEINIT block                                         { StmtNode* f = StmtNode::createFuncDecl($1,nullptr,nullptr,$2); 
                                                             $$ =  StmtNode::createClassMember(f,$1,false,StmtType::classMemberDeinit);
                                                           }
    ;
	
class_decl_list_e:
    /*empty*/ { $$ = nullptr;}
    | class_decl_list { $$ = $1;}
    ;
			
if_stmt:
    IF expr block { $$ = StmtNode::createIfStmt($2,$3,nullptr); }
    | IF expr block ELSE if_stmt { $$ = StmtNode::createElseIfStmt($2,$3,$5);}
    | IF expr block ELSE block { $$ = StmtNode::createIfStmt($2,$3,$5);  }
    ;

switch_stmt:
    SWITCH expr '{' switch_case_list '}' { $$ = StmtNode::createSwitchStmt($2,$4);}
    ;
	
switch_case_list:
    switch_case                     { $$ = new std::vector<StmtNode*>({$1}); }
    | switch_case_list switch_case  { $$ = $1; $$->push_back($2); }
    ;
	
switch_case:
    CASE expr_list ':' block { $$ = StmtNode::createCaseStmt($2,$4);}
    | DEFAULT ':' block      { $$ = StmtNode::createCaseStmt(nullptr,$3);}
    ;
	
for_stmt: 
    FOR ID IN expr block { $$ = StmtNode::createLoopStmt($4,$2,$5,StmtType::For); }
    ;

while_stmt:
    WHILE expr block { $$ = StmtNode::createLoopStmt($2,nullptr,$3,StmtType::While); }
    ;

block: 
    '{' stmt_list '}' { $$ = $2;}
    ;
	
%%

void yyerror(const char* s){
 std::cerr << s << std::endl;
} 