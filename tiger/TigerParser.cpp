
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


//----------------- ProgramContext ------------------------------------------------------------------

TigerParser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TigerParser::ProgramContext::MAIN() {
  return getToken(TigerParser::MAIN, 0);
}


size_t TigerParser::ProgramContext::getRuleIndex() const {
  return TigerParser::RuleProgram;
}


antlrcpp::Any TigerParser::ProgramContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TigerVisitor*>(visitor))
    return parserVisitor->visitProgram(this);
  else
    return visitor->visitChildren(this);
}

TigerParser::ProgramContext* TigerParser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 0, TigerParser::RuleProgram);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2);
    match(TigerParser::MAIN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

// Static vars and initialization.
std::vector<dfa::DFA> TigerParser::_decisionToDFA;
atn::PredictionContextCache TigerParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN TigerParser::_atn;
std::vector<uint16_t> TigerParser::_serializedATN;

std::vector<std::string> TigerParser::_ruleNames = {
  "program"
};

std::vector<std::string> TigerParser::_literalNames = {
  "", "", "'main'", "'array'", "'return'", "'break'", "'do'", "'else'", 
  "'end'", "'for'", "'function'", "'if'", "'in'", "'let'", "'of'", "'then'", 
  "'to'", "'type'", "'var'", "'while'", "'endif'", "'begin'", "'enddo'", 
  "'int'", "'float'", "", "','", "':'", "';'", "'('", "')'", "'['", "']'", 
  "'{'", "'}'", "'.'", "'+'", "'-'", "'*'", "'**'", "'/'", "'=='", "'!='", 
  "'<'", "'<='", "'>'", "'>='", "'&'", "'|'"
};

std::vector<std::string> TigerParser::_symbolicNames = {
  "", "WHITESPACE", "MAIN", "ARRAY", "RETURN", "BREAK", "DO", "ELSE", "END", 
  "FOR", "FUNCTION", "IF", "IN", "LET", "OF", "THEN", "TO", "TYPE", "VAR", 
  "WHILE", "ENDIF", "BEGIN", "ENDDO", "INT", "FLOAT", "RESERVED", "COMMA", 
  "COLON", "SEMICOLON", "LPAREN", "RPAREN", "LBRACKET", "RBRACKET", "LSQUIGGLE", 
  "RSQUIGGLE", "PERIOD", "PLUS", "MINUS", "ASTERISK", "EXPONENT", "DIV", 
  "EQUALITY", "NOTEQ", "LTHAN", "LTHANEQ", "GTHAN", "GTHANEQ", "AMP", "PIPE", 
  "ASSIGN"
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
    0x3, 0x33, 0x7, 0x4, 0x2, 0x9, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x2, 
    0x2, 0x3, 0x2, 0x2, 0x2, 0x2, 0x5, 0x2, 0x4, 0x3, 0x2, 0x2, 0x2, 0x4, 
    0x5, 0x7, 0x4, 0x2, 0x2, 0x5, 0x3, 0x3, 0x2, 0x2, 0x2, 0x2, 
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
