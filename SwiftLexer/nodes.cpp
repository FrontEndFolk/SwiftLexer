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
    case StmtType::Break:
        ss << "Break";
        break;
    case StmtType::Continue:
        ss << "Continue";
        break;

    case StmtType::If:
        ss << "IfStmt";
        break;
    case StmtType::Switch:
        ss << "SwitchStmt";
        break;
    case StmtType::CaseStmt:
        ss << "CaseStmt";
        break;
    case StmtType::varDecl:
            ss << "VarDeclStmt";
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
        case StmtType::classDecl:
            ss << "Class:" << *className;
            if (parentName != nullptr) 
            {
                ss << " Parent: " << *parentName;
            }
            if (Block == nullptr) 
            {
                ss << " No body";
            }
            ss << std::endl;
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
    case ExprType::Assign: ss << "="; break;
    case ExprType::UMinus: ss << "uminus"; break;

    case ExprType::FieldAccessCall:
        ss << "Expr access call with args: " << (Name ? *Name : "?");
        break;
    case ExprType::funcArg:
        ss << "Param:" << *Name;
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



// ------------------------------------------------------------
// Program init,  print
// ------------------------------------------------------------

Program::Program(std::vector<StmtNode*>* sl) {
    root = sl;
}

void Program::print() {
    std::cout << "==================== DOT ====================" << std::endl;
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
            std::cout << id << " -> " << dataType->id << " [label=\"type\"];" << std::endl;
        }
        if (expr) {
            expr->print();
            std::cout << id << " -> " << expr->id << " [label=\"init\"];" << std::endl;
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

    case ExprType::StringLit:

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
    case ExprType::FuncCall:
        if (expr) { expr->print(); std::cout << id << " -> " << expr->id << " [label=\"scope\"];" << std::endl; }
        if (exprList && !exprList->empty()) {
            std::cout << id << " -> " << getSupportNode("args", id) << " [label=\"args\"];" << std::endl;
            std::cout << getSupportNodeLabel("args", id) << std::endl;
            for (auto arg : *exprList) {
                if (arg != nullptr) {
                    arg->print();
                    std::cout << getSupportNode("args", id) << " -> " << arg->id << std::endl;
                }
            }
        }
        break;
    case ExprType::funcArg:
        std::cout << id << " -> " << expr->id << std::endl;
        expr->print();
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
                if (!item) continue;
                std::cout << getSupportNode("LetdeclList", id) << " -> " << item->id << std::endl;
                
                item->print();
            }

        break;

        case StmtType::varDecl:
            std::cout << getSupportNodeLabel("VardeclList", id) << std::endl;
            std::cout << id << " -> " << getSupportNode("VardeclList", id) << std::endl;

            for (auto item : *declItems) {

                if (!item) continue;
                std::cout << getSupportNode("VardeclList", id) << " -> " << item->id << std::endl;

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

    case StmtType::For:

        suportNodeName.clear();
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

        std::cout << getSupportNode(suportNodeName.str(), id) << " -> " << Expr->id << "[label=\"range\"]" << std::endl;
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
        // Print condition with label on edge
        std::cout << id << " -> " << Expr->id << " [label=\"condition\"]" << std::endl;
        Expr->print();

        // Print true block with StmtList
        if (Block && !Block->empty()) {
            std::cout << getSupportNodeLabel("StmtList", id) << std::endl;
            std::cout << id << " -> " << getSupportNode("StmtList", id) << " [label=\"true\"]" << std::endl;

            for (auto stmt : *Block) {
                std::cout << getSupportNode("StmtList", id) << " -> " << stmt->id << std::endl;
                stmt->print();
            }
        }

        // Print else block with StmtList (same name, different ID)
        if (ElseBlock && !ElseBlock->empty()) {
            std::cout << getSupportNodeLabel("StmtList", id + 1000) << std::endl;
            std::cout << id << " -> " << getSupportNode("StmtList", id + 1000) << " [label=\"else\"]" << std::endl;

            for (auto stmt : *ElseBlock) {
                std::cout << getSupportNode("StmtList", id + 1000) << " -> " << stmt->id << std::endl;
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

    case StmtType::CaseStmt:
        // Print CaseExprList first
        std::cout << getSupportNodeLabel("CaseExprList", id) << std::endl;
        std::cout << id << " -> " << getSupportNode("CaseExprList", id) << std::endl;

        // Print case expressions (expected values) under ExprList
        if (CaseExprs && !CaseExprs->empty()) {
            std::cout << getSupportNodeLabel("ExprList", id) << std::endl;
            std::cout << getSupportNode("CaseExprList", id) << " -> " << getSupportNode("ExprList", id) << " [label=\"expected value\"]" << std::endl;

            for (auto expr : *CaseExprs) {
                std::cout << getSupportNode("ExprList", id) << " -> " << expr->id << std::endl;
                expr->print();
            }
        }

        // Print case body with StmtList under CaseExprList
        if (Block && !Block->empty()) {
            std::cout << getSupportNodeLabel("StmtList", id) << std::endl;
            std::cout << getSupportNode("CaseExprList", id) << " -> " << getSupportNode("StmtList", id) << " [label=\"body\"]" << std::endl;

            for (auto stmt : *Block) {
                std::cout << getSupportNode("StmtList", id) << " -> " << stmt->id << std::endl;
                stmt->print();
            }
        }
        break;
    case StmtType::classDecl:

            if (Block == nullptr) return;

            std::cout << getSupportNodeLabel("StmtList", id) << std::endl;
            std::cout << id << " -> " << getSupportNode("StmtList", id) << std::endl;

            for (auto item : *Block) 
            {
                std::cout << getSupportNode("StmtList", id) << " -> " << item->MemberStmt->id << std::endl;

                if (item->IsStatic) 
                {
                    std::cout << getSupportNodeLabel("STATIC", item->MemberStmt->id) << std::endl;
                    std::cout << item->MemberStmt->id << " -> " << getSupportNode("STATIC", item->MemberStmt->id) << std::endl;
                }
                if (item->AccessMod != nullptr) 
                {
                    std::cout << getSupportNodeLabel(*item->AccessMod, item->MemberStmt->id) << std::endl;
                    std::cout << item->MemberStmt->id << " -> " << getSupportNode(*item->AccessMod, item->MemberStmt->id) << std::endl;
                }

                item->MemberStmt->print();
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

    //TODO DataType* type ìîæåòü áûòü nullptr â ñëó÷àå åñëè ìû ÿâíî íå óêçàëè òèï ïåðåìåíîé
    //â ýòîì ñëó÷àå òèï ïåðåìåííîé íóæíî îïðåäåëÿòü èç expr ÷òî ïî èäåå äîëæíî äåëàòüñÿ íà ýòàïå ñåìàíòè÷åñêîãî àíàëèçà

    std::cout << "Called ExprNode::createDeclExpr("
        << (id ? *id : "null")
        << ", type=" << (type ? type->typeLabel : "nullptr") << ")" << std::endl;
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

    if (argName) 
    {
        funcArgExprNode->Name = argName;
    }
    else 
    {
        funcArgExprNode->Name = new std::string("no label");
    }

    funcArgExprNode->expr = expr;
    funcArgExprNode->exprType = ExprType::funcArg;

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
    StmtNode* elseIfStmt = new StmtNode();
    elseIfStmt->id = getNewId();
    elseIfStmt->stmtType = StmtType::If;
    elseIfStmt->Expr = cond;
    elseIfStmt->Block = p_true;

    // p_false can be another IfStmt (for else if) or nullptr
    if (p_false) {
        elseIfStmt->ElseBlock = new std::vector<StmtNode*>();
        elseIfStmt->ElseBlock->push_back(p_false);
    }
    else {
        elseIfStmt->ElseBlock = nullptr;
    }

    std::cout << "Called StmtNode::createElseIfStmt()" << std::endl;
    return elseIfStmt;
}

StmtNode* StmtNode::createLoopStmt(ExprNode* cond, std::string* i, std::vector<StmtNode*>* body, StmtType type) {

    StmtNode* stmt = new StmtNode();
    stmt->id = getNewId();
    stmt->stmtType = type;
    stmt->Expr = cond;

    if (i == nullptr) 
    {
        i = new std::string("no iterable");
    }
    stmt->iterable = i;
    
   
    
    stmt->Block = body;

    std::cout << "Called StmtNode::createLoopStmt()" << std::endl;
    return stmt;
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
    StmtNode* stmt = new StmtNode();
    stmt->id = getNewId();
    stmt->stmtType = StmtType::Break;
    std::cout << "Called StmtNode::createBreakStmt()" << std::endl;
    return stmt;
}

StmtNode* StmtNode::createContinueStmt() {
    StmtNode* stmt = new StmtNode();
    stmt->id = getNewId();
    stmt->stmtType = StmtType::Continue;
    std::cout << "Called StmtNode::createContinueStmt()" << std::endl;
    return stmt;
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
    StmtNode* stmt = new StmtNode();
    stmt->id = getNewId();
    stmt->stmtType = StmtType::classDecl;
    stmt->className = className;
    stmt->parentName = parentName;
    stmt->Block = body;

    std::cout << "Called StmtNode::createClassDecl("
        << (className ? *className : "null")
        << ", parent=" << (parentName ? *parentName : "null") << ")" << std::endl;
    return stmt;
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
    StmtNode* switchStmt = new StmtNode();
    switchStmt->id = getNewId();
    switchStmt->stmtType = StmtType::Switch;
    switchStmt->Expr = expr;
    switchStmt->Block = body;

    std::cout << "Called StmtNode::createSwitchStmt()" << std::endl;
    return switchStmt;
}

StmtNode* StmtNode::createCaseStmt(std::vector<ExprNode*>* caseExprs, std::vector<StmtNode*>* body) {
    StmtNode* caseStmt = new StmtNode();
    caseStmt->id = getNewId();
    caseStmt->stmtType = StmtType::CaseStmt;
    caseStmt->CaseExprs = caseExprs;
    caseStmt->Block = body;

    std::cout << "Called StmtNode::createCaseStmt()" << std::endl;
    return caseStmt;
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