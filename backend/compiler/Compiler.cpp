#include "intermediate/symtab/Predefined.h"
#include "backend/compiler/Compiler.h"
#include "backend/compiler/StructuredDataGenerator.h"

namespace backend { namespace compiler {

//change
Object Compiler::loadValue(XParser::VariableContext *ctx){
    expressionCode->emitLoadValue(ctx);
    return nullptr;
}


Object Compiler::visitProgram(XParser::ProgramContext *ctx){
    createNewGenerators(code);
    programCode->emitProgram(ctx);
    return nullptr;
}

//change visitroutinedefinition
Object Compiler::visitFunctionDefinition(XParser::FunctionDefinitionContext *ctx){
    createNewGenerators(code);
    programCode->emitRoutine(ctx);
    return nullptr;
}

//change
Object Compiler::visitVariableDeclaration(XParser::VariableDeclarationContext *ctx){
    if(!ctx->length().empty()) {
        StructuredDataGenerator structuredCode(programCode, this);
        structuredCode.emitInit(ctx->variableIdentifier(0)->entry);
    }
    return nullptr;
}

//change
Object Compiler::visitStatement(XParser::StatementContext *ctx){
    if (ctx->controlStatement() == nullptr){
        statementCode->emitComment(ctx);
    }

    return visitChildren(ctx);
}

//change
Object Compiler::visitAssignVariable(XParser::AssignVariableContext *ctx){
    if(ctx->lhs()->variable()){
        statementCode->emitAssignment(ctx);
    }
    else{
        statementCode->emitDeclarationAssignment(ctx);
    }

    return nullptr;
}

//change
Object Compiler::visitIncrementVariable(XParser::IncrementVariableContext *ctx){
    statementCode->emitIncrement(ctx);
    return nullptr;
}

//change
Object Compiler::visitDecrementVariable(XParser::DecrementVariableContext *ctx){
    statementCode->emitDecrement(ctx);
    return nullptr;
}


Object Compiler::visitIfStatement(XParser::IfStatementContext *ctx){
    statementCode->emitIf(ctx);
    return nullptr;
}

//change
Object Compiler::visitSwitchStatement(XParser::SwitchStatementContext *ctx){
    statementCode->emitSwitch(ctx);
    return nullptr;
}

//change
Object Compiler::visitDoWhileLoop(XParser::DoWhileLoopContext *ctx){
    statementCode->emitDoWhile(ctx);
    return nullptr;
}

Object Compiler::visitWhileLoop(XParser::WhileLoopContext *ctx){
    statementCode->emitWhile(ctx);
    return nullptr;
}

Object Compiler::visitForLoop(XParser::ForLoopContext *ctx){
    statementCode->emitFor(ctx);
    return nullptr;
}

//change
Object Compiler::visitFunctionCall(XParser::FunctionCallContext *ctx){
    statementCode->emitFunctionCall(ctx);
    auto b = ctx->functionIdentifier()->getText();
    auto a = ctx->functionIdentifier()->type;
    if(ctx->functionIdentifier()->type != Predefined::voidType) {
        statementCode->emit(Instruction::POP);
    }
    return nullptr;
}

//change
Object Compiler::visitReturnStatement(XParser::ReturnStatementContext *ctx){
    programCode->emitReturn(ctx);
    return nullptr;
}

Object Compiler::visitExpression(XParser::ExpressionContext *ctx){
    expressionCode->emitExpression(ctx);
    return nullptr;
}

Object Compiler::visitVariableFactor(XParser::VariableFactorContext *ctx){
    expressionCode->emitLoadValue(ctx->variable());
    return nullptr;
}

Object Compiler::visitVariable(XParser::VariableContext *ctx){
    expressionCode->emitLoadVariable(ctx);
    return nullptr;
}

Object Compiler::visitNumberFactor(XParser::NumberFactorContext *ctx){
    if (ctx->type == Predefined::integerType)
    {
        expressionCode->emitLoadIntegerConstant(ctx->number());
    }
    else
    {
        expressionCode->emitLoadRealConstant(ctx->number());
    }

    return nullptr;
}

Object Compiler::visitCharacterFactor(XParser::CharacterFactorContext *ctx){
    char ch = ctx->getText()[1];
    expressionCode->emitLoadConstant(ch);

    return nullptr;
}

Object Compiler::visitStringFactor(XParser::StringFactorContext *ctx){
    string jasminString = convertString(ctx->getText(), true);
    expressionCode->emitLoadConstant(jasminString);

    return nullptr;
}

Object Compiler::visitFunctionCallFactor(XParser::FunctionCallFactorContext *ctx){
    statementCode->emitFunctionCall(ctx->functionCall());
    return nullptr;
}

Object Compiler::visitNotFactor(XParser::NotFactorContext *ctx){
    expressionCode->emitNotFactor(ctx);
    return nullptr;
}

Object Compiler::visitParenthesizedFactor(XParser::ParenthesizedFactorContext *ctx){
    return visit(ctx->expression());
}

//change
Object Compiler::visitPrintStatement(XParser::PrintStatementContext *ctx){
    statementCode->emitPrint(ctx);
    return nullptr;
}

//change
Object Compiler::visitPrintlnStatement(XParser::PrintlnStatementContext *ctx){
    statementCode->emitPrintln(ctx);
    return nullptr;
}

Object Compiler::visitGetStatement(XParser::GetStatementContext *ctx){
    statementCode->emitGet(ctx);
    return nullptr;
}

Object Compiler::visitGetlnStatement(XParser::GetlnStatementContext *ctx){
    statementCode->emitGetln(ctx);
    return nullptr;
}

}}
