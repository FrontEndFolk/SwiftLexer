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



 
%token LET_KW VAR_KW FUNC CLASS RETURN ELSE FOR IN WHILE IF SWITCH CASE DEFAULT WHERE FALLTHROUGH NIL BREAK CONTINUE ARROW INT_KW BOOL_KW UINT_KW FLOAT_KW DOUBLE_KW STRING_KW PUBLIC PRIVATE FILE_PRIVATE OPEN INTERNAL STATIC UNDERSCORE CLOSED_RANGE OPENED_RANGE
%token NEW_LINE 
%token <boolVal> TRUE FALSE
%token <Int> INT_DEC INT_BINARY INT_OCTAL INT_HEXADECIMAL
%token <Id> ID STRING_C INIT DEINIT   
%token <Float> FLOAT_HEX FLOAT_DEC

%type <program> program
%type <SL> stmt_list stmt_list_opt top_stmt_list top_stmt_list_opt class_decl_list switch_case_list block class_block class_decl_list_e
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

program : opt_newlines top_stmt_list_opt opt_newlines {root = new Program($2); $$ = root; root->print();}
;

separator:
      ';' {  std::cerr << "parser:semicolon" << std::endl; }
    | new_line_list
    | ';' new_line_list
    | YYEOF
    ;

new_line_list:
      NEW_LINE
    | new_line_list NEW_LINE
    ;

opt_newlines:
      /* empty */
    | new_line_list
    ;

top_stmt_list_opt:
      /* empty */ { $$ = new std::vector<StmtNode*>(); }
    | top_stmt_list { $$ = $1;}
    ;

top_stmt_list:
      top_stmt           { $$ = new std::vector<StmtNode*>({$1}); std::cerr << "parser:stmt" << std::endl; }
    | top_stmt_list  top_stmt { $$ = $1; $$->push_back($2); }      
    ;

top_stmt:
    stmt             { $$ = $1; }
    | func_decl separator     { $$ = $1; }
    | class_decl separator       { $$ = $1; }
    ;


stmt_list_opt:
    /*empty*/  { $$ = new std::vector<StmtNode*>(); }
    | stmt_list {$$ = $1;}
    ;

stmt_list:
      stmt           { $$ = new std::vector<StmtNode*>({$1}); }
    | stmt_list  stmt { $$ = $1; $$->push_back($2); }
    ;

stmt: 
      expr separator         { $$ = StmtNode::createExprAsStmt($1); }
    | var_decl separator      { $$ = $1;}
    | if_stmt  separator      { $$ = $1; }
    | switch_stmt separator   { $$ = $1; }
    | for_stmt separator      { $$ = $1; }
    | while_stmt separator    { $$ = $1; }
    | RETURN    separator    { $$ = StmtNode::createReturnStmt(nullptr); }
    | RETURN expr separator  { $$ = StmtNode::createReturnStmt($2); }
    | BREAK    separator     { $$ = StmtNode::createBreakStmt(); }
    | CONTINUE   separator  { $$ = StmtNode::createContinueStmt(); }
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
    | expr '.' ID '(' func_arg_list ')' { ExprNode* access = ExprNode::createFieldAccessNode($1, $3); $$ = ExprNode::createFieldAccessCall(access,$3, $5);} 
    | '[' expr_list_e ']'               { $$ = ExprNode::createArray($2);}
    | ID                                { $$ = ExprNode::createId($1);}
    | ID '(' func_arg_list ')'          { $$ = ExprNode::createFuncCall($3,$1,nullptr);}
    | '(' expr ')'                      { $$ = $2;}
    | expr CLOSED_RANGE expr            { $$ = ExprNode::createLoopRange($1,$3,ExprType::ClosedRange);}
    | expr OPENED_RANGE expr            { $$ = ExprNode::createLoopRange($1,$3,ExprType::OpenedRange);}
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
    LET_KW decl_items      { $$ = StmtNode::createDeclStmt($2, StmtType::letDecl); }
    | VAR_KW decl_items    { $$ = StmtNode::createDeclStmt($2, StmtType::varDecl); }
    ;

func_decl:
    FUNC ID '(' func_param_list_e ')' ARROW type block { $$ = StmtNode::createFuncDecl($2,$4,$7,$8); }
    | FUNC ID '(' func_param_list_e ')' block            { $$ = StmtNode::createFuncDecl($2,$4,nullptr,$6); }
    ;

class_decl:
    CLASS ID ':' ID opt_newlines '{' opt_newlines class_decl_list_e opt_newlines '}' separator { $$ = StmtNode::createClassDecl($2,$4,$8);} 
    | CLASS ID opt_newlines '{' opt_newlines class_decl_list_e opt_newlines '}' separator     { $$ = StmtNode::createClassDecl($2,nullptr,$6);} 
    ;

func_param: 
    ID ':' type       { $$ = ExprNode::createFuncParamExpr($1,nullptr,$3); }
    | ID ID ':' type  { $$ = ExprNode::createFuncParamExpr($2,$1,$4); }
    | UNDERSCORE ID ':' type { $$ = ExprNode::createFuncParamExpr($2,new std::string("_"),$4); }
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
    class_decl_list opt_newlines class_member opt_newlines { $$ = $1; $$->push_back($3); }
    | class_member { $$ = new std::vector<StmtNode*>({$1}); }
    ;

class_member:
    access_modifier var_decl separator                     { $$ = StmtNode::createClassMember($2,$1,false,StmtType::classMemberVar);}
    | access_modifier func_decl separator                  { $$ = StmtNode::createClassMember($2,$1,false,StmtType::classMemberFunc);}
    | access_modifier STATIC var_decl separator            { $$ = StmtNode::createClassMember($3,$1,true,StmtType::classMemberVar);}
    | access_modifier STATIC func_decl                     { $$ = StmtNode::createClassMember($3,$1,true,StmtType::classMemberFunc);}
    | access_modifier INIT '(' func_param_list_e ')' block separator  { StmtNode* f = StmtNode::createFuncDecl($2,$4,nullptr,$6);
                                                             $$ =  StmtNode::createClassMember(f,$1,false,StmtType::classMemberInit);  
                                                           }
    | DEINIT block separator                               { StmtNode* f = StmtNode::createFuncDecl($1,nullptr,nullptr,$2); 
                                                             $$ =  StmtNode::createClassMember(f,$1,false,StmtType::classMemberDeinit);
                                                           }
    ;
	
class_decl_list_e:
    /*empty*/ { $$ = nullptr;}
    | class_decl_list { $$ = $1;}
    ;
			
if_stmt:
    IF expr block { $$ = StmtNode::createIfStmt($2,$3,nullptr); }
    | IF expr block opt_newlines ELSE if_stmt { $$ = StmtNode::createElseIfStmt($2,$3,$6);}
    | IF expr block opt_newlines ELSE block { $$ = StmtNode::createIfStmt($2,$3,$6);  }
    ;

switch_stmt:
    SWITCH expr opt_newlines '{' opt_newlines switch_case_list  '}' { $$ = StmtNode::createSwitchStmt($2,$6);}
    ;
	
switch_case_list:
    switch_case                     { $$ = new std::vector<StmtNode*>({$1}); }
    | switch_case_list opt_newlines switch_case opt_newlines  { $$ = $1; $$->push_back($3); }
    ;
	
switch_case:
      CASE expr_list ':' opt_newlines stmt_list_opt  { $$ = StmtNode::createCaseStmt($2,$5); }
    | DEFAULT ':' opt_newlines stmt_list_opt       { $$ = StmtNode::createCaseStmt(nullptr,$4);}
    ;
	
for_stmt: 
    FOR ID IN expr block { $$ = StmtNode::createLoopStmt($4,$2,$5,StmtType::For); }
    | FOR UNDERSCORE IN expr block { $$ = StmtNode::createLoopStmt($4,nullptr,$5,StmtType::For); }
    ;

while_stmt:
    WHILE expr block { $$ = StmtNode::createLoopStmt($2,nullptr,$3,StmtType::While); }
    ;

block:
     opt_newlines '{' opt_newlines stmt_list_opt opt_newlines '}' { $$ = $4; }
    ;
	
%%

void yyerror(const char* s){
 std::cerr << s << std::endl;
} 