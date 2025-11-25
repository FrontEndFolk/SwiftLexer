#include "nodes.h"
#include "idManager.h"
#include "dotHelpers.h"
#include <iostream>
#include <sstream>
// ------------------------------------------------------------
// Âñïîìîãàòåëüíûå ôóíêöèè
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
    case StmtType::If:
        ss << "IfStmt";
        break;
    case StmtType::Switch:
        ss << "SwitchStmt";
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
        ss << "letDecl: " << *Name;
        break;
    case ExprType::Int:
        ss << "Int:" << Num;
        break;
    case ExprType::Float:
        ss << "Float:" << FloatNum;
        break;
    case ExprType::Bool:
        ss << "Bool:" << (boolVal ? "true" : "false");
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
    case ExprType::And:
        ss << "AND &&";
        break;
    case ExprType::Or:
        ss << "OR ||";
        break;
    case ExprType::Not:
        ss << "NOT !";
        break;
    case ExprType::Add:
        ss << "ADD +";
        break;
    case ExprType::Sub:
        ss << "SUB -";
        break;
    case ExprType::Mul:
        ss << "MUL *";
        break;
    case ExprType::Div:
        ss << "DIV /";
        break;
    case ExprType::Eq:
        ss << "EQ ==";
        break;
    case ExprType::Ne:
        ss << "NE !=";
        break;
    case ExprType::Lt:
        ss << "LT <";
        break;
    case ExprType::Le:
        ss << "LE <=";
        break;
    case ExprType::Gt:
        ss << "GT >";
        break;
    case ExprType::Ge:
        ss << "GE >=";
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

    std::cout << getSupportNodeLabel("StmtList", 1000/*êîñòûëü ïîòîìó ÷òî ó Program íåò id*/);

    for (auto stmt : *root)
    {
        std::cout << getSupportNode("StmtList", 1000) << " -> " << stmt->id << std::endl;
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
        if (dataType) {
            dataType->print();
        }
        if (expr) {
            expr->print();
        }
        break;

    case ExprType::Int:
        // íå íàäî íè÷åãî ïå÷àòàòü êðîìå label
        break;

    case ExprType::Float:
        // no need to print anything except label
        break;

    case ExprType::Bool:
        // no need to print anything except label
        break;

    case ExprType::Id:
        // íå íàäî íè÷åãî ïå÷àòàòü êðîìå label
        break;

    case ExprType::And:
    case ExprType::Or:
    case ExprType::Add:
    case ExprType::Sub:
    case ExprType::Mul:
    case ExprType::Div:
    case ExprType::Eq:
    case ExprType::Ne:
    case ExprType::Lt:
    case ExprType::Le:
    case ExprType::Gt:
    case ExprType::Ge:
        // Binary operations
        std::cout << id << " -> " << LeftExpr->id << std::endl;
        std::cout << id << " -> " << RightExpr->id << std::endl;
        LeftExpr->print();
        RightExpr->print();
        break;

    case ExprType::Not:
        // Unary operation
        std::cout << id << " -> " << LeftExpr->id << std::endl;
        LeftExpr->print();
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
        std::cout << id << " -> " << getSupportNode("LetdeclList", id) << std::endl;

        for (auto item : *declItems)
        {
            std::cout << getSupportNode("LetdeclList", id) << " -> " << item->id << std::endl;

            // Only print dataType if it exists
            if (item->dataType) {
                std::cout << item->id << " -> " << item->dataType->id << std::endl;
            }

            // Only print expr if it exists
            if (item->expr) {
                std::cout << item->id << " -> " << item->expr->id << std::endl;
            }

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

        std::cout << getSupportNode(suportNodeName.str(), id) << " -> " << Expr->id << "[label=\"iterable\"]" << std::endl;
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

    case StmtType::If:
        // Print condition
        std::cout << getSupportNodeLabel("Condition", id) << std::endl;
        std::cout << id << " -> " << getSupportNode("Condition", id) << std::endl;
        std::cout << getSupportNode("Condition", id) << " -> " << Expr->id << std::endl;
        Expr->print();

        // Print true block
        if (Block && !Block->empty()) {
            std::cout << getSupportNodeLabel("TrueBlock", id) << std::endl;
            std::cout << id << " -> " << getSupportNode("TrueBlock", id) << std::endl;
            for (auto stmt : *Block) {
                std::cout << getSupportNode("TrueBlock", id) << " -> " << stmt->id << std::endl;
                stmt->print();
            }
        }

        // Print false block
        if (ElseBlock && !ElseBlock->empty()) {
            std::cout << getSupportNodeLabel("FalseBlock", id) << std::endl;
            std::cout << id << " -> " << getSupportNode("FalseBlock", id) << std::endl;
            for (auto stmt : *ElseBlock) {
                std::cout << getSupportNode("FalseBlock", id) << " -> " << stmt->id << std::endl;
                stmt->print();
            }
        }
        break;

    case StmtType::Switch:
        // Print switch expression
        std::cout << getSupportNodeLabel("SwitchExpr", id) << std::endl;
        std::cout << id << " -> " << getSupportNode("SwitchExpr", id) << std::endl;
        std::cout << getSupportNode("SwitchExpr", id) << " -> " << Expr->id << std::endl;
        Expr->print();

        // Print cases
        if (Block && !Block->empty()) {
            std::cout << getSupportNodeLabel("Cases", id) << std::endl;
            std::cout << id << " -> " << getSupportNode("Cases", id) << std::endl;
            for (auto stmt : *Block) {
                std::cout << getSupportNode("Cases", id) << " -> " << stmt->id << std::endl;
                stmt->print();
            }
        }
        break;
    }
}





// ------------------------------------------------------------
// ExprNode
// ------------------------------------------------------------


ExprNode* ExprNode::createBinOperation(ExprNode* leftExpr, ExprNode* rightExpr, ExprType type) {
    ExprNode* binOpNode = new ExprNode();
    binOpNode->id = getNewId();
    binOpNode->exprType = type;
    binOpNode->LeftExpr = leftExpr;
    binOpNode->RightExpr = rightExpr;

    std::cout << "Called ExprNode::createBinOperation()" << std::endl;
    return binOpNode;
}

ExprNode* ExprNode::createUnOperation(ExprNode* expr, ExprType type) {
    ExprNode* unOpNode = new ExprNode();
    unOpNode->id = getNewId();
    unOpNode->exprType = type;
    unOpNode->LeftExpr = expr;

    std::cout << "Called ExprNode::createUnOperation()" << std::endl;
    return unOpNode;
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
    ExprNode* floatNode = new ExprNode();
    floatNode->id = getNewId();
    floatNode->FloatNum = val;
    floatNode->exprType = ExprType::Float;

    std::cout << "Called ExprNode::createFloat(" << val << ")" << std::endl;
    return floatNode;
}

ExprNode* ExprNode::createBool(bool val) {
    ExprNode* boolNode = new ExprNode();
    boolNode->id = getNewId();
    boolNode->boolVal = val;
    boolNode->exprType = ExprType::Bool;

    std::cout << "Called ExprNode::createBool(" << std::boolalpha << val << ")" << std::endl;
    return boolNode;
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

    //TODO DataType* type ìîæåòü áûòü nullptr â ñëó÷àå åñëè ìû ÿâíî íå óêçàëè òèï ïåðåìåíîé
    //â ýòîì ñëó÷àå òèï ïåðåìåííîé íóæíî îïðåäåëÿòü èç expr ÷òî ïî èäåå äîëæíî äåëàòüñÿ íà ýòàïå ñåìàíòè÷åñêîãî àíàëèçà

    std::cout << "Called ExprNode::createDeclExpr("
        << (id ? *id : "null")
        << ", type=" << (type ? type->typeLabel : "nullptr") << ")" << std::endl;
    return declExprNode;
}

ExprNode* ExprNode::createFuncParamExpr(std::string* paramName, std::string* label, DataType* type) {
    std::cout << "Called ExprNode::createFuncParamExpr("
        << (paramName ? *paramName : "null")
        << ", label=" << (label ? *label : "null")
        << ", type=" << (type ? type->typeLabel : "nullptr") << ")" << std::endl;
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
    StmtNode* ifStmt = new StmtNode();
    ifStmt->id = getNewId();
    ifStmt->stmtType = StmtType::If;
    ifStmt->Expr = cond;
    ifStmt->Block = p_true;
    ifStmt->ElseBlock = p_false;

    std::cout << "Called StmtNode::createIfStmt()" << std::endl;
    return ifStmt;
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
        << ", returnType=" << (type ? type->typeLabel : "nullptr") << ")" << std::endl;
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
        << "accessMod=" << (accessMod ? *accessMod : "nullptr")
        << ", isStatic=" << std::boolalpha << isStatic << ")" << std::endl;
    return nullptr;
}

StmtNode* StmtNode::createSwitchStmt(ExprNode* expr, std::vector<StmtNode*>* body) {
    StmtNode* switchStmt = new StmtNode();
    switchStmt->id = getNewId();
    switchStmt->stmtType = StmtType::Switch;
    switchStmt->Expr = expr;
    switchStmt->Block = body;

    std::cout << "Called StmtNode::createSwitchStmt()" << std::endl;
    return switchStmt;
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