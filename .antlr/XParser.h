
    #include <map>
    #include "intermediate/symtab/Symtab.h"
    #include "intermediate/type/Typespec.h"
    using namespace intermediate::symtab;
    using namespace intermediate::type;


// Generated from c:\Users\yezho\Desktop\CMPE152\temp\Team_Y_CMPE152\Compiler_Project\X.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"




class  XParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, T__10 = 11, T__11 = 12, T__12 = 13, T__13 = 14, 
    T__14 = 15, T__15 = 16, T__16 = 17, T__17 = 18, T__18 = 19, T__19 = 20, 
    T__20 = 21, T__21 = 22, T__22 = 23, T__23 = 24, T__24 = 25, T__25 = 26, 
    T__26 = 27, T__27 = 28, T__28 = 29, T__29 = 30, INT = 31, BOOL = 32, 
    FLOAT = 33, VOID = 34, DO = 35, WHILE = 36, FOR = 37, IF = 38, ELSEIF = 39, 
    ELSE = 40, SWITCH = 41, CASE = 42, DEFAULT = 43, PRINT = 44, PRINTLN = 45, 
    GET = 46, GETLN = 47, RETURN = 48, CHAR = 49, ARRAYINDICATOR = 50, SINGLEQUOTE = 51, 
    DOUBLEQUOTE = 52, DOUBLESLASH = 53, IDENTIFIER = 54, INTEGER = 55, REAL = 56, 
    CHARACTER = 57, STRING = 58, NEWLINE = 59, WS = 60, COMMENT = 61, BLOCKCOMMENT = 62
  };

  enum {
    RuleProgram = 0, RuleSingleStatement = 1, RuleStatement = 2, RuleEmptyStatement = 3, 
    RuleVariableDeclaration = 4, RuleLength = 5, RuleAssignmentStatement = 6, 
    RuleLhs = 7, RuleRhs = 8, RuleScope = 9, RuleScopeStatement = 10, RuleDoWhileLoop = 11, 
    RuleWhileLoop = 12, RuleForLoop = 13, RuleIfStatement = 14, RuleSwitchStatement = 15, 
    RuleSwitchCaseList = 16, RuleCaseBranch = 17, RuleDefaultBranch = 18, 
    RuleFunctionDefinition = 19, RuleFunctionDeclaration = 20, RuleFunctionIdentifier = 21, 
    RuleParameterDeclarationsList = 22, RuleParameterDeclaration = 23, RuleParameterIdentifier = 24, 
    RuleReturnStatement = 25, RuleFunctionCall = 26, RuleArgumentList = 27, 
    RuleArgument = 28, RulePrintStatement = 29, RulePrintlnStatement = 30, 
    RulePrintArguments = 31, RulePrintArgument = 32, RuleFieldWidth = 33, 
    RuleDecimalPlaces = 34, RuleGetStatement = 35, RuleGetlnStatement = 36, 
    RuleGetArguments = 37, RuleExpression = 38, RuleSimpleExpression = 39, 
    RuleTerm = 40, RuleFactor = 41, RuleVariable = 42, RuleModifier = 43, 
    RuleIndex = 44, RuleVariableIdentifier = 45, RuleNumber = 46, RuleUnsignedNumber = 47, 
    RuleSign = 48, RuleIntegerConstant = 49, RuleRealConstant = 50, RuleRelOp = 51, 
    RuleAddOp = 52, RuleMulOp = 53, RuleTypeIdentifier = 54, RuleCharacterConstant = 55, 
    RuleStringConstant = 56
  };

  XParser(antlr4::TokenStream *input);
  ~XParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class ProgramContext;
  class SingleStatementContext;
  class StatementContext;
  class EmptyStatementContext;
  class VariableDeclarationContext;
  class LengthContext;
  class AssignmentStatementContext;
  class LhsContext;
  class RhsContext;
  class ScopeContext;
  class ScopeStatementContext;
  class DoWhileLoopContext;
  class WhileLoopContext;
  class ForLoopContext;
  class IfStatementContext;
  class SwitchStatementContext;
  class SwitchCaseListContext;
  class CaseBranchContext;
  class DefaultBranchContext;
  class FunctionDefinitionContext;
  class FunctionDeclarationContext;
  class FunctionIdentifierContext;
  class ParameterDeclarationsListContext;
  class ParameterDeclarationContext;
  class ParameterIdentifierContext;
  class ReturnStatementContext;
  class FunctionCallContext;
  class ArgumentListContext;
  class ArgumentContext;
  class PrintStatementContext;
  class PrintlnStatementContext;
  class PrintArgumentsContext;
  class PrintArgumentContext;
  class FieldWidthContext;
  class DecimalPlacesContext;
  class GetStatementContext;
  class GetlnStatementContext;
  class GetArgumentsContext;
  class ExpressionContext;
  class SimpleExpressionContext;
  class TermContext;
  class FactorContext;
  class VariableContext;
  class ModifierContext;
  class IndexContext;
  class VariableIdentifierContext;
  class NumberContext;
  class UnsignedNumberContext;
  class SignContext;
  class IntegerConstantContext;
  class RealConstantContext;
  class RelOpContext;
  class AddOpContext;
  class MulOpContext;
  class TypeIdentifierContext;
  class CharacterConstantContext;
  class StringConstantContext; 

  class  ProgramContext : public antlr4::ParserRuleContext {
  public:
    SymtabEntry * entry = nullptr;
    ProgramContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<FunctionDefinitionContext *> functionDefinition();
    FunctionDefinitionContext* functionDefinition(size_t i);
    std::vector<FunctionDeclarationContext *> functionDeclaration();
    FunctionDeclarationContext* functionDeclaration(size_t i);
    std::vector<AssignmentStatementContext *> assignmentStatement();
    AssignmentStatementContext* assignmentStatement(size_t i);
    std::vector<VariableDeclarationContext *> variableDeclaration();
    VariableDeclarationContext* variableDeclaration(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProgramContext* program();

  class  SingleStatementContext : public antlr4::ParserRuleContext {
  public:
    SingleStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FunctionDeclarationContext *functionDeclaration();
    StatementContext *statement();
    EmptyStatementContext *emptyStatement();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SingleStatementContext* singleStatement();

  class  StatementContext : public antlr4::ParserRuleContext {
  public:
    StatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AssignmentStatementContext *assignmentStatement();
    VariableDeclarationContext *variableDeclaration();
    PrintStatementContext *printStatement();
    PrintlnStatementContext *printlnStatement();
    GetStatementContext *getStatement();
    GetlnStatementContext *getlnStatement();
    FunctionCallContext *functionCall();
    ReturnStatementContext *returnStatement();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StatementContext* statement();

  class  EmptyStatementContext : public antlr4::ParserRuleContext {
  public:
    EmptyStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EmptyStatementContext* emptyStatement();

  class  VariableDeclarationContext : public antlr4::ParserRuleContext {
  public:
    VariableDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeIdentifierContext *typeIdentifier();
    std::vector<VariableIdentifierContext *> variableIdentifier();
    VariableIdentifierContext* variableIdentifier(size_t i);
    std::vector<LengthContext *> length();
    LengthContext* length(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VariableDeclarationContext* variableDeclaration();

  class  LengthContext : public antlr4::ParserRuleContext {
  public:
    LengthContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LengthContext* length();

  class  AssignmentStatementContext : public antlr4::ParserRuleContext {
  public:
    AssignmentStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    AssignmentStatementContext() = default;
    void copyFrom(AssignmentStatementContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  AssignVariableContext : public AssignmentStatementContext {
  public:
    AssignVariableContext(AssignmentStatementContext *ctx);

    LhsContext *lhs();
    RhsContext *rhs();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  DecrementVariableContext : public AssignmentStatementContext {
  public:
    DecrementVariableContext(AssignmentStatementContext *ctx);

    VariableContext *variable();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  IncrementVariableContext : public AssignmentStatementContext {
  public:
    IncrementVariableContext(AssignmentStatementContext *ctx);

    VariableContext *variable();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  AssignmentStatementContext* assignmentStatement();

  class  LhsContext : public antlr4::ParserRuleContext {
  public:
    Typespec * type = nullptr;
    LhsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VariableContext *variable();
    VariableDeclarationContext *variableDeclaration();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LhsContext* lhs();

  class  RhsContext : public antlr4::ParserRuleContext {
  public:
    RhsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RhsContext* rhs();

  class  ScopeContext : public antlr4::ParserRuleContext {
  public:
    ScopeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<SingleStatementContext *> singleStatement();
    SingleStatementContext* singleStatement(size_t i);
    std::vector<ScopeStatementContext *> scopeStatement();
    ScopeStatementContext* scopeStatement(size_t i);
    std::vector<ScopeContext *> scope();
    ScopeContext* scope(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ScopeContext* scope();

  class  ScopeStatementContext : public antlr4::ParserRuleContext {
  public:
    ScopeStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DoWhileLoopContext *doWhileLoop();
    WhileLoopContext *whileLoop();
    ForLoopContext *forLoop();
    IfStatementContext *ifStatement();
    SwitchStatementContext *switchStatement();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ScopeStatementContext* scopeStatement();

  class  DoWhileLoopContext : public antlr4::ParserRuleContext {
  public:
    DoWhileLoopContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DO();
    ScopeContext *scope();
    antlr4::tree::TerminalNode *WHILE();
    ExpressionContext *expression();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DoWhileLoopContext* doWhileLoop();

  class  WhileLoopContext : public antlr4::ParserRuleContext {
  public:
    WhileLoopContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WHILE();
    ExpressionContext *expression();
    ScopeContext *scope();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WhileLoopContext* whileLoop();

  class  ForLoopContext : public antlr4::ParserRuleContext {
  public:
    ForLoopContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FOR();
    ExpressionContext *expression();
    ScopeContext *scope();
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ForLoopContext* forLoop();

  class  IfStatementContext : public antlr4::ParserRuleContext {
  public:
    IfStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> IF();
    antlr4::tree::TerminalNode* IF(size_t i);
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<ScopeContext *> scope();
    ScopeContext* scope(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ELSE();
    antlr4::tree::TerminalNode* ELSE(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IfStatementContext* ifStatement();

  class  SwitchStatementContext : public antlr4::ParserRuleContext {
  public:
    SwitchStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SWITCH();
    ExpressionContext *expression();
    SwitchCaseListContext *switchCaseList();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SwitchStatementContext* switchStatement();

  class  SwitchCaseListContext : public antlr4::ParserRuleContext {
  public:
    SwitchCaseListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<CaseBranchContext *> caseBranch();
    CaseBranchContext* caseBranch(size_t i);
    DefaultBranchContext *defaultBranch();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SwitchCaseListContext* switchCaseList();

  class  CaseBranchContext : public antlr4::ParserRuleContext {
  public:
    CaseBranchContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CASE();
    NumberContext *number();
    ScopeContext *scope();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CaseBranchContext* caseBranch();

  class  DefaultBranchContext : public antlr4::ParserRuleContext {
  public:
    DefaultBranchContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DEFAULT();
    ScopeContext *scope();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DefaultBranchContext* defaultBranch();

  class  FunctionDefinitionContext : public antlr4::ParserRuleContext {
  public:
    FunctionDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FunctionDeclarationContext *functionDeclaration();
    ScopeContext *scope();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionDefinitionContext* functionDefinition();

  class  FunctionDeclarationContext : public antlr4::ParserRuleContext {
  public:
    FunctionDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeIdentifierContext *typeIdentifier();
    FunctionIdentifierContext *functionIdentifier();
    ParameterDeclarationsListContext *parameterDeclarationsList();
    antlr4::tree::TerminalNode *VOID();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionDeclarationContext* functionDeclaration();

  class  FunctionIdentifierContext : public antlr4::ParserRuleContext {
  public:
    Typespec * type = nullptr;
    SymtabEntry * entry = nullptr;
    FunctionIdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionIdentifierContext* functionIdentifier();

  class  ParameterDeclarationsListContext : public antlr4::ParserRuleContext {
  public:
    ParameterDeclarationsListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ParameterDeclarationContext *> parameterDeclaration();
    ParameterDeclarationContext* parameterDeclaration(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParameterDeclarationsListContext* parameterDeclarationsList();

  class  ParameterDeclarationContext : public antlr4::ParserRuleContext {
  public:
    ParameterDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeIdentifierContext *typeIdentifier();
    ParameterIdentifierContext *parameterIdentifier();
    std::vector<antlr4::tree::TerminalNode *> ARRAYINDICATOR();
    antlr4::tree::TerminalNode* ARRAYINDICATOR(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParameterDeclarationContext* parameterDeclaration();

  class  ParameterIdentifierContext : public antlr4::ParserRuleContext {
  public:
    Typespec * type = nullptr;
    SymtabEntry * entry = nullptr;
    ParameterIdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParameterIdentifierContext* parameterIdentifier();

  class  ReturnStatementContext : public antlr4::ParserRuleContext {
  public:
    ReturnStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RETURN();
    ExpressionContext *expression();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ReturnStatementContext* returnStatement();

  class  FunctionCallContext : public antlr4::ParserRuleContext {
  public:
    FunctionCallContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FunctionIdentifierContext *functionIdentifier();
    ArgumentListContext *argumentList();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionCallContext* functionCall();

  class  ArgumentListContext : public antlr4::ParserRuleContext {
  public:
    ArgumentListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ArgumentContext *> argument();
    ArgumentContext* argument(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ArgumentListContext* argumentList();

  class  ArgumentContext : public antlr4::ParserRuleContext {
  public:
    ArgumentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ArgumentContext* argument();

  class  PrintStatementContext : public antlr4::ParserRuleContext {
  public:
    PrintStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PRINT();
    PrintArgumentsContext *printArguments();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PrintStatementContext* printStatement();

  class  PrintlnStatementContext : public antlr4::ParserRuleContext {
  public:
    PrintlnStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PRINTLN();
    PrintArgumentsContext *printArguments();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PrintlnStatementContext* printlnStatement();

  class  PrintArgumentsContext : public antlr4::ParserRuleContext {
  public:
    PrintArgumentsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<PrintArgumentContext *> printArgument();
    PrintArgumentContext* printArgument(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PrintArgumentsContext* printArguments();

  class  PrintArgumentContext : public antlr4::ParserRuleContext {
  public:
    PrintArgumentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    FieldWidthContext *fieldWidth();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PrintArgumentContext* printArgument();

  class  FieldWidthContext : public antlr4::ParserRuleContext {
  public:
    FieldWidthContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IntegerConstantContext *integerConstant();
    SignContext *sign();
    DecimalPlacesContext *decimalPlaces();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FieldWidthContext* fieldWidth();

  class  DecimalPlacesContext : public antlr4::ParserRuleContext {
  public:
    DecimalPlacesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IntegerConstantContext *integerConstant();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DecimalPlacesContext* decimalPlaces();

  class  GetStatementContext : public antlr4::ParserRuleContext {
  public:
    GetStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GET();
    GetArgumentsContext *getArguments();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GetStatementContext* getStatement();

  class  GetlnStatementContext : public antlr4::ParserRuleContext {
  public:
    GetlnStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GETLN();
    GetArgumentsContext *getArguments();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GetlnStatementContext* getlnStatement();

  class  GetArgumentsContext : public antlr4::ParserRuleContext {
  public:
    GetArgumentsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<VariableContext *> variable();
    VariableContext* variable(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GetArgumentsContext* getArguments();

  class  ExpressionContext : public antlr4::ParserRuleContext {
  public:
    Typespec * type = nullptr;
    ExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<SimpleExpressionContext *> simpleExpression();
    SimpleExpressionContext* simpleExpression(size_t i);
    RelOpContext *relOp();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExpressionContext* expression();
  ExpressionContext* expression(int precedence);
  class  SimpleExpressionContext : public antlr4::ParserRuleContext {
  public:
    Typespec * type = nullptr;
    SimpleExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TermContext *> term();
    TermContext* term(size_t i);
    SignContext *sign();
    std::vector<AddOpContext *> addOp();
    AddOpContext* addOp(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SimpleExpressionContext* simpleExpression();

  class  TermContext : public antlr4::ParserRuleContext {
  public:
    Typespec * type = nullptr;
    TermContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<FactorContext *> factor();
    FactorContext* factor(size_t i);
    std::vector<MulOpContext *> mulOp();
    MulOpContext* mulOp(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TermContext* term();

  class  FactorContext : public antlr4::ParserRuleContext {
  public:
    Typespec * type = nullptr;
    FactorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    FactorContext() = default;
    void copyFrom(FactorContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  NumberFactorContext : public FactorContext {
  public:
    NumberFactorContext(FactorContext *ctx);

    NumberContext *number();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  StringFactorContext : public FactorContext {
  public:
    StringFactorContext(FactorContext *ctx);

    StringConstantContext *stringConstant();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  CharacterFactorContext : public FactorContext {
  public:
    CharacterFactorContext(FactorContext *ctx);

    CharacterConstantContext *characterConstant();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PostcrementVariableContext : public FactorContext {
  public:
    PostcrementVariableContext(FactorContext *ctx);

    VariableContext *variable();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  VariableFactorContext : public FactorContext {
  public:
    VariableFactorContext(FactorContext *ctx);

    VariableContext *variable();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  FunctionCallFactorContext : public FactorContext {
  public:
    FunctionCallFactorContext(FactorContext *ctx);

    FunctionCallContext *functionCall();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NotFactorContext : public FactorContext {
  public:
    NotFactorContext(FactorContext *ctx);

    FactorContext *factor();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PrecrementVariableContext : public FactorContext {
  public:
    PrecrementVariableContext(FactorContext *ctx);

    VariableContext *variable();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ParenthesizedFactorContext : public FactorContext {
  public:
    ParenthesizedFactorContext(FactorContext *ctx);

    ExpressionContext *expression();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  FactorContext* factor();

  class  VariableContext : public antlr4::ParserRuleContext {
  public:
    Typespec * type = nullptr;
    SymtabEntry * entry = nullptr;
    VariableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VariableIdentifierContext *variableIdentifier();
    std::vector<ModifierContext *> modifier();
    ModifierContext* modifier(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VariableContext* variable();

  class  ModifierContext : public antlr4::ParserRuleContext {
  public:
    ModifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IndexContext *index();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ModifierContext* modifier();

  class  IndexContext : public antlr4::ParserRuleContext {
  public:
    IndexContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IndexContext* index();

  class  VariableIdentifierContext : public antlr4::ParserRuleContext {
  public:
    Typespec * type = nullptr;
    SymtabEntry * entry = nullptr;
    VariableIdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VariableIdentifierContext* variableIdentifier();

  class  NumberContext : public antlr4::ParserRuleContext {
  public:
    NumberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UnsignedNumberContext *unsignedNumber();
    SignContext *sign();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NumberContext* number();

  class  UnsignedNumberContext : public antlr4::ParserRuleContext {
  public:
    UnsignedNumberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IntegerConstantContext *integerConstant();
    RealConstantContext *realConstant();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UnsignedNumberContext* unsignedNumber();

  class  SignContext : public antlr4::ParserRuleContext {
  public:
    SignContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SignContext* sign();

  class  IntegerConstantContext : public antlr4::ParserRuleContext {
  public:
    IntegerConstantContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INTEGER();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IntegerConstantContext* integerConstant();

  class  RealConstantContext : public antlr4::ParserRuleContext {
  public:
    RealConstantContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REAL();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RealConstantContext* realConstant();

  class  RelOpContext : public antlr4::ParserRuleContext {
  public:
    RelOpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RelOpContext* relOp();

  class  AddOpContext : public antlr4::ParserRuleContext {
  public:
    AddOpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AddOpContext* addOp();

  class  MulOpContext : public antlr4::ParserRuleContext {
  public:
    MulOpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MulOpContext* mulOp();

  class  TypeIdentifierContext : public antlr4::ParserRuleContext {
  public:
    Typespec * type = nullptr;
    SymtabEntry * entry = nullptr;
    TypeIdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INT();
    antlr4::tree::TerminalNode *BOOL();
    antlr4::tree::TerminalNode *FLOAT();
    antlr4::tree::TerminalNode *VOID();
    antlr4::tree::TerminalNode *CHAR();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeIdentifierContext* typeIdentifier();

  class  CharacterConstantContext : public antlr4::ParserRuleContext {
  public:
    CharacterConstantContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CHARACTER();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CharacterConstantContext* characterConstant();

  class  StringConstantContext : public antlr4::ParserRuleContext {
  public:
    StringConstantContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STRING();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StringConstantContext* stringConstant();


  virtual bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;
  bool expressionSempred(ExpressionContext *_localctx, size_t predicateIndex);

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

