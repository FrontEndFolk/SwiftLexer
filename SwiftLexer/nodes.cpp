#include "nodes.h"
#include "idManager.h"
#include "dotHelpers.h"
#include <iostream>
#include <sstream>
// ------------------------------------------------------------
// Вспомогательная тестовая функция
// ------------------------------------------------------------

std::string printExprType(ExprType type)
{
    std::stringstream ss;

    switch (type)   
    {
    case ExprType::array:
        ss << "\"array\"";
        break;
    }
    return ss.str();
}

void Mytest() {
    std::cout << "Called Mytest()" << std::endl;
}

std::string StmtNode::getNodeLabel() {
    std::stringstream ss;
    ss << " [label=\"";
    switch (stmtType) 
    {
        case StmtType::letDecl:
            ss << "LetDeclStmt";
            break;
        case StmtType::varDecl:
            ss << "VarDeclStmt";
            break;
        case StmtType::Expr:
            ss << "ExprStmt";
            break;
        case StmtType::funcDecl:
            ss << "FuncDecl:" << (FuncName ? *FuncName : "<anon>");
            break;
        case StmtType::funcDeclStmt:
            ss << "FuncDeclStmt";
            break;
        case StmtType::funcDeclArgList:
            ss << "FuncDeclArgList";
            break;
        case StmtType::funcDeclArg: 
            if (argLabel && *argLabel != "_") ss << *argLabel << " ";
            ss << (argName ? *argName : "?") << ":" << (argType ? argType->typeLabel : "?");
            if (hasDefaultValue) ss << " (default)";
            else ss << " (no default value)";
            break;
        case StmtType::returnStmt:
            ss << "ReturnStmt";
            break;
        case StmtType::classMemberInit:
            ss << "Init";
            break;
        case StmtType::classMemberDeinit:
            ss << "Deinit";
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
    case ExprType::Float:
        ss << "Float:" << FloatVal;
        break;
    case ExprType::Bool:
        ss << "Bool:" << std::boolalpha << BoolVal;
        break;
    case ExprType::StringLit:
        ss << "String:" << (StrVal ? *StrVal : "");
        break;
    case ExprType::funcParam:
        if (Label && *Label != "_") ss << *Label << " ";
        ss << (Name ? *Name : "?") << ":" << (dataType ? dataType->typeLabel : "?");
        break;
    case ExprType::FuncCall:
        ss << "FuncCall:" << (Name ? *Name : "?");
        if (exprList) ss << "(" << exprList->size() << " args)";
        break;
    case ExprType::Add: ss << "+"; break;
    case ExprType::Sub: ss << "-"; break;
    case ExprType::Mul: ss << "*"; break;
    case ExprType::Div: ss << "/"; break;
    case ExprType::Eq:  ss << "=="; break;
    case ExprType::Ne:  ss << "!="; break;
    case ExprType::Lt:  ss << "<"; break;
    case ExprType::Gt:  ss << ">"; break;
    case ExprType::Le:  ss << "<="; break;
    case ExprType::Ge:  ss << ">="; break;
    case ExprType::And: ss << "&&"; break;
    case ExprType::Or:  ss << "||"; break;
    case ExprType::Assign: ss << "="; break;
    case ExprType::UMinus: ss << "uminus"; break;
    case ExprType::Not: ss << "!"; break;

    case ExprType::FieldAccessCall:
        ss << "Expr access call with args: " << (Name ? *Name : "?");
        break;
    }
    
    ss << "\"]";
    return ss.str();
};

Program::Program(std::vector<StmtNode*>* sl) {
    root = sl;
}

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
    else if (*type == "Double") {
        base = BaseTypes::DOUBLE;
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


void Program::print() {
    
    for (auto stmt : *root)
    {
        std::cout << "StmtList" << " -> " << stmt->id << std::endl;
        stmt->print();
    }
};

void ExprNode::print()
{
    std::cout << id << getNodeLabel() << std::endl;

    switch (exprType)
    {
    case ExprType::decl:
        if (dataType) {
            dataType->print();
            std::cout << id << " -> " << dataType->id << " [label=\"type\"];" << std::endl;
        }
        if (expr) {
            expr->print();
            std::cout << id << " -> " << expr->id << " [label=\"init\"];" << std::endl;
        }
        break;

    case ExprType::Int:

    case ExprType::Float:

    case ExprType::StringLit:

    case ExprType::Id:

    case ExprType::Bool:
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

    case ExprType::UMinus:
    case ExprType::Not:
        if (expr) {
            expr->print();
            std::cout << id << " -> " << expr->id << std::endl;
        }
    break;

    case ExprType::funcParam:
        if (dataType) {
            dataType->print();
            std::cout << id << " -> " << dataType->id << " [label=\"type\"];" << std::endl;
        }
        break;

    case ExprType::FuncCall:
        if (expr) { expr->print(); std::cout << id << " -> " << expr->id << " [label=\"scope\"];" << std::endl; }
        if (exprList && !exprList->empty()) {
            std::cout << id << " -> " << getSupportNode("args", id) << " [label=\"args\"];" << std::endl;
            std::cout << getSupportNodeLabel("args", id) << std::endl;
            for (auto arg : *exprList) {
                if (arg) {
                    arg->print();
                    std::cout << getSupportNode("args", id) << " -> " << arg->id << std::endl;
                }
            }
        }
        break;
    case ExprType::Add:
    case ExprType::Sub:
    case ExprType::Mul:
    case ExprType::Div:
    case ExprType::Eq:
    case ExprType::Ne:
    case ExprType::Lt:
    case ExprType::Gt:
    case ExprType::Le:
    case ExprType::Ge:
    case ExprType::And:
    case ExprType::Or:
    case ExprType::Assign:
        if (LeftExpr) { LeftExpr->print(); std::cout << id << " -> " << LeftExpr->id << std::endl; }
        if (RightExpr) { RightExpr->print(); std::cout << id << " -> " << RightExpr->id << std::endl; }
        break;

    case ExprType::FieldAccessCall:
        if (expr) {
            expr->print();
            std::cout << id << " -> " << expr->id << " [label=\"access\"];" << std::endl;
        }
        if (exprList && !exprList->empty()) {
            std::cout << id << " -> " << getSupportNode("args", id) << " [label=\"args\"];" << std::endl;
            std::cout << getSupportNodeLabel("args", id) << std::endl;
            for (auto arg : *exprList) {
                if (arg) {
                    arg->print();
                    std::cout << getSupportNode("args", id) << " -> " << arg->id << std::endl;
                }
            }
        }
        break;
    }
    
}

void StmtNode::print() 
{
    std::cout << id << getNodeLabel() << std::endl;

    switch (stmtType) 
    {
        case StmtType::letDecl:
            std::cout << getSupportNodeLabel("LetdeclList", id) << std::endl;
            std::cout << id  <<" -> " << getSupportNode("LetdeclList",id) << std::endl;
            
            for (auto item : *declItems)
            {
                if (!item) continue;
                std::cout << getSupportNode("LetdeclList", id) << " -> " << item->id << std::endl;
                if (item->dataType) {
                    std::cout << item->id << " -> " << item->dataType->id << std::endl;
                }
                if (item->expr) {
                    std::cout << item->id << " -> " << item->expr->id << std::endl;
                }
                
                item->print();
            }

        break;

        case StmtType::varDecl:
            std::cout << getSupportNodeLabel("VardeclList", id) << std::endl;
            std::cout << id << " -> " << getSupportNode("VardeclList", id) << std::endl;

            for (auto item : *declItems) {

                if (!item) continue;
                std::cout << getSupportNode("VardeclList", id) << " -> " << item->id << std::endl;
                if (item->dataType) {
                    std::cout << item->id << " -> " << item->dataType->id << std::endl;
                }
                if (item->expr) {
                    std::cout << item->id << " -> " << item->expr->id << std::endl;
                }

                item->print();
            }
            break;

        case StmtType::Expr:
            if (stmtType == StmtType::Expr && Expr && Expr->exprType == ExprType::Int) {
            }
            else if (Expr) {
                std::cout << id << " -> " << Expr->id << std::endl;
                Expr->print();
            }
            
        break;

        case StmtType::funcDeclStmt:
            std::cout << id << getNodeLabel() << std::endl; 
            if (funcDeclNode) {
                std::cout << id << " -> " << funcDeclNode->id << " [label=\"FuncDecl\"];" << std::endl;
                funcDeclNode->print();
            }
            break;
        case StmtType::funcDecl:
            if (FuncParamsList) {
                std::cout << id << " -> " << FuncParamsList->id << " [label=\"params\"];" << std::endl;
                FuncParamsList->print();
            }

            if (ReturnType) {
                std::cout << id << " -> " << ReturnType->id << " [label=\"return type\"];" << std::endl;
                ReturnType->print();
            }

            if (Block) {
                std::string bodyListId = getSupportNode("StmtList", id);  // parent = funcDecl.id
                std::cout << getSupportNodeLabel("StmtList", id) << std::endl;
                std::cout << id << " -> " << bodyListId << " [label=\"body\"];" << std::endl;

                for (auto stmt : *Block) {
                    std::cout << bodyListId << " -> " << stmt->id << ";" << std::endl;
                    stmt->print();
                }
            }
            break;

        case StmtType::funcDeclArgList:
            std::cout << id << getNodeLabel() << std::endl;
            if (args && !args->empty()) {
                for (auto arg : *args) {
                    if (arg) {
                        std::cout << id << " -> " << arg->id << " [label=\"arg\"];" << std::endl;
                        arg->print();
                    }
                }
            }
            break;

        case StmtType::funcDeclArg:
            std::cout << id << getNodeLabel() << std::endl; 
            if (argType) {
                std::cout << id << " -> " << argType->id << " [label=\"type\"];" << std::endl;
                argType->print();
            }
            break;

        case StmtType::returnStmt:
            std::cout << id << " [label=\"ReturnStmt\"]" << std::endl;
            if (Expr) {
                std::cout << id << " -> " << Expr->id << " [label=\"expr\"];" << std::endl;
                Expr->print();
            }
            break;

        case StmtType::classMemberInit:
        case StmtType::classMemberDeinit:
            if (MemberStmt) {
                std::cout << id << " -> " << MemberStmt->id << std::endl;
                MemberStmt->print();
            }
            break;
    }
}





// ------------------------------------------------------------
// ExprNode — заглушки
// ------------------------------------------------------------


ExprNode* ExprNode::createBinOperation(ExprNode* leftExpr, ExprNode* rightExpr, ExprType type) {
    ExprNode* binOperNode = new ExprNode();
    binOperNode->id = getNewId();
    binOperNode->LeftExpr = leftExpr;
    binOperNode->RightExpr = rightExpr;
    binOperNode->exprType = type;

    std::cout << "Called ExprNode::createBinOperation( , type=" << static_cast<int>(type) << ")" << std::endl;
    return binOperNode;
}

ExprNode* ExprNode::createUnOperation(ExprNode* expr, ExprType type) {
    ExprNode* unOperNode = new ExprNode();
    unOperNode->id = getNewId();
    unOperNode->expr = expr;
    unOperNode->exprType = type;

    std::cout << "Called ExprNode::createUnOperation( , type=" << static_cast<int>(type) << ")" << std::endl;
    return unOperNode;
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
    floatNode->FloatVal = val;
    floatNode->exprType = ExprType::Float;

    std::cout << "Called ExprNode::createFloat(" << val << ")" << std::endl;
    return floatNode;
}

ExprNode* ExprNode::createBool(bool val) {
    ExprNode* boolNode = new ExprNode();
    boolNode->id = getNewId();
    boolNode->BoolVal = val;
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

ExprNode* ExprNode::createFieldAccessNode(ExprNode* expr, std::string* id) {
    ExprNode* fieldAccessnode = new ExprNode();
    fieldAccessnode->id = getNewId();
    fieldAccessnode->expr = expr;
    fieldAccessnode->Name = id;
    fieldAccessnode->exprType = ExprType::Id;

    std::cout << "Called ExprNode::createFieldAccessNode(" << (id ? *id : "null") << ")" << std::endl;
    return fieldAccessnode;
}

ExprNode* ExprNode::createFieldAccessCall(ExprNode* scope, std::string* methodName, std::vector<ExprNode*>* args) {
    ExprNode* fieldAccessCallnode = new ExprNode();
    fieldAccessCallnode->id = getNewId();
    fieldAccessCallnode->exprType = ExprType::FieldAccessCall;
    fieldAccessCallnode->expr = scope;
    fieldAccessCallnode->Name = methodName;
    fieldAccessCallnode->exprList = args;  

    std::cout << "Called ExprNode::createFieldAccessCall("
        << (scope ? "scope" : "null")
        << ", method=" << (methodName ? *methodName : "null")
        << ", args=" << (args ? args->size() : 0) << ")" << std::endl;
    return fieldAccessCallnode;
}

ExprNode* ExprNode::createFuncCall(std::vector<ExprNode*>* exprList, std::string* id, ExprNode* scope) {
    ExprNode* funcCallNode = new ExprNode();
    funcCallNode->id = getNewId();
    funcCallNode->Name = id;
    funcCallNode->exprList = exprList;
    funcCallNode->expr = scope;
    funcCallNode->exprType = ExprType::FuncCall;

    std::cout << "Called ExprNode::createFuncCall("
        << (id ? *id : "null")
        << ", args=" << (exprList ? exprList->size() : 0)
        << ", scope=" << (scope ? "yes" : "no") << ")" << std::endl;
    return funcCallNode;
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

    std::cout << "Called ExprNode::createDeclExpr("<< (id ? *id : "null") << ", type=" << (type ? type->typeLabel : "<no type>") << ")" << std::endl;
    return declExprNode;
}

ExprNode* ExprNode::createFuncParamExpr(std::string* paramName, std::string* label, DataType* type) {
    ExprNode* funcParamExprNode = new ExprNode();
    funcParamExprNode->id = getNewId();
    funcParamExprNode->Name = paramName;
    funcParamExprNode->Label = label;
    funcParamExprNode->dataType = type;
    funcParamExprNode->exprType = ExprType::funcParam;

    std::cout << "Called ExprNode::createFuncParamExpr("
        << "param=" << (paramName ? *paramName : "null")
        << ", label=" << (label ? *label : "null")
        << ", type=" << (type ? type->typeLabel : "?") << ")" << std::endl;
    return funcParamExprNode;
}

ExprNode* ExprNode::createFuncArgExpr(std::string* argName, ExprNode* expr) {
    ExprNode* funcArgExprNode = new ExprNode();
    funcArgExprNode->id = getNewId();
    funcArgExprNode->Name = argName;
    funcArgExprNode->expr = expr;
    funcArgExprNode->exprType = ExprType::decl;

    std::cout << "Called ExprNode::createFuncArgExpr("
        << "arg=" << (argName ? *argName : "positional") << ")" << std::endl;
    return funcArgExprNode;
}

ExprNode* ExprNode::createString(std::string* s) {
    ExprNode* node = new ExprNode();
    node->id = getNewId();
    node->StrVal = s;
    node->exprType = ExprType::StringLit;
    std::cout << "Called ExprNode::createString(\"" << (s ? *s : "") << "\")" << std::endl;
    return node;
}

// ------------------------------------------------------------
// StmtNode — заглушки
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

StmtNode* StmtNode::createLoopStmt(ExprNode* cond, std::string* i, std::vector<StmtNode*>*, StmtType type) {
    std::cout << "Called StmtNode::createLoopStmt()" << std::endl;
    return nullptr;
}

StmtNode* StmtNode::createReturnStmt(ExprNode* expr) {
    StmtNode* returnStmtNode = new StmtNode();
    returnStmtNode->id = getNewId();
    returnStmtNode->stmtType = StmtType::returnStmt;
    returnStmtNode->Expr = expr;
    std::cout << "Called StmtNode::createReturnStmt()" << std::endl;
    return returnStmtNode;
}

StmtNode* StmtNode::createBreakStmt() {
    std::cout << "Called StmtNode::createBreakStmt()" << std::endl;
    return nullptr;
}

StmtNode* StmtNode::createContinueStmt() {
    std::cout << "Called StmtNode::createContinueStmt()" << std::endl;
    return nullptr;
}

StmtNode* StmtNode::createFuncDeclStmt(StmtNode* funcDecl) {
    StmtNode* node = new StmtNode();
    node->id = getNewId();
    node->stmtType = StmtType::funcDeclStmt;
    node->funcDeclNode = funcDecl;
    return node;
}

StmtNode* StmtNode::createFuncDecl(std::string* funcName, std::vector<ExprNode*>* params, DataType* returnType, std::vector<StmtNode*>* body) {
    StmtNode* funcDeclNode = new StmtNode();
    funcDeclNode->id = getNewId();
    funcDeclNode->stmtType = StmtType::funcDecl;

    funcDeclNode->FuncName = funcName;
    funcDeclNode->ReturnType = returnType;
    funcDeclNode->Block = body;

    if (params && !params->empty()) {
        funcDeclNode->FuncParamsList = StmtNode::createFuncDeclArgList(params);
    }

    std::cout << "Called StmtNode::createFuncDecl " << (funcName ? *funcName : "<init/deinit>")
        << ", params=" << (params ? params->size() : 0)
        << ", body=" << (body ? body->size() : 0) << std::endl;
    return funcDeclNode;
}

StmtNode* StmtNode::createClassDecl(std::string* className, std::string* parentName, std::vector<StmtNode*>* body) {
    std::cout << "Called StmtNode::createClassDecl("
        << (className ? *className : "null")
        << ", parent=" << (parentName ? *parentName : "null") << ")" << std::endl;
    return nullptr;
}

StmtNode* StmtNode::createClassMember(StmtNode* stmt, std::string* accessMod, bool isStatic, StmtType type) {
    StmtNode* classMemberNode = new StmtNode();
    classMemberNode->id = getNewId();
    classMemberNode->stmtType = type;
    classMemberNode->MemberStmt = stmt;
    classMemberNode->AccessMod = accessMod;
    classMemberNode->IsStatic = isStatic;

    std::cout << "Called StmtNode::createClassMember(";
    switch (type) {
    case classMemberInit:   std::cout << "init"; break;
    case classMemberDeinit: std::cout << "deinit"; break;
    default: std::cout << "?";
    }
    std::cout << ", access=" << (accessMod ? *accessMod : "internal") << std::endl;
    return classMemberNode;
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

StmtNode* StmtNode::createFuncDeclArgList(std::vector<ExprNode*>* args) {
    StmtNode* node = new StmtNode();
    node->id = getNewId();
    node->stmtType = StmtType::funcDeclArgList;
    node->args = args;
    return node;
}