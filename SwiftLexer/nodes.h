#pragma once
#include <vector>
#include <string>

void Mytest();

enum ExprType {
	Int,
	Float,
	Bool,
	Id,
	Add,
	Sub,
	Mul,
	Div,
	Assign,
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
	array,
	arBrackets,
	ClosedRange,
	OpenedRange
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
public:
	int id;
	StmtType stmtType;
	ExprType exprType;
	virtual void print() = 0;
	virtual std::string getNodeLabel() = 0;
};

enum BaseTypes
{
	INT, FLOAT, STRING, BOOL, UINT
};

struct DataType
{
public:
	DataType(std::string* type);
	bool isArray();
	std::string getNodeLabel();
	void print();
	int id;
	BaseTypes base;
	int arDimension;
	std::string className;
	std::string typeLabel;
};

struct ExprNode : Node {
public:
	bool IsParen;
	long long Num;
	double FloatNum;
	bool boolVal;
	std::string* Name;
	ExprNode* expr;
	DataType* dataType;
	// bin operation
	ExprNode* LeftExpr;
	ExprNode* RightExpr;
	// array
	std::vector<ExprNode*>* exprList;
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
	static ExprNode* createDeclExpr(std::string* id, ExprNode* expr, DataType* type);
	static ExprNode* createFuncParamExpr(std::string* paramName, std::string* label, DataType* type);
	static ExprNode* createFuncArgExpr(std::string* argName, ExprNode* expr);
	static ExprNode* createLoopRange(ExprNode* lowerBound, ExprNode* upperBound, ExprType type);

	void print() override;
	virtual std::string getNodeLabel() override;
};

struct StmtNode : Node {
public:
	ExprNode* Expr;
	std::vector<StmtNode*>* Block;
	std::vector<StmtNode*>* ElseBlock;
	std::vector<ExprNode*>* declItems;
	std::string* iterable;

	static StmtNode* createExprAsStmt(ExprNode* expr);
	static StmtNode* createIfStmt(ExprNode* cond, std::vector<StmtNode*>* p_true, std::vector<StmtNode*>* p_false);
	static StmtNode* createElseIfStmt(ExprNode* cond, std::vector<StmtNode*>* p_true, StmtNode* p_false);
	static StmtNode* createLoopStmt(ExprNode* cond, std::string* i, std::vector<StmtNode*>* body, StmtType type);
	static StmtNode* createReturnStmt(ExprNode* expr);
	static StmtNode* createBreakStmt();
	static StmtNode* createContinueStmt();
	static StmtNode* createFuncDecl(std::string* funcName, std::vector<ExprNode*>* params, DataType* type, std::vector<StmtNode*>* block);
	static StmtNode* createClassDecl(std::string* className, std::string* parentName, std::vector<StmtNode*>* body);
	static StmtNode* createClassMember(StmtNode* stmt, std::string* accessMod, bool isStatic, StmtType type);
	static StmtNode* createDeclStmt(std::vector<ExprNode*>* items, StmtType type);
	static StmtNode* createSwitchStmt(ExprNode* expr, std::vector<StmtNode*>* body);
	static StmtNode* createCaseStmt(std::vector<ExprNode*>*, std::vector<StmtNode*>* body);

	void print() override;
	virtual std::string getNodeLabel() override;
};

struct Program
{
public:
	Program(std::vector<StmtNode*>* sl);
	std::vector<StmtNode*>* root;
	void print();
};