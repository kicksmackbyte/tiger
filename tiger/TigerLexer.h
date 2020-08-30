
// Generated from Tiger.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"




class  TigerLexer : public antlr4::Lexer {
public:
  enum {
    WHITESPACE = 1, NEWLINE = 2, MAIN = 3, ARRAY = 4, RETURN = 5, BREAK = 6, 
    DO = 7, ELSE = 8, END = 9, FOR = 10, FUNCTION = 11, IF = 12, IN = 13, 
    LET = 14, OF = 15, THEN = 16, TO = 17, TYPE = 18, VAR = 19, WHILE = 20, 
    ENDIF = 21, BEGIN = 22, ENDDO = 23, INT = 24, FLOAT = 25, RESERVED = 26, 
    COMMA = 27, COLON = 28, SEMICOLON = 29, LPAREN = 30, RPAREN = 31, LBRACKET = 32, 
    RBRACKET = 33, LSQUIGGLE = 34, RSQUIGGLE = 35, PERIOD = 36, PLUS = 37, 
    MINUS = 38, ASTERISK = 39, DIV = 40, EQ = 41, NOT = 42, LTHAN = 43, 
    GTHAN = 44, AMP = 45, PIPE = 46
  };

  TigerLexer(antlr4::CharStream *input);
  ~TigerLexer();

  virtual std::string getGrammarFileName() const override;
  virtual const std::vector<std::string>& getRuleNames() const override;

  virtual const std::vector<std::string>& getChannelNames() const override;
  virtual const std::vector<std::string>& getModeNames() const override;
  virtual const std::vector<std::string>& getTokenNames() const override; // deprecated, use vocabulary instead
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;

  virtual const std::vector<uint16_t> getSerializedATN() const override;
  virtual const antlr4::atn::ATN& getATN() const override;

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;
  static std::vector<std::string> _channelNames;
  static std::vector<std::string> _modeNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

