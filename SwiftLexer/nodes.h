#pragma once
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
	Eq,
	Ne,
	Prior,
	UMinus
};

enum StmtType { 
	Expr,
	If,
	While,
	For,
	Switch,
};

struct Node 
{
protected:
	StmtType stmtType;
	ExprType exprType;
};

struct StmtNode : Node {
protected:
	ExprNode* Expr;
	std::vector<StmtNode*> Block;
public:
	static StmtNode* createExprAsStmt(ExprNode* expr);
	static StmtNode* createIfStmt(ExprNode* cond, StmtNode* p_true, StmtNode* p_false);
	static StmtNode* createLoopStmt(ExprNode* cond, ExprNode* body, StmtType type);

};

struct ExprNode : Node{
public:
	ExprType Type;
	bool IsParen;
	int Num;
	std::string Name;
	ExprNode* LeftExpr;
	ExprNode* RightExpr;

	static ExprNode* createBinOperation(ExprNode* leftExpr, ExprNode* rightExpr, ExprType type);
	static ExprNode* createUnOperation(ExprNode* expr, ExprType type);
};