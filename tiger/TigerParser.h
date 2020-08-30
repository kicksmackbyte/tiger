
// Generated from Tiger.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"




class  TigerParser : public antlr4::Parser {
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

  enum {
    RuleProgram = 0
  };

  TigerParser(antlr4::TokenStream *input);
  ~TigerParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class ProgramContext; 

  class  ProgramContext : public antlr4::ParserRuleContext {
  public:
    ProgramContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MAIN();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProgramContext* program();


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

