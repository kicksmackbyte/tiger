
// Generated from Tiger.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"




class  TigerLexer : public antlr4::Lexer {
public:
  enum {
    WHITESPACE = 1, MAIN = 2, ARRAY = 3, RETURN = 4, BREAK = 5, DO = 6, 
    ELSE = 7, END = 8, FOR = 9, FUNCTION = 10, IF = 11, IN = 12, LET = 13, 
    OF = 14, THEN = 15, TO = 16, TYPE = 17, VAR = 18, WHILE = 19, ENDIF = 20, 
    BEGIN = 21, ENDDO = 22, INT = 23, FLOAT = 24, RESERVED = 25, COMMA = 26, 
    COLON = 27, SEMI = 28, LPAREN = 29, RPAREN = 30, LBRACK = 31, RBRACK = 32, 
    LBRACE = 33, RBRACE = 34, PERIOD = 35, PLUS = 36, MINUS = 37, MULT = 38, 
    EXP = 39, DIV = 40, EQ = 41, NEQ = 42, LESSER = 43, LESSEREQ = 44, GREATER = 45, 
    GREATEREQ = 46, AND = 47, OR = 48, ASSIGN = 49
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

