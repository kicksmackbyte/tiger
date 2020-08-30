
// Generated from Tiger.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"




class  TigerParser : public antlr4::Parser {
public:
  enum {
    WHITESPACE = 1, MAIN = 2, ARRAY = 3, RETURN = 4, BREAK = 5, DO = 6, 
    ELSE = 7, END = 8, FOR = 9, FUNCTION = 10, IF = 11, IN = 12, LET = 13, 
    OF = 14, THEN = 15, TO = 16, TYPE = 17, VAR = 18, WHILE = 19, ENDIF = 20, 
    BEGIN = 21, ENDDO = 22, INT = 23, FLOAT = 24, RESERVED = 25, COMMA = 26, 
    COLON = 27, SEMICOLON = 28, LPAREN = 29, RPAREN = 30, LBRACKET = 31, 
    RBRACKET = 32, LSQUIGGLE = 33, RSQUIGGLE = 34, PERIOD = 35, PLUS = 36, 
    MINUS = 37, ASTERISK = 38, EXPONENT = 39, DIV = 40, EQUALITY = 41, NOTEQ = 42, 
    LTHAN = 43, LTHANEQ = 44, GTHAN = 45, GTHANEQ = 46, AMP = 47, PIPE = 48, 
    ASSIGN = 49
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

