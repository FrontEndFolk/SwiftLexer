#pragma once
#include <vector>
#include <string>

void Mytest();

enum ExprType {
	Int,
	Id,
	Add, 
	Sub,
	Mul,
	Div,
	Asn,
	Lt,
	Gt,
	Le,
	Ge,
	Eq,
	Ne,
	And,
	Or,
	UMinus,
	Not,
	decl,
	funcParam,
	array
};

enum StmtType { 
	Expr,
	If,
	While,
	For,
	Switch,
	varDecl,
	letDecl,
	classMemberFunc,
	classMemberVar,
	classMemberInit,
	classMemberDeinit
};

struct Node 
{
protected:
	StmtType stmtType;
	ExprType exprType;
};

struct ExprNode : Node {
public:
	bool IsParen;
	long long Num;
	std::string* Name;
	ExprNode* expr;


	// bin operation
	ExprNode* LeftExpr;
	ExprNode* RightExpr;

	// array
	std::vector<ExprNode*>* exprList;

	//decl
	std::string* declType;

	static ExprNode* createBinOperation(ExprNode* leftExpr, ExprNode* rightExpr, ExprType type);
	static ExprNode* createUnOperation(ExprNode* expr, ExprType type);
	static ExprNode* createInt(long long val);
	static ExprNode* createId(std::string* id);
	static ExprNode* createFloat(float val);
	static ExprNode* createBool(bool val);
	static ExprNode* createSubscriptNode(ExprNode* id, ExprNode* subscripValue);
	static ExprNode* createFiledAccessNode(ExprNode* expr, std::string* id);
	static ExprNode* createFuncCall(std::vector<ExprNode*>* exprList, std::string* id, ExprNode* scope);
	static ExprNode* createArray(std::vector<ExprNode*>* exprList);
	static ExprNode* createDeclExpr(std::string* id, ExprNode* expr,std::string* type);
	static ExprNode* createFuncParamExpr(std::string* paramName, std::string* label, std::string* type);
	static ExprNode* createFuncArgExpr(std::string* argName, ExprNode* expr);
	
};

struct StmtNode : Node {
protected:
	ExprNode* Expr;
	std::vector<StmtNode*>* Block;

	std::vector<ExprNode*>* declItems;

public:
	static StmtNode* createExprAsStmt(ExprNode* expr);
	static StmtNode* createIfStmt(ExprNode* cond, std::vector<StmtNode*>* p_true, std::vector<StmtNode*>* p_false);
	static StmtNode* createElseIfStmt(ExprNode* cond, std::vector<StmtNode*>* p_true, StmtNode* p_false);
	static StmtNode* createLoopStmt(ExprNode* cond, std::string* i, std::vector<StmtNode*>* body, StmtType type);
	static StmtNode* createReturnStmt(ExprNode* expr);
	static StmtNode* createBreakStmt();
	static StmtNode* createContinueStmt();
	static StmtNode* createFuncDecl(std::string* funcName, std::vector<ExprNode*>* params,std::string* type, std::vector<StmtNode*>* block);
	static StmtNode* createClassDecl(std::string* className, std::string* parentName,std::vector<StmtNode*>* body);
	static StmtNode* createClassMember(StmtNode* stmt, std::string* accessMod, bool isStatic,StmtType type);
	static StmtNode* createDeclStmt(std::vector<ExprNode*>* items, StmtType type);
	static StmtNode* createSwitchStmt(ExprNode* expr, std::vector<StmtNode*>* body);
	static StmtNode* createCaseStmt(std::vector<ExprNode*>*, std::vector<StmtNode*>* body);


};

