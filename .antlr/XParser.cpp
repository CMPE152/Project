
    #include <map>
    #include "intermediate/symtab/Symtab.h"
    #include "intermediate/type/Typespec.h"
    using namespace intermediate::symtab;
    using namespace intermediate::type;


// Generated from c:\Users\yezho\Desktop\CMPE152\temp\Team_Y_CMPE152\Compiler_Project\X.g4 by ANTLR 4.8


#include "XVisitor.h"

#include "XParser.h"


using namespace antlrcpp;
using namespace antlr4;

XParser::XParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

XParser::~XParser() {
  delete _interpreter;
}

std::string XParser::getGrammarFileName() const {
  return "X.g4";
}

const std::vector<std::string>& XParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& XParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- ProgramContext ------------------------------------------------------------------

XParser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<XParser::FunctionDefinitionContext *> XParser::ProgramContext::functionDefinition() {
  return getRuleContexts<XParser::FunctionDefinitionContext>();
}

XParser::FunctionDefinitionContext* XParser::ProgramContext::functionDefinition(size_t i) {
  return getRuleContext<XParser::FunctionDefinitionContext>(i);
}

std::vector<XParser::FunctionDeclarationContext *> XParser::ProgramContext::functionDeclaration() {
  return getRuleContexts<XParser::FunctionDeclarationContext>();
}

XParser::FunctionDeclarationContext* XParser::ProgramContext::functionDeclaration(size_t i) {
  return getRuleContext<XParser::FunctionDeclarationContext>(i);
}

std::vector<XParser::AssignmentStatementContext *> XParser::ProgramContext::assignmentStatement() {
  return getRuleContexts<XParser::AssignmentStatementContext>();
}

XParser::AssignmentStatementContext* XParser::ProgramContext::assignmentStatement(size_t i) {
  return getRuleContext<XParser::AssignmentStatementContext>(i);
}

std::vector<XParser::VariableDeclarationContext *> XParser::ProgramContext::variableDeclaration() {
  return getRuleContexts<XParser::VariableDeclarationContext>();
}

XParser::VariableDeclarationContext* XParser::ProgramContext::variableDeclaration(size_t i) {
  return getRuleContext<XParser::VariableDeclarationContext>(i);
}


size_t XParser::ProgramContext::getRuleIndex() const {
  return XParser::RuleProgram;
}


antlrcpp::Any XParser::ProgramContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XVisitor*>(visitor))
    return parserVisitor->visitProgram(this);
  else
    return visitor->visitChildren(this);
}

XParser::ProgramContext* XParser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 0, XParser::RuleProgram);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(124); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(124);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx)) {
      case 1: {
        setState(114);
        functionDefinition();
        break;
      }

      case 2: {
        setState(115);
        functionDeclaration();
        setState(116);
        match(XParser::T__0);
        break;
      }

      case 3: {
        setState(118);
        assignmentStatement();
        setState(119);
        match(XParser::T__0);
        break;
      }

      case 4: {
        setState(121);
        variableDeclaration();
        setState(122);
        match(XParser::T__0);
        break;
      }

      }
      setState(126); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << XParser::INT)
      | (1ULL << XParser::BOOL)
      | (1ULL << XParser::FLOAT)
      | (1ULL << XParser::VOID)
      | (1ULL << XParser::IDENTIFIER))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- C_statementContext ------------------------------------------------------------------

XParser::C_statementContext::C_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

XParser::FunctionDeclarationContext* XParser::C_statementContext::functionDeclaration() {
  return getRuleContext<XParser::FunctionDeclarationContext>(0);
}

XParser::StatementContext* XParser::C_statementContext::statement() {
  return getRuleContext<XParser::StatementContext>(0);
}

XParser::EmptyStatementContext* XParser::C_statementContext::emptyStatement() {
  return getRuleContext<XParser::EmptyStatementContext>(0);
}


size_t XParser::C_statementContext::getRuleIndex() const {
  return XParser::RuleC_statement;
}


antlrcpp::Any XParser::C_statementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XVisitor*>(visitor))
    return parserVisitor->visitC_statement(this);
  else
    return visitor->visitChildren(this);
}

XParser::C_statementContext* XParser::c_statement() {
  C_statementContext *_localctx = _tracker.createInstance<C_statementContext>(_ctx, getState());
  enterRule(_localctx, 2, XParser::RuleC_statement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(137);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(128);
      functionDeclaration();
      setState(129);
      match(XParser::T__0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(131);
      statement();
      setState(132);
      match(XParser::T__0);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(134);
      emptyStatement();
      setState(135);
      match(XParser::T__0);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

XParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

XParser::AssignmentStatementContext* XParser::StatementContext::assignmentStatement() {
  return getRuleContext<XParser::AssignmentStatementContext>(0);
}

XParser::VariableDeclarationContext* XParser::StatementContext::variableDeclaration() {
  return getRuleContext<XParser::VariableDeclarationContext>(0);
}

XParser::ControlStatementContext* XParser::StatementContext::controlStatement() {
  return getRuleContext<XParser::ControlStatementContext>(0);
}

XParser::PrintStatementContext* XParser::StatementContext::printStatement() {
  return getRuleContext<XParser::PrintStatementContext>(0);
}

XParser::PrintlnStatementContext* XParser::StatementContext::printlnStatement() {
  return getRuleContext<XParser::PrintlnStatementContext>(0);
}

XParser::GetStatementContext* XParser::StatementContext::getStatement() {
  return getRuleContext<XParser::GetStatementContext>(0);
}

XParser::GetlnStatementContext* XParser::StatementContext::getlnStatement() {
  return getRuleContext<XParser::GetlnStatementContext>(0);
}

XParser::FunctionCallContext* XParser::StatementContext::functionCall() {
  return getRuleContext<XParser::FunctionCallContext>(0);
}

XParser::ReturnStatementContext* XParser::StatementContext::returnStatement() {
  return getRuleContext<XParser::ReturnStatementContext>(0);
}


size_t XParser::StatementContext::getRuleIndex() const {
  return XParser::RuleStatement;
}


antlrcpp::Any XParser::StatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XVisitor*>(visitor))
    return parserVisitor->visitStatement(this);
  else
    return visitor->visitChildren(this);
}

XParser::StatementContext* XParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 4, XParser::RuleStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(148);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(139);
      assignmentStatement();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(140);
      variableDeclaration();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(141);
      controlStatement();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(142);
      printStatement();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(143);
      printlnStatement();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(144);
      getStatement();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(145);
      getlnStatement();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(146);
      functionCall();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(147);
      returnStatement();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EmptyStatementContext ------------------------------------------------------------------

XParser::EmptyStatementContext::EmptyStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t XParser::EmptyStatementContext::getRuleIndex() const {
  return XParser::RuleEmptyStatement;
}


antlrcpp::Any XParser::EmptyStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XVisitor*>(visitor))
    return parserVisitor->visitEmptyStatement(this);
  else
    return visitor->visitChildren(this);
}

XParser::EmptyStatementContext* XParser::emptyStatement() {
  EmptyStatementContext *_localctx = _tracker.createInstance<EmptyStatementContext>(_ctx, getState());
  enterRule(_localctx, 6, XParser::RuleEmptyStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);

   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VariableDeclarationContext ------------------------------------------------------------------

XParser::VariableDeclarationContext::VariableDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

XParser::TypeIdentifierContext* XParser::VariableDeclarationContext::typeIdentifier() {
  return getRuleContext<XParser::TypeIdentifierContext>(0);
}

std::vector<XParser::VariableIdentifierContext *> XParser::VariableDeclarationContext::variableIdentifier() {
  return getRuleContexts<XParser::VariableIdentifierContext>();
}

XParser::VariableIdentifierContext* XParser::VariableDeclarationContext::variableIdentifier(size_t i) {
  return getRuleContext<XParser::VariableIdentifierContext>(i);
}

std::vector<XParser::LengthContext *> XParser::VariableDeclarationContext::length() {
  return getRuleContexts<XParser::LengthContext>();
}

XParser::LengthContext* XParser::VariableDeclarationContext::length(size_t i) {
  return getRuleContext<XParser::LengthContext>(i);
}


size_t XParser::VariableDeclarationContext::getRuleIndex() const {
  return XParser::RuleVariableDeclaration;
}


antlrcpp::Any XParser::VariableDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XVisitor*>(visitor))
    return parserVisitor->visitVariableDeclaration(this);
  else
    return visitor->visitChildren(this);
}

XParser::VariableDeclarationContext* XParser::variableDeclaration() {
  VariableDeclarationContext *_localctx = _tracker.createInstance<VariableDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 8, XParser::RuleVariableDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(172);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(152);
      typeIdentifier();
      setState(153);
      variableIdentifier();
      setState(158);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == XParser::T__1) {
        setState(154);
        match(XParser::T__1);
        setState(155);
        variableIdentifier();
        setState(160);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(161);
      typeIdentifier();
      setState(162);
      variableIdentifier();
      setState(169);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == XParser::T__2) {
        setState(163);
        match(XParser::T__2);
        setState(164);
        length();
        setState(165);
        match(XParser::T__3);
        setState(171);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LengthContext ------------------------------------------------------------------

XParser::LengthContext::LengthContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

XParser::ExpressionContext* XParser::LengthContext::expression() {
  return getRuleContext<XParser::ExpressionContext>(0);
}


size_t XParser::LengthContext::getRuleIndex() const {
  return XParser::RuleLength;
}


antlrcpp::Any XParser::LengthContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XVisitor*>(visitor))
    return parserVisitor->visitLength(this);
  else
    return visitor->visitChildren(this);
}

XParser::LengthContext* XParser::length() {
  LengthContext *_localctx = _tracker.createInstance<LengthContext>(_ctx, getState());
  enterRule(_localctx, 10, XParser::RuleLength);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(174);
    expression(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignmentStatementContext ------------------------------------------------------------------

XParser::AssignmentStatementContext::AssignmentStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t XParser::AssignmentStatementContext::getRuleIndex() const {
  return XParser::RuleAssignmentStatement;
}

void XParser::AssignmentStatementContext::copyFrom(AssignmentStatementContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- AssignVariableContext ------------------------------------------------------------------

XParser::LhsContext* XParser::AssignVariableContext::lhs() {
  return getRuleContext<XParser::LhsContext>(0);
}

XParser::RhsContext* XParser::AssignVariableContext::rhs() {
  return getRuleContext<XParser::RhsContext>(0);
}

XParser::AssignVariableContext::AssignVariableContext(AssignmentStatementContext *ctx) { copyFrom(ctx); }


antlrcpp::Any XParser::AssignVariableContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XVisitor*>(visitor))
    return parserVisitor->visitAssignVariable(this);
  else
    return visitor->visitChildren(this);
}
//----------------- DecrementVariableContext ------------------------------------------------------------------

XParser::VariableContext* XParser::DecrementVariableContext::variable() {
  return getRuleContext<XParser::VariableContext>(0);
}

XParser::DecrementVariableContext::DecrementVariableContext(AssignmentStatementContext *ctx) { copyFrom(ctx); }


antlrcpp::Any XParser::DecrementVariableContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XVisitor*>(visitor))
    return parserVisitor->visitDecrementVariable(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IncrementVariableContext ------------------------------------------------------------------

XParser::VariableContext* XParser::IncrementVariableContext::variable() {
  return getRuleContext<XParser::VariableContext>(0);
}

XParser::IncrementVariableContext::IncrementVariableContext(AssignmentStatementContext *ctx) { copyFrom(ctx); }


antlrcpp::Any XParser::IncrementVariableContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XVisitor*>(visitor))
    return parserVisitor->visitIncrementVariable(this);
  else
    return visitor->visitChildren(this);
}
XParser::AssignmentStatementContext* XParser::assignmentStatement() {
  AssignmentStatementContext *_localctx = _tracker.createInstance<AssignmentStatementContext>(_ctx, getState());
  enterRule(_localctx, 12, XParser::RuleAssignmentStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(186);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<AssignmentStatementContext *>(_tracker.createInstance<XParser::AssignVariableContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(176);
      lhs();
      setState(177);
      match(XParser::T__4);
      setState(178);
      rhs();
      break;
    }

    case 2: {
      _localctx = dynamic_cast<AssignmentStatementContext *>(_tracker.createInstance<XParser::IncrementVariableContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(180);
      variable();
      setState(181);
      match(XParser::T__5);
      break;
    }

    case 3: {
      _localctx = dynamic_cast<AssignmentStatementContext *>(_tracker.createInstance<XParser::DecrementVariableContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(183);
      variable();
      setState(184);
      match(XParser::T__6);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LhsContext ------------------------------------------------------------------

XParser::LhsContext::LhsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

XParser::VariableContext* XParser::LhsContext::variable() {
  return getRuleContext<XParser::VariableContext>(0);
}

XParser::VariableDeclarationContext* XParser::LhsContext::variableDeclaration() {
  return getRuleContext<XParser::VariableDeclarationContext>(0);
}


size_t XParser::LhsContext::getRuleIndex() const {
  return XParser::RuleLhs;
}


antlrcpp::Any XParser::LhsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XVisitor*>(visitor))
    return parserVisitor->visitLhs(this);
  else
    return visitor->visitChildren(this);
}

XParser::LhsContext* XParser::lhs() {
  LhsContext *_localctx = _tracker.createInstance<LhsContext>(_ctx, getState());
  enterRule(_localctx, 14, XParser::RuleLhs);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(190);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case XParser::IDENTIFIER: {
        enterOuterAlt(_localctx, 1);
        setState(188);
        variable();
        break;
      }

      case XParser::INT:
      case XParser::BOOL:
      case XParser::FLOAT:
      case XParser::VOID: {
        enterOuterAlt(_localctx, 2);
        setState(189);
        variableDeclaration();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RhsContext ------------------------------------------------------------------

XParser::RhsContext::RhsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

XParser::ExpressionContext* XParser::RhsContext::expression() {
  return getRuleContext<XParser::ExpressionContext>(0);
}


size_t XParser::RhsContext::getRuleIndex() const {
  return XParser::RuleRhs;
}


antlrcpp::Any XParser::RhsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XVisitor*>(visitor))
    return parserVisitor->visitRhs(this);
  else
    return visitor->visitChildren(this);
}

XParser::RhsContext* XParser::rhs() {
  RhsContext *_localctx = _tracker.createInstance<RhsContext>(_ctx, getState());
  enterRule(_localctx, 16, XParser::RuleRhs);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(192);
    expression(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ControlScopeContext ------------------------------------------------------------------

XParser::ControlScopeContext::ControlScopeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<XParser::C_statementContext *> XParser::ControlScopeContext::c_statement() {
  return getRuleContexts<XParser::C_statementContext>();
}

XParser::C_statementContext* XParser::ControlScopeContext::c_statement(size_t i) {
  return getRuleContext<XParser::C_statementContext>(i);
}

std::vector<XParser::ControlStatementContext *> XParser::ControlScopeContext::controlStatement() {
  return getRuleContexts<XParser::ControlStatementContext>();
}

XParser::ControlStatementContext* XParser::ControlScopeContext::controlStatement(size_t i) {
  return getRuleContext<XParser::ControlStatementContext>(i);
}


size_t XParser::ControlScopeContext::getRuleIndex() const {
  return XParser::RuleControlScope;
}


antlrcpp::Any XParser::ControlScopeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XVisitor*>(visitor))
    return parserVisitor->visitControlScope(this);
  else
    return visitor->visitChildren(this);
}

XParser::ControlScopeContext* XParser::controlScope() {
  ControlScopeContext *_localctx = _tracker.createInstance<ControlScopeContext>(_ctx, getState());
  enterRule(_localctx, 18, XParser::RuleControlScope);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(194);
    match(XParser::T__7);
    setState(199);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << XParser::T__0)
      | (1ULL << XParser::T__7)
      | (1ULL << XParser::INT)
      | (1ULL << XParser::BOOL)
      | (1ULL << XParser::FLOAT)
      | (1ULL << XParser::VOID)
      | (1ULL << XParser::DO)
      | (1ULL << XParser::WHILE)
      | (1ULL << XParser::FOR)
      | (1ULL << XParser::IF)
      | (1ULL << XParser::SWITCH)
      | (1ULL << XParser::PRINT)
      | (1ULL << XParser::PRINTLN)
      | (1ULL << XParser::GET)
      | (1ULL << XParser::GETLN)
      | (1ULL << XParser::RETURN)
      | (1ULL << XParser::IDENTIFIER))) != 0)) {
      setState(197);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx)) {
      case 1: {
        setState(195);
        c_statement();
        break;
      }

      case 2: {
        setState(196);
        controlStatement();
        break;
      }

      }
      setState(201);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(202);
    match(XParser::T__8);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ControlStatementContext ------------------------------------------------------------------

XParser::ControlStatementContext::ControlStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

XParser::DoWhileLoopContext* XParser::ControlStatementContext::doWhileLoop() {
  return getRuleContext<XParser::DoWhileLoopContext>(0);
}

XParser::WhileLoopContext* XParser::ControlStatementContext::whileLoop() {
  return getRuleContext<XParser::WhileLoopContext>(0);
}

XParser::ForLoopContext* XParser::ControlStatementContext::forLoop() {
  return getRuleContext<XParser::ForLoopContext>(0);
}

XParser::IfStatementContext* XParser::ControlStatementContext::ifStatement() {
  return getRuleContext<XParser::IfStatementContext>(0);
}

XParser::SwitchStatementContext* XParser::ControlStatementContext::switchStatement() {
  return getRuleContext<XParser::SwitchStatementContext>(0);
}

XParser::ControlScopeContext* XParser::ControlStatementContext::controlScope() {
  return getRuleContext<XParser::ControlScopeContext>(0);
}


size_t XParser::ControlStatementContext::getRuleIndex() const {
  return XParser::RuleControlStatement;
}


antlrcpp::Any XParser::ControlStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XVisitor*>(visitor))
    return parserVisitor->visitControlStatement(this);
  else
    return visitor->visitChildren(this);
}

XParser::ControlStatementContext* XParser::controlStatement() {
  ControlStatementContext *_localctx = _tracker.createInstance<ControlStatementContext>(_ctx, getState());
  enterRule(_localctx, 20, XParser::RuleControlStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(210);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case XParser::DO: {
        enterOuterAlt(_localctx, 1);
        setState(204);
        doWhileLoop();
        break;
      }

      case XParser::WHILE: {
        enterOuterAlt(_localctx, 2);
        setState(205);
        whileLoop();
        break;
      }

      case XParser::FOR: {
        enterOuterAlt(_localctx, 3);
        setState(206);
        forLoop();
        break;
      }

      case XParser::IF: {
        enterOuterAlt(_localctx, 4);
        setState(207);
        ifStatement();
        break;
      }

      case XParser::SWITCH: {
        enterOuterAlt(_localctx, 5);
        setState(208);
        switchStatement();
        break;
      }

      case XParser::T__7: {
        enterOuterAlt(_localctx, 6);
        setState(209);
        controlScope();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DoWhileLoopContext ------------------------------------------------------------------

XParser::DoWhileLoopContext::DoWhileLoopContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* XParser::DoWhileLoopContext::DO() {
  return getToken(XParser::DO, 0);
}

XParser::ControlScopeContext* XParser::DoWhileLoopContext::controlScope() {
  return getRuleContext<XParser::ControlScopeContext>(0);
}

tree::TerminalNode* XParser::DoWhileLoopContext::WHILE() {
  return getToken(XParser::WHILE, 0);
}

XParser::ExpressionContext* XParser::DoWhileLoopContext::expression() {
  return getRuleContext<XParser::ExpressionContext>(0);
}


size_t XParser::DoWhileLoopContext::getRuleIndex() const {
  return XParser::RuleDoWhileLoop;
}


antlrcpp::Any XParser::DoWhileLoopContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XVisitor*>(visitor))
    return parserVisitor->visitDoWhileLoop(this);
  else
    return visitor->visitChildren(this);
}

XParser::DoWhileLoopContext* XParser::doWhileLoop() {
  DoWhileLoopContext *_localctx = _tracker.createInstance<DoWhileLoopContext>(_ctx, getState());
  enterRule(_localctx, 22, XParser::RuleDoWhileLoop);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(212);
    match(XParser::DO);
    setState(213);
    controlScope();
    setState(214);
    match(XParser::WHILE);
    setState(215);
    match(XParser::T__9);
    setState(216);
    expression(0);
    setState(217);
    match(XParser::T__10);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WhileLoopContext ------------------------------------------------------------------

XParser::WhileLoopContext::WhileLoopContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* XParser::WhileLoopContext::WHILE() {
  return getToken(XParser::WHILE, 0);
}

XParser::ExpressionContext* XParser::WhileLoopContext::expression() {
  return getRuleContext<XParser::ExpressionContext>(0);
}

XParser::ControlScopeContext* XParser::WhileLoopContext::controlScope() {
  return getRuleContext<XParser::ControlScopeContext>(0);
}


size_t XParser::WhileLoopContext::getRuleIndex() const {
  return XParser::RuleWhileLoop;
}


antlrcpp::Any XParser::WhileLoopContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XVisitor*>(visitor))
    return parserVisitor->visitWhileLoop(this);
  else
    return visitor->visitChildren(this);
}

XParser::WhileLoopContext* XParser::whileLoop() {
  WhileLoopContext *_localctx = _tracker.createInstance<WhileLoopContext>(_ctx, getState());
  enterRule(_localctx, 24, XParser::RuleWhileLoop);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(219);
    match(XParser::WHILE);
    setState(220);
    match(XParser::T__9);
    setState(221);
    expression(0);
    setState(222);
    match(XParser::T__10);
    setState(223);
    controlScope();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ForLoopContext ------------------------------------------------------------------

XParser::ForLoopContext::ForLoopContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* XParser::ForLoopContext::FOR() {
  return getToken(XParser::FOR, 0);
}

XParser::ExpressionContext* XParser::ForLoopContext::expression() {
  return getRuleContext<XParser::ExpressionContext>(0);
}

XParser::ControlScopeContext* XParser::ForLoopContext::controlScope() {
  return getRuleContext<XParser::ControlScopeContext>(0);
}

std::vector<XParser::StatementContext *> XParser::ForLoopContext::statement() {
  return getRuleContexts<XParser::StatementContext>();
}

XParser::StatementContext* XParser::ForLoopContext::statement(size_t i) {
  return getRuleContext<XParser::StatementContext>(i);
}


size_t XParser::ForLoopContext::getRuleIndex() const {
  return XParser::RuleForLoop;
}


antlrcpp::Any XParser::ForLoopContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XVisitor*>(visitor))
    return parserVisitor->visitForLoop(this);
  else
    return visitor->visitChildren(this);
}

XParser::ForLoopContext* XParser::forLoop() {
  ForLoopContext *_localctx = _tracker.createInstance<ForLoopContext>(_ctx, getState());
  enterRule(_localctx, 26, XParser::RuleForLoop);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(225);
    match(XParser::FOR);
    setState(226);
    match(XParser::T__9);
    setState(228);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << XParser::T__7)
      | (1ULL << XParser::INT)
      | (1ULL << XParser::BOOL)
      | (1ULL << XParser::FLOAT)
      | (1ULL << XParser::VOID)
      | (1ULL << XParser::DO)
      | (1ULL << XParser::WHILE)
      | (1ULL << XParser::FOR)
      | (1ULL << XParser::IF)
      | (1ULL << XParser::SWITCH)
      | (1ULL << XParser::PRINT)
      | (1ULL << XParser::PRINTLN)
      | (1ULL << XParser::GET)
      | (1ULL << XParser::GETLN)
      | (1ULL << XParser::RETURN)
      | (1ULL << XParser::IDENTIFIER))) != 0)) {
      setState(227);
      statement();
    }
    setState(230);
    match(XParser::T__0);
    setState(231);
    expression(0);
    setState(232);
    match(XParser::T__0);
    setState(234);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << XParser::T__7)
      | (1ULL << XParser::INT)
      | (1ULL << XParser::BOOL)
      | (1ULL << XParser::FLOAT)
      | (1ULL << XParser::VOID)
      | (1ULL << XParser::DO)
      | (1ULL << XParser::WHILE)
      | (1ULL << XParser::FOR)
      | (1ULL << XParser::IF)
      | (1ULL << XParser::SWITCH)
      | (1ULL << XParser::PRINT)
      | (1ULL << XParser::PRINTLN)
      | (1ULL << XParser::GET)
      | (1ULL << XParser::GETLN)
      | (1ULL << XParser::RETURN)
      | (1ULL << XParser::IDENTIFIER))) != 0)) {
      setState(233);
      statement();
    }
    setState(236);
    match(XParser::T__10);
    setState(237);
    controlScope();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IfStatementContext ------------------------------------------------------------------

XParser::IfStatementContext::IfStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> XParser::IfStatementContext::IF() {
  return getTokens(XParser::IF);
}

tree::TerminalNode* XParser::IfStatementContext::IF(size_t i) {
  return getToken(XParser::IF, i);
}

std::vector<XParser::ExpressionContext *> XParser::IfStatementContext::expression() {
  return getRuleContexts<XParser::ExpressionContext>();
}

XParser::ExpressionContext* XParser::IfStatementContext::expression(size_t i) {
  return getRuleContext<XParser::ExpressionContext>(i);
}

std::vector<XParser::ControlScopeContext *> XParser::IfStatementContext::controlScope() {
  return getRuleContexts<XParser::ControlScopeContext>();
}

XParser::ControlScopeContext* XParser::IfStatementContext::controlScope(size_t i) {
  return getRuleContext<XParser::ControlScopeContext>(i);
}

std::vector<tree::TerminalNode *> XParser::IfStatementContext::ELSE() {
  return getTokens(XParser::ELSE);
}

tree::TerminalNode* XParser::IfStatementContext::ELSE(size_t i) {
  return getToken(XParser::ELSE, i);
}


size_t XParser::IfStatementContext::getRuleIndex() const {
  return XParser::RuleIfStatement;
}


antlrcpp::Any XParser::IfStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XVisitor*>(visitor))
    return parserVisitor->visitIfStatement(this);
  else
    return visitor->visitChildren(this);
}

XParser::IfStatementContext* XParser::ifStatement() {
  IfStatementContext *_localctx = _tracker.createInstance<IfStatementContext>(_ctx, getState());
  enterRule(_localctx, 28, XParser::RuleIfStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(239);
    match(XParser::IF);
    setState(240);
    match(XParser::T__9);
    setState(241);
    expression(0);
    setState(242);
    match(XParser::T__10);
    setState(243);
    controlScope();
    setState(253);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(244);
        match(XParser::ELSE);
        setState(245);
        match(XParser::IF);
        setState(246);
        match(XParser::T__9);
        setState(247);
        expression(0);
        setState(248);
        match(XParser::T__10);
        setState(249);
        controlScope(); 
      }
      setState(255);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx);
    }
    setState(258);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == XParser::ELSE) {
      setState(256);
      match(XParser::ELSE);
      setState(257);
      controlScope();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SwitchStatementContext ------------------------------------------------------------------

XParser::SwitchStatementContext::SwitchStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* XParser::SwitchStatementContext::SWITCH() {
  return getToken(XParser::SWITCH, 0);
}

XParser::ExpressionContext* XParser::SwitchStatementContext::expression() {
  return getRuleContext<XParser::ExpressionContext>(0);
}

XParser::SwitchCaseListContext* XParser::SwitchStatementContext::switchCaseList() {
  return getRuleContext<XParser::SwitchCaseListContext>(0);
}


size_t XParser::SwitchStatementContext::getRuleIndex() const {
  return XParser::RuleSwitchStatement;
}


antlrcpp::Any XParser::SwitchStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XVisitor*>(visitor))
    return parserVisitor->visitSwitchStatement(this);
  else
    return visitor->visitChildren(this);
}

XParser::SwitchStatementContext* XParser::switchStatement() {
  SwitchStatementContext *_localctx = _tracker.createInstance<SwitchStatementContext>(_ctx, getState());
  enterRule(_localctx, 30, XParser::RuleSwitchStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(260);
    match(XParser::SWITCH);
    setState(261);
    match(XParser::T__9);
    setState(262);
    expression(0);
    setState(263);
    match(XParser::T__10);
    setState(264);
    match(XParser::T__7);
    setState(265);
    switchCaseList();
    setState(266);
    match(XParser::T__8);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SwitchCaseListContext ------------------------------------------------------------------

XParser::SwitchCaseListContext::SwitchCaseListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<XParser::CaseBranchContext *> XParser::SwitchCaseListContext::caseBranch() {
  return getRuleContexts<XParser::CaseBranchContext>();
}

XParser::CaseBranchContext* XParser::SwitchCaseListContext::caseBranch(size_t i) {
  return getRuleContext<XParser::CaseBranchContext>(i);
}

XParser::DefaultBranchContext* XParser::SwitchCaseListContext::defaultBranch() {
  return getRuleContext<XParser::DefaultBranchContext>(0);
}


size_t XParser::SwitchCaseListContext::getRuleIndex() const {
  return XParser::RuleSwitchCaseList;
}


antlrcpp::Any XParser::SwitchCaseListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XVisitor*>(visitor))
    return parserVisitor->visitSwitchCaseList(this);
  else
    return visitor->visitChildren(this);
}

XParser::SwitchCaseListContext* XParser::switchCaseList() {
  SwitchCaseListContext *_localctx = _tracker.createInstance<SwitchCaseListContext>(_ctx, getState());
  enterRule(_localctx, 32, XParser::RuleSwitchCaseList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(271);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == XParser::CASE) {
      setState(268);
      caseBranch();
      setState(273);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(275);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == XParser::DEFAULT) {
      setState(274);
      defaultBranch();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CaseBranchContext ------------------------------------------------------------------

XParser::CaseBranchContext::CaseBranchContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* XParser::CaseBranchContext::CASE() {
  return getToken(XParser::CASE, 0);
}

XParser::NumberContext* XParser::CaseBranchContext::number() {
  return getRuleContext<XParser::NumberContext>(0);
}

XParser::ControlScopeContext* XParser::CaseBranchContext::controlScope() {
  return getRuleContext<XParser::ControlScopeContext>(0);
}


size_t XParser::CaseBranchContext::getRuleIndex() const {
  return XParser::RuleCaseBranch;
}


antlrcpp::Any XParser::CaseBranchContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XVisitor*>(visitor))
    return parserVisitor->visitCaseBranch(this);
  else
    return visitor->visitChildren(this);
}

XParser::CaseBranchContext* XParser::caseBranch() {
  CaseBranchContext *_localctx = _tracker.createInstance<CaseBranchContext>(_ctx, getState());
  enterRule(_localctx, 34, XParser::RuleCaseBranch);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(277);
    match(XParser::CASE);
    setState(278);
    number();
    setState(279);
    match(XParser::T__11);
    setState(280);
    controlScope();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DefaultBranchContext ------------------------------------------------------------------

XParser::DefaultBranchContext::DefaultBranchContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* XParser::DefaultBranchContext::DEFAULT() {
  return getToken(XParser::DEFAULT, 0);
}

XParser::ControlScopeContext* XParser::DefaultBranchContext::controlScope() {
  return getRuleContext<XParser::ControlScopeContext>(0);
}


size_t XParser::DefaultBranchContext::getRuleIndex() const {
  return XParser::RuleDefaultBranch;
}


antlrcpp::Any XParser::DefaultBranchContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XVisitor*>(visitor))
    return parserVisitor->visitDefaultBranch(this);
  else
    return visitor->visitChildren(this);
}

XParser::DefaultBranchContext* XParser::defaultBranch() {
  DefaultBranchContext *_localctx = _tracker.createInstance<DefaultBranchContext>(_ctx, getState());
  enterRule(_localctx, 36, XParser::RuleDefaultBranch);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(282);
    match(XParser::DEFAULT);
    setState(283);
    match(XParser::T__11);
    setState(284);
    controlScope();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionDefinitionContext ------------------------------------------------------------------

XParser::FunctionDefinitionContext::FunctionDefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

XParser::FunctionDeclarationContext* XParser::FunctionDefinitionContext::functionDeclaration() {
  return getRuleContext<XParser::FunctionDeclarationContext>(0);
}

XParser::ControlScopeContext* XParser::FunctionDefinitionContext::controlScope() {
  return getRuleContext<XParser::ControlScopeContext>(0);
}


size_t XParser::FunctionDefinitionContext::getRuleIndex() const {
  return XParser::RuleFunctionDefinition;
}


antlrcpp::Any XParser::FunctionDefinitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XVisitor*>(visitor))
    return parserVisitor->visitFunctionDefinition(this);
  else
    return visitor->visitChildren(this);
}

XParser::FunctionDefinitionContext* XParser::functionDefinition() {
  FunctionDefinitionContext *_localctx = _tracker.createInstance<FunctionDefinitionContext>(_ctx, getState());
  enterRule(_localctx, 38, XParser::RuleFunctionDefinition);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(286);
    functionDeclaration();
    setState(287);
    controlScope();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionDeclarationContext ------------------------------------------------------------------

XParser::FunctionDeclarationContext::FunctionDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

XParser::TypeIdentifierContext* XParser::FunctionDeclarationContext::typeIdentifier() {
  return getRuleContext<XParser::TypeIdentifierContext>(0);
}

XParser::FunctionIdentifierContext* XParser::FunctionDeclarationContext::functionIdentifier() {
  return getRuleContext<XParser::FunctionIdentifierContext>(0);
}

XParser::ParameterDeclarationsListContext* XParser::FunctionDeclarationContext::parameterDeclarationsList() {
  return getRuleContext<XParser::ParameterDeclarationsListContext>(0);
}

tree::TerminalNode* XParser::FunctionDeclarationContext::VOID() {
  return getToken(XParser::VOID, 0);
}


size_t XParser::FunctionDeclarationContext::getRuleIndex() const {
  return XParser::RuleFunctionDeclaration;
}


antlrcpp::Any XParser::FunctionDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XVisitor*>(visitor))
    return parserVisitor->visitFunctionDeclaration(this);
  else
    return visitor->visitChildren(this);
}

XParser::FunctionDeclarationContext* XParser::functionDeclaration() {
  FunctionDeclarationContext *_localctx = _tracker.createInstance<FunctionDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 40, XParser::RuleFunctionDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(289);
    typeIdentifier();
    setState(290);
    functionIdentifier();
    setState(291);
    match(XParser::T__9);
    setState(294);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx)) {
    case 1: {
      setState(292);
      parameterDeclarationsList();
      break;
    }

    case 2: {
      setState(293);
      match(XParser::VOID);
      break;
    }

    }
    setState(296);
    match(XParser::T__10);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionIdentifierContext ------------------------------------------------------------------

XParser::FunctionIdentifierContext::FunctionIdentifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* XParser::FunctionIdentifierContext::IDENTIFIER() {
  return getToken(XParser::IDENTIFIER, 0);
}


size_t XParser::FunctionIdentifierContext::getRuleIndex() const {
  return XParser::RuleFunctionIdentifier;
}


antlrcpp::Any XParser::FunctionIdentifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XVisitor*>(visitor))
    return parserVisitor->visitFunctionIdentifier(this);
  else
    return visitor->visitChildren(this);
}

XParser::FunctionIdentifierContext* XParser::functionIdentifier() {
  FunctionIdentifierContext *_localctx = _tracker.createInstance<FunctionIdentifierContext>(_ctx, getState());
  enterRule(_localctx, 42, XParser::RuleFunctionIdentifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(298);
    match(XParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParameterDeclarationsListContext ------------------------------------------------------------------

XParser::ParameterDeclarationsListContext::ParameterDeclarationsListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<XParser::ParameterDeclarationContext *> XParser::ParameterDeclarationsListContext::parameterDeclaration() {
  return getRuleContexts<XParser::ParameterDeclarationContext>();
}

XParser::ParameterDeclarationContext* XParser::ParameterDeclarationsListContext::parameterDeclaration(size_t i) {
  return getRuleContext<XParser::ParameterDeclarationContext>(i);
}


size_t XParser::ParameterDeclarationsListContext::getRuleIndex() const {
  return XParser::RuleParameterDeclarationsList;
}


antlrcpp::Any XParser::ParameterDeclarationsListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XVisitor*>(visitor))
    return parserVisitor->visitParameterDeclarationsList(this);
  else
    return visitor->visitChildren(this);
}

XParser::ParameterDeclarationsListContext* XParser::parameterDeclarationsList() {
  ParameterDeclarationsListContext *_localctx = _tracker.createInstance<ParameterDeclarationsListContext>(_ctx, getState());
  enterRule(_localctx, 44, XParser::RuleParameterDeclarationsList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(300);
    parameterDeclaration();
    setState(305);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == XParser::T__1) {
      setState(301);
      match(XParser::T__1);
      setState(302);
      parameterDeclaration();
      setState(307);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParameterDeclarationContext ------------------------------------------------------------------

XParser::ParameterDeclarationContext::ParameterDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

XParser::TypeIdentifierContext* XParser::ParameterDeclarationContext::typeIdentifier() {
  return getRuleContext<XParser::TypeIdentifierContext>(0);
}

XParser::ParameterIdentifierContext* XParser::ParameterDeclarationContext::parameterIdentifier() {
  return getRuleContext<XParser::ParameterIdentifierContext>(0);
}

std::vector<tree::TerminalNode *> XParser::ParameterDeclarationContext::ARRAYINDICATOR() {
  return getTokens(XParser::ARRAYINDICATOR);
}

tree::TerminalNode* XParser::ParameterDeclarationContext::ARRAYINDICATOR(size_t i) {
  return getToken(XParser::ARRAYINDICATOR, i);
}


size_t XParser::ParameterDeclarationContext::getRuleIndex() const {
  return XParser::RuleParameterDeclaration;
}


antlrcpp::Any XParser::ParameterDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XVisitor*>(visitor))
    return parserVisitor->visitParameterDeclaration(this);
  else
    return visitor->visitChildren(this);
}

XParser::ParameterDeclarationContext* XParser::parameterDeclaration() {
  ParameterDeclarationContext *_localctx = _tracker.createInstance<ParameterDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 46, XParser::RuleParameterDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(308);
    typeIdentifier();
    setState(312);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == XParser::ARRAYINDICATOR) {
      setState(309);
      match(XParser::ARRAYINDICATOR);
      setState(314);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(315);
    parameterIdentifier();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParameterIdentifierContext ------------------------------------------------------------------

XParser::ParameterIdentifierContext::ParameterIdentifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* XParser::ParameterIdentifierContext::IDENTIFIER() {
  return getToken(XParser::IDENTIFIER, 0);
}


size_t XParser::ParameterIdentifierContext::getRuleIndex() const {
  return XParser::RuleParameterIdentifier;
}


antlrcpp::Any XParser::ParameterIdentifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XVisitor*>(visitor))
    return parserVisitor->visitParameterIdentifier(this);
  else
    return visitor->visitChildren(this);
}

XParser::ParameterIdentifierContext* XParser::parameterIdentifier() {
  ParameterIdentifierContext *_localctx = _tracker.createInstance<ParameterIdentifierContext>(_ctx, getState());
  enterRule(_localctx, 48, XParser::RuleParameterIdentifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(317);
    match(XParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ReturnStatementContext ------------------------------------------------------------------

XParser::ReturnStatementContext::ReturnStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* XParser::ReturnStatementContext::RETURN() {
  return getToken(XParser::RETURN, 0);
}

XParser::ExpressionContext* XParser::ReturnStatementContext::expression() {
  return getRuleContext<XParser::ExpressionContext>(0);
}


size_t XParser::ReturnStatementContext::getRuleIndex() const {
  return XParser::RuleReturnStatement;
}


antlrcpp::Any XParser::ReturnStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XVisitor*>(visitor))
    return parserVisitor->visitReturnStatement(this);
  else
    return visitor->visitChildren(this);
}

XParser::ReturnStatementContext* XParser::returnStatement() {
  ReturnStatementContext *_localctx = _tracker.createInstance<ReturnStatementContext>(_ctx, getState());
  enterRule(_localctx, 50, XParser::RuleReturnStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(319);
    match(XParser::RETURN);
    setState(321);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << XParser::T__9)
      | (1ULL << XParser::T__13)
      | (1ULL << XParser::T__14)
      | (1ULL << XParser::IDENTIFIER)
      | (1ULL << XParser::INTEGER)
      | (1ULL << XParser::REAL)
      | (1ULL << XParser::CHARACTER)
      | (1ULL << XParser::STRING))) != 0)) {
      setState(320);
      expression(0);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionCallContext ------------------------------------------------------------------

XParser::FunctionCallContext::FunctionCallContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

XParser::FunctionIdentifierContext* XParser::FunctionCallContext::functionIdentifier() {
  return getRuleContext<XParser::FunctionIdentifierContext>(0);
}

XParser::ArgumentListContext* XParser::FunctionCallContext::argumentList() {
  return getRuleContext<XParser::ArgumentListContext>(0);
}


size_t XParser::FunctionCallContext::getRuleIndex() const {
  return XParser::RuleFunctionCall;
}


antlrcpp::Any XParser::FunctionCallContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XVisitor*>(visitor))
    return parserVisitor->visitFunctionCall(this);
  else
    return visitor->visitChildren(this);
}

XParser::FunctionCallContext* XParser::functionCall() {
  FunctionCallContext *_localctx = _tracker.createInstance<FunctionCallContext>(_ctx, getState());
  enterRule(_localctx, 52, XParser::RuleFunctionCall);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(323);
    functionIdentifier();
    setState(324);
    match(XParser::T__9);
    setState(326);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << XParser::T__9)
      | (1ULL << XParser::T__13)
      | (1ULL << XParser::T__14)
      | (1ULL << XParser::IDENTIFIER)
      | (1ULL << XParser::INTEGER)
      | (1ULL << XParser::REAL)
      | (1ULL << XParser::CHARACTER)
      | (1ULL << XParser::STRING))) != 0)) {
      setState(325);
      argumentList();
    }
    setState(328);
    match(XParser::T__10);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArgumentListContext ------------------------------------------------------------------

XParser::ArgumentListContext::ArgumentListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<XParser::ArgumentContext *> XParser::ArgumentListContext::argument() {
  return getRuleContexts<XParser::ArgumentContext>();
}

XParser::ArgumentContext* XParser::ArgumentListContext::argument(size_t i) {
  return getRuleContext<XParser::ArgumentContext>(i);
}


size_t XParser::ArgumentListContext::getRuleIndex() const {
  return XParser::RuleArgumentList;
}


antlrcpp::Any XParser::ArgumentListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XVisitor*>(visitor))
    return parserVisitor->visitArgumentList(this);
  else
    return visitor->visitChildren(this);
}

XParser::ArgumentListContext* XParser::argumentList() {
  ArgumentListContext *_localctx = _tracker.createInstance<ArgumentListContext>(_ctx, getState());
  enterRule(_localctx, 54, XParser::RuleArgumentList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(330);
    argument();
    setState(335);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == XParser::T__1) {
      setState(331);
      match(XParser::T__1);
      setState(332);
      argument();
      setState(337);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArgumentContext ------------------------------------------------------------------

XParser::ArgumentContext::ArgumentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

XParser::ExpressionContext* XParser::ArgumentContext::expression() {
  return getRuleContext<XParser::ExpressionContext>(0);
}


size_t XParser::ArgumentContext::getRuleIndex() const {
  return XParser::RuleArgument;
}


antlrcpp::Any XParser::ArgumentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XVisitor*>(visitor))
    return parserVisitor->visitArgument(this);
  else
    return visitor->visitChildren(this);
}

XParser::ArgumentContext* XParser::argument() {
  ArgumentContext *_localctx = _tracker.createInstance<ArgumentContext>(_ctx, getState());
  enterRule(_localctx, 56, XParser::RuleArgument);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(338);
    expression(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrintStatementContext ------------------------------------------------------------------

XParser::PrintStatementContext::PrintStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* XParser::PrintStatementContext::PRINT() {
  return getToken(XParser::PRINT, 0);
}

XParser::PrintArgumentsContext* XParser::PrintStatementContext::printArguments() {
  return getRuleContext<XParser::PrintArgumentsContext>(0);
}


size_t XParser::PrintStatementContext::getRuleIndex() const {
  return XParser::RulePrintStatement;
}


antlrcpp::Any XParser::PrintStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XVisitor*>(visitor))
    return parserVisitor->visitPrintStatement(this);
  else
    return visitor->visitChildren(this);
}

XParser::PrintStatementContext* XParser::printStatement() {
  PrintStatementContext *_localctx = _tracker.createInstance<PrintStatementContext>(_ctx, getState());
  enterRule(_localctx, 58, XParser::RulePrintStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(340);
    match(XParser::PRINT);
    setState(341);
    match(XParser::T__9);
    setState(342);
    printArguments();
    setState(343);
    match(XParser::T__10);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrintlnStatementContext ------------------------------------------------------------------

XParser::PrintlnStatementContext::PrintlnStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* XParser::PrintlnStatementContext::PRINTLN() {
  return getToken(XParser::PRINTLN, 0);
}

XParser::PrintArgumentsContext* XParser::PrintlnStatementContext::printArguments() {
  return getRuleContext<XParser::PrintArgumentsContext>(0);
}


size_t XParser::PrintlnStatementContext::getRuleIndex() const {
  return XParser::RulePrintlnStatement;
}


antlrcpp::Any XParser::PrintlnStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XVisitor*>(visitor))
    return parserVisitor->visitPrintlnStatement(this);
  else
    return visitor->visitChildren(this);
}

XParser::PrintlnStatementContext* XParser::printlnStatement() {
  PrintlnStatementContext *_localctx = _tracker.createInstance<PrintlnStatementContext>(_ctx, getState());
  enterRule(_localctx, 60, XParser::RulePrintlnStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(345);
    match(XParser::PRINTLN);
    setState(346);
    match(XParser::T__9);
    setState(348);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << XParser::T__9)
      | (1ULL << XParser::T__13)
      | (1ULL << XParser::T__14)
      | (1ULL << XParser::IDENTIFIER)
      | (1ULL << XParser::INTEGER)
      | (1ULL << XParser::REAL)
      | (1ULL << XParser::CHARACTER)
      | (1ULL << XParser::STRING))) != 0)) {
      setState(347);
      printArguments();
    }
    setState(350);
    match(XParser::T__10);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrintArgumentsContext ------------------------------------------------------------------

XParser::PrintArgumentsContext::PrintArgumentsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<XParser::PrintArgumentContext *> XParser::PrintArgumentsContext::printArgument() {
  return getRuleContexts<XParser::PrintArgumentContext>();
}

XParser::PrintArgumentContext* XParser::PrintArgumentsContext::printArgument(size_t i) {
  return getRuleContext<XParser::PrintArgumentContext>(i);
}


size_t XParser::PrintArgumentsContext::getRuleIndex() const {
  return XParser::RulePrintArguments;
}


antlrcpp::Any XParser::PrintArgumentsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XVisitor*>(visitor))
    return parserVisitor->visitPrintArguments(this);
  else
    return visitor->visitChildren(this);
}

XParser::PrintArgumentsContext* XParser::printArguments() {
  PrintArgumentsContext *_localctx = _tracker.createInstance<PrintArgumentsContext>(_ctx, getState());
  enterRule(_localctx, 62, XParser::RulePrintArguments);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(352);
    printArgument();
    setState(357);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == XParser::T__1) {
      setState(353);
      match(XParser::T__1);
      setState(354);
      printArgument();
      setState(359);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrintArgumentContext ------------------------------------------------------------------

XParser::PrintArgumentContext::PrintArgumentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

XParser::ExpressionContext* XParser::PrintArgumentContext::expression() {
  return getRuleContext<XParser::ExpressionContext>(0);
}

XParser::FieldWidthContext* XParser::PrintArgumentContext::fieldWidth() {
  return getRuleContext<XParser::FieldWidthContext>(0);
}


size_t XParser::PrintArgumentContext::getRuleIndex() const {
  return XParser::RulePrintArgument;
}


antlrcpp::Any XParser::PrintArgumentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XVisitor*>(visitor))
    return parserVisitor->visitPrintArgument(this);
  else
    return visitor->visitChildren(this);
}

XParser::PrintArgumentContext* XParser::printArgument() {
  PrintArgumentContext *_localctx = _tracker.createInstance<PrintArgumentContext>(_ctx, getState());
  enterRule(_localctx, 64, XParser::RulePrintArgument);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(360);
    expression(0);
    setState(363);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == XParser::T__11) {
      setState(361);
      match(XParser::T__11);
      setState(362);
      fieldWidth();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FieldWidthContext ------------------------------------------------------------------

XParser::FieldWidthContext::FieldWidthContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

XParser::IntegerConstantContext* XParser::FieldWidthContext::integerConstant() {
  return getRuleContext<XParser::IntegerConstantContext>(0);
}

XParser::SignContext* XParser::FieldWidthContext::sign() {
  return getRuleContext<XParser::SignContext>(0);
}

XParser::DecimalPlacesContext* XParser::FieldWidthContext::decimalPlaces() {
  return getRuleContext<XParser::DecimalPlacesContext>(0);
}


size_t XParser::FieldWidthContext::getRuleIndex() const {
  return XParser::RuleFieldWidth;
}


antlrcpp::Any XParser::FieldWidthContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XVisitor*>(visitor))
    return parserVisitor->visitFieldWidth(this);
  else
    return visitor->visitChildren(this);
}

XParser::FieldWidthContext* XParser::fieldWidth() {
  FieldWidthContext *_localctx = _tracker.createInstance<FieldWidthContext>(_ctx, getState());
  enterRule(_localctx, 66, XParser::RuleFieldWidth);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(366);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == XParser::T__14) {
      setState(365);
      sign();
    }
    setState(368);
    integerConstant();
    setState(371);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == XParser::T__11) {
      setState(369);
      match(XParser::T__11);
      setState(370);
      decimalPlaces();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DecimalPlacesContext ------------------------------------------------------------------

XParser::DecimalPlacesContext::DecimalPlacesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

XParser::IntegerConstantContext* XParser::DecimalPlacesContext::integerConstant() {
  return getRuleContext<XParser::IntegerConstantContext>(0);
}


size_t XParser::DecimalPlacesContext::getRuleIndex() const {
  return XParser::RuleDecimalPlaces;
}


antlrcpp::Any XParser::DecimalPlacesContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XVisitor*>(visitor))
    return parserVisitor->visitDecimalPlaces(this);
  else
    return visitor->visitChildren(this);
}

XParser::DecimalPlacesContext* XParser::decimalPlaces() {
  DecimalPlacesContext *_localctx = _tracker.createInstance<DecimalPlacesContext>(_ctx, getState());
  enterRule(_localctx, 68, XParser::RuleDecimalPlaces);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(373);
    integerConstant();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- GetStatementContext ------------------------------------------------------------------

XParser::GetStatementContext::GetStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* XParser::GetStatementContext::GET() {
  return getToken(XParser::GET, 0);
}

XParser::GetArgumentsContext* XParser::GetStatementContext::getArguments() {
  return getRuleContext<XParser::GetArgumentsContext>(0);
}


size_t XParser::GetStatementContext::getRuleIndex() const {
  return XParser::RuleGetStatement;
}


antlrcpp::Any XParser::GetStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XVisitor*>(visitor))
    return parserVisitor->visitGetStatement(this);
  else
    return visitor->visitChildren(this);
}

XParser::GetStatementContext* XParser::getStatement() {
  GetStatementContext *_localctx = _tracker.createInstance<GetStatementContext>(_ctx, getState());
  enterRule(_localctx, 70, XParser::RuleGetStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(375);
    match(XParser::GET);
    setState(376);
    match(XParser::T__9);
    setState(377);
    getArguments();
    setState(378);
    match(XParser::T__10);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- GetlnStatementContext ------------------------------------------------------------------

XParser::GetlnStatementContext::GetlnStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* XParser::GetlnStatementContext::GETLN() {
  return getToken(XParser::GETLN, 0);
}

XParser::GetArgumentsContext* XParser::GetlnStatementContext::getArguments() {
  return getRuleContext<XParser::GetArgumentsContext>(0);
}


size_t XParser::GetlnStatementContext::getRuleIndex() const {
  return XParser::RuleGetlnStatement;
}


antlrcpp::Any XParser::GetlnStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XVisitor*>(visitor))
    return parserVisitor->visitGetlnStatement(this);
  else
    return visitor->visitChildren(this);
}

XParser::GetlnStatementContext* XParser::getlnStatement() {
  GetlnStatementContext *_localctx = _tracker.createInstance<GetlnStatementContext>(_ctx, getState());
  enterRule(_localctx, 72, XParser::RuleGetlnStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(380);
    match(XParser::GETLN);
    setState(381);
    match(XParser::T__9);
    setState(382);
    getArguments();
    setState(383);
    match(XParser::T__10);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- GetArgumentsContext ------------------------------------------------------------------

XParser::GetArgumentsContext::GetArgumentsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<XParser::VariableContext *> XParser::GetArgumentsContext::variable() {
  return getRuleContexts<XParser::VariableContext>();
}

XParser::VariableContext* XParser::GetArgumentsContext::variable(size_t i) {
  return getRuleContext<XParser::VariableContext>(i);
}


size_t XParser::GetArgumentsContext::getRuleIndex() const {
  return XParser::RuleGetArguments;
}


antlrcpp::Any XParser::GetArgumentsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XVisitor*>(visitor))
    return parserVisitor->visitGetArguments(this);
  else
    return visitor->visitChildren(this);
}

XParser::GetArgumentsContext* XParser::getArguments() {
  GetArgumentsContext *_localctx = _tracker.createInstance<GetArgumentsContext>(_ctx, getState());
  enterRule(_localctx, 74, XParser::RuleGetArguments);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(385);
    variable();
    setState(390);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == XParser::T__1) {
      setState(386);
      match(XParser::T__1);
      setState(387);
      variable();
      setState(392);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

XParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<XParser::SimpleExpressionContext *> XParser::ExpressionContext::simpleExpression() {
  return getRuleContexts<XParser::SimpleExpressionContext>();
}

XParser::SimpleExpressionContext* XParser::ExpressionContext::simpleExpression(size_t i) {
  return getRuleContext<XParser::SimpleExpressionContext>(i);
}

XParser::RelOpContext* XParser::ExpressionContext::relOp() {
  return getRuleContext<XParser::RelOpContext>(0);
}

std::vector<XParser::ExpressionContext *> XParser::ExpressionContext::expression() {
  return getRuleContexts<XParser::ExpressionContext>();
}

XParser::ExpressionContext* XParser::ExpressionContext::expression(size_t i) {
  return getRuleContext<XParser::ExpressionContext>(i);
}


size_t XParser::ExpressionContext::getRuleIndex() const {
  return XParser::RuleExpression;
}


antlrcpp::Any XParser::ExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XVisitor*>(visitor))
    return parserVisitor->visitExpression(this);
  else
    return visitor->visitChildren(this);
}


XParser::ExpressionContext* XParser::expression() {
   return expression(0);
}

XParser::ExpressionContext* XParser::expression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  XParser::ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, parentState);
  XParser::ExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 76;
  enterRecursionRule(_localctx, 76, XParser::RuleExpression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(394);
    simpleExpression();
    setState(398);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 30, _ctx)) {
    case 1: {
      setState(395);
      relOp();
      setState(396);
      simpleExpression();
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(408);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 31, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleExpression);
        setState(400);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(401);
        match(XParser::T__12);
        setState(402);
        expression(0);
        setState(403);
        match(XParser::T__11);
        setState(404);
        expression(2); 
      }
      setState(410);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 31, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- SimpleExpressionContext ------------------------------------------------------------------

XParser::SimpleExpressionContext::SimpleExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<XParser::TermContext *> XParser::SimpleExpressionContext::term() {
  return getRuleContexts<XParser::TermContext>();
}

XParser::TermContext* XParser::SimpleExpressionContext::term(size_t i) {
  return getRuleContext<XParser::TermContext>(i);
}

XParser::SignContext* XParser::SimpleExpressionContext::sign() {
  return getRuleContext<XParser::SignContext>(0);
}

std::vector<XParser::AddOpContext *> XParser::SimpleExpressionContext::addOp() {
  return getRuleContexts<XParser::AddOpContext>();
}

XParser::AddOpContext* XParser::SimpleExpressionContext::addOp(size_t i) {
  return getRuleContext<XParser::AddOpContext>(i);
}


size_t XParser::SimpleExpressionContext::getRuleIndex() const {
  return XParser::RuleSimpleExpression;
}


antlrcpp::Any XParser::SimpleExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XVisitor*>(visitor))
    return parserVisitor->visitSimpleExpression(this);
  else
    return visitor->visitChildren(this);
}

XParser::SimpleExpressionContext* XParser::simpleExpression() {
  SimpleExpressionContext *_localctx = _tracker.createInstance<SimpleExpressionContext>(_ctx, getState());
  enterRule(_localctx, 78, XParser::RuleSimpleExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(412);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 32, _ctx)) {
    case 1: {
      setState(411);
      sign();
      break;
    }

    }
    setState(414);
    term();
    setState(420);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 33, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(415);
        addOp();
        setState(416);
        term(); 
      }
      setState(422);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 33, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TermContext ------------------------------------------------------------------

XParser::TermContext::TermContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<XParser::FactorContext *> XParser::TermContext::factor() {
  return getRuleContexts<XParser::FactorContext>();
}

XParser::FactorContext* XParser::TermContext::factor(size_t i) {
  return getRuleContext<XParser::FactorContext>(i);
}

std::vector<XParser::MulOpContext *> XParser::TermContext::mulOp() {
  return getRuleContexts<XParser::MulOpContext>();
}

XParser::MulOpContext* XParser::TermContext::mulOp(size_t i) {
  return getRuleContext<XParser::MulOpContext>(i);
}


size_t XParser::TermContext::getRuleIndex() const {
  return XParser::RuleTerm;
}


antlrcpp::Any XParser::TermContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XVisitor*>(visitor))
    return parserVisitor->visitTerm(this);
  else
    return visitor->visitChildren(this);
}

XParser::TermContext* XParser::term() {
  TermContext *_localctx = _tracker.createInstance<TermContext>(_ctx, getState());
  enterRule(_localctx, 80, XParser::RuleTerm);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(423);
    factor();
    setState(429);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 34, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(424);
        mulOp();
        setState(425);
        factor(); 
      }
      setState(431);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 34, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FactorContext ------------------------------------------------------------------

XParser::FactorContext::FactorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t XParser::FactorContext::getRuleIndex() const {
  return XParser::RuleFactor;
}

void XParser::FactorContext::copyFrom(FactorContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
  this->type = ctx->type;
}

//----------------- NumberFactorContext ------------------------------------------------------------------

XParser::NumberContext* XParser::NumberFactorContext::number() {
  return getRuleContext<XParser::NumberContext>(0);
}

XParser::NumberFactorContext::NumberFactorContext(FactorContext *ctx) { copyFrom(ctx); }


antlrcpp::Any XParser::NumberFactorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XVisitor*>(visitor))
    return parserVisitor->visitNumberFactor(this);
  else
    return visitor->visitChildren(this);
}
//----------------- StringFactorContext ------------------------------------------------------------------

XParser::StringConstantContext* XParser::StringFactorContext::stringConstant() {
  return getRuleContext<XParser::StringConstantContext>(0);
}

XParser::StringFactorContext::StringFactorContext(FactorContext *ctx) { copyFrom(ctx); }


antlrcpp::Any XParser::StringFactorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XVisitor*>(visitor))
    return parserVisitor->visitStringFactor(this);
  else
    return visitor->visitChildren(this);
}
//----------------- CharacterFactorContext ------------------------------------------------------------------

XParser::CharacterConstantContext* XParser::CharacterFactorContext::characterConstant() {
  return getRuleContext<XParser::CharacterConstantContext>(0);
}

XParser::CharacterFactorContext::CharacterFactorContext(FactorContext *ctx) { copyFrom(ctx); }


antlrcpp::Any XParser::CharacterFactorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XVisitor*>(visitor))
    return parserVisitor->visitCharacterFactor(this);
  else
    return visitor->visitChildren(this);
}
//----------------- VariableFactorContext ------------------------------------------------------------------

XParser::VariableContext* XParser::VariableFactorContext::variable() {
  return getRuleContext<XParser::VariableContext>(0);
}

XParser::VariableFactorContext::VariableFactorContext(FactorContext *ctx) { copyFrom(ctx); }


antlrcpp::Any XParser::VariableFactorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XVisitor*>(visitor))
    return parserVisitor->visitVariableFactor(this);
  else
    return visitor->visitChildren(this);
}
//----------------- FunctionCallFactorContext ------------------------------------------------------------------

XParser::FunctionCallContext* XParser::FunctionCallFactorContext::functionCall() {
  return getRuleContext<XParser::FunctionCallContext>(0);
}

XParser::FunctionCallFactorContext::FunctionCallFactorContext(FactorContext *ctx) { copyFrom(ctx); }


antlrcpp::Any XParser::FunctionCallFactorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XVisitor*>(visitor))
    return parserVisitor->visitFunctionCallFactor(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NotFactorContext ------------------------------------------------------------------

XParser::FactorContext* XParser::NotFactorContext::factor() {
  return getRuleContext<XParser::FactorContext>(0);
}

XParser::NotFactorContext::NotFactorContext(FactorContext *ctx) { copyFrom(ctx); }


antlrcpp::Any XParser::NotFactorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XVisitor*>(visitor))
    return parserVisitor->visitNotFactor(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ParenthesizedFactorContext ------------------------------------------------------------------

XParser::ExpressionContext* XParser::ParenthesizedFactorContext::expression() {
  return getRuleContext<XParser::ExpressionContext>(0);
}

XParser::ParenthesizedFactorContext::ParenthesizedFactorContext(FactorContext *ctx) { copyFrom(ctx); }


antlrcpp::Any XParser::ParenthesizedFactorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XVisitor*>(visitor))
    return parserVisitor->visitParenthesizedFactor(this);
  else
    return visitor->visitChildren(this);
}
XParser::FactorContext* XParser::factor() {
  FactorContext *_localctx = _tracker.createInstance<FactorContext>(_ctx, getState());
  enterRule(_localctx, 82, XParser::RuleFactor);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(443);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 35, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<FactorContext *>(_tracker.createInstance<XParser::VariableFactorContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(432);
      variable();
      break;
    }

    case 2: {
      _localctx = dynamic_cast<FactorContext *>(_tracker.createInstance<XParser::NumberFactorContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(433);
      number();
      break;
    }

    case 3: {
      _localctx = dynamic_cast<FactorContext *>(_tracker.createInstance<XParser::CharacterFactorContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(434);
      characterConstant();
      break;
    }

    case 4: {
      _localctx = dynamic_cast<FactorContext *>(_tracker.createInstance<XParser::StringFactorContext>(_localctx));
      enterOuterAlt(_localctx, 4);
      setState(435);
      stringConstant();
      break;
    }

    case 5: {
      _localctx = dynamic_cast<FactorContext *>(_tracker.createInstance<XParser::FunctionCallFactorContext>(_localctx));
      enterOuterAlt(_localctx, 5);
      setState(436);
      functionCall();
      break;
    }

    case 6: {
      _localctx = dynamic_cast<FactorContext *>(_tracker.createInstance<XParser::NotFactorContext>(_localctx));
      enterOuterAlt(_localctx, 6);
      setState(437);
      match(XParser::T__13);
      setState(438);
      factor();
      break;
    }

    case 7: {
      _localctx = dynamic_cast<FactorContext *>(_tracker.createInstance<XParser::ParenthesizedFactorContext>(_localctx));
      enterOuterAlt(_localctx, 7);
      setState(439);
      match(XParser::T__9);
      setState(440);
      expression(0);
      setState(441);
      match(XParser::T__10);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VariableContext ------------------------------------------------------------------

XParser::VariableContext::VariableContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

XParser::VariableIdentifierContext* XParser::VariableContext::variableIdentifier() {
  return getRuleContext<XParser::VariableIdentifierContext>(0);
}

std::vector<XParser::ModifierContext *> XParser::VariableContext::modifier() {
  return getRuleContexts<XParser::ModifierContext>();
}

XParser::ModifierContext* XParser::VariableContext::modifier(size_t i) {
  return getRuleContext<XParser::ModifierContext>(i);
}


size_t XParser::VariableContext::getRuleIndex() const {
  return XParser::RuleVariable;
}


antlrcpp::Any XParser::VariableContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XVisitor*>(visitor))
    return parserVisitor->visitVariable(this);
  else
    return visitor->visitChildren(this);
}

XParser::VariableContext* XParser::variable() {
  VariableContext *_localctx = _tracker.createInstance<VariableContext>(_ctx, getState());
  enterRule(_localctx, 84, XParser::RuleVariable);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(445);
    variableIdentifier();
    setState(449);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 36, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(446);
        modifier(); 
      }
      setState(451);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 36, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ModifierContext ------------------------------------------------------------------

XParser::ModifierContext::ModifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

XParser::IndexContext* XParser::ModifierContext::index() {
  return getRuleContext<XParser::IndexContext>(0);
}


size_t XParser::ModifierContext::getRuleIndex() const {
  return XParser::RuleModifier;
}


antlrcpp::Any XParser::ModifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XVisitor*>(visitor))
    return parserVisitor->visitModifier(this);
  else
    return visitor->visitChildren(this);
}

XParser::ModifierContext* XParser::modifier() {
  ModifierContext *_localctx = _tracker.createInstance<ModifierContext>(_ctx, getState());
  enterRule(_localctx, 86, XParser::RuleModifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(452);
    match(XParser::T__2);
    setState(453);
    index();
    setState(454);
    match(XParser::T__3);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IndexContext ------------------------------------------------------------------

XParser::IndexContext::IndexContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

XParser::ExpressionContext* XParser::IndexContext::expression() {
  return getRuleContext<XParser::ExpressionContext>(0);
}


size_t XParser::IndexContext::getRuleIndex() const {
  return XParser::RuleIndex;
}


antlrcpp::Any XParser::IndexContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XVisitor*>(visitor))
    return parserVisitor->visitIndex(this);
  else
    return visitor->visitChildren(this);
}

XParser::IndexContext* XParser::index() {
  IndexContext *_localctx = _tracker.createInstance<IndexContext>(_ctx, getState());
  enterRule(_localctx, 88, XParser::RuleIndex);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(456);
    expression(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VariableIdentifierContext ------------------------------------------------------------------

XParser::VariableIdentifierContext::VariableIdentifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* XParser::VariableIdentifierContext::IDENTIFIER() {
  return getToken(XParser::IDENTIFIER, 0);
}


size_t XParser::VariableIdentifierContext::getRuleIndex() const {
  return XParser::RuleVariableIdentifier;
}


antlrcpp::Any XParser::VariableIdentifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XVisitor*>(visitor))
    return parserVisitor->visitVariableIdentifier(this);
  else
    return visitor->visitChildren(this);
}

XParser::VariableIdentifierContext* XParser::variableIdentifier() {
  VariableIdentifierContext *_localctx = _tracker.createInstance<VariableIdentifierContext>(_ctx, getState());
  enterRule(_localctx, 90, XParser::RuleVariableIdentifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(458);
    match(XParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NumberContext ------------------------------------------------------------------

XParser::NumberContext::NumberContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

XParser::UnsignedNumberContext* XParser::NumberContext::unsignedNumber() {
  return getRuleContext<XParser::UnsignedNumberContext>(0);
}

XParser::SignContext* XParser::NumberContext::sign() {
  return getRuleContext<XParser::SignContext>(0);
}


size_t XParser::NumberContext::getRuleIndex() const {
  return XParser::RuleNumber;
}


antlrcpp::Any XParser::NumberContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XVisitor*>(visitor))
    return parserVisitor->visitNumber(this);
  else
    return visitor->visitChildren(this);
}

XParser::NumberContext* XParser::number() {
  NumberContext *_localctx = _tracker.createInstance<NumberContext>(_ctx, getState());
  enterRule(_localctx, 92, XParser::RuleNumber);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(461);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == XParser::T__14) {
      setState(460);
      sign();
    }
    setState(463);
    unsignedNumber();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnsignedNumberContext ------------------------------------------------------------------

XParser::UnsignedNumberContext::UnsignedNumberContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

XParser::IntegerConstantContext* XParser::UnsignedNumberContext::integerConstant() {
  return getRuleContext<XParser::IntegerConstantContext>(0);
}

XParser::RealConstantContext* XParser::UnsignedNumberContext::realConstant() {
  return getRuleContext<XParser::RealConstantContext>(0);
}


size_t XParser::UnsignedNumberContext::getRuleIndex() const {
  return XParser::RuleUnsignedNumber;
}


antlrcpp::Any XParser::UnsignedNumberContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XVisitor*>(visitor))
    return parserVisitor->visitUnsignedNumber(this);
  else
    return visitor->visitChildren(this);
}

XParser::UnsignedNumberContext* XParser::unsignedNumber() {
  UnsignedNumberContext *_localctx = _tracker.createInstance<UnsignedNumberContext>(_ctx, getState());
  enterRule(_localctx, 94, XParser::RuleUnsignedNumber);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(467);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case XParser::INTEGER: {
        enterOuterAlt(_localctx, 1);
        setState(465);
        integerConstant();
        break;
      }

      case XParser::REAL: {
        enterOuterAlt(_localctx, 2);
        setState(466);
        realConstant();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SignContext ------------------------------------------------------------------

XParser::SignContext::SignContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t XParser::SignContext::getRuleIndex() const {
  return XParser::RuleSign;
}


antlrcpp::Any XParser::SignContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XVisitor*>(visitor))
    return parserVisitor->visitSign(this);
  else
    return visitor->visitChildren(this);
}

XParser::SignContext* XParser::sign() {
  SignContext *_localctx = _tracker.createInstance<SignContext>(_ctx, getState());
  enterRule(_localctx, 96, XParser::RuleSign);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(469);
    match(XParser::T__14);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IntegerConstantContext ------------------------------------------------------------------

XParser::IntegerConstantContext::IntegerConstantContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* XParser::IntegerConstantContext::INTEGER() {
  return getToken(XParser::INTEGER, 0);
}


size_t XParser::IntegerConstantContext::getRuleIndex() const {
  return XParser::RuleIntegerConstant;
}


antlrcpp::Any XParser::IntegerConstantContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XVisitor*>(visitor))
    return parserVisitor->visitIntegerConstant(this);
  else
    return visitor->visitChildren(this);
}

XParser::IntegerConstantContext* XParser::integerConstant() {
  IntegerConstantContext *_localctx = _tracker.createInstance<IntegerConstantContext>(_ctx, getState());
  enterRule(_localctx, 98, XParser::RuleIntegerConstant);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(471);
    match(XParser::INTEGER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RealConstantContext ------------------------------------------------------------------

XParser::RealConstantContext::RealConstantContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* XParser::RealConstantContext::REAL() {
  return getToken(XParser::REAL, 0);
}


size_t XParser::RealConstantContext::getRuleIndex() const {
  return XParser::RuleRealConstant;
}


antlrcpp::Any XParser::RealConstantContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XVisitor*>(visitor))
    return parserVisitor->visitRealConstant(this);
  else
    return visitor->visitChildren(this);
}

XParser::RealConstantContext* XParser::realConstant() {
  RealConstantContext *_localctx = _tracker.createInstance<RealConstantContext>(_ctx, getState());
  enterRule(_localctx, 100, XParser::RuleRealConstant);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(473);
    match(XParser::REAL);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RelOpContext ------------------------------------------------------------------

XParser::RelOpContext::RelOpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t XParser::RelOpContext::getRuleIndex() const {
  return XParser::RuleRelOp;
}


antlrcpp::Any XParser::RelOpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XVisitor*>(visitor))
    return parserVisitor->visitRelOp(this);
  else
    return visitor->visitChildren(this);
}

XParser::RelOpContext* XParser::relOp() {
  RelOpContext *_localctx = _tracker.createInstance<RelOpContext>(_ctx, getState());
  enterRule(_localctx, 102, XParser::RuleRelOp);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(475);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << XParser::T__15)
      | (1ULL << XParser::T__16)
      | (1ULL << XParser::T__17)
      | (1ULL << XParser::T__18)
      | (1ULL << XParser::T__19)
      | (1ULL << XParser::T__20))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AddOpContext ------------------------------------------------------------------

XParser::AddOpContext::AddOpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t XParser::AddOpContext::getRuleIndex() const {
  return XParser::RuleAddOp;
}


antlrcpp::Any XParser::AddOpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XVisitor*>(visitor))
    return parserVisitor->visitAddOp(this);
  else
    return visitor->visitChildren(this);
}

XParser::AddOpContext* XParser::addOp() {
  AddOpContext *_localctx = _tracker.createInstance<AddOpContext>(_ctx, getState());
  enterRule(_localctx, 104, XParser::RuleAddOp);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(477);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << XParser::T__14)
      | (1ULL << XParser::T__21)
      | (1ULL << XParser::T__22))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MulOpContext ------------------------------------------------------------------

XParser::MulOpContext::MulOpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t XParser::MulOpContext::getRuleIndex() const {
  return XParser::RuleMulOp;
}


antlrcpp::Any XParser::MulOpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XVisitor*>(visitor))
    return parserVisitor->visitMulOp(this);
  else
    return visitor->visitChildren(this);
}

XParser::MulOpContext* XParser::mulOp() {
  MulOpContext *_localctx = _tracker.createInstance<MulOpContext>(_ctx, getState());
  enterRule(_localctx, 106, XParser::RuleMulOp);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(479);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << XParser::T__23)
      | (1ULL << XParser::T__24)
      | (1ULL << XParser::T__25)
      | (1ULL << XParser::T__26))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeIdentifierContext ------------------------------------------------------------------

XParser::TypeIdentifierContext::TypeIdentifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* XParser::TypeIdentifierContext::INT() {
  return getToken(XParser::INT, 0);
}

tree::TerminalNode* XParser::TypeIdentifierContext::BOOL() {
  return getToken(XParser::BOOL, 0);
}

tree::TerminalNode* XParser::TypeIdentifierContext::FLOAT() {
  return getToken(XParser::FLOAT, 0);
}

tree::TerminalNode* XParser::TypeIdentifierContext::VOID() {
  return getToken(XParser::VOID, 0);
}


size_t XParser::TypeIdentifierContext::getRuleIndex() const {
  return XParser::RuleTypeIdentifier;
}


antlrcpp::Any XParser::TypeIdentifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XVisitor*>(visitor))
    return parserVisitor->visitTypeIdentifier(this);
  else
    return visitor->visitChildren(this);
}

XParser::TypeIdentifierContext* XParser::typeIdentifier() {
  TypeIdentifierContext *_localctx = _tracker.createInstance<TypeIdentifierContext>(_ctx, getState());
  enterRule(_localctx, 108, XParser::RuleTypeIdentifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(481);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << XParser::INT)
      | (1ULL << XParser::BOOL)
      | (1ULL << XParser::FLOAT)
      | (1ULL << XParser::VOID))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CharacterConstantContext ------------------------------------------------------------------

XParser::CharacterConstantContext::CharacterConstantContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* XParser::CharacterConstantContext::CHARACTER() {
  return getToken(XParser::CHARACTER, 0);
}


size_t XParser::CharacterConstantContext::getRuleIndex() const {
  return XParser::RuleCharacterConstant;
}


antlrcpp::Any XParser::CharacterConstantContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XVisitor*>(visitor))
    return parserVisitor->visitCharacterConstant(this);
  else
    return visitor->visitChildren(this);
}

XParser::CharacterConstantContext* XParser::characterConstant() {
  CharacterConstantContext *_localctx = _tracker.createInstance<CharacterConstantContext>(_ctx, getState());
  enterRule(_localctx, 110, XParser::RuleCharacterConstant);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(483);
    match(XParser::CHARACTER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StringConstantContext ------------------------------------------------------------------

XParser::StringConstantContext::StringConstantContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* XParser::StringConstantContext::STRING() {
  return getToken(XParser::STRING, 0);
}


size_t XParser::StringConstantContext::getRuleIndex() const {
  return XParser::RuleStringConstant;
}


antlrcpp::Any XParser::StringConstantContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XVisitor*>(visitor))
    return parserVisitor->visitStringConstant(this);
  else
    return visitor->visitChildren(this);
}

XParser::StringConstantContext* XParser::stringConstant() {
  StringConstantContext *_localctx = _tracker.createInstance<StringConstantContext>(_ctx, getState());
  enterRule(_localctx, 112, XParser::RuleStringConstant);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(485);
    match(XParser::STRING);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool XParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 38: return expressionSempred(dynamic_cast<ExpressionContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool XParser::expressionSempred(ExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> XParser::_decisionToDFA;
atn::PredictionContextCache XParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN XParser::_atn;
std::vector<uint16_t> XParser::_serializedATN;

std::vector<std::string> XParser::_ruleNames = {
  "program", "c_statement", "statement", "emptyStatement", "variableDeclaration", 
  "length", "assignmentStatement", "lhs", "rhs", "controlScope", "controlStatement", 
  "doWhileLoop", "whileLoop", "forLoop", "ifStatement", "switchStatement", 
  "switchCaseList", "caseBranch", "defaultBranch", "functionDefinition", 
  "functionDeclaration", "functionIdentifier", "parameterDeclarationsList", 
  "parameterDeclaration", "parameterIdentifier", "returnStatement", "functionCall", 
  "argumentList", "argument", "printStatement", "printlnStatement", "printArguments", 
  "printArgument", "fieldWidth", "decimalPlaces", "getStatement", "getlnStatement", 
  "getArguments", "expression", "simpleExpression", "term", "factor", "variable", 
  "modifier", "index", "variableIdentifier", "number", "unsignedNumber", 
  "sign", "integerConstant", "realConstant", "relOp", "addOp", "mulOp", 
  "typeIdentifier", "characterConstant", "stringConstant"
};

std::vector<std::string> XParser::_literalNames = {
  "", "';'", "','", "'['", "']'", "'='", "'++'", "'--'", "'{'", "'}'", "'('", 
  "')'", "':'", "'?'", "'!'", "'-'", "'=='", "'!='", "'<'", "'<='", "'>'", 
  "'>='", "'+'", "'||'", "'*'", "'/'", "'%'", "'&&'", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "'[]'", "'''", "'\"'", 
  "'//'"
};

std::vector<std::string> XParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "INT", "BOOL", "FLOAT", "VOID", 
  "DO", "WHILE", "FOR", "IF", "ELSEIF", "ELSE", "SWITCH", "CASE", "DEFAULT", 
  "PRINT", "PRINTLN", "GET", "GETLN", "RETURN", "ARRAYINDICATOR", "SINGLEQUOTE", 
  "DOUBLEQUOTE", "DOUBLESLASH", "IDENTIFIER", "INTEGER", "REAL", "CHARACTER", 
  "STRING", "NEWLINE", "WS", "COMMENT", "BLOCKCOMMENT"
};

dfa::Vocabulary XParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> XParser::_tokenNames;

XParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x3, 0x3c, 0x1ea, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
    0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 
    0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 
    0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 
    0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 
    0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 
    0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 0x9, 0x17, 0x4, 0x18, 0x9, 
    0x18, 0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 0x9, 0x1a, 0x4, 0x1b, 0x9, 0x1b, 
    0x4, 0x1c, 0x9, 0x1c, 0x4, 0x1d, 0x9, 0x1d, 0x4, 0x1e, 0x9, 0x1e, 0x4, 
    0x1f, 0x9, 0x1f, 0x4, 0x20, 0x9, 0x20, 0x4, 0x21, 0x9, 0x21, 0x4, 0x22, 
    0x9, 0x22, 0x4, 0x23, 0x9, 0x23, 0x4, 0x24, 0x9, 0x24, 0x4, 0x25, 0x9, 
    0x25, 0x4, 0x26, 0x9, 0x26, 0x4, 0x27, 0x9, 0x27, 0x4, 0x28, 0x9, 0x28, 
    0x4, 0x29, 0x9, 0x29, 0x4, 0x2a, 0x9, 0x2a, 0x4, 0x2b, 0x9, 0x2b, 0x4, 
    0x2c, 0x9, 0x2c, 0x4, 0x2d, 0x9, 0x2d, 0x4, 0x2e, 0x9, 0x2e, 0x4, 0x2f, 
    0x9, 0x2f, 0x4, 0x30, 0x9, 0x30, 0x4, 0x31, 0x9, 0x31, 0x4, 0x32, 0x9, 
    0x32, 0x4, 0x33, 0x9, 0x33, 0x4, 0x34, 0x9, 0x34, 0x4, 0x35, 0x9, 0x35, 
    0x4, 0x36, 0x9, 0x36, 0x4, 0x37, 0x9, 0x37, 0x4, 0x38, 0x9, 0x38, 0x4, 
    0x39, 0x9, 0x39, 0x4, 0x3a, 0x9, 0x3a, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 
    0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 
    0x6, 0x2, 0x7f, 0xa, 0x2, 0xd, 0x2, 0xe, 0x2, 0x80, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x5, 0x3, 0x8c, 0xa, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 
    0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x5, 0x4, 0x97, 0xa, 0x4, 
    0x3, 0x5, 0x3, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x7, 0x6, 
    0x9f, 0xa, 0x6, 0xc, 0x6, 0xe, 0x6, 0xa2, 0xb, 0x6, 0x3, 0x6, 0x3, 0x6, 
    0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x7, 0x6, 0xaa, 0xa, 0x6, 0xc, 
    0x6, 0xe, 0x6, 0xad, 0xb, 0x6, 0x5, 0x6, 0xaf, 0xa, 0x6, 0x3, 0x7, 0x3, 
    0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 
    0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 0xbd, 0xa, 0x8, 0x3, 0x9, 
    0x3, 0x9, 0x5, 0x9, 0xc1, 0xa, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xb, 0x3, 
    0xb, 0x3, 0xb, 0x7, 0xb, 0xc8, 0xa, 0xb, 0xc, 0xb, 0xe, 0xb, 0xcb, 0xb, 
    0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 
    0xc, 0x3, 0xc, 0x5, 0xc, 0xd5, 0xa, 0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 
    0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 
    0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x5, 0xf, 
    0xe7, 0xa, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x5, 0xf, 0xed, 
    0xa, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 
    0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 
    0x10, 0x3, 0x10, 0x3, 0x10, 0x7, 0x10, 0xfe, 0xa, 0x10, 0xc, 0x10, 0xe, 
    0x10, 0x101, 0xb, 0x10, 0x3, 0x10, 0x3, 0x10, 0x5, 0x10, 0x105, 0xa, 
    0x10, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 
    0x3, 0x11, 0x3, 0x11, 0x3, 0x12, 0x7, 0x12, 0x110, 0xa, 0x12, 0xc, 0x12, 
    0xe, 0x12, 0x113, 0xb, 0x12, 0x3, 0x12, 0x5, 0x12, 0x116, 0xa, 0x12, 
    0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x14, 0x3, 
    0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x16, 
    0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x5, 0x16, 0x129, 0xa, 0x16, 
    0x3, 0x16, 0x3, 0x16, 0x3, 0x17, 0x3, 0x17, 0x3, 0x18, 0x3, 0x18, 0x3, 
    0x18, 0x7, 0x18, 0x132, 0xa, 0x18, 0xc, 0x18, 0xe, 0x18, 0x135, 0xb, 
    0x18, 0x3, 0x19, 0x3, 0x19, 0x7, 0x19, 0x139, 0xa, 0x19, 0xc, 0x19, 
    0xe, 0x19, 0x13c, 0xb, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x1a, 0x3, 0x1a, 
    0x3, 0x1b, 0x3, 0x1b, 0x5, 0x1b, 0x144, 0xa, 0x1b, 0x3, 0x1c, 0x3, 0x1c, 
    0x3, 0x1c, 0x5, 0x1c, 0x149, 0xa, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1d, 
    0x3, 0x1d, 0x3, 0x1d, 0x7, 0x1d, 0x150, 0xa, 0x1d, 0xc, 0x1d, 0xe, 0x1d, 
    0x153, 0xb, 0x1d, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 
    0x3, 0x1f, 0x3, 0x1f, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x5, 0x20, 0x15f, 
    0xa, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x7, 
    0x21, 0x166, 0xa, 0x21, 0xc, 0x21, 0xe, 0x21, 0x169, 0xb, 0x21, 0x3, 
    0x22, 0x3, 0x22, 0x3, 0x22, 0x5, 0x22, 0x16e, 0xa, 0x22, 0x3, 0x23, 
    0x5, 0x23, 0x171, 0xa, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x5, 0x23, 
    0x176, 0xa, 0x23, 0x3, 0x24, 0x3, 0x24, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 
    0x3, 0x25, 0x3, 0x25, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 
    0x26, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x7, 0x27, 0x187, 0xa, 0x27, 
    0xc, 0x27, 0xe, 0x27, 0x18a, 0xb, 0x27, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 
    0x3, 0x28, 0x3, 0x28, 0x5, 0x28, 0x191, 0xa, 0x28, 0x3, 0x28, 0x3, 0x28, 
    0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x7, 0x28, 0x199, 0xa, 0x28, 
    0xc, 0x28, 0xe, 0x28, 0x19c, 0xb, 0x28, 0x3, 0x29, 0x5, 0x29, 0x19f, 
    0xa, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x7, 0x29, 0x1a5, 
    0xa, 0x29, 0xc, 0x29, 0xe, 0x29, 0x1a8, 0xb, 0x29, 0x3, 0x2a, 0x3, 0x2a, 
    0x3, 0x2a, 0x3, 0x2a, 0x7, 0x2a, 0x1ae, 0xa, 0x2a, 0xc, 0x2a, 0xe, 0x2a, 
    0x1b1, 0xb, 0x2a, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 
    0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x5, 
    0x2b, 0x1be, 0xa, 0x2b, 0x3, 0x2c, 0x3, 0x2c, 0x7, 0x2c, 0x1c2, 0xa, 
    0x2c, 0xc, 0x2c, 0xe, 0x2c, 0x1c5, 0xb, 0x2c, 0x3, 0x2d, 0x3, 0x2d, 
    0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2f, 0x3, 0x2f, 0x3, 
    0x30, 0x5, 0x30, 0x1d0, 0xa, 0x30, 0x3, 0x30, 0x3, 0x30, 0x3, 0x31, 
    0x3, 0x31, 0x5, 0x31, 0x1d6, 0xa, 0x31, 0x3, 0x32, 0x3, 0x32, 0x3, 0x33, 
    0x3, 0x33, 0x3, 0x34, 0x3, 0x34, 0x3, 0x35, 0x3, 0x35, 0x3, 0x36, 0x3, 
    0x36, 0x3, 0x37, 0x3, 0x37, 0x3, 0x38, 0x3, 0x38, 0x3, 0x39, 0x3, 0x39, 
    0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x2, 0x3, 0x4e, 0x3b, 0x2, 0x4, 0x6, 
    0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 
    0x20, 0x22, 0x24, 0x26, 0x28, 0x2a, 0x2c, 0x2e, 0x30, 0x32, 0x34, 0x36, 
    0x38, 0x3a, 0x3c, 0x3e, 0x40, 0x42, 0x44, 0x46, 0x48, 0x4a, 0x4c, 0x4e, 
    0x50, 0x52, 0x54, 0x56, 0x58, 0x5a, 0x5c, 0x5e, 0x60, 0x62, 0x64, 0x66, 
    0x68, 0x6a, 0x6c, 0x6e, 0x70, 0x72, 0x2, 0x6, 0x3, 0x2, 0x12, 0x17, 
    0x4, 0x2, 0x11, 0x11, 0x18, 0x19, 0x3, 0x2, 0x1a, 0x1d, 0x3, 0x2, 0x1e, 
    0x21, 0x2, 0x1ec, 0x2, 0x7e, 0x3, 0x2, 0x2, 0x2, 0x4, 0x8b, 0x3, 0x2, 
    0x2, 0x2, 0x6, 0x96, 0x3, 0x2, 0x2, 0x2, 0x8, 0x98, 0x3, 0x2, 0x2, 0x2, 
    0xa, 0xae, 0x3, 0x2, 0x2, 0x2, 0xc, 0xb0, 0x3, 0x2, 0x2, 0x2, 0xe, 0xbc, 
    0x3, 0x2, 0x2, 0x2, 0x10, 0xc0, 0x3, 0x2, 0x2, 0x2, 0x12, 0xc2, 0x3, 
    0x2, 0x2, 0x2, 0x14, 0xc4, 0x3, 0x2, 0x2, 0x2, 0x16, 0xd4, 0x3, 0x2, 
    0x2, 0x2, 0x18, 0xd6, 0x3, 0x2, 0x2, 0x2, 0x1a, 0xdd, 0x3, 0x2, 0x2, 
    0x2, 0x1c, 0xe3, 0x3, 0x2, 0x2, 0x2, 0x1e, 0xf1, 0x3, 0x2, 0x2, 0x2, 
    0x20, 0x106, 0x3, 0x2, 0x2, 0x2, 0x22, 0x111, 0x3, 0x2, 0x2, 0x2, 0x24, 
    0x117, 0x3, 0x2, 0x2, 0x2, 0x26, 0x11c, 0x3, 0x2, 0x2, 0x2, 0x28, 0x120, 
    0x3, 0x2, 0x2, 0x2, 0x2a, 0x123, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x12c, 0x3, 
    0x2, 0x2, 0x2, 0x2e, 0x12e, 0x3, 0x2, 0x2, 0x2, 0x30, 0x136, 0x3, 0x2, 
    0x2, 0x2, 0x32, 0x13f, 0x3, 0x2, 0x2, 0x2, 0x34, 0x141, 0x3, 0x2, 0x2, 
    0x2, 0x36, 0x145, 0x3, 0x2, 0x2, 0x2, 0x38, 0x14c, 0x3, 0x2, 0x2, 0x2, 
    0x3a, 0x154, 0x3, 0x2, 0x2, 0x2, 0x3c, 0x156, 0x3, 0x2, 0x2, 0x2, 0x3e, 
    0x15b, 0x3, 0x2, 0x2, 0x2, 0x40, 0x162, 0x3, 0x2, 0x2, 0x2, 0x42, 0x16a, 
    0x3, 0x2, 0x2, 0x2, 0x44, 0x170, 0x3, 0x2, 0x2, 0x2, 0x46, 0x177, 0x3, 
    0x2, 0x2, 0x2, 0x48, 0x179, 0x3, 0x2, 0x2, 0x2, 0x4a, 0x17e, 0x3, 0x2, 
    0x2, 0x2, 0x4c, 0x183, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x18b, 0x3, 0x2, 0x2, 
    0x2, 0x50, 0x19e, 0x3, 0x2, 0x2, 0x2, 0x52, 0x1a9, 0x3, 0x2, 0x2, 0x2, 
    0x54, 0x1bd, 0x3, 0x2, 0x2, 0x2, 0x56, 0x1bf, 0x3, 0x2, 0x2, 0x2, 0x58, 
    0x1c6, 0x3, 0x2, 0x2, 0x2, 0x5a, 0x1ca, 0x3, 0x2, 0x2, 0x2, 0x5c, 0x1cc, 
    0x3, 0x2, 0x2, 0x2, 0x5e, 0x1cf, 0x3, 0x2, 0x2, 0x2, 0x60, 0x1d5, 0x3, 
    0x2, 0x2, 0x2, 0x62, 0x1d7, 0x3, 0x2, 0x2, 0x2, 0x64, 0x1d9, 0x3, 0x2, 
    0x2, 0x2, 0x66, 0x1db, 0x3, 0x2, 0x2, 0x2, 0x68, 0x1dd, 0x3, 0x2, 0x2, 
    0x2, 0x6a, 0x1df, 0x3, 0x2, 0x2, 0x2, 0x6c, 0x1e1, 0x3, 0x2, 0x2, 0x2, 
    0x6e, 0x1e3, 0x3, 0x2, 0x2, 0x2, 0x70, 0x1e5, 0x3, 0x2, 0x2, 0x2, 0x72, 
    0x1e7, 0x3, 0x2, 0x2, 0x2, 0x74, 0x7f, 0x5, 0x28, 0x15, 0x2, 0x75, 0x76, 
    0x5, 0x2a, 0x16, 0x2, 0x76, 0x77, 0x7, 0x3, 0x2, 0x2, 0x77, 0x7f, 0x3, 
    0x2, 0x2, 0x2, 0x78, 0x79, 0x5, 0xe, 0x8, 0x2, 0x79, 0x7a, 0x7, 0x3, 
    0x2, 0x2, 0x7a, 0x7f, 0x3, 0x2, 0x2, 0x2, 0x7b, 0x7c, 0x5, 0xa, 0x6, 
    0x2, 0x7c, 0x7d, 0x7, 0x3, 0x2, 0x2, 0x7d, 0x7f, 0x3, 0x2, 0x2, 0x2, 
    0x7e, 0x74, 0x3, 0x2, 0x2, 0x2, 0x7e, 0x75, 0x3, 0x2, 0x2, 0x2, 0x7e, 
    0x78, 0x3, 0x2, 0x2, 0x2, 0x7e, 0x7b, 0x3, 0x2, 0x2, 0x2, 0x7f, 0x80, 
    0x3, 0x2, 0x2, 0x2, 0x80, 0x7e, 0x3, 0x2, 0x2, 0x2, 0x80, 0x81, 0x3, 
    0x2, 0x2, 0x2, 0x81, 0x3, 0x3, 0x2, 0x2, 0x2, 0x82, 0x83, 0x5, 0x2a, 
    0x16, 0x2, 0x83, 0x84, 0x7, 0x3, 0x2, 0x2, 0x84, 0x8c, 0x3, 0x2, 0x2, 
    0x2, 0x85, 0x86, 0x5, 0x6, 0x4, 0x2, 0x86, 0x87, 0x7, 0x3, 0x2, 0x2, 
    0x87, 0x8c, 0x3, 0x2, 0x2, 0x2, 0x88, 0x89, 0x5, 0x8, 0x5, 0x2, 0x89, 
    0x8a, 0x7, 0x3, 0x2, 0x2, 0x8a, 0x8c, 0x3, 0x2, 0x2, 0x2, 0x8b, 0x82, 
    0x3, 0x2, 0x2, 0x2, 0x8b, 0x85, 0x3, 0x2, 0x2, 0x2, 0x8b, 0x88, 0x3, 
    0x2, 0x2, 0x2, 0x8c, 0x5, 0x3, 0x2, 0x2, 0x2, 0x8d, 0x97, 0x5, 0xe, 
    0x8, 0x2, 0x8e, 0x97, 0x5, 0xa, 0x6, 0x2, 0x8f, 0x97, 0x5, 0x16, 0xc, 
    0x2, 0x90, 0x97, 0x5, 0x3c, 0x1f, 0x2, 0x91, 0x97, 0x5, 0x3e, 0x20, 
    0x2, 0x92, 0x97, 0x5, 0x48, 0x25, 0x2, 0x93, 0x97, 0x5, 0x4a, 0x26, 
    0x2, 0x94, 0x97, 0x5, 0x36, 0x1c, 0x2, 0x95, 0x97, 0x5, 0x34, 0x1b, 
    0x2, 0x96, 0x8d, 0x3, 0x2, 0x2, 0x2, 0x96, 0x8e, 0x3, 0x2, 0x2, 0x2, 
    0x96, 0x8f, 0x3, 0x2, 0x2, 0x2, 0x96, 0x90, 0x3, 0x2, 0x2, 0x2, 0x96, 
    0x91, 0x3, 0x2, 0x2, 0x2, 0x96, 0x92, 0x3, 0x2, 0x2, 0x2, 0x96, 0x93, 
    0x3, 0x2, 0x2, 0x2, 0x96, 0x94, 0x3, 0x2, 0x2, 0x2, 0x96, 0x95, 0x3, 
    0x2, 0x2, 0x2, 0x97, 0x7, 0x3, 0x2, 0x2, 0x2, 0x98, 0x99, 0x3, 0x2, 
    0x2, 0x2, 0x99, 0x9, 0x3, 0x2, 0x2, 0x2, 0x9a, 0x9b, 0x5, 0x6e, 0x38, 
    0x2, 0x9b, 0xa0, 0x5, 0x5c, 0x2f, 0x2, 0x9c, 0x9d, 0x7, 0x4, 0x2, 0x2, 
    0x9d, 0x9f, 0x5, 0x5c, 0x2f, 0x2, 0x9e, 0x9c, 0x3, 0x2, 0x2, 0x2, 0x9f, 
    0xa2, 0x3, 0x2, 0x2, 0x2, 0xa0, 0x9e, 0x3, 0x2, 0x2, 0x2, 0xa0, 0xa1, 
    0x3, 0x2, 0x2, 0x2, 0xa1, 0xaf, 0x3, 0x2, 0x2, 0x2, 0xa2, 0xa0, 0x3, 
    0x2, 0x2, 0x2, 0xa3, 0xa4, 0x5, 0x6e, 0x38, 0x2, 0xa4, 0xab, 0x5, 0x5c, 
    0x2f, 0x2, 0xa5, 0xa6, 0x7, 0x5, 0x2, 0x2, 0xa6, 0xa7, 0x5, 0xc, 0x7, 
    0x2, 0xa7, 0xa8, 0x7, 0x6, 0x2, 0x2, 0xa8, 0xaa, 0x3, 0x2, 0x2, 0x2, 
    0xa9, 0xa5, 0x3, 0x2, 0x2, 0x2, 0xaa, 0xad, 0x3, 0x2, 0x2, 0x2, 0xab, 
    0xa9, 0x3, 0x2, 0x2, 0x2, 0xab, 0xac, 0x3, 0x2, 0x2, 0x2, 0xac, 0xaf, 
    0x3, 0x2, 0x2, 0x2, 0xad, 0xab, 0x3, 0x2, 0x2, 0x2, 0xae, 0x9a, 0x3, 
    0x2, 0x2, 0x2, 0xae, 0xa3, 0x3, 0x2, 0x2, 0x2, 0xaf, 0xb, 0x3, 0x2, 
    0x2, 0x2, 0xb0, 0xb1, 0x5, 0x4e, 0x28, 0x2, 0xb1, 0xd, 0x3, 0x2, 0x2, 
    0x2, 0xb2, 0xb3, 0x5, 0x10, 0x9, 0x2, 0xb3, 0xb4, 0x7, 0x7, 0x2, 0x2, 
    0xb4, 0xb5, 0x5, 0x12, 0xa, 0x2, 0xb5, 0xbd, 0x3, 0x2, 0x2, 0x2, 0xb6, 
    0xb7, 0x5, 0x56, 0x2c, 0x2, 0xb7, 0xb8, 0x7, 0x8, 0x2, 0x2, 0xb8, 0xbd, 
    0x3, 0x2, 0x2, 0x2, 0xb9, 0xba, 0x5, 0x56, 0x2c, 0x2, 0xba, 0xbb, 0x7, 
    0x9, 0x2, 0x2, 0xbb, 0xbd, 0x3, 0x2, 0x2, 0x2, 0xbc, 0xb2, 0x3, 0x2, 
    0x2, 0x2, 0xbc, 0xb6, 0x3, 0x2, 0x2, 0x2, 0xbc, 0xb9, 0x3, 0x2, 0x2, 
    0x2, 0xbd, 0xf, 0x3, 0x2, 0x2, 0x2, 0xbe, 0xc1, 0x5, 0x56, 0x2c, 0x2, 
    0xbf, 0xc1, 0x5, 0xa, 0x6, 0x2, 0xc0, 0xbe, 0x3, 0x2, 0x2, 0x2, 0xc0, 
    0xbf, 0x3, 0x2, 0x2, 0x2, 0xc1, 0x11, 0x3, 0x2, 0x2, 0x2, 0xc2, 0xc3, 
    0x5, 0x4e, 0x28, 0x2, 0xc3, 0x13, 0x3, 0x2, 0x2, 0x2, 0xc4, 0xc9, 0x7, 
    0xa, 0x2, 0x2, 0xc5, 0xc8, 0x5, 0x4, 0x3, 0x2, 0xc6, 0xc8, 0x5, 0x16, 
    0xc, 0x2, 0xc7, 0xc5, 0x3, 0x2, 0x2, 0x2, 0xc7, 0xc6, 0x3, 0x2, 0x2, 
    0x2, 0xc8, 0xcb, 0x3, 0x2, 0x2, 0x2, 0xc9, 0xc7, 0x3, 0x2, 0x2, 0x2, 
    0xc9, 0xca, 0x3, 0x2, 0x2, 0x2, 0xca, 0xcc, 0x3, 0x2, 0x2, 0x2, 0xcb, 
    0xc9, 0x3, 0x2, 0x2, 0x2, 0xcc, 0xcd, 0x7, 0xb, 0x2, 0x2, 0xcd, 0x15, 
    0x3, 0x2, 0x2, 0x2, 0xce, 0xd5, 0x5, 0x18, 0xd, 0x2, 0xcf, 0xd5, 0x5, 
    0x1a, 0xe, 0x2, 0xd0, 0xd5, 0x5, 0x1c, 0xf, 0x2, 0xd1, 0xd5, 0x5, 0x1e, 
    0x10, 0x2, 0xd2, 0xd5, 0x5, 0x20, 0x11, 0x2, 0xd3, 0xd5, 0x5, 0x14, 
    0xb, 0x2, 0xd4, 0xce, 0x3, 0x2, 0x2, 0x2, 0xd4, 0xcf, 0x3, 0x2, 0x2, 
    0x2, 0xd4, 0xd0, 0x3, 0x2, 0x2, 0x2, 0xd4, 0xd1, 0x3, 0x2, 0x2, 0x2, 
    0xd4, 0xd2, 0x3, 0x2, 0x2, 0x2, 0xd4, 0xd3, 0x3, 0x2, 0x2, 0x2, 0xd5, 
    0x17, 0x3, 0x2, 0x2, 0x2, 0xd6, 0xd7, 0x7, 0x22, 0x2, 0x2, 0xd7, 0xd8, 
    0x5, 0x14, 0xb, 0x2, 0xd8, 0xd9, 0x7, 0x23, 0x2, 0x2, 0xd9, 0xda, 0x7, 
    0xc, 0x2, 0x2, 0xda, 0xdb, 0x5, 0x4e, 0x28, 0x2, 0xdb, 0xdc, 0x7, 0xd, 
    0x2, 0x2, 0xdc, 0x19, 0x3, 0x2, 0x2, 0x2, 0xdd, 0xde, 0x7, 0x23, 0x2, 
    0x2, 0xde, 0xdf, 0x7, 0xc, 0x2, 0x2, 0xdf, 0xe0, 0x5, 0x4e, 0x28, 0x2, 
    0xe0, 0xe1, 0x7, 0xd, 0x2, 0x2, 0xe1, 0xe2, 0x5, 0x14, 0xb, 0x2, 0xe2, 
    0x1b, 0x3, 0x2, 0x2, 0x2, 0xe3, 0xe4, 0x7, 0x24, 0x2, 0x2, 0xe4, 0xe6, 
    0x7, 0xc, 0x2, 0x2, 0xe5, 0xe7, 0x5, 0x6, 0x4, 0x2, 0xe6, 0xe5, 0x3, 
    0x2, 0x2, 0x2, 0xe6, 0xe7, 0x3, 0x2, 0x2, 0x2, 0xe7, 0xe8, 0x3, 0x2, 
    0x2, 0x2, 0xe8, 0xe9, 0x7, 0x3, 0x2, 0x2, 0xe9, 0xea, 0x5, 0x4e, 0x28, 
    0x2, 0xea, 0xec, 0x7, 0x3, 0x2, 0x2, 0xeb, 0xed, 0x5, 0x6, 0x4, 0x2, 
    0xec, 0xeb, 0x3, 0x2, 0x2, 0x2, 0xec, 0xed, 0x3, 0x2, 0x2, 0x2, 0xed, 
    0xee, 0x3, 0x2, 0x2, 0x2, 0xee, 0xef, 0x7, 0xd, 0x2, 0x2, 0xef, 0xf0, 
    0x5, 0x14, 0xb, 0x2, 0xf0, 0x1d, 0x3, 0x2, 0x2, 0x2, 0xf1, 0xf2, 0x7, 
    0x25, 0x2, 0x2, 0xf2, 0xf3, 0x7, 0xc, 0x2, 0x2, 0xf3, 0xf4, 0x5, 0x4e, 
    0x28, 0x2, 0xf4, 0xf5, 0x7, 0xd, 0x2, 0x2, 0xf5, 0xff, 0x5, 0x14, 0xb, 
    0x2, 0xf6, 0xf7, 0x7, 0x27, 0x2, 0x2, 0xf7, 0xf8, 0x7, 0x25, 0x2, 0x2, 
    0xf8, 0xf9, 0x7, 0xc, 0x2, 0x2, 0xf9, 0xfa, 0x5, 0x4e, 0x28, 0x2, 0xfa, 
    0xfb, 0x7, 0xd, 0x2, 0x2, 0xfb, 0xfc, 0x5, 0x14, 0xb, 0x2, 0xfc, 0xfe, 
    0x3, 0x2, 0x2, 0x2, 0xfd, 0xf6, 0x3, 0x2, 0x2, 0x2, 0xfe, 0x101, 0x3, 
    0x2, 0x2, 0x2, 0xff, 0xfd, 0x3, 0x2, 0x2, 0x2, 0xff, 0x100, 0x3, 0x2, 
    0x2, 0x2, 0x100, 0x104, 0x3, 0x2, 0x2, 0x2, 0x101, 0xff, 0x3, 0x2, 0x2, 
    0x2, 0x102, 0x103, 0x7, 0x27, 0x2, 0x2, 0x103, 0x105, 0x5, 0x14, 0xb, 
    0x2, 0x104, 0x102, 0x3, 0x2, 0x2, 0x2, 0x104, 0x105, 0x3, 0x2, 0x2, 
    0x2, 0x105, 0x1f, 0x3, 0x2, 0x2, 0x2, 0x106, 0x107, 0x7, 0x28, 0x2, 
    0x2, 0x107, 0x108, 0x7, 0xc, 0x2, 0x2, 0x108, 0x109, 0x5, 0x4e, 0x28, 
    0x2, 0x109, 0x10a, 0x7, 0xd, 0x2, 0x2, 0x10a, 0x10b, 0x7, 0xa, 0x2, 
    0x2, 0x10b, 0x10c, 0x5, 0x22, 0x12, 0x2, 0x10c, 0x10d, 0x7, 0xb, 0x2, 
    0x2, 0x10d, 0x21, 0x3, 0x2, 0x2, 0x2, 0x10e, 0x110, 0x5, 0x24, 0x13, 
    0x2, 0x10f, 0x10e, 0x3, 0x2, 0x2, 0x2, 0x110, 0x113, 0x3, 0x2, 0x2, 
    0x2, 0x111, 0x10f, 0x3, 0x2, 0x2, 0x2, 0x111, 0x112, 0x3, 0x2, 0x2, 
    0x2, 0x112, 0x115, 0x3, 0x2, 0x2, 0x2, 0x113, 0x111, 0x3, 0x2, 0x2, 
    0x2, 0x114, 0x116, 0x5, 0x26, 0x14, 0x2, 0x115, 0x114, 0x3, 0x2, 0x2, 
    0x2, 0x115, 0x116, 0x3, 0x2, 0x2, 0x2, 0x116, 0x23, 0x3, 0x2, 0x2, 0x2, 
    0x117, 0x118, 0x7, 0x29, 0x2, 0x2, 0x118, 0x119, 0x5, 0x5e, 0x30, 0x2, 
    0x119, 0x11a, 0x7, 0xe, 0x2, 0x2, 0x11a, 0x11b, 0x5, 0x14, 0xb, 0x2, 
    0x11b, 0x25, 0x3, 0x2, 0x2, 0x2, 0x11c, 0x11d, 0x7, 0x2a, 0x2, 0x2, 
    0x11d, 0x11e, 0x7, 0xe, 0x2, 0x2, 0x11e, 0x11f, 0x5, 0x14, 0xb, 0x2, 
    0x11f, 0x27, 0x3, 0x2, 0x2, 0x2, 0x120, 0x121, 0x5, 0x2a, 0x16, 0x2, 
    0x121, 0x122, 0x5, 0x14, 0xb, 0x2, 0x122, 0x29, 0x3, 0x2, 0x2, 0x2, 
    0x123, 0x124, 0x5, 0x6e, 0x38, 0x2, 0x124, 0x125, 0x5, 0x2c, 0x17, 0x2, 
    0x125, 0x128, 0x7, 0xc, 0x2, 0x2, 0x126, 0x129, 0x5, 0x2e, 0x18, 0x2, 
    0x127, 0x129, 0x7, 0x21, 0x2, 0x2, 0x128, 0x126, 0x3, 0x2, 0x2, 0x2, 
    0x128, 0x127, 0x3, 0x2, 0x2, 0x2, 0x128, 0x129, 0x3, 0x2, 0x2, 0x2, 
    0x129, 0x12a, 0x3, 0x2, 0x2, 0x2, 0x12a, 0x12b, 0x7, 0xd, 0x2, 0x2, 
    0x12b, 0x2b, 0x3, 0x2, 0x2, 0x2, 0x12c, 0x12d, 0x7, 0x34, 0x2, 0x2, 
    0x12d, 0x2d, 0x3, 0x2, 0x2, 0x2, 0x12e, 0x133, 0x5, 0x30, 0x19, 0x2, 
    0x12f, 0x130, 0x7, 0x4, 0x2, 0x2, 0x130, 0x132, 0x5, 0x30, 0x19, 0x2, 
    0x131, 0x12f, 0x3, 0x2, 0x2, 0x2, 0x132, 0x135, 0x3, 0x2, 0x2, 0x2, 
    0x133, 0x131, 0x3, 0x2, 0x2, 0x2, 0x133, 0x134, 0x3, 0x2, 0x2, 0x2, 
    0x134, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x135, 0x133, 0x3, 0x2, 0x2, 0x2, 0x136, 
    0x13a, 0x5, 0x6e, 0x38, 0x2, 0x137, 0x139, 0x7, 0x30, 0x2, 0x2, 0x138, 
    0x137, 0x3, 0x2, 0x2, 0x2, 0x139, 0x13c, 0x3, 0x2, 0x2, 0x2, 0x13a, 
    0x138, 0x3, 0x2, 0x2, 0x2, 0x13a, 0x13b, 0x3, 0x2, 0x2, 0x2, 0x13b, 
    0x13d, 0x3, 0x2, 0x2, 0x2, 0x13c, 0x13a, 0x3, 0x2, 0x2, 0x2, 0x13d, 
    0x13e, 0x5, 0x32, 0x1a, 0x2, 0x13e, 0x31, 0x3, 0x2, 0x2, 0x2, 0x13f, 
    0x140, 0x7, 0x34, 0x2, 0x2, 0x140, 0x33, 0x3, 0x2, 0x2, 0x2, 0x141, 
    0x143, 0x7, 0x2f, 0x2, 0x2, 0x142, 0x144, 0x5, 0x4e, 0x28, 0x2, 0x143, 
    0x142, 0x3, 0x2, 0x2, 0x2, 0x143, 0x144, 0x3, 0x2, 0x2, 0x2, 0x144, 
    0x35, 0x3, 0x2, 0x2, 0x2, 0x145, 0x146, 0x5, 0x2c, 0x17, 0x2, 0x146, 
    0x148, 0x7, 0xc, 0x2, 0x2, 0x147, 0x149, 0x5, 0x38, 0x1d, 0x2, 0x148, 
    0x147, 0x3, 0x2, 0x2, 0x2, 0x148, 0x149, 0x3, 0x2, 0x2, 0x2, 0x149, 
    0x14a, 0x3, 0x2, 0x2, 0x2, 0x14a, 0x14b, 0x7, 0xd, 0x2, 0x2, 0x14b, 
    0x37, 0x3, 0x2, 0x2, 0x2, 0x14c, 0x151, 0x5, 0x3a, 0x1e, 0x2, 0x14d, 
    0x14e, 0x7, 0x4, 0x2, 0x2, 0x14e, 0x150, 0x5, 0x3a, 0x1e, 0x2, 0x14f, 
    0x14d, 0x3, 0x2, 0x2, 0x2, 0x150, 0x153, 0x3, 0x2, 0x2, 0x2, 0x151, 
    0x14f, 0x3, 0x2, 0x2, 0x2, 0x151, 0x152, 0x3, 0x2, 0x2, 0x2, 0x152, 
    0x39, 0x3, 0x2, 0x2, 0x2, 0x153, 0x151, 0x3, 0x2, 0x2, 0x2, 0x154, 0x155, 
    0x5, 0x4e, 0x28, 0x2, 0x155, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x156, 0x157, 
    0x7, 0x2b, 0x2, 0x2, 0x157, 0x158, 0x7, 0xc, 0x2, 0x2, 0x158, 0x159, 
    0x5, 0x40, 0x21, 0x2, 0x159, 0x15a, 0x7, 0xd, 0x2, 0x2, 0x15a, 0x3d, 
    0x3, 0x2, 0x2, 0x2, 0x15b, 0x15c, 0x7, 0x2c, 0x2, 0x2, 0x15c, 0x15e, 
    0x7, 0xc, 0x2, 0x2, 0x15d, 0x15f, 0x5, 0x40, 0x21, 0x2, 0x15e, 0x15d, 
    0x3, 0x2, 0x2, 0x2, 0x15e, 0x15f, 0x3, 0x2, 0x2, 0x2, 0x15f, 0x160, 
    0x3, 0x2, 0x2, 0x2, 0x160, 0x161, 0x7, 0xd, 0x2, 0x2, 0x161, 0x3f, 0x3, 
    0x2, 0x2, 0x2, 0x162, 0x167, 0x5, 0x42, 0x22, 0x2, 0x163, 0x164, 0x7, 
    0x4, 0x2, 0x2, 0x164, 0x166, 0x5, 0x42, 0x22, 0x2, 0x165, 0x163, 0x3, 
    0x2, 0x2, 0x2, 0x166, 0x169, 0x3, 0x2, 0x2, 0x2, 0x167, 0x165, 0x3, 
    0x2, 0x2, 0x2, 0x167, 0x168, 0x3, 0x2, 0x2, 0x2, 0x168, 0x41, 0x3, 0x2, 
    0x2, 0x2, 0x169, 0x167, 0x3, 0x2, 0x2, 0x2, 0x16a, 0x16d, 0x5, 0x4e, 
    0x28, 0x2, 0x16b, 0x16c, 0x7, 0xe, 0x2, 0x2, 0x16c, 0x16e, 0x5, 0x44, 
    0x23, 0x2, 0x16d, 0x16b, 0x3, 0x2, 0x2, 0x2, 0x16d, 0x16e, 0x3, 0x2, 
    0x2, 0x2, 0x16e, 0x43, 0x3, 0x2, 0x2, 0x2, 0x16f, 0x171, 0x5, 0x62, 
    0x32, 0x2, 0x170, 0x16f, 0x3, 0x2, 0x2, 0x2, 0x170, 0x171, 0x3, 0x2, 
    0x2, 0x2, 0x171, 0x172, 0x3, 0x2, 0x2, 0x2, 0x172, 0x175, 0x5, 0x64, 
    0x33, 0x2, 0x173, 0x174, 0x7, 0xe, 0x2, 0x2, 0x174, 0x176, 0x5, 0x46, 
    0x24, 0x2, 0x175, 0x173, 0x3, 0x2, 0x2, 0x2, 0x175, 0x176, 0x3, 0x2, 
    0x2, 0x2, 0x176, 0x45, 0x3, 0x2, 0x2, 0x2, 0x177, 0x178, 0x5, 0x64, 
    0x33, 0x2, 0x178, 0x47, 0x3, 0x2, 0x2, 0x2, 0x179, 0x17a, 0x7, 0x2d, 
    0x2, 0x2, 0x17a, 0x17b, 0x7, 0xc, 0x2, 0x2, 0x17b, 0x17c, 0x5, 0x4c, 
    0x27, 0x2, 0x17c, 0x17d, 0x7, 0xd, 0x2, 0x2, 0x17d, 0x49, 0x3, 0x2, 
    0x2, 0x2, 0x17e, 0x17f, 0x7, 0x2e, 0x2, 0x2, 0x17f, 0x180, 0x7, 0xc, 
    0x2, 0x2, 0x180, 0x181, 0x5, 0x4c, 0x27, 0x2, 0x181, 0x182, 0x7, 0xd, 
    0x2, 0x2, 0x182, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x183, 0x188, 0x5, 0x56, 
    0x2c, 0x2, 0x184, 0x185, 0x7, 0x4, 0x2, 0x2, 0x185, 0x187, 0x5, 0x56, 
    0x2c, 0x2, 0x186, 0x184, 0x3, 0x2, 0x2, 0x2, 0x187, 0x18a, 0x3, 0x2, 
    0x2, 0x2, 0x188, 0x186, 0x3, 0x2, 0x2, 0x2, 0x188, 0x189, 0x3, 0x2, 
    0x2, 0x2, 0x189, 0x4d, 0x3, 0x2, 0x2, 0x2, 0x18a, 0x188, 0x3, 0x2, 0x2, 
    0x2, 0x18b, 0x18c, 0x8, 0x28, 0x1, 0x2, 0x18c, 0x190, 0x5, 0x50, 0x29, 
    0x2, 0x18d, 0x18e, 0x5, 0x68, 0x35, 0x2, 0x18e, 0x18f, 0x5, 0x50, 0x29, 
    0x2, 0x18f, 0x191, 0x3, 0x2, 0x2, 0x2, 0x190, 0x18d, 0x3, 0x2, 0x2, 
    0x2, 0x190, 0x191, 0x3, 0x2, 0x2, 0x2, 0x191, 0x19a, 0x3, 0x2, 0x2, 
    0x2, 0x192, 0x193, 0xc, 0x3, 0x2, 0x2, 0x193, 0x194, 0x7, 0xf, 0x2, 
    0x2, 0x194, 0x195, 0x5, 0x4e, 0x28, 0x2, 0x195, 0x196, 0x7, 0xe, 0x2, 
    0x2, 0x196, 0x197, 0x5, 0x4e, 0x28, 0x4, 0x197, 0x199, 0x3, 0x2, 0x2, 
    0x2, 0x198, 0x192, 0x3, 0x2, 0x2, 0x2, 0x199, 0x19c, 0x3, 0x2, 0x2, 
    0x2, 0x19a, 0x198, 0x3, 0x2, 0x2, 0x2, 0x19a, 0x19b, 0x3, 0x2, 0x2, 
    0x2, 0x19b, 0x4f, 0x3, 0x2, 0x2, 0x2, 0x19c, 0x19a, 0x3, 0x2, 0x2, 0x2, 
    0x19d, 0x19f, 0x5, 0x62, 0x32, 0x2, 0x19e, 0x19d, 0x3, 0x2, 0x2, 0x2, 
    0x19e, 0x19f, 0x3, 0x2, 0x2, 0x2, 0x19f, 0x1a0, 0x3, 0x2, 0x2, 0x2, 
    0x1a0, 0x1a6, 0x5, 0x52, 0x2a, 0x2, 0x1a1, 0x1a2, 0x5, 0x6a, 0x36, 0x2, 
    0x1a2, 0x1a3, 0x5, 0x52, 0x2a, 0x2, 0x1a3, 0x1a5, 0x3, 0x2, 0x2, 0x2, 
    0x1a4, 0x1a1, 0x3, 0x2, 0x2, 0x2, 0x1a5, 0x1a8, 0x3, 0x2, 0x2, 0x2, 
    0x1a6, 0x1a4, 0x3, 0x2, 0x2, 0x2, 0x1a6, 0x1a7, 0x3, 0x2, 0x2, 0x2, 
    0x1a7, 0x51, 0x3, 0x2, 0x2, 0x2, 0x1a8, 0x1a6, 0x3, 0x2, 0x2, 0x2, 0x1a9, 
    0x1af, 0x5, 0x54, 0x2b, 0x2, 0x1aa, 0x1ab, 0x5, 0x6c, 0x37, 0x2, 0x1ab, 
    0x1ac, 0x5, 0x54, 0x2b, 0x2, 0x1ac, 0x1ae, 0x3, 0x2, 0x2, 0x2, 0x1ad, 
    0x1aa, 0x3, 0x2, 0x2, 0x2, 0x1ae, 0x1b1, 0x3, 0x2, 0x2, 0x2, 0x1af, 
    0x1ad, 0x3, 0x2, 0x2, 0x2, 0x1af, 0x1b0, 0x3, 0x2, 0x2, 0x2, 0x1b0, 
    0x53, 0x3, 0x2, 0x2, 0x2, 0x1b1, 0x1af, 0x3, 0x2, 0x2, 0x2, 0x1b2, 0x1be, 
    0x5, 0x56, 0x2c, 0x2, 0x1b3, 0x1be, 0x5, 0x5e, 0x30, 0x2, 0x1b4, 0x1be, 
    0x5, 0x70, 0x39, 0x2, 0x1b5, 0x1be, 0x5, 0x72, 0x3a, 0x2, 0x1b6, 0x1be, 
    0x5, 0x36, 0x1c, 0x2, 0x1b7, 0x1b8, 0x7, 0x10, 0x2, 0x2, 0x1b8, 0x1be, 
    0x5, 0x54, 0x2b, 0x2, 0x1b9, 0x1ba, 0x7, 0xc, 0x2, 0x2, 0x1ba, 0x1bb, 
    0x5, 0x4e, 0x28, 0x2, 0x1bb, 0x1bc, 0x7, 0xd, 0x2, 0x2, 0x1bc, 0x1be, 
    0x3, 0x2, 0x2, 0x2, 0x1bd, 0x1b2, 0x3, 0x2, 0x2, 0x2, 0x1bd, 0x1b3, 
    0x3, 0x2, 0x2, 0x2, 0x1bd, 0x1b4, 0x3, 0x2, 0x2, 0x2, 0x1bd, 0x1b5, 
    0x3, 0x2, 0x2, 0x2, 0x1bd, 0x1b6, 0x3, 0x2, 0x2, 0x2, 0x1bd, 0x1b7, 
    0x3, 0x2, 0x2, 0x2, 0x1bd, 0x1b9, 0x3, 0x2, 0x2, 0x2, 0x1be, 0x55, 0x3, 
    0x2, 0x2, 0x2, 0x1bf, 0x1c3, 0x5, 0x5c, 0x2f, 0x2, 0x1c0, 0x1c2, 0x5, 
    0x58, 0x2d, 0x2, 0x1c1, 0x1c0, 0x3, 0x2, 0x2, 0x2, 0x1c2, 0x1c5, 0x3, 
    0x2, 0x2, 0x2, 0x1c3, 0x1c1, 0x3, 0x2, 0x2, 0x2, 0x1c3, 0x1c4, 0x3, 
    0x2, 0x2, 0x2, 0x1c4, 0x57, 0x3, 0x2, 0x2, 0x2, 0x1c5, 0x1c3, 0x3, 0x2, 
    0x2, 0x2, 0x1c6, 0x1c7, 0x7, 0x5, 0x2, 0x2, 0x1c7, 0x1c8, 0x5, 0x5a, 
    0x2e, 0x2, 0x1c8, 0x1c9, 0x7, 0x6, 0x2, 0x2, 0x1c9, 0x59, 0x3, 0x2, 
    0x2, 0x2, 0x1ca, 0x1cb, 0x5, 0x4e, 0x28, 0x2, 0x1cb, 0x5b, 0x3, 0x2, 
    0x2, 0x2, 0x1cc, 0x1cd, 0x7, 0x34, 0x2, 0x2, 0x1cd, 0x5d, 0x3, 0x2, 
    0x2, 0x2, 0x1ce, 0x1d0, 0x5, 0x62, 0x32, 0x2, 0x1cf, 0x1ce, 0x3, 0x2, 
    0x2, 0x2, 0x1cf, 0x1d0, 0x3, 0x2, 0x2, 0x2, 0x1d0, 0x1d1, 0x3, 0x2, 
    0x2, 0x2, 0x1d1, 0x1d2, 0x5, 0x60, 0x31, 0x2, 0x1d2, 0x5f, 0x3, 0x2, 
    0x2, 0x2, 0x1d3, 0x1d6, 0x5, 0x64, 0x33, 0x2, 0x1d4, 0x1d6, 0x5, 0x66, 
    0x34, 0x2, 0x1d5, 0x1d3, 0x3, 0x2, 0x2, 0x2, 0x1d5, 0x1d4, 0x3, 0x2, 
    0x2, 0x2, 0x1d6, 0x61, 0x3, 0x2, 0x2, 0x2, 0x1d7, 0x1d8, 0x7, 0x11, 
    0x2, 0x2, 0x1d8, 0x63, 0x3, 0x2, 0x2, 0x2, 0x1d9, 0x1da, 0x7, 0x35, 
    0x2, 0x2, 0x1da, 0x65, 0x3, 0x2, 0x2, 0x2, 0x1db, 0x1dc, 0x7, 0x36, 
    0x2, 0x2, 0x1dc, 0x67, 0x3, 0x2, 0x2, 0x2, 0x1dd, 0x1de, 0x9, 0x2, 0x2, 
    0x2, 0x1de, 0x69, 0x3, 0x2, 0x2, 0x2, 0x1df, 0x1e0, 0x9, 0x3, 0x2, 0x2, 
    0x1e0, 0x6b, 0x3, 0x2, 0x2, 0x2, 0x1e1, 0x1e2, 0x9, 0x4, 0x2, 0x2, 0x1e2, 
    0x6d, 0x3, 0x2, 0x2, 0x2, 0x1e3, 0x1e4, 0x9, 0x5, 0x2, 0x2, 0x1e4, 0x6f, 
    0x3, 0x2, 0x2, 0x2, 0x1e5, 0x1e6, 0x7, 0x37, 0x2, 0x2, 0x1e6, 0x71, 
    0x3, 0x2, 0x2, 0x2, 0x1e7, 0x1e8, 0x7, 0x38, 0x2, 0x2, 0x1e8, 0x73, 
    0x3, 0x2, 0x2, 0x2, 0x29, 0x7e, 0x80, 0x8b, 0x96, 0xa0, 0xab, 0xae, 
    0xbc, 0xc0, 0xc7, 0xc9, 0xd4, 0xe6, 0xec, 0xff, 0x104, 0x111, 0x115, 
    0x128, 0x133, 0x13a, 0x143, 0x148, 0x151, 0x15e, 0x167, 0x16d, 0x170, 
    0x175, 0x188, 0x190, 0x19a, 0x19e, 0x1a6, 0x1af, 0x1bd, 0x1c3, 0x1cf, 
    0x1d5, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

XParser::Initializer XParser::_init;