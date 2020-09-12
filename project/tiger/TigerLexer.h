
// Generated from Tiger.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"




class  TigerLexer : public antlr4::Lexer {
public:
  enum {
    T__0 = 1, INTLIT = 2, FLOATLIT = 3, NON_DIGIT = 4, NON_ZERO_DIGIT = 5, 
    DIGIT = 6, COMMENT = 7, WHITESPACE = 8, MAIN = 9, ARRAY = 10, RETURN = 11, 
    BREAK = 12, DO = 13, ELSE = 14, END = 15, FOR = 16, FUNCTION = 17, IF = 18, 
    IN = 19, LET = 20, OF = 21, THEN = 22, TO = 23, TYPE = 24, VAR = 25, 
    WHILE = 26, ENDIF = 27, BEGIN = 28, ENDDO = 29, INT = 30, FLOAT = 31, 
    RESERVED = 32, COMMA = 33, COLON = 34, SEMI = 35, LPAREN = 36, RPAREN = 37, 
    LBRACK = 38, RBRACK = 39, LBRACE = 40, RBRACE = 41, PERIOD = 42, PLUS = 43, 
    MINUS = 44, MULT = 45, EXP = 46, DIV = 47, EQ = 48, NEQ = 49, LESSER = 50, 
    LESSEREQ = 51, GREATER = 52, GREATEREQ = 53, AND = 54, OR = 55, ASSIGN = 56
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

