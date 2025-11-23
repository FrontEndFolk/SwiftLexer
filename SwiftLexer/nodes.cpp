#include "nodes.h"
#include "idManager.h"
#include "dotHelpers.h"
#include <iostream>
#include <sstream>
// ------------------------------------------------------------
// Вспомогательные функции
// ------------------------------------------------------------

std::string StmtNode::getNodeLabel() {
    std::stringstream ss;
    ss << " [label=\"";
    switch (stmtType) 
    {
        case StmtType::letDecl:
            ss << "LetDeclStmt";
            break;
        case StmtType::Expr:
            ss << "ExprStmt";
            break;
        
        case StmtType::For:
            ss << "LoopStmt";
            break;
        case StmtType::While:
            ss << "LoopStmt";
            break;
    }
    ss << "\"]";
    return ss.str();
};
std::string ExprNode::getNodeLabel() {
    std::stringstream ss;
    ss << " [label=\"";
    switch (exprType)
    {
    case ExprType::decl:
        ss << "letDecl: " << *Name ;
        break;
    case ExprType::Int:
        ss << "Int:" << Num;
        break;
    case ExprType::array:
        ss << "array";
        break;
    case ExprType::arBrackets:
        ss << "arBrackets[]";
        break;
    case ExprType::Id:
        ss << "Id: " << *Name;
        break;
    case ExprType::ClosedRange:
        ss << "ClosedRange ...";
        break;
    case ExprType::OpenedRange:
        ss << "OpenedRange ..<";
        break;
    }

    
    ss << "\"]";
    return ss.str();
};

std::string DataType::getNodeLabel()
{
    std::stringstream ss;

    if (isArray()) {
        ss << id << " [label = " << "\"Type:Array" << "\"]" << std::endl;
        ss << "Type:" << typeLabel << id << " [label =\"" << "Type:" << typeLabel << "\"]" << std::endl;
    }
    else
    {
        ss << id << " [label = \"" << "Type:" << typeLabel << "\"]" << std::endl;
    }

    return ss.str();
}

bool DataType::isArray()
{
    return arDimension > 0;
};


// ------------------------------------------------------------
// DataType init, print
// ------------------------------------------------------------
DataType::DataType(std::string* type) 
{
    id = getNewId();

    typeLabel = *type;
    arDimension = 0;

    if (*type == "Int")
    {
        base = BaseTypes::INT;
    }
    else if (*type == "Bool")
    {
        base = BaseTypes::BOOL;
    }
    else if (*type == "UInt")
    {
        base = BaseTypes::UINT;
    }
    else if (*type == "Float")
    {
        base = BaseTypes::FLOAT;
    }
    else if (*type == "String")
    {
        base = BaseTypes::STRING;
    }
    else 
    {
        className = *type;
    }
}

void DataType::print()
{
    std::cout << getNodeLabel();

    if (isArray()) 
    {
        std::cout << id << " -> " << "Type:" << typeLabel << id << std::endl;
    }
}



// ------------------------------------------------------------
// Program init,  print
// ------------------------------------------------------------

Program::Program(std::vector<StmtNode*>* sl) {
    root = sl;
}

void Program::print() {
    
    std::cout << getSupportNodeLabel("StmtList", 1000/*костыль потому что у Program нет id*/);

    for (auto stmt : *root)
    {
        std::cout << getSupportNode("StmtList",1000) << " -> " << stmt->id << std::endl;
        stmt->print();
    }
};



// ------------------------------------------------------------
// ExprNode print
// ------------------------------------------------------------
void ExprNode::print()
{
    std::cout << id << getNodeLabel() << std::endl;

    switch (exprType)
    {
    case ExprType::decl:
        dataType->print();
        expr->print();
        break;

    case ExprType::Int:
        // не надо ничего печатать кроме label
        break;

    case ExprType::Id:
        // не надо ничего печатать кроме label
        break;

    case ExprType::array:
        std::cout << getSupportNodeLabel("exprList", id) << std::endl;
        std::cout << id << " -> " << getSupportNode("exprList", id) << std::endl;
        for (auto item : *exprList) 
        {
            std::cout << item->id << item->getNodeLabel() << std::endl;
            std::cout << getSupportNode("exprList", id) << " -> " << item->id << std::endl;
        }
        break;

    case ExprType::arBrackets:
        LeftExpr->print();
        RightExpr->print();
        
        std::cout << id << " -> " << LeftExpr->id << std::endl;
        std::cout << id << " -> " << RightExpr->id << std::endl;

        break;
    
    case ExprType::ClosedRange:
        std::cout << id << " -> " << LeftExpr->id << std::endl;
        std::cout << id << " -> " << RightExpr->id << std::endl;

        LeftExpr->print();
        RightExpr->print();

        break;
    case ExprType::OpenedRange:
        std::cout << id << " -> " << LeftExpr->id << std::endl;
        std::cout << id << " -> " << RightExpr->id << std::endl;

        LeftExpr->print();
        RightExpr->print();

        break;
    }
}
// ------------------------------------------------------------
// StmtNode print
// ------------------------------------------------------------

void StmtNode::print() 
{
    std::cout << id << getNodeLabel() << std::endl;


    std::stringstream suportNodeName;
    switch (stmtType) 
    {
        case StmtType::letDecl:
            std::cout << getSupportNodeLabel("LetdeclList", id) << std::endl;
            std::cout << id  <<" -> " << getSupportNode("LetdeclList",id) << std::endl;
            
            for (auto item : *declItems)
            {
                std::cout << getSupportNode("LetdeclList", id) << " -> " << item->id << std::endl;
                std::cout << item->id << " -> " << item->dataType->id << std::endl;
                std::cout << item->id << " -> " << item->expr->id << std::endl;
                
                item->print();
            }
            break;

        case StmtType::Expr:
            std::cout << id << " -> " << Expr->id << std::endl;
            Expr->print();
            break;
        
        case StmtType::For:
            
            suportNodeName << "ForLoop iterable id: " << *iterable;

            std::cout << getSupportNodeLabel(suportNodeName.str(), id) << std::endl;
            std::cout << getSupportNodeLabel("StmtList", id) << std::endl;

            std::cout << id << " -> " << getSupportNode(suportNodeName.str(), id) << std::endl;

            Expr->print();
            
            for (auto stmt : *Block) 
            {
                stmt->print();
                std::cout << getSupportNode("StmtList", id) << " -> " << stmt->id << std::endl;
            }

            std::cout << getSupportNode(suportNodeName.str(), id) << " -> " << Expr->id << "[label=\"iterable\"]" <<std::endl;
            std::cout << getSupportNode(suportNodeName.str(), id) << " -> " << getSupportNode("StmtList", id) << "[label=\"body\"]" << std::endl;

            break;

        case StmtType::While:
            
            suportNodeName.clear();
            suportNodeName << "WhileLoop";

            std::cout << getSupportNodeLabel(suportNodeName.str(), id) << std::endl;
            std::cout << getSupportNodeLabel("StmtList", id) << std::endl;

            std::cout << id << " -> " << getSupportNode(suportNodeName.str(), id) << std::endl;

            Expr->print();

            for (auto stmt : *Block)
            {
                stmt->print();
                std::cout << getSupportNode("StmtList", id) << " -> " << stmt->id << std::endl;
            }

            std::cout << getSupportNode(suportNodeName.str(), id) << " -> " << Expr->id << "[label=\"condition\"]" << std::endl;
            std::cout << getSupportNode(suportNodeName.str(), id) << " -> " << getSupportNode("StmtList", id) << "[label=\"body\"]" << std::endl;

            break;
    }
}





// ------------------------------------------------------------
// ExprNode
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
    ExprNode* intNode = new ExprNode();
    intNode->id = getNewId();
    intNode->Num = val;
    intNode->exprType = ExprType::Int;

    std::cout << "Called ExprNode::createInt(" << val << ")" << std::endl;
    return intNode;
}

ExprNode* ExprNode::createId(std::string* id) {
    ExprNode* expr = new ExprNode();
    expr->id = getNewId();
    expr->exprType = ExprType::Id;
    expr->Name = id;
    std::cout << "Called ExprNode::createId(" << (id ? *id : "null") << ")" << std::endl;
    return expr;
}

ExprNode* ExprNode::createFloat(float val) {
    std::cout << "Called ExprNode::createFloat(" << val << ")" << std::endl;
    return nullptr;
}

ExprNode* ExprNode::createBool(bool val) {
    std::cout << "Called ExprNode::createBool(" << std::boolalpha << val << ")" << std::endl;
    return nullptr;
}

ExprNode* ExprNode::createSubscriptNode(ExprNode* id, ExprNode* subscripValue) 
{
    ExprNode* expr = new ExprNode();
    expr->id = getNewId();
    expr->exprType = ExprType::arBrackets;
    expr->LeftExpr = id;
    expr->RightExpr = subscripValue;

    std::cout << "Called ExprNode::createSubscriptNode()" << std::endl;
    return expr;
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
    ExprNode* arrayNode = new ExprNode();
    arrayNode->id = getNewId();
    arrayNode->exprList = exprList;
    arrayNode->exprType = ExprType::array;

    std::cout << "Called ExprNode::createArray()" << std::endl;
    
    return arrayNode;
}

ExprNode* ExprNode::createDeclExpr(std::string* id, ExprNode* expr, DataType* type) {
    ExprNode* declExprNode = new ExprNode();
    declExprNode->id = getNewId();
    declExprNode->Name = id;
    declExprNode->expr = expr;
    declExprNode->exprType = ExprType::decl;
    declExprNode->dataType = type;

    //TODO DataType* type можеть быть nullptr в случае если мы явно не укзали тип переменой
    //в этом случае тип переменной нужно определять из expr что по идее должно делаться на этапе семантического анализа

    std::cout << "Called ExprNode::createDeclExpr("
        << (id ? *id : "null") << ", type=" << type->typeLabel << ")" << std::endl;
    return declExprNode;
}

ExprNode* ExprNode::createFuncParamExpr(std::string* paramName, std::string* label, DataType* type) {
    std::cout << "Called ExprNode::createFuncParamExpr("
        << (paramName ? *paramName : "null")
        << ", label=" << (label ? *label : "null")
        << ", type=" << type->typeLabel << ")" << std::endl;
    return nullptr;
}

ExprNode* ExprNode::createFuncArgExpr(std::string* argName, ExprNode* expr) {
    std::cout << "Called ExprNode::createFuncArgExpr("
        << (argName ? *argName : "null") << ")" << std::endl;
    return nullptr;
}

ExprNode* ExprNode::createLoopRange(ExprNode* lowerBound, ExprNode* upperBound, ExprType type) 
{
    ExprNode* expr = new ExprNode();
    expr->id = getNewId();
    expr->exprType = type;
    expr->LeftExpr = lowerBound;
    expr->RightExpr = upperBound;

    std::cout << "Called ExprNode::createLoopRange()" << std::endl;
    return expr;
}

// ------------------------------------------------------------
// StmtNode
// ------------------------------------------------------------

StmtNode* StmtNode::createExprAsStmt(ExprNode* expr) {

    StmtNode* stmt = new StmtNode();
    stmt->id = getNewId();
    stmt->Expr = expr;
    stmt->stmtType = StmtType::Expr;

    std::cout << "Called StmtNode::createExprAsStmt()" << std::endl;
    return stmt;
}

StmtNode* StmtNode::createIfStmt(ExprNode* cond, std::vector<StmtNode*>* p_true, std::vector<StmtNode*>* p_false) {
    std::cout << "Called StmtNode::createIfStmt()" << std::endl;
    return nullptr;
}

StmtNode* StmtNode::createElseIfStmt(ExprNode* cond, std::vector<StmtNode*>* p_true, StmtNode* p_false) {

    std::cout << "Called StmtNode::createElseIfStmt()" << std::endl;
    return nullptr;
}

StmtNode* StmtNode::createLoopStmt(ExprNode* cond, std::string* i, std::vector<StmtNode*>* body, StmtType type) {
    
    StmtNode* stmt = new StmtNode();
    stmt->id = getNewId();
    stmt->stmtType = type;
    stmt->Expr = cond;
    stmt->iterable = i;
    stmt->Block = body;

    std::cout << "Called StmtNode::createLoopStmt()" << std::endl;
    return stmt;
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

StmtNode* StmtNode::createFuncDecl(std::string* funcName, std::vector<ExprNode*>* params, DataType* type, std::vector<StmtNode*>* block) {
    std::cout << "Called StmtNode::createFuncDecl("
        << (funcName ? *funcName : "null")
        << ", returnType=" << type->typeLabel << ")" << std::endl;
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
    StmtNode* declStmtNode = new StmtNode();
    declStmtNode->id = getNewId();
    declStmtNode->stmtType = type;
    declStmtNode->declItems = items;

    std::cout << "Called StmtNode::createDeclStmt()" << std::endl;
    return declStmtNode;
}


