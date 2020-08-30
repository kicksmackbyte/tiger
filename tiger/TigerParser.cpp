
// Generated from Tiger.g4 by ANTLR 4.7.2


#include "TigerVisitor.h"

#include "TigerParser.h"


using namespace antlrcpp;
using namespace antlr4;

TigerParser::TigerParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

TigerParser::~TigerParser() {
  delete _interpreter;
}

std::string TigerParser::getGrammarFileName() const {
  return "Tiger.g4";
}

const std::vector<std::string>& TigerParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& TigerParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- Tiger_programContext ------------------------------------------------------------------

TigerParser::Tiger_programContext::Tiger_programContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TigerParser::Tiger_programContext::MAIN() {
  return getToken(TigerParser::MAIN, 0);
}

tree::TerminalNode* TigerParser::Tiger_programContext::LET() {
  return getToken(TigerParser::LET, 0);
}

TigerParser::Declaration_segmentContext* TigerParser::Tiger_programContext::declaration_segment() {
  return getRuleContext<TigerParser::Declaration_segmentContext>(0);
}

tree::TerminalNode* TigerParser::Tiger_programContext::IN() {
  return getToken(TigerParser::IN, 0);
}

tree::TerminalNode* TigerParser::Tiger_programContext::BEGIN() {
  return getToken(TigerParser::BEGIN, 0);
}

TigerParser::Stat_seqContext* TigerParser::Tiger_programContext::stat_seq() {
  return getRuleContext<TigerParser::Stat_seqContext>(0);
}

tree::TerminalNode* TigerParser::Tiger_programContext::END() {
  return getToken(TigerParser::END, 0);
}


size_t TigerParser::Tiger_programContext::getRuleIndex() const {
  return TigerParser::RuleTiger_program;
}


antlrcpp::Any TigerParser::Tiger_programContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TigerVisitor*>(visitor))
    return parserVisitor->visitTiger_program(this);
  else
    return visitor->visitChildren(this);
}

TigerParser::Tiger_programContext* TigerParser::tiger_program() {
  Tiger_programContext *_localctx = _tracker.createInstance<Tiger_programContext>(_ctx, getState());
  enterRule(_localctx, 0, TigerParser::RuleTiger_program);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(56);
    match(TigerParser::MAIN);
    setState(57);
    match(TigerParser::LET);
    setState(58);
    declaration_segment();
    setState(59);
    match(TigerParser::IN);
    setState(60);
    match(TigerParser::BEGIN);
    setState(61);
    stat_seq();
    setState(62);
    match(TigerParser::END);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Declaration_segmentContext ------------------------------------------------------------------

TigerParser::Declaration_segmentContext::Declaration_segmentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TigerParser::Type_declaration_listContext* TigerParser::Declaration_segmentContext::type_declaration_list() {
  return getRuleContext<TigerParser::Type_declaration_listContext>(0);
}

TigerParser::Var_declaration_listContext* TigerParser::Declaration_segmentContext::var_declaration_list() {
  return getRuleContext<TigerParser::Var_declaration_listContext>(0);
}

TigerParser::Funct_declaration_listContext* TigerParser::Declaration_segmentContext::funct_declaration_list() {
  return getRuleContext<TigerParser::Funct_declaration_listContext>(0);
}


size_t TigerParser::Declaration_segmentContext::getRuleIndex() const {
  return TigerParser::RuleDeclaration_segment;
}


antlrcpp::Any TigerParser::Declaration_segmentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TigerVisitor*>(visitor))
    return parserVisitor->visitDeclaration_segment(this);
  else
    return visitor->visitChildren(this);
}

TigerParser::Declaration_segmentContext* TigerParser::declaration_segment() {
  Declaration_segmentContext *_localctx = _tracker.createInstance<Declaration_segmentContext>(_ctx, getState());
  enterRule(_localctx, 2, TigerParser::RuleDeclaration_segment);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(64);
    type_declaration_list();
    setState(65);
    var_declaration_list();
    setState(66);
    funct_declaration_list();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Type_declaration_listContext ------------------------------------------------------------------

TigerParser::Type_declaration_listContext::Type_declaration_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TigerParser::Type_declarationContext* TigerParser::Type_declaration_listContext::type_declaration() {
  return getRuleContext<TigerParser::Type_declarationContext>(0);
}

TigerParser::Type_declaration_listContext* TigerParser::Type_declaration_listContext::type_declaration_list() {
  return getRuleContext<TigerParser::Type_declaration_listContext>(0);
}


size_t TigerParser::Type_declaration_listContext::getRuleIndex() const {
  return TigerParser::RuleType_declaration_list;
}


antlrcpp::Any TigerParser::Type_declaration_listContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TigerVisitor*>(visitor))
    return parserVisitor->visitType_declaration_list(this);
  else
    return visitor->visitChildren(this);
}

TigerParser::Type_declaration_listContext* TigerParser::type_declaration_list() {
  Type_declaration_listContext *_localctx = _tracker.createInstance<Type_declaration_listContext>(_ctx, getState());
  enterRule(_localctx, 4, TigerParser::RuleType_declaration_list);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(72);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TigerParser::IN:
      case TigerParser::VAR: {
        enterOuterAlt(_localctx, 1);

        break;
      }

      case TigerParser::NON_DIGIT:
      case TigerParser::ARRAY:
      case TigerParser::INT:
      case TigerParser::FLOAT: {
        enterOuterAlt(_localctx, 2);
        setState(69);
        type_declaration();
        setState(70);
        type_declaration_list();
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

//----------------- Var_declaration_listContext ------------------------------------------------------------------

TigerParser::Var_declaration_listContext::Var_declaration_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TigerParser::Var_declarationContext* TigerParser::Var_declaration_listContext::var_declaration() {
  return getRuleContext<TigerParser::Var_declarationContext>(0);
}

TigerParser::Var_declaration_listContext* TigerParser::Var_declaration_listContext::var_declaration_list() {
  return getRuleContext<TigerParser::Var_declaration_listContext>(0);
}


size_t TigerParser::Var_declaration_listContext::getRuleIndex() const {
  return TigerParser::RuleVar_declaration_list;
}


antlrcpp::Any TigerParser::Var_declaration_listContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TigerVisitor*>(visitor))
    return parserVisitor->visitVar_declaration_list(this);
  else
    return visitor->visitChildren(this);
}

TigerParser::Var_declaration_listContext* TigerParser::var_declaration_list() {
  Var_declaration_listContext *_localctx = _tracker.createInstance<Var_declaration_listContext>(_ctx, getState());
  enterRule(_localctx, 6, TigerParser::RuleVar_declaration_list);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(78);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);

      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(75);
      var_declaration();
      setState(76);
      var_declaration_list();
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

//----------------- Funct_declaration_listContext ------------------------------------------------------------------

TigerParser::Funct_declaration_listContext::Funct_declaration_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TigerParser::Var_declarationContext* TigerParser::Funct_declaration_listContext::var_declaration() {
  return getRuleContext<TigerParser::Var_declarationContext>(0);
}

TigerParser::Var_declaration_listContext* TigerParser::Funct_declaration_listContext::var_declaration_list() {
  return getRuleContext<TigerParser::Var_declaration_listContext>(0);
}


size_t TigerParser::Funct_declaration_listContext::getRuleIndex() const {
  return TigerParser::RuleFunct_declaration_list;
}


antlrcpp::Any TigerParser::Funct_declaration_listContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TigerVisitor*>(visitor))
    return parserVisitor->visitFunct_declaration_list(this);
  else
    return visitor->visitChildren(this);
}

TigerParser::Funct_declaration_listContext* TigerParser::funct_declaration_list() {
  Funct_declaration_listContext *_localctx = _tracker.createInstance<Funct_declaration_listContext>(_ctx, getState());
  enterRule(_localctx, 8, TigerParser::RuleFunct_declaration_list);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(84);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TigerParser::IN: {
        enterOuterAlt(_localctx, 1);

        break;
      }

      case TigerParser::VAR: {
        enterOuterAlt(_localctx, 2);
        setState(81);
        var_declaration();
        setState(82);
        var_declaration_list();
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

//----------------- Type_declarationContext ------------------------------------------------------------------

TigerParser::Type_declarationContext::Type_declarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<TigerParser::TypeContext *> TigerParser::Type_declarationContext::type() {
  return getRuleContexts<TigerParser::TypeContext>();
}

TigerParser::TypeContext* TigerParser::Type_declarationContext::type(size_t i) {
  return getRuleContext<TigerParser::TypeContext>(i);
}

TigerParser::IdContext* TigerParser::Type_declarationContext::id() {
  return getRuleContext<TigerParser::IdContext>(0);
}

tree::TerminalNode* TigerParser::Type_declarationContext::SEMI() {
  return getToken(TigerParser::SEMI, 0);
}


size_t TigerParser::Type_declarationContext::getRuleIndex() const {
  return TigerParser::RuleType_declaration;
}


antlrcpp::Any TigerParser::Type_declarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TigerVisitor*>(visitor))
    return parserVisitor->visitType_declaration(this);
  else
    return visitor->visitChildren(this);
}

TigerParser::Type_declarationContext* TigerParser::type_declaration() {
  Type_declarationContext *_localctx = _tracker.createInstance<Type_declarationContext>(_ctx, getState());
  enterRule(_localctx, 10, TigerParser::RuleType_declaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(86);
    type();
    setState(87);
    id();
    setState(88);
    match(TigerParser::T__0);
    setState(89);
    type();
    setState(90);
    match(TigerParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeContext ------------------------------------------------------------------

TigerParser::TypeContext::TypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TigerParser::Type_idContext* TigerParser::TypeContext::type_id() {
  return getRuleContext<TigerParser::Type_idContext>(0);
}

tree::TerminalNode* TigerParser::TypeContext::ARRAY() {
  return getToken(TigerParser::ARRAY, 0);
}

tree::TerminalNode* TigerParser::TypeContext::LBRACK() {
  return getToken(TigerParser::LBRACK, 0);
}

tree::TerminalNode* TigerParser::TypeContext::INTLIT() {
  return getToken(TigerParser::INTLIT, 0);
}

tree::TerminalNode* TigerParser::TypeContext::RBRACK() {
  return getToken(TigerParser::RBRACK, 0);
}

tree::TerminalNode* TigerParser::TypeContext::OF() {
  return getToken(TigerParser::OF, 0);
}

TigerParser::IdContext* TigerParser::TypeContext::id() {
  return getRuleContext<TigerParser::IdContext>(0);
}


size_t TigerParser::TypeContext::getRuleIndex() const {
  return TigerParser::RuleType;
}


antlrcpp::Any TigerParser::TypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TigerVisitor*>(visitor))
    return parserVisitor->visitType(this);
  else
    return visitor->visitChildren(this);
}

TigerParser::TypeContext* TigerParser::type() {
  TypeContext *_localctx = _tracker.createInstance<TypeContext>(_ctx, getState());
  enterRule(_localctx, 12, TigerParser::RuleType);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(100);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TigerParser::INT:
      case TigerParser::FLOAT: {
        enterOuterAlt(_localctx, 1);
        setState(92);
        type_id();
        break;
      }

      case TigerParser::ARRAY: {
        enterOuterAlt(_localctx, 2);
        setState(93);
        match(TigerParser::ARRAY);
        setState(94);
        match(TigerParser::LBRACK);
        setState(95);
        match(TigerParser::INTLIT);
        setState(96);
        match(TigerParser::RBRACK);
        setState(97);
        match(TigerParser::OF);
        setState(98);
        type_id();
        break;
      }

      case TigerParser::NON_DIGIT: {
        enterOuterAlt(_localctx, 3);
        setState(99);
        id();
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

//----------------- Type_idContext ------------------------------------------------------------------

TigerParser::Type_idContext::Type_idContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TigerParser::Type_idContext::INT() {
  return getToken(TigerParser::INT, 0);
}

tree::TerminalNode* TigerParser::Type_idContext::FLOAT() {
  return getToken(TigerParser::FLOAT, 0);
}


size_t TigerParser::Type_idContext::getRuleIndex() const {
  return TigerParser::RuleType_id;
}


antlrcpp::Any TigerParser::Type_idContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TigerVisitor*>(visitor))
    return parserVisitor->visitType_id(this);
  else
    return visitor->visitChildren(this);
}

TigerParser::Type_idContext* TigerParser::type_id() {
  Type_idContext *_localctx = _tracker.createInstance<Type_idContext>(_ctx, getState());
  enterRule(_localctx, 14, TigerParser::RuleType_id);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(102);
    _la = _input->LA(1);
    if (!(_la == TigerParser::INT

    || _la == TigerParser::FLOAT)) {
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

//----------------- Var_declarationContext ------------------------------------------------------------------

TigerParser::Var_declarationContext::Var_declarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TigerParser::Var_declarationContext::VAR() {
  return getToken(TigerParser::VAR, 0);
}

TigerParser::Id_listContext* TigerParser::Var_declarationContext::id_list() {
  return getRuleContext<TigerParser::Id_listContext>(0);
}

tree::TerminalNode* TigerParser::Var_declarationContext::COLON() {
  return getToken(TigerParser::COLON, 0);
}

TigerParser::TypeContext* TigerParser::Var_declarationContext::type() {
  return getRuleContext<TigerParser::TypeContext>(0);
}

TigerParser::Optional_initContext* TigerParser::Var_declarationContext::optional_init() {
  return getRuleContext<TigerParser::Optional_initContext>(0);
}

tree::TerminalNode* TigerParser::Var_declarationContext::SEMI() {
  return getToken(TigerParser::SEMI, 0);
}


size_t TigerParser::Var_declarationContext::getRuleIndex() const {
  return TigerParser::RuleVar_declaration;
}


antlrcpp::Any TigerParser::Var_declarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TigerVisitor*>(visitor))
    return parserVisitor->visitVar_declaration(this);
  else
    return visitor->visitChildren(this);
}

TigerParser::Var_declarationContext* TigerParser::var_declaration() {
  Var_declarationContext *_localctx = _tracker.createInstance<Var_declarationContext>(_ctx, getState());
  enterRule(_localctx, 16, TigerParser::RuleVar_declaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(104);
    match(TigerParser::VAR);
    setState(105);
    id_list();
    setState(106);
    match(TigerParser::COLON);
    setState(107);
    type();
    setState(108);
    optional_init();
    setState(109);
    match(TigerParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Id_listContext ------------------------------------------------------------------

TigerParser::Id_listContext::Id_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TigerParser::IdContext* TigerParser::Id_listContext::id() {
  return getRuleContext<TigerParser::IdContext>(0);
}

tree::TerminalNode* TigerParser::Id_listContext::COMMA() {
  return getToken(TigerParser::COMMA, 0);
}

TigerParser::Id_listContext* TigerParser::Id_listContext::id_list() {
  return getRuleContext<TigerParser::Id_listContext>(0);
}


size_t TigerParser::Id_listContext::getRuleIndex() const {
  return TigerParser::RuleId_list;
}


antlrcpp::Any TigerParser::Id_listContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TigerVisitor*>(visitor))
    return parserVisitor->visitId_list(this);
  else
    return visitor->visitChildren(this);
}

TigerParser::Id_listContext* TigerParser::id_list() {
  Id_listContext *_localctx = _tracker.createInstance<Id_listContext>(_ctx, getState());
  enterRule(_localctx, 18, TigerParser::RuleId_list);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(116);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(111);
      id();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(112);
      id();
      setState(113);
      match(TigerParser::COMMA);
      setState(114);
      id_list();
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

//----------------- Optional_initContext ------------------------------------------------------------------

TigerParser::Optional_initContext::Optional_initContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TigerParser::Optional_initContext::ASSIGN() {
  return getToken(TigerParser::ASSIGN, 0);
}

TigerParser::ConstantContext* TigerParser::Optional_initContext::constant() {
  return getRuleContext<TigerParser::ConstantContext>(0);
}


size_t TigerParser::Optional_initContext::getRuleIndex() const {
  return TigerParser::RuleOptional_init;
}


antlrcpp::Any TigerParser::Optional_initContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TigerVisitor*>(visitor))
    return parserVisitor->visitOptional_init(this);
  else
    return visitor->visitChildren(this);
}

TigerParser::Optional_initContext* TigerParser::optional_init() {
  Optional_initContext *_localctx = _tracker.createInstance<Optional_initContext>(_ctx, getState());
  enterRule(_localctx, 20, TigerParser::RuleOptional_init);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(121);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TigerParser::SEMI: {
        enterOuterAlt(_localctx, 1);

        break;
      }

      case TigerParser::ASSIGN: {
        enterOuterAlt(_localctx, 2);
        setState(119);
        match(TigerParser::ASSIGN);
        setState(120);
        constant();
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

//----------------- Funct_declarationContext ------------------------------------------------------------------

TigerParser::Funct_declarationContext::Funct_declarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TigerParser::Funct_declarationContext::FUNCTION() {
  return getToken(TigerParser::FUNCTION, 0);
}

TigerParser::IdContext* TigerParser::Funct_declarationContext::id() {
  return getRuleContext<TigerParser::IdContext>(0);
}

tree::TerminalNode* TigerParser::Funct_declarationContext::LPAREN() {
  return getToken(TigerParser::LPAREN, 0);
}

TigerParser::Param_listContext* TigerParser::Funct_declarationContext::param_list() {
  return getRuleContext<TigerParser::Param_listContext>(0);
}

tree::TerminalNode* TigerParser::Funct_declarationContext::RPAREN() {
  return getToken(TigerParser::RPAREN, 0);
}

TigerParser::Ret_typeContext* TigerParser::Funct_declarationContext::ret_type() {
  return getRuleContext<TigerParser::Ret_typeContext>(0);
}

tree::TerminalNode* TigerParser::Funct_declarationContext::BEGIN() {
  return getToken(TigerParser::BEGIN, 0);
}

TigerParser::Stat_seqContext* TigerParser::Funct_declarationContext::stat_seq() {
  return getRuleContext<TigerParser::Stat_seqContext>(0);
}

tree::TerminalNode* TigerParser::Funct_declarationContext::END() {
  return getToken(TigerParser::END, 0);
}

tree::TerminalNode* TigerParser::Funct_declarationContext::SEMI() {
  return getToken(TigerParser::SEMI, 0);
}


size_t TigerParser::Funct_declarationContext::getRuleIndex() const {
  return TigerParser::RuleFunct_declaration;
}


antlrcpp::Any TigerParser::Funct_declarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TigerVisitor*>(visitor))
    return parserVisitor->visitFunct_declaration(this);
  else
    return visitor->visitChildren(this);
}

TigerParser::Funct_declarationContext* TigerParser::funct_declaration() {
  Funct_declarationContext *_localctx = _tracker.createInstance<Funct_declarationContext>(_ctx, getState());
  enterRule(_localctx, 22, TigerParser::RuleFunct_declaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(123);
    match(TigerParser::FUNCTION);
    setState(124);
    id();
    setState(125);
    match(TigerParser::LPAREN);
    setState(126);
    param_list();
    setState(127);
    match(TigerParser::RPAREN);
    setState(128);
    ret_type();
    setState(129);
    match(TigerParser::BEGIN);
    setState(130);
    stat_seq();
    setState(131);
    match(TigerParser::END);
    setState(132);
    match(TigerParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Param_listContext ------------------------------------------------------------------

TigerParser::Param_listContext::Param_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TigerParser::ParamContext* TigerParser::Param_listContext::param() {
  return getRuleContext<TigerParser::ParamContext>(0);
}

TigerParser::Param_list_tailContext* TigerParser::Param_listContext::param_list_tail() {
  return getRuleContext<TigerParser::Param_list_tailContext>(0);
}


size_t TigerParser::Param_listContext::getRuleIndex() const {
  return TigerParser::RuleParam_list;
}


antlrcpp::Any TigerParser::Param_listContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TigerVisitor*>(visitor))
    return parserVisitor->visitParam_list(this);
  else
    return visitor->visitChildren(this);
}

TigerParser::Param_listContext* TigerParser::param_list() {
  Param_listContext *_localctx = _tracker.createInstance<Param_listContext>(_ctx, getState());
  enterRule(_localctx, 24, TigerParser::RuleParam_list);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(138);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TigerParser::RPAREN: {
        enterOuterAlt(_localctx, 1);

        break;
      }

      case TigerParser::NON_DIGIT: {
        enterOuterAlt(_localctx, 2);
        setState(135);
        param();
        setState(136);
        param_list_tail();
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

//----------------- Param_list_tailContext ------------------------------------------------------------------

TigerParser::Param_list_tailContext::Param_list_tailContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TigerParser::Param_list_tailContext::COMMA() {
  return getToken(TigerParser::COMMA, 0);
}

TigerParser::ParamContext* TigerParser::Param_list_tailContext::param() {
  return getRuleContext<TigerParser::ParamContext>(0);
}

TigerParser::Param_list_tailContext* TigerParser::Param_list_tailContext::param_list_tail() {
  return getRuleContext<TigerParser::Param_list_tailContext>(0);
}


size_t TigerParser::Param_list_tailContext::getRuleIndex() const {
  return TigerParser::RuleParam_list_tail;
}


antlrcpp::Any TigerParser::Param_list_tailContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TigerVisitor*>(visitor))
    return parserVisitor->visitParam_list_tail(this);
  else
    return visitor->visitChildren(this);
}

TigerParser::Param_list_tailContext* TigerParser::param_list_tail() {
  Param_list_tailContext *_localctx = _tracker.createInstance<Param_list_tailContext>(_ctx, getState());
  enterRule(_localctx, 26, TigerParser::RuleParam_list_tail);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(145);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TigerParser::RPAREN: {
        enterOuterAlt(_localctx, 1);

        break;
      }

      case TigerParser::COMMA: {
        enterOuterAlt(_localctx, 2);
        setState(141);
        match(TigerParser::COMMA);
        setState(142);
        param();
        setState(143);
        param_list_tail();
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

//----------------- Ret_typeContext ------------------------------------------------------------------

TigerParser::Ret_typeContext::Ret_typeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TigerParser::Ret_typeContext::COLON() {
  return getToken(TigerParser::COLON, 0);
}

TigerParser::TypeContext* TigerParser::Ret_typeContext::type() {
  return getRuleContext<TigerParser::TypeContext>(0);
}


size_t TigerParser::Ret_typeContext::getRuleIndex() const {
  return TigerParser::RuleRet_type;
}


antlrcpp::Any TigerParser::Ret_typeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TigerVisitor*>(visitor))
    return parserVisitor->visitRet_type(this);
  else
    return visitor->visitChildren(this);
}

TigerParser::Ret_typeContext* TigerParser::ret_type() {
  Ret_typeContext *_localctx = _tracker.createInstance<Ret_typeContext>(_ctx, getState());
  enterRule(_localctx, 28, TigerParser::RuleRet_type);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(150);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TigerParser::BEGIN: {
        enterOuterAlt(_localctx, 1);

        break;
      }

      case TigerParser::COLON: {
        enterOuterAlt(_localctx, 2);
        setState(148);
        match(TigerParser::COLON);
        setState(149);
        type();
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

//----------------- ParamContext ------------------------------------------------------------------

TigerParser::ParamContext::ParamContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TigerParser::IdContext* TigerParser::ParamContext::id() {
  return getRuleContext<TigerParser::IdContext>(0);
}

tree::TerminalNode* TigerParser::ParamContext::COLON() {
  return getToken(TigerParser::COLON, 0);
}

TigerParser::TypeContext* TigerParser::ParamContext::type() {
  return getRuleContext<TigerParser::TypeContext>(0);
}


size_t TigerParser::ParamContext::getRuleIndex() const {
  return TigerParser::RuleParam;
}


antlrcpp::Any TigerParser::ParamContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TigerVisitor*>(visitor))
    return parserVisitor->visitParam(this);
  else
    return visitor->visitChildren(this);
}

TigerParser::ParamContext* TigerParser::param() {
  ParamContext *_localctx = _tracker.createInstance<ParamContext>(_ctx, getState());
  enterRule(_localctx, 30, TigerParser::RuleParam);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(152);
    id();
    setState(153);
    match(TigerParser::COLON);
    setState(154);
    type();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Stat_seqContext ------------------------------------------------------------------

TigerParser::Stat_seqContext::Stat_seqContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TigerParser::StatContext* TigerParser::Stat_seqContext::stat() {
  return getRuleContext<TigerParser::StatContext>(0);
}

TigerParser::Stat_seqContext* TigerParser::Stat_seqContext::stat_seq() {
  return getRuleContext<TigerParser::Stat_seqContext>(0);
}


size_t TigerParser::Stat_seqContext::getRuleIndex() const {
  return TigerParser::RuleStat_seq;
}


antlrcpp::Any TigerParser::Stat_seqContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TigerVisitor*>(visitor))
    return parserVisitor->visitStat_seq(this);
  else
    return visitor->visitChildren(this);
}

TigerParser::Stat_seqContext* TigerParser::stat_seq() {
  Stat_seqContext *_localctx = _tracker.createInstance<Stat_seqContext>(_ctx, getState());
  enterRule(_localctx, 32, TigerParser::RuleStat_seq);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(160);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(156);
      stat();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(157);
      stat();
      setState(158);
      stat_seq();
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

//----------------- StatContext ------------------------------------------------------------------

TigerParser::StatContext::StatContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TigerParser::LvalueContext* TigerParser::StatContext::lvalue() {
  return getRuleContext<TigerParser::LvalueContext>(0);
}

TigerParser::L_tailContext* TigerParser::StatContext::l_tail() {
  return getRuleContext<TigerParser::L_tailContext>(0);
}

tree::TerminalNode* TigerParser::StatContext::ASSIGN() {
  return getToken(TigerParser::ASSIGN, 0);
}

std::vector<TigerParser::ExprContext *> TigerParser::StatContext::expr() {
  return getRuleContexts<TigerParser::ExprContext>();
}

TigerParser::ExprContext* TigerParser::StatContext::expr(size_t i) {
  return getRuleContext<TigerParser::ExprContext>(i);
}

tree::TerminalNode* TigerParser::StatContext::SEMI() {
  return getToken(TigerParser::SEMI, 0);
}

tree::TerminalNode* TigerParser::StatContext::IF() {
  return getToken(TigerParser::IF, 0);
}

tree::TerminalNode* TigerParser::StatContext::THEN() {
  return getToken(TigerParser::THEN, 0);
}

std::vector<TigerParser::Stat_seqContext *> TigerParser::StatContext::stat_seq() {
  return getRuleContexts<TigerParser::Stat_seqContext>();
}

TigerParser::Stat_seqContext* TigerParser::StatContext::stat_seq(size_t i) {
  return getRuleContext<TigerParser::Stat_seqContext>(i);
}

tree::TerminalNode* TigerParser::StatContext::ENDIF() {
  return getToken(TigerParser::ENDIF, 0);
}

tree::TerminalNode* TigerParser::StatContext::ELSE() {
  return getToken(TigerParser::ELSE, 0);
}

tree::TerminalNode* TigerParser::StatContext::WHILE() {
  return getToken(TigerParser::WHILE, 0);
}

tree::TerminalNode* TigerParser::StatContext::DO() {
  return getToken(TigerParser::DO, 0);
}

tree::TerminalNode* TigerParser::StatContext::ENDDO() {
  return getToken(TigerParser::ENDDO, 0);
}

tree::TerminalNode* TigerParser::StatContext::FOR() {
  return getToken(TigerParser::FOR, 0);
}

TigerParser::IdContext* TigerParser::StatContext::id() {
  return getRuleContext<TigerParser::IdContext>(0);
}

tree::TerminalNode* TigerParser::StatContext::TO() {
  return getToken(TigerParser::TO, 0);
}

TigerParser::Opt_prefixContext* TigerParser::StatContext::opt_prefix() {
  return getRuleContext<TigerParser::Opt_prefixContext>(0);
}

tree::TerminalNode* TigerParser::StatContext::LPAREN() {
  return getToken(TigerParser::LPAREN, 0);
}

TigerParser::Expr_listContext* TigerParser::StatContext::expr_list() {
  return getRuleContext<TigerParser::Expr_listContext>(0);
}

tree::TerminalNode* TigerParser::StatContext::RPAREN() {
  return getToken(TigerParser::RPAREN, 0);
}

tree::TerminalNode* TigerParser::StatContext::BREAK() {
  return getToken(TigerParser::BREAK, 0);
}

tree::TerminalNode* TigerParser::StatContext::RETURN() {
  return getToken(TigerParser::RETURN, 0);
}

tree::TerminalNode* TigerParser::StatContext::LET() {
  return getToken(TigerParser::LET, 0);
}

TigerParser::Declaration_segmentContext* TigerParser::StatContext::declaration_segment() {
  return getRuleContext<TigerParser::Declaration_segmentContext>(0);
}

tree::TerminalNode* TigerParser::StatContext::IN() {
  return getToken(TigerParser::IN, 0);
}

tree::TerminalNode* TigerParser::StatContext::END() {
  return getToken(TigerParser::END, 0);
}


size_t TigerParser::StatContext::getRuleIndex() const {
  return TigerParser::RuleStat;
}


antlrcpp::Any TigerParser::StatContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TigerVisitor*>(visitor))
    return parserVisitor->visitStat(this);
  else
    return visitor->visitChildren(this);
}

TigerParser::StatContext* TigerParser::stat() {
  StatContext *_localctx = _tracker.createInstance<StatContext>(_ctx, getState());
  enterRule(_localctx, 34, TigerParser::RuleStat);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(221);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(162);
      lvalue();
      setState(163);
      l_tail();
      setState(164);
      match(TigerParser::ASSIGN);
      setState(165);
      expr(0);
      setState(166);
      match(TigerParser::SEMI);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(168);
      match(TigerParser::IF);
      setState(169);
      expr(0);
      setState(170);
      match(TigerParser::THEN);
      setState(171);
      stat_seq();
      setState(172);
      match(TigerParser::ENDIF);
      setState(173);
      match(TigerParser::SEMI);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(175);
      match(TigerParser::IF);
      setState(176);
      expr(0);
      setState(177);
      match(TigerParser::THEN);
      setState(178);
      stat_seq();
      setState(179);
      match(TigerParser::ELSE);
      setState(180);
      stat_seq();
      setState(181);
      match(TigerParser::ENDIF);
      setState(182);
      match(TigerParser::SEMI);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(184);
      match(TigerParser::WHILE);
      setState(185);
      expr(0);
      setState(186);
      match(TigerParser::DO);
      setState(187);
      stat_seq();
      setState(188);
      match(TigerParser::ENDDO);
      setState(189);
      match(TigerParser::SEMI);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(191);
      match(TigerParser::FOR);
      setState(192);
      id();
      setState(193);
      match(TigerParser::ASSIGN);
      setState(194);
      expr(0);
      setState(195);
      match(TigerParser::TO);
      setState(196);
      expr(0);
      setState(197);
      match(TigerParser::DO);
      setState(198);
      stat_seq();
      setState(199);
      match(TigerParser::ENDDO);
      setState(200);
      match(TigerParser::SEMI);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(202);
      opt_prefix();
      setState(203);
      id();
      setState(204);
      match(TigerParser::LPAREN);
      setState(205);
      expr_list();
      setState(206);
      match(TigerParser::RPAREN);
      setState(207);
      match(TigerParser::SEMI);
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(209);
      match(TigerParser::BREAK);
      setState(210);
      match(TigerParser::SEMI);
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(211);
      match(TigerParser::RETURN);
      setState(212);
      expr(0);
      setState(213);
      match(TigerParser::SEMI);
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(215);
      match(TigerParser::LET);
      setState(216);
      declaration_segment();
      setState(217);
      match(TigerParser::IN);
      setState(218);
      stat_seq();
      setState(219);
      match(TigerParser::END);
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

//----------------- L_tailContext ------------------------------------------------------------------

TigerParser::L_tailContext::L_tailContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TigerParser::L_tailContext::ASSIGN() {
  return getToken(TigerParser::ASSIGN, 0);
}

TigerParser::LvalueContext* TigerParser::L_tailContext::lvalue() {
  return getRuleContext<TigerParser::LvalueContext>(0);
}

TigerParser::L_tailContext* TigerParser::L_tailContext::l_tail() {
  return getRuleContext<TigerParser::L_tailContext>(0);
}


size_t TigerParser::L_tailContext::getRuleIndex() const {
  return TigerParser::RuleL_tail;
}


antlrcpp::Any TigerParser::L_tailContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TigerVisitor*>(visitor))
    return parserVisitor->visitL_tail(this);
  else
    return visitor->visitChildren(this);
}

TigerParser::L_tailContext* TigerParser::l_tail() {
  L_tailContext *_localctx = _tracker.createInstance<L_tailContext>(_ctx, getState());
  enterRule(_localctx, 36, TigerParser::RuleL_tail);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(228);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(223);
      match(TigerParser::ASSIGN);
      setState(224);
      lvalue();
      setState(225);
      l_tail();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);

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

//----------------- Opt_prefixContext ------------------------------------------------------------------

TigerParser::Opt_prefixContext::Opt_prefixContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TigerParser::LvalueContext* TigerParser::Opt_prefixContext::lvalue() {
  return getRuleContext<TigerParser::LvalueContext>(0);
}

tree::TerminalNode* TigerParser::Opt_prefixContext::ASSIGN() {
  return getToken(TigerParser::ASSIGN, 0);
}


size_t TigerParser::Opt_prefixContext::getRuleIndex() const {
  return TigerParser::RuleOpt_prefix;
}


antlrcpp::Any TigerParser::Opt_prefixContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TigerVisitor*>(visitor))
    return parserVisitor->visitOpt_prefix(this);
  else
    return visitor->visitChildren(this);
}

TigerParser::Opt_prefixContext* TigerParser::opt_prefix() {
  Opt_prefixContext *_localctx = _tracker.createInstance<Opt_prefixContext>(_ctx, getState());
  enterRule(_localctx, 38, TigerParser::RuleOpt_prefix);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(234);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(230);
      lvalue();
      setState(231);
      match(TigerParser::ASSIGN);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);

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

//----------------- ExprContext ------------------------------------------------------------------

TigerParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TigerParser::ConstantContext* TigerParser::ExprContext::constant() {
  return getRuleContext<TigerParser::ConstantContext>(0);
}

TigerParser::LvalueContext* TigerParser::ExprContext::lvalue() {
  return getRuleContext<TigerParser::LvalueContext>(0);
}

tree::TerminalNode* TigerParser::ExprContext::LPAREN() {
  return getToken(TigerParser::LPAREN, 0);
}

std::vector<TigerParser::ExprContext *> TigerParser::ExprContext::expr() {
  return getRuleContexts<TigerParser::ExprContext>();
}

TigerParser::ExprContext* TigerParser::ExprContext::expr(size_t i) {
  return getRuleContext<TigerParser::ExprContext>(i);
}

tree::TerminalNode* TigerParser::ExprContext::RPAREN() {
  return getToken(TigerParser::RPAREN, 0);
}

TigerParser::Binary_operatorContext* TigerParser::ExprContext::binary_operator() {
  return getRuleContext<TigerParser::Binary_operatorContext>(0);
}


size_t TigerParser::ExprContext::getRuleIndex() const {
  return TigerParser::RuleExpr;
}


antlrcpp::Any TigerParser::ExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TigerVisitor*>(visitor))
    return parserVisitor->visitExpr(this);
  else
    return visitor->visitChildren(this);
}


TigerParser::ExprContext* TigerParser::expr() {
   return expr(0);
}

TigerParser::ExprContext* TigerParser::expr(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  TigerParser::ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, parentState);
  TigerParser::ExprContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 40;
  enterRecursionRule(_localctx, 40, TigerParser::RuleExpr, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(243);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TigerParser::INTLIT:
      case TigerParser::FLOATLIT: {
        setState(237);
        constant();
        break;
      }

      case TigerParser::NON_DIGIT: {
        setState(238);
        lvalue();
        break;
      }

      case TigerParser::LPAREN: {
        setState(239);
        match(TigerParser::LPAREN);
        setState(240);
        expr(0);
        setState(241);
        match(TigerParser::RPAREN);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(251);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleExpr);
        setState(245);

        if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
        setState(246);
        binary_operator();
        setState(247);
        expr(3); 
      }
      setState(253);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- ConstantContext ------------------------------------------------------------------

TigerParser::ConstantContext::ConstantContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TigerParser::ConstantContext::INTLIT() {
  return getToken(TigerParser::INTLIT, 0);
}

tree::TerminalNode* TigerParser::ConstantContext::FLOATLIT() {
  return getToken(TigerParser::FLOATLIT, 0);
}


size_t TigerParser::ConstantContext::getRuleIndex() const {
  return TigerParser::RuleConstant;
}


antlrcpp::Any TigerParser::ConstantContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TigerVisitor*>(visitor))
    return parserVisitor->visitConstant(this);
  else
    return visitor->visitChildren(this);
}

TigerParser::ConstantContext* TigerParser::constant() {
  ConstantContext *_localctx = _tracker.createInstance<ConstantContext>(_ctx, getState());
  enterRule(_localctx, 42, TigerParser::RuleConstant);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(254);
    _la = _input->LA(1);
    if (!(_la == TigerParser::INTLIT

    || _la == TigerParser::FLOATLIT)) {
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

//----------------- Binary_operatorContext ------------------------------------------------------------------

TigerParser::Binary_operatorContext::Binary_operatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TigerParser::Binary_operatorContext::EXP() {
  return getToken(TigerParser::EXP, 0);
}

tree::TerminalNode* TigerParser::Binary_operatorContext::PLUS() {
  return getToken(TigerParser::PLUS, 0);
}

tree::TerminalNode* TigerParser::Binary_operatorContext::MINUS() {
  return getToken(TigerParser::MINUS, 0);
}

tree::TerminalNode* TigerParser::Binary_operatorContext::MULT() {
  return getToken(TigerParser::MULT, 0);
}

tree::TerminalNode* TigerParser::Binary_operatorContext::DIV() {
  return getToken(TigerParser::DIV, 0);
}

tree::TerminalNode* TigerParser::Binary_operatorContext::EQ() {
  return getToken(TigerParser::EQ, 0);
}

tree::TerminalNode* TigerParser::Binary_operatorContext::NEQ() {
  return getToken(TigerParser::NEQ, 0);
}

tree::TerminalNode* TigerParser::Binary_operatorContext::LESSER() {
  return getToken(TigerParser::LESSER, 0);
}

tree::TerminalNode* TigerParser::Binary_operatorContext::GREATER() {
  return getToken(TigerParser::GREATER, 0);
}

tree::TerminalNode* TigerParser::Binary_operatorContext::LESSEREQ() {
  return getToken(TigerParser::LESSEREQ, 0);
}

tree::TerminalNode* TigerParser::Binary_operatorContext::GREATEREQ() {
  return getToken(TigerParser::GREATEREQ, 0);
}

tree::TerminalNode* TigerParser::Binary_operatorContext::AND() {
  return getToken(TigerParser::AND, 0);
}

tree::TerminalNode* TigerParser::Binary_operatorContext::OR() {
  return getToken(TigerParser::OR, 0);
}


size_t TigerParser::Binary_operatorContext::getRuleIndex() const {
  return TigerParser::RuleBinary_operator;
}


antlrcpp::Any TigerParser::Binary_operatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TigerVisitor*>(visitor))
    return parserVisitor->visitBinary_operator(this);
  else
    return visitor->visitChildren(this);
}

TigerParser::Binary_operatorContext* TigerParser::binary_operator() {
  Binary_operatorContext *_localctx = _tracker.createInstance<Binary_operatorContext>(_ctx, getState());
  enterRule(_localctx, 44, TigerParser::RuleBinary_operator);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(256);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << TigerParser::PLUS)
      | (1ULL << TigerParser::MINUS)
      | (1ULL << TigerParser::MULT)
      | (1ULL << TigerParser::EXP)
      | (1ULL << TigerParser::DIV)
      | (1ULL << TigerParser::EQ)
      | (1ULL << TigerParser::NEQ)
      | (1ULL << TigerParser::LESSER)
      | (1ULL << TigerParser::LESSEREQ)
      | (1ULL << TigerParser::GREATER)
      | (1ULL << TigerParser::GREATEREQ)
      | (1ULL << TigerParser::AND)
      | (1ULL << TigerParser::OR))) != 0))) {
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

//----------------- Expr_listContext ------------------------------------------------------------------

TigerParser::Expr_listContext::Expr_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TigerParser::ExprContext* TigerParser::Expr_listContext::expr() {
  return getRuleContext<TigerParser::ExprContext>(0);
}

TigerParser::Expr_list_tailContext* TigerParser::Expr_listContext::expr_list_tail() {
  return getRuleContext<TigerParser::Expr_list_tailContext>(0);
}


size_t TigerParser::Expr_listContext::getRuleIndex() const {
  return TigerParser::RuleExpr_list;
}


antlrcpp::Any TigerParser::Expr_listContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TigerVisitor*>(visitor))
    return parserVisitor->visitExpr_list(this);
  else
    return visitor->visitChildren(this);
}

TigerParser::Expr_listContext* TigerParser::expr_list() {
  Expr_listContext *_localctx = _tracker.createInstance<Expr_listContext>(_ctx, getState());
  enterRule(_localctx, 46, TigerParser::RuleExpr_list);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(262);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TigerParser::RPAREN: {
        enterOuterAlt(_localctx, 1);

        break;
      }

      case TigerParser::INTLIT:
      case TigerParser::FLOATLIT:
      case TigerParser::NON_DIGIT:
      case TigerParser::LPAREN: {
        enterOuterAlt(_localctx, 2);
        setState(259);
        expr(0);
        setState(260);
        expr_list_tail();
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

//----------------- Expr_list_tailContext ------------------------------------------------------------------

TigerParser::Expr_list_tailContext::Expr_list_tailContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TigerParser::Expr_list_tailContext::COMMA() {
  return getToken(TigerParser::COMMA, 0);
}

TigerParser::ExprContext* TigerParser::Expr_list_tailContext::expr() {
  return getRuleContext<TigerParser::ExprContext>(0);
}

TigerParser::Expr_list_tailContext* TigerParser::Expr_list_tailContext::expr_list_tail() {
  return getRuleContext<TigerParser::Expr_list_tailContext>(0);
}


size_t TigerParser::Expr_list_tailContext::getRuleIndex() const {
  return TigerParser::RuleExpr_list_tail;
}


antlrcpp::Any TigerParser::Expr_list_tailContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TigerVisitor*>(visitor))
    return parserVisitor->visitExpr_list_tail(this);
  else
    return visitor->visitChildren(this);
}

TigerParser::Expr_list_tailContext* TigerParser::expr_list_tail() {
  Expr_list_tailContext *_localctx = _tracker.createInstance<Expr_list_tailContext>(_ctx, getState());
  enterRule(_localctx, 48, TigerParser::RuleExpr_list_tail);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(269);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TigerParser::COMMA: {
        enterOuterAlt(_localctx, 1);
        setState(264);
        match(TigerParser::COMMA);
        setState(265);
        expr(0);
        setState(266);
        expr_list_tail();
        break;
      }

      case TigerParser::RPAREN: {
        enterOuterAlt(_localctx, 2);

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

//----------------- LvalueContext ------------------------------------------------------------------

TigerParser::LvalueContext::LvalueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TigerParser::IdContext* TigerParser::LvalueContext::id() {
  return getRuleContext<TigerParser::IdContext>(0);
}

TigerParser::Lvalue_tailContext* TigerParser::LvalueContext::lvalue_tail() {
  return getRuleContext<TigerParser::Lvalue_tailContext>(0);
}


size_t TigerParser::LvalueContext::getRuleIndex() const {
  return TigerParser::RuleLvalue;
}


antlrcpp::Any TigerParser::LvalueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TigerVisitor*>(visitor))
    return parserVisitor->visitLvalue(this);
  else
    return visitor->visitChildren(this);
}

TigerParser::LvalueContext* TigerParser::lvalue() {
  LvalueContext *_localctx = _tracker.createInstance<LvalueContext>(_ctx, getState());
  enterRule(_localctx, 50, TigerParser::RuleLvalue);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(271);
    id();
    setState(272);
    lvalue_tail();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Lvalue_tailContext ------------------------------------------------------------------

TigerParser::Lvalue_tailContext::Lvalue_tailContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TigerParser::Lvalue_tailContext::LBRACK() {
  return getToken(TigerParser::LBRACK, 0);
}

TigerParser::ExprContext* TigerParser::Lvalue_tailContext::expr() {
  return getRuleContext<TigerParser::ExprContext>(0);
}

tree::TerminalNode* TigerParser::Lvalue_tailContext::RBRACK() {
  return getToken(TigerParser::RBRACK, 0);
}


size_t TigerParser::Lvalue_tailContext::getRuleIndex() const {
  return TigerParser::RuleLvalue_tail;
}


antlrcpp::Any TigerParser::Lvalue_tailContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TigerVisitor*>(visitor))
    return parserVisitor->visitLvalue_tail(this);
  else
    return visitor->visitChildren(this);
}

TigerParser::Lvalue_tailContext* TigerParser::lvalue_tail() {
  Lvalue_tailContext *_localctx = _tracker.createInstance<Lvalue_tailContext>(_ctx, getState());
  enterRule(_localctx, 52, TigerParser::RuleLvalue_tail);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(279);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(274);
      match(TigerParser::LBRACK);
      setState(275);
      expr(0);
      setState(276);
      match(TigerParser::RBRACK);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);

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

//----------------- IdContext ------------------------------------------------------------------

TigerParser::IdContext::IdContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> TigerParser::IdContext::NON_DIGIT() {
  return getTokens(TigerParser::NON_DIGIT);
}

tree::TerminalNode* TigerParser::IdContext::NON_DIGIT(size_t i) {
  return getToken(TigerParser::NON_DIGIT, i);
}

std::vector<tree::TerminalNode *> TigerParser::IdContext::DIGIT() {
  return getTokens(TigerParser::DIGIT);
}

tree::TerminalNode* TigerParser::IdContext::DIGIT(size_t i) {
  return getToken(TigerParser::DIGIT, i);
}


size_t TigerParser::IdContext::getRuleIndex() const {
  return TigerParser::RuleId;
}


antlrcpp::Any TigerParser::IdContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TigerVisitor*>(visitor))
    return parserVisitor->visitId(this);
  else
    return visitor->visitChildren(this);
}

TigerParser::IdContext* TigerParser::id() {
  IdContext *_localctx = _tracker.createInstance<IdContext>(_ctx, getState());
  enterRule(_localctx, 54, TigerParser::RuleId);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(281);
    match(TigerParser::NON_DIGIT);
    setState(285);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(282);
        _la = _input->LA(1);
        if (!(_la == TigerParser::NON_DIGIT

        || _la == TigerParser::DIGIT)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        } 
      }
      setState(287);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool TigerParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 20: return exprSempred(dynamic_cast<ExprContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool TigerParser::exprSempred(ExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> TigerParser::_decisionToDFA;
atn::PredictionContextCache TigerParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN TigerParser::_atn;
std::vector<uint16_t> TigerParser::_serializedATN;

std::vector<std::string> TigerParser::_ruleNames = {
  "tiger_program", "declaration_segment", "type_declaration_list", "var_declaration_list", 
  "funct_declaration_list", "type_declaration", "type", "type_id", "var_declaration", 
  "id_list", "optional_init", "funct_declaration", "param_list", "param_list_tail", 
  "ret_type", "param", "stat_seq", "stat", "l_tail", "opt_prefix", "expr", 
  "constant", "binary_operator", "expr_list", "expr_list_tail", "lvalue", 
  "lvalue_tail", "id"
};

std::vector<std::string> TigerParser::_literalNames = {
  "", "'|='", "", "", "", "", "", "", "", "'main'", "'array'", "'return'", 
  "'break'", "'do'", "'else'", "'end'", "'for'", "'function'", "'if'", "'in'", 
  "'let'", "'of'", "'then'", "'to'", "'type'", "'var'", "'while'", "'endif'", 
  "'begin'", "'enddo'", "'int'", "'float'", "", "','", "':'", "';'", "'('", 
  "')'", "'['", "']'", "'{'", "'}'", "'.'", "'+'", "'-'", "'*'", "'**'", 
  "'/'", "'=='", "'!='", "'<'", "'<='", "'>'", "'>='", "'&'", "'|'"
};

std::vector<std::string> TigerParser::_symbolicNames = {
  "", "", "INTLIT", "FLOATLIT", "NON_DIGIT", "NON_ZERO_DIGIT", "DIGIT", 
  "COMMENT", "WHITESPACE", "MAIN", "ARRAY", "RETURN", "BREAK", "DO", "ELSE", 
  "END", "FOR", "FUNCTION", "IF", "IN", "LET", "OF", "THEN", "TO", "TYPE", 
  "VAR", "WHILE", "ENDIF", "BEGIN", "ENDDO", "INT", "FLOAT", "RESERVED", 
  "COMMA", "COLON", "SEMI", "LPAREN", "RPAREN", "LBRACK", "RBRACK", "LBRACE", 
  "RBRACE", "PERIOD", "PLUS", "MINUS", "MULT", "EXP", "DIV", "EQ", "NEQ", 
  "LESSER", "LESSEREQ", "GREATER", "GREATEREQ", "AND", "OR", "ASSIGN"
};

dfa::Vocabulary TigerParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> TigerParser::_tokenNames;

TigerParser::Initializer::Initializer() {
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
    0x3, 0x3a, 0x123, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
    0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 
    0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 
    0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 
    0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 
    0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 
    0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 0x9, 0x17, 0x4, 0x18, 0x9, 
    0x18, 0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 0x9, 0x1a, 0x4, 0x1b, 0x9, 0x1b, 
    0x4, 0x1c, 0x9, 0x1c, 0x4, 0x1d, 0x9, 0x1d, 0x3, 0x2, 0x3, 0x2, 0x3, 
    0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x5, 
    0x4, 0x4b, 0xa, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x5, 0x5, 
    0x51, 0xa, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x5, 0x6, 0x57, 
    0xa, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 
    0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 
    0x3, 0x8, 0x5, 0x8, 0x67, 0xa, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0xa, 0x3, 
    0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xb, 0x3, 
    0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x5, 0xb, 0x77, 0xa, 0xb, 0x3, 0xc, 
    0x3, 0xc, 0x3, 0xc, 0x5, 0xc, 0x7c, 0xa, 0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 
    0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 
    0xd, 0x3, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x5, 0xe, 0x8d, 
    0xa, 0xe, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x5, 0xf, 
    0x94, 0xa, 0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x5, 0x10, 0x99, 0xa, 
    0x10, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x12, 0x3, 0x12, 
    0x3, 0x12, 0x3, 0x12, 0x5, 0x12, 0xa3, 0xa, 0x12, 0x3, 0x13, 0x3, 0x13, 
    0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 
    0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 
    0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 
    0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 
    0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 
    0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 
    0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 
    0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 
    0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x5, 0x13, 0xe0, 
    0xa, 0x13, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x5, 
    0x14, 0xe7, 0xa, 0x14, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x5, 
    0x15, 0xed, 0xa, 0x15, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 
    0x16, 0x3, 0x16, 0x3, 0x16, 0x5, 0x16, 0xf6, 0xa, 0x16, 0x3, 0x16, 0x3, 
    0x16, 0x3, 0x16, 0x3, 0x16, 0x7, 0x16, 0xfc, 0xa, 0x16, 0xc, 0x16, 0xe, 
    0x16, 0xff, 0xb, 0x16, 0x3, 0x17, 0x3, 0x17, 0x3, 0x18, 0x3, 0x18, 0x3, 
    0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x5, 0x19, 0x109, 0xa, 0x19, 
    0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x5, 0x1a, 0x110, 
    0xa, 0x1a, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1c, 0x3, 0x1c, 0x3, 
    0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x5, 0x1c, 0x11a, 0xa, 0x1c, 0x3, 0x1d, 
    0x3, 0x1d, 0x7, 0x1d, 0x11e, 0xa, 0x1d, 0xc, 0x1d, 0xe, 0x1d, 0x121, 
    0xb, 0x1d, 0x3, 0x1d, 0x2, 0x3, 0x2a, 0x1e, 0x2, 0x4, 0x6, 0x8, 0xa, 
    0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 
    0x24, 0x26, 0x28, 0x2a, 0x2c, 0x2e, 0x30, 0x32, 0x34, 0x36, 0x38, 0x2, 
    0x6, 0x3, 0x2, 0x20, 0x21, 0x3, 0x2, 0x4, 0x5, 0x3, 0x2, 0x2d, 0x39, 
    0x4, 0x2, 0x6, 0x6, 0x8, 0x8, 0x2, 0x122, 0x2, 0x3a, 0x3, 0x2, 0x2, 
    0x2, 0x4, 0x42, 0x3, 0x2, 0x2, 0x2, 0x6, 0x4a, 0x3, 0x2, 0x2, 0x2, 0x8, 
    0x50, 0x3, 0x2, 0x2, 0x2, 0xa, 0x56, 0x3, 0x2, 0x2, 0x2, 0xc, 0x58, 
    0x3, 0x2, 0x2, 0x2, 0xe, 0x66, 0x3, 0x2, 0x2, 0x2, 0x10, 0x68, 0x3, 
    0x2, 0x2, 0x2, 0x12, 0x6a, 0x3, 0x2, 0x2, 0x2, 0x14, 0x76, 0x3, 0x2, 
    0x2, 0x2, 0x16, 0x7b, 0x3, 0x2, 0x2, 0x2, 0x18, 0x7d, 0x3, 0x2, 0x2, 
    0x2, 0x1a, 0x8c, 0x3, 0x2, 0x2, 0x2, 0x1c, 0x93, 0x3, 0x2, 0x2, 0x2, 
    0x1e, 0x98, 0x3, 0x2, 0x2, 0x2, 0x20, 0x9a, 0x3, 0x2, 0x2, 0x2, 0x22, 
    0xa2, 0x3, 0x2, 0x2, 0x2, 0x24, 0xdf, 0x3, 0x2, 0x2, 0x2, 0x26, 0xe6, 
    0x3, 0x2, 0x2, 0x2, 0x28, 0xec, 0x3, 0x2, 0x2, 0x2, 0x2a, 0xf5, 0x3, 
    0x2, 0x2, 0x2, 0x2c, 0x100, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x102, 0x3, 0x2, 
    0x2, 0x2, 0x30, 0x108, 0x3, 0x2, 0x2, 0x2, 0x32, 0x10f, 0x3, 0x2, 0x2, 
    0x2, 0x34, 0x111, 0x3, 0x2, 0x2, 0x2, 0x36, 0x119, 0x3, 0x2, 0x2, 0x2, 
    0x38, 0x11b, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x3b, 0x7, 0xb, 0x2, 0x2, 0x3b, 
    0x3c, 0x7, 0x16, 0x2, 0x2, 0x3c, 0x3d, 0x5, 0x4, 0x3, 0x2, 0x3d, 0x3e, 
    0x7, 0x15, 0x2, 0x2, 0x3e, 0x3f, 0x7, 0x1e, 0x2, 0x2, 0x3f, 0x40, 0x5, 
    0x22, 0x12, 0x2, 0x40, 0x41, 0x7, 0x11, 0x2, 0x2, 0x41, 0x3, 0x3, 0x2, 
    0x2, 0x2, 0x42, 0x43, 0x5, 0x6, 0x4, 0x2, 0x43, 0x44, 0x5, 0x8, 0x5, 
    0x2, 0x44, 0x45, 0x5, 0xa, 0x6, 0x2, 0x45, 0x5, 0x3, 0x2, 0x2, 0x2, 
    0x46, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x47, 0x48, 0x5, 0xc, 0x7, 0x2, 0x48, 
    0x49, 0x5, 0x6, 0x4, 0x2, 0x49, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x4a, 0x46, 
    0x3, 0x2, 0x2, 0x2, 0x4a, 0x47, 0x3, 0x2, 0x2, 0x2, 0x4b, 0x7, 0x3, 
    0x2, 0x2, 0x2, 0x4c, 0x51, 0x3, 0x2, 0x2, 0x2, 0x4d, 0x4e, 0x5, 0x12, 
    0xa, 0x2, 0x4e, 0x4f, 0x5, 0x8, 0x5, 0x2, 0x4f, 0x51, 0x3, 0x2, 0x2, 
    0x2, 0x50, 0x4c, 0x3, 0x2, 0x2, 0x2, 0x50, 0x4d, 0x3, 0x2, 0x2, 0x2, 
    0x51, 0x9, 0x3, 0x2, 0x2, 0x2, 0x52, 0x57, 0x3, 0x2, 0x2, 0x2, 0x53, 
    0x54, 0x5, 0x12, 0xa, 0x2, 0x54, 0x55, 0x5, 0x8, 0x5, 0x2, 0x55, 0x57, 
    0x3, 0x2, 0x2, 0x2, 0x56, 0x52, 0x3, 0x2, 0x2, 0x2, 0x56, 0x53, 0x3, 
    0x2, 0x2, 0x2, 0x57, 0xb, 0x3, 0x2, 0x2, 0x2, 0x58, 0x59, 0x5, 0xe, 
    0x8, 0x2, 0x59, 0x5a, 0x5, 0x38, 0x1d, 0x2, 0x5a, 0x5b, 0x7, 0x3, 0x2, 
    0x2, 0x5b, 0x5c, 0x5, 0xe, 0x8, 0x2, 0x5c, 0x5d, 0x7, 0x25, 0x2, 0x2, 
    0x5d, 0xd, 0x3, 0x2, 0x2, 0x2, 0x5e, 0x67, 0x5, 0x10, 0x9, 0x2, 0x5f, 
    0x60, 0x7, 0xc, 0x2, 0x2, 0x60, 0x61, 0x7, 0x28, 0x2, 0x2, 0x61, 0x62, 
    0x7, 0x4, 0x2, 0x2, 0x62, 0x63, 0x7, 0x29, 0x2, 0x2, 0x63, 0x64, 0x7, 
    0x17, 0x2, 0x2, 0x64, 0x67, 0x5, 0x10, 0x9, 0x2, 0x65, 0x67, 0x5, 0x38, 
    0x1d, 0x2, 0x66, 0x5e, 0x3, 0x2, 0x2, 0x2, 0x66, 0x5f, 0x3, 0x2, 0x2, 
    0x2, 0x66, 0x65, 0x3, 0x2, 0x2, 0x2, 0x67, 0xf, 0x3, 0x2, 0x2, 0x2, 
    0x68, 0x69, 0x9, 0x2, 0x2, 0x2, 0x69, 0x11, 0x3, 0x2, 0x2, 0x2, 0x6a, 
    0x6b, 0x7, 0x1b, 0x2, 0x2, 0x6b, 0x6c, 0x5, 0x14, 0xb, 0x2, 0x6c, 0x6d, 
    0x7, 0x24, 0x2, 0x2, 0x6d, 0x6e, 0x5, 0xe, 0x8, 0x2, 0x6e, 0x6f, 0x5, 
    0x16, 0xc, 0x2, 0x6f, 0x70, 0x7, 0x25, 0x2, 0x2, 0x70, 0x13, 0x3, 0x2, 
    0x2, 0x2, 0x71, 0x77, 0x5, 0x38, 0x1d, 0x2, 0x72, 0x73, 0x5, 0x38, 0x1d, 
    0x2, 0x73, 0x74, 0x7, 0x23, 0x2, 0x2, 0x74, 0x75, 0x5, 0x14, 0xb, 0x2, 
    0x75, 0x77, 0x3, 0x2, 0x2, 0x2, 0x76, 0x71, 0x3, 0x2, 0x2, 0x2, 0x76, 
    0x72, 0x3, 0x2, 0x2, 0x2, 0x77, 0x15, 0x3, 0x2, 0x2, 0x2, 0x78, 0x7c, 
    0x3, 0x2, 0x2, 0x2, 0x79, 0x7a, 0x7, 0x3a, 0x2, 0x2, 0x7a, 0x7c, 0x5, 
    0x2c, 0x17, 0x2, 0x7b, 0x78, 0x3, 0x2, 0x2, 0x2, 0x7b, 0x79, 0x3, 0x2, 
    0x2, 0x2, 0x7c, 0x17, 0x3, 0x2, 0x2, 0x2, 0x7d, 0x7e, 0x7, 0x13, 0x2, 
    0x2, 0x7e, 0x7f, 0x5, 0x38, 0x1d, 0x2, 0x7f, 0x80, 0x7, 0x26, 0x2, 0x2, 
    0x80, 0x81, 0x5, 0x1a, 0xe, 0x2, 0x81, 0x82, 0x7, 0x27, 0x2, 0x2, 0x82, 
    0x83, 0x5, 0x1e, 0x10, 0x2, 0x83, 0x84, 0x7, 0x1e, 0x2, 0x2, 0x84, 0x85, 
    0x5, 0x22, 0x12, 0x2, 0x85, 0x86, 0x7, 0x11, 0x2, 0x2, 0x86, 0x87, 0x7, 
    0x25, 0x2, 0x2, 0x87, 0x19, 0x3, 0x2, 0x2, 0x2, 0x88, 0x8d, 0x3, 0x2, 
    0x2, 0x2, 0x89, 0x8a, 0x5, 0x20, 0x11, 0x2, 0x8a, 0x8b, 0x5, 0x1c, 0xf, 
    0x2, 0x8b, 0x8d, 0x3, 0x2, 0x2, 0x2, 0x8c, 0x88, 0x3, 0x2, 0x2, 0x2, 
    0x8c, 0x89, 0x3, 0x2, 0x2, 0x2, 0x8d, 0x1b, 0x3, 0x2, 0x2, 0x2, 0x8e, 
    0x94, 0x3, 0x2, 0x2, 0x2, 0x8f, 0x90, 0x7, 0x23, 0x2, 0x2, 0x90, 0x91, 
    0x5, 0x20, 0x11, 0x2, 0x91, 0x92, 0x5, 0x1c, 0xf, 0x2, 0x92, 0x94, 0x3, 
    0x2, 0x2, 0x2, 0x93, 0x8e, 0x3, 0x2, 0x2, 0x2, 0x93, 0x8f, 0x3, 0x2, 
    0x2, 0x2, 0x94, 0x1d, 0x3, 0x2, 0x2, 0x2, 0x95, 0x99, 0x3, 0x2, 0x2, 
    0x2, 0x96, 0x97, 0x7, 0x24, 0x2, 0x2, 0x97, 0x99, 0x5, 0xe, 0x8, 0x2, 
    0x98, 0x95, 0x3, 0x2, 0x2, 0x2, 0x98, 0x96, 0x3, 0x2, 0x2, 0x2, 0x99, 
    0x1f, 0x3, 0x2, 0x2, 0x2, 0x9a, 0x9b, 0x5, 0x38, 0x1d, 0x2, 0x9b, 0x9c, 
    0x7, 0x24, 0x2, 0x2, 0x9c, 0x9d, 0x5, 0xe, 0x8, 0x2, 0x9d, 0x21, 0x3, 
    0x2, 0x2, 0x2, 0x9e, 0xa3, 0x5, 0x24, 0x13, 0x2, 0x9f, 0xa0, 0x5, 0x24, 
    0x13, 0x2, 0xa0, 0xa1, 0x5, 0x22, 0x12, 0x2, 0xa1, 0xa3, 0x3, 0x2, 0x2, 
    0x2, 0xa2, 0x9e, 0x3, 0x2, 0x2, 0x2, 0xa2, 0x9f, 0x3, 0x2, 0x2, 0x2, 
    0xa3, 0x23, 0x3, 0x2, 0x2, 0x2, 0xa4, 0xa5, 0x5, 0x34, 0x1b, 0x2, 0xa5, 
    0xa6, 0x5, 0x26, 0x14, 0x2, 0xa6, 0xa7, 0x7, 0x3a, 0x2, 0x2, 0xa7, 0xa8, 
    0x5, 0x2a, 0x16, 0x2, 0xa8, 0xa9, 0x7, 0x25, 0x2, 0x2, 0xa9, 0xe0, 0x3, 
    0x2, 0x2, 0x2, 0xaa, 0xab, 0x7, 0x14, 0x2, 0x2, 0xab, 0xac, 0x5, 0x2a, 
    0x16, 0x2, 0xac, 0xad, 0x7, 0x18, 0x2, 0x2, 0xad, 0xae, 0x5, 0x22, 0x12, 
    0x2, 0xae, 0xaf, 0x7, 0x1d, 0x2, 0x2, 0xaf, 0xb0, 0x7, 0x25, 0x2, 0x2, 
    0xb0, 0xe0, 0x3, 0x2, 0x2, 0x2, 0xb1, 0xb2, 0x7, 0x14, 0x2, 0x2, 0xb2, 
    0xb3, 0x5, 0x2a, 0x16, 0x2, 0xb3, 0xb4, 0x7, 0x18, 0x2, 0x2, 0xb4, 0xb5, 
    0x5, 0x22, 0x12, 0x2, 0xb5, 0xb6, 0x7, 0x10, 0x2, 0x2, 0xb6, 0xb7, 0x5, 
    0x22, 0x12, 0x2, 0xb7, 0xb8, 0x7, 0x1d, 0x2, 0x2, 0xb8, 0xb9, 0x7, 0x25, 
    0x2, 0x2, 0xb9, 0xe0, 0x3, 0x2, 0x2, 0x2, 0xba, 0xbb, 0x7, 0x1c, 0x2, 
    0x2, 0xbb, 0xbc, 0x5, 0x2a, 0x16, 0x2, 0xbc, 0xbd, 0x7, 0xf, 0x2, 0x2, 
    0xbd, 0xbe, 0x5, 0x22, 0x12, 0x2, 0xbe, 0xbf, 0x7, 0x1f, 0x2, 0x2, 0xbf, 
    0xc0, 0x7, 0x25, 0x2, 0x2, 0xc0, 0xe0, 0x3, 0x2, 0x2, 0x2, 0xc1, 0xc2, 
    0x7, 0x12, 0x2, 0x2, 0xc2, 0xc3, 0x5, 0x38, 0x1d, 0x2, 0xc3, 0xc4, 0x7, 
    0x3a, 0x2, 0x2, 0xc4, 0xc5, 0x5, 0x2a, 0x16, 0x2, 0xc5, 0xc6, 0x7, 0x19, 
    0x2, 0x2, 0xc6, 0xc7, 0x5, 0x2a, 0x16, 0x2, 0xc7, 0xc8, 0x7, 0xf, 0x2, 
    0x2, 0xc8, 0xc9, 0x5, 0x22, 0x12, 0x2, 0xc9, 0xca, 0x7, 0x1f, 0x2, 0x2, 
    0xca, 0xcb, 0x7, 0x25, 0x2, 0x2, 0xcb, 0xe0, 0x3, 0x2, 0x2, 0x2, 0xcc, 
    0xcd, 0x5, 0x28, 0x15, 0x2, 0xcd, 0xce, 0x5, 0x38, 0x1d, 0x2, 0xce, 
    0xcf, 0x7, 0x26, 0x2, 0x2, 0xcf, 0xd0, 0x5, 0x30, 0x19, 0x2, 0xd0, 0xd1, 
    0x7, 0x27, 0x2, 0x2, 0xd1, 0xd2, 0x7, 0x25, 0x2, 0x2, 0xd2, 0xe0, 0x3, 
    0x2, 0x2, 0x2, 0xd3, 0xd4, 0x7, 0xe, 0x2, 0x2, 0xd4, 0xe0, 0x7, 0x25, 
    0x2, 0x2, 0xd5, 0xd6, 0x7, 0xd, 0x2, 0x2, 0xd6, 0xd7, 0x5, 0x2a, 0x16, 
    0x2, 0xd7, 0xd8, 0x7, 0x25, 0x2, 0x2, 0xd8, 0xe0, 0x3, 0x2, 0x2, 0x2, 
    0xd9, 0xda, 0x7, 0x16, 0x2, 0x2, 0xda, 0xdb, 0x5, 0x4, 0x3, 0x2, 0xdb, 
    0xdc, 0x7, 0x15, 0x2, 0x2, 0xdc, 0xdd, 0x5, 0x22, 0x12, 0x2, 0xdd, 0xde, 
    0x7, 0x11, 0x2, 0x2, 0xde, 0xe0, 0x3, 0x2, 0x2, 0x2, 0xdf, 0xa4, 0x3, 
    0x2, 0x2, 0x2, 0xdf, 0xaa, 0x3, 0x2, 0x2, 0x2, 0xdf, 0xb1, 0x3, 0x2, 
    0x2, 0x2, 0xdf, 0xba, 0x3, 0x2, 0x2, 0x2, 0xdf, 0xc1, 0x3, 0x2, 0x2, 
    0x2, 0xdf, 0xcc, 0x3, 0x2, 0x2, 0x2, 0xdf, 0xd3, 0x3, 0x2, 0x2, 0x2, 
    0xdf, 0xd5, 0x3, 0x2, 0x2, 0x2, 0xdf, 0xd9, 0x3, 0x2, 0x2, 0x2, 0xe0, 
    0x25, 0x3, 0x2, 0x2, 0x2, 0xe1, 0xe2, 0x7, 0x3a, 0x2, 0x2, 0xe2, 0xe3, 
    0x5, 0x34, 0x1b, 0x2, 0xe3, 0xe4, 0x5, 0x26, 0x14, 0x2, 0xe4, 0xe7, 
    0x3, 0x2, 0x2, 0x2, 0xe5, 0xe7, 0x3, 0x2, 0x2, 0x2, 0xe6, 0xe1, 0x3, 
    0x2, 0x2, 0x2, 0xe6, 0xe5, 0x3, 0x2, 0x2, 0x2, 0xe7, 0x27, 0x3, 0x2, 
    0x2, 0x2, 0xe8, 0xe9, 0x5, 0x34, 0x1b, 0x2, 0xe9, 0xea, 0x7, 0x3a, 0x2, 
    0x2, 0xea, 0xed, 0x3, 0x2, 0x2, 0x2, 0xeb, 0xed, 0x3, 0x2, 0x2, 0x2, 
    0xec, 0xe8, 0x3, 0x2, 0x2, 0x2, 0xec, 0xeb, 0x3, 0x2, 0x2, 0x2, 0xed, 
    0x29, 0x3, 0x2, 0x2, 0x2, 0xee, 0xef, 0x8, 0x16, 0x1, 0x2, 0xef, 0xf6, 
    0x5, 0x2c, 0x17, 0x2, 0xf0, 0xf6, 0x5, 0x34, 0x1b, 0x2, 0xf1, 0xf2, 
    0x7, 0x26, 0x2, 0x2, 0xf2, 0xf3, 0x5, 0x2a, 0x16, 0x2, 0xf3, 0xf4, 0x7, 
    0x27, 0x2, 0x2, 0xf4, 0xf6, 0x3, 0x2, 0x2, 0x2, 0xf5, 0xee, 0x3, 0x2, 
    0x2, 0x2, 0xf5, 0xf0, 0x3, 0x2, 0x2, 0x2, 0xf5, 0xf1, 0x3, 0x2, 0x2, 
    0x2, 0xf6, 0xfd, 0x3, 0x2, 0x2, 0x2, 0xf7, 0xf8, 0xc, 0x4, 0x2, 0x2, 
    0xf8, 0xf9, 0x5, 0x2e, 0x18, 0x2, 0xf9, 0xfa, 0x5, 0x2a, 0x16, 0x5, 
    0xfa, 0xfc, 0x3, 0x2, 0x2, 0x2, 0xfb, 0xf7, 0x3, 0x2, 0x2, 0x2, 0xfc, 
    0xff, 0x3, 0x2, 0x2, 0x2, 0xfd, 0xfb, 0x3, 0x2, 0x2, 0x2, 0xfd, 0xfe, 
    0x3, 0x2, 0x2, 0x2, 0xfe, 0x2b, 0x3, 0x2, 0x2, 0x2, 0xff, 0xfd, 0x3, 
    0x2, 0x2, 0x2, 0x100, 0x101, 0x9, 0x3, 0x2, 0x2, 0x101, 0x2d, 0x3, 0x2, 
    0x2, 0x2, 0x102, 0x103, 0x9, 0x4, 0x2, 0x2, 0x103, 0x2f, 0x3, 0x2, 0x2, 
    0x2, 0x104, 0x109, 0x3, 0x2, 0x2, 0x2, 0x105, 0x106, 0x5, 0x2a, 0x16, 
    0x2, 0x106, 0x107, 0x5, 0x32, 0x1a, 0x2, 0x107, 0x109, 0x3, 0x2, 0x2, 
    0x2, 0x108, 0x104, 0x3, 0x2, 0x2, 0x2, 0x108, 0x105, 0x3, 0x2, 0x2, 
    0x2, 0x109, 0x31, 0x3, 0x2, 0x2, 0x2, 0x10a, 0x10b, 0x7, 0x23, 0x2, 
    0x2, 0x10b, 0x10c, 0x5, 0x2a, 0x16, 0x2, 0x10c, 0x10d, 0x5, 0x32, 0x1a, 
    0x2, 0x10d, 0x110, 0x3, 0x2, 0x2, 0x2, 0x10e, 0x110, 0x3, 0x2, 0x2, 
    0x2, 0x10f, 0x10a, 0x3, 0x2, 0x2, 0x2, 0x10f, 0x10e, 0x3, 0x2, 0x2, 
    0x2, 0x110, 0x33, 0x3, 0x2, 0x2, 0x2, 0x111, 0x112, 0x5, 0x38, 0x1d, 
    0x2, 0x112, 0x113, 0x5, 0x36, 0x1c, 0x2, 0x113, 0x35, 0x3, 0x2, 0x2, 
    0x2, 0x114, 0x115, 0x7, 0x28, 0x2, 0x2, 0x115, 0x116, 0x5, 0x2a, 0x16, 
    0x2, 0x116, 0x117, 0x7, 0x29, 0x2, 0x2, 0x117, 0x11a, 0x3, 0x2, 0x2, 
    0x2, 0x118, 0x11a, 0x3, 0x2, 0x2, 0x2, 0x119, 0x114, 0x3, 0x2, 0x2, 
    0x2, 0x119, 0x118, 0x3, 0x2, 0x2, 0x2, 0x11a, 0x37, 0x3, 0x2, 0x2, 0x2, 
    0x11b, 0x11f, 0x7, 0x6, 0x2, 0x2, 0x11c, 0x11e, 0x9, 0x5, 0x2, 0x2, 
    0x11d, 0x11c, 0x3, 0x2, 0x2, 0x2, 0x11e, 0x121, 0x3, 0x2, 0x2, 0x2, 
    0x11f, 0x11d, 0x3, 0x2, 0x2, 0x2, 0x11f, 0x120, 0x3, 0x2, 0x2, 0x2, 
    0x120, 0x39, 0x3, 0x2, 0x2, 0x2, 0x121, 0x11f, 0x3, 0x2, 0x2, 0x2, 0x15, 
    0x4a, 0x50, 0x56, 0x66, 0x76, 0x7b, 0x8c, 0x93, 0x98, 0xa2, 0xdf, 0xe6, 
    0xec, 0xf5, 0xfd, 0x108, 0x10f, 0x119, 0x11f, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

TigerParser::Initializer TigerParser::_init;
