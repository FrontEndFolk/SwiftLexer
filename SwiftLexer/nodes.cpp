#include "nodes.h"
#include <iostream>

// ------------------------------------------------------------
// ¬спомогательна€ тестова€ функци€
// ------------------------------------------------------------
void Mytest() {
    std::cout << "Called Mytest()" << std::endl;
}

// ------------------------------------------------------------
// ExprNode Ч заглушки
// ------------------------------------------------------------

ExprNode* ExprNode::createBinOperation(ExprNode* leftExpr, ExprNode* rightExpr, ExprType type) {
    std::cout << "Called ExprNode::createBinOperation()" << std::endl;
    return nullptr;
}

ExprNode* ExprNode::createUnOperation(ExprNode* expr, ExprType type) {
    std::cout << "Called ExprNode::createUnOperation()" << std::endl;
    return nullptr;
}

ExprNode* ExprNode::createInt(long long val) {
    std::cout << "Called ExprNode::createInt(" << val << ")" << std::endl;
    return nullptr;
}

ExprNode* ExprNode::createId(std::string* id) {
    std::cout << "Called ExprNode::createId(" << (id ? *id : "null") << ")" << std::endl;
    return nullptr;
}

ExprNode* ExprNode::createFloat(float val) {
    std::cout << "Called ExprNode::createFloat(" << val << ")" << std::endl;
    return nullptr;
}

ExprNode* ExprNode::createBool(bool val) {
    std::cout << "Called ExprNode::createBool(" << std::boolalpha << val << ")" << std::endl;
    return nullptr;
}

ExprNode* ExprNode::createSubscriptNode(ExprNode* id, ExprNode* subscripValue) {
    std::cout << "Called ExprNode::createSubscriptNode()" << std::endl;
    return nullptr;
}

ExprNode* ExprNode::createFiledAccessNode(ExprNode* expr, std::string* id) {
    std::cout << "Called ExprNode::createFiledAccessNode(" << (id ? *id : "null") << ")" << std::endl;
    return nullptr;
}

ExprNode* ExprNode::createFuncCall(std::vector<ExprNode*>* exprList, std::string* id, ExprNode* scope) {
    std::cout << "Called ExprNode::createFuncCall(" << (id ? *id : "null") << ")" << std::endl;
    return nullptr;
}

ExprNode* ExprNode::createArray(std::vector<ExprNode*>* exprList) {
    std::cout << "Called ExprNode::createArray()" << std::endl;
    return nullptr;
}

ExprNode* ExprNode::createDeclExpr(std::string* id, ExprNode* expr, std::string* type) {
    std::cout << "Called ExprNode::createDeclExpr("
        << (id ? *id : "null") << ", type=" << type << ")" << std::endl;
    return nullptr;
}

ExprNode* ExprNode::createFuncParamExpr(std::string* paramName, std::string* label, std::string* type) {
    std::cout << "Called ExprNode::createFuncParamExpr("
        << (paramName ? *paramName : "null")
        << ", label=" << (label ? *label : "null")
        << ", type=" << type << ")" << std::endl;
    return nullptr;
}

ExprNode* ExprNode::createFuncArgExpr(std::string* argName, ExprNode* expr) {
    std::cout << "Called ExprNode::createFuncArgExpr("
        << (argName ? *argName : "null") << ")" << std::endl;
    return nullptr;
}

// ------------------------------------------------------------
// StmtNode Ч заглушки
// ------------------------------------------------------------

StmtNode* StmtNode::createExprAsStmt(ExprNode* expr) {
    std::cout << "Called StmtNode::createExprAsStmt()" << std::endl;
    return nullptr;
}

StmtNode* StmtNode::createIfStmt(ExprNode* cond, std::vector<StmtNode*>* p_true, std::vector<StmtNode*>* p_false) {
    std::cout << "Called StmtNode::createIfStmt()" << std::endl;
    return nullptr;
}

StmtNode* StmtNode::createElseIfStmt(ExprNode* cond, std::vector<StmtNode*>* p_true, StmtNode* p_false) {

    std::cout << "Called StmtNode::createElseIfStmt()" << std::endl;
    return nullptr;
}

StmtNode* StmtNode::createLoopStmt(ExprNode* cond, std::string* i, std::vector<StmtNode*>*, StmtType type) {
    std::cout << "Called StmtNode::createLoopStmt()" << std::endl;
    return nullptr;
}

StmtNode* StmtNode::createReturnStmt(ExprNode* expr) {
    std::cout << "Called StmtNode::createReturnStmt()" << std::endl;
    return nullptr;
}

StmtNode* StmtNode::createBreakStmt() {
    std::cout << "Called StmtNode::createBreakStmt()" << std::endl;
    return nullptr;
}

StmtNode* StmtNode::createContinueStmt() {
    std::cout << "Called StmtNode::createContinueStmt()" << std::endl;
    return nullptr;
}

StmtNode* StmtNode::createFuncDecl(std::string* funcName, std::vector<ExprNode*>* params, std::string* type, std::vector<StmtNode*>* block) {
    std::cout << "Called StmtNode::createFuncDecl("
        << (funcName ? *funcName : "null")
        << ", returnType=" << type << ")" << std::endl;
    return nullptr;
}

StmtNode* StmtNode::createClassDecl(std::string* className, std::string* parentName, std::vector<StmtNode*>* body) {
    std::cout << "Called StmtNode::createClassDecl("
        << (className ? *className : "null")
        << ", parent=" << (parentName ? *parentName : "null") << ")" << std::endl;
    return nullptr;
}

StmtNode* StmtNode::createClassMember(StmtNode* stmt, std::string* accessMod, bool isStatic, StmtType type) {
    std::cout << "Called StmtNode::createClassMember("
        << "accessMod=" << accessMod
        << ", isStatic=" << std::boolalpha << isStatic << ")" << std::endl;
    return nullptr;
}

StmtNode* StmtNode::createSwitchStmt(ExprNode* expr, std::vector<StmtNode*>* body) {
    std::cout << "Called StmtNode::createSwitchStmt()" << std::endl;
    return nullptr;
}
StmtNode* StmtNode::createCaseStmt(std::vector<ExprNode*>*, std::vector<StmtNode*>* body) {
    std::cout << "Called StmtNode::createCaseStmt()" << std::endl;
    return nullptr;
}

StmtNode* StmtNode::createDeclStmt(std::vector<ExprNode*>* items, StmtType type) {
    std::cout << "Called StmtNode::createDeclStmt()" << std::endl;
    return nullptr;
}