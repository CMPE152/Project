
    #include <map>
    #include "intermediate/symtab/Symtab.h"
    #include "intermediate/type/Typespec.h"
    using namespace intermediate::symtab;
    using namespace intermediate::type;


// Generated from c:\Users\yezho\Desktop\CMPE152\temp\Team_Y_CMPE152\Compiler_Project\X.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"
#include "XParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by XParser.
 */
class  XVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by XParser.
   */
    virtual antlrcpp::Any visitProgram(XParser::ProgramContext *context) = 0;

    virtual antlrcpp::Any visitSingleStatement(XParser::SingleStatementContext *context) = 0;

    virtual antlrcpp::Any visitStatement(XParser::StatementContext *context) = 0;

    virtual antlrcpp::Any visitEmptyStatement(XParser::EmptyStatementContext *context) = 0;

    virtual antlrcpp::Any visitVariableDeclaration(XParser::VariableDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitLength(XParser::LengthContext *context) = 0;

    virtual antlrcpp::Any visitAssignVariable(XParser::AssignVariableContext *context) = 0;

    virtual antlrcpp::Any visitIncrementVariable(XParser::IncrementVariableContext *context) = 0;

    virtual antlrcpp::Any visitDecrementVariable(XParser::DecrementVariableContext *context) = 0;

    virtual antlrcpp::Any visitLhs(XParser::LhsContext *context) = 0;

    virtual antlrcpp::Any visitRhs(XParser::RhsContext *context) = 0;

    virtual antlrcpp::Any visitScope(XParser::ScopeContext *context) = 0;

    virtual antlrcpp::Any visitScopeStatement(XParser::ScopeStatementContext *context) = 0;

    virtual antlrcpp::Any visitDoWhileLoop(XParser::DoWhileLoopContext *context) = 0;

    virtual antlrcpp::Any visitWhileLoop(XParser::WhileLoopContext *context) = 0;

    virtual antlrcpp::Any visitForLoop(XParser::ForLoopContext *context) = 0;

    virtual antlrcpp::Any visitIfStatement(XParser::IfStatementContext *context) = 0;

    virtual antlrcpp::Any visitSwitchStatement(XParser::SwitchStatementContext *context) = 0;

    virtual antlrcpp::Any visitSwitchCaseList(XParser::SwitchCaseListContext *context) = 0;

    virtual antlrcpp::Any visitCaseBranch(XParser::CaseBranchContext *context) = 0;

    virtual antlrcpp::Any visitDefaultBranch(XParser::DefaultBranchContext *context) = 0;

    virtual antlrcpp::Any visitFunctionDefinition(XParser::FunctionDefinitionContext *context) = 0;

    virtual antlrcpp::Any visitFunctionDeclaration(XParser::FunctionDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitFunctionIdentifier(XParser::FunctionIdentifierContext *context) = 0;

    virtual antlrcpp::Any visitParameterDeclarationsList(XParser::ParameterDeclarationsListContext *context) = 0;

    virtual antlrcpp::Any visitParameterDeclaration(XParser::ParameterDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitParameterIdentifier(XParser::ParameterIdentifierContext *context) = 0;

    virtual antlrcpp::Any visitReturnStatement(XParser::ReturnStatementContext *context) = 0;

    virtual antlrcpp::Any visitFunctionCall(XParser::FunctionCallContext *context) = 0;

    virtual antlrcpp::Any visitArgumentList(XParser::ArgumentListContext *context) = 0;

    virtual antlrcpp::Any visitArgument(XParser::ArgumentContext *context) = 0;

    virtual antlrcpp::Any visitPrintStatement(XParser::PrintStatementContext *context) = 0;

    virtual antlrcpp::Any visitPrintlnStatement(XParser::PrintlnStatementContext *context) = 0;

    virtual antlrcpp::Any visitPrintArguments(XParser::PrintArgumentsContext *context) = 0;

    virtual antlrcpp::Any visitPrintArgument(XParser::PrintArgumentContext *context) = 0;

    virtual antlrcpp::Any visitFieldWidth(XParser::FieldWidthContext *context) = 0;

    virtual antlrcpp::Any visitDecimalPlaces(XParser::DecimalPlacesContext *context) = 0;

    virtual antlrcpp::Any visitGetStatement(XParser::GetStatementContext *context) = 0;

    virtual antlrcpp::Any visitGetlnStatement(XParser::GetlnStatementContext *context) = 0;

    virtual antlrcpp::Any visitGetArguments(XParser::GetArgumentsContext *context) = 0;

    virtual antlrcpp::Any visitExpression(XParser::ExpressionContext *context) = 0;

    virtual antlrcpp::Any visitSimpleExpression(XParser::SimpleExpressionContext *context) = 0;

    virtual antlrcpp::Any visitTerm(XParser::TermContext *context) = 0;

    virtual antlrcpp::Any visitVariableFactor(XParser::VariableFactorContext *context) = 0;

    virtual antlrcpp::Any visitPostcrementVariable(XParser::PostcrementVariableContext *context) = 0;

    virtual antlrcpp::Any visitPrecrementVariable(XParser::PrecrementVariableContext *context) = 0;

    virtual antlrcpp::Any visitNumberFactor(XParser::NumberFactorContext *context) = 0;

    virtual antlrcpp::Any visitCharacterFactor(XParser::CharacterFactorContext *context) = 0;

    virtual antlrcpp::Any visitStringFactor(XParser::StringFactorContext *context) = 0;

    virtual antlrcpp::Any visitFunctionCallFactor(XParser::FunctionCallFactorContext *context) = 0;

    virtual antlrcpp::Any visitNotFactor(XParser::NotFactorContext *context) = 0;

    virtual antlrcpp::Any visitParenthesizedFactor(XParser::ParenthesizedFactorContext *context) = 0;

    virtual antlrcpp::Any visitVariable(XParser::VariableContext *context) = 0;

    virtual antlrcpp::Any visitModifier(XParser::ModifierContext *context) = 0;

    virtual antlrcpp::Any visitIndex(XParser::IndexContext *context) = 0;

    virtual antlrcpp::Any visitVariableIdentifier(XParser::VariableIdentifierContext *context) = 0;

    virtual antlrcpp::Any visitNumber(XParser::NumberContext *context) = 0;

    virtual antlrcpp::Any visitUnsignedNumber(XParser::UnsignedNumberContext *context) = 0;

    virtual antlrcpp::Any visitSign(XParser::SignContext *context) = 0;

    virtual antlrcpp::Any visitIntegerConstant(XParser::IntegerConstantContext *context) = 0;

    virtual antlrcpp::Any visitRealConstant(XParser::RealConstantContext *context) = 0;

    virtual antlrcpp::Any visitRelOp(XParser::RelOpContext *context) = 0;

    virtual antlrcpp::Any visitAddOp(XParser::AddOpContext *context) = 0;

    virtual antlrcpp::Any visitMulOp(XParser::MulOpContext *context) = 0;

    virtual antlrcpp::Any visitTypeIdentifier(XParser::TypeIdentifierContext *context) = 0;

    virtual antlrcpp::Any visitCharacterConstant(XParser::CharacterConstantContext *context) = 0;

    virtual antlrcpp::Any visitStringConstant(XParser::StringConstantContext *context) = 0;


};

