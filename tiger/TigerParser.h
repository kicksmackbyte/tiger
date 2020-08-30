
// Generated from Tiger.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"




class  TigerParser : public antlr4::Parser {
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

  enum {
    RuleTiger_program = 0, RuleDeclaration_segment = 1, RuleType_declaration_list = 2, 
    RuleVar_declaration_list = 3, RuleFunct_declaration_list = 4, RuleType_declaration = 5, 
    RuleType = 6, RuleType_id = 7, RuleVar_declaration = 8, RuleId_list = 9, 
    RuleOptional_init = 10, RuleFunct_declaration = 11, RuleParam_list = 12, 
    RuleParam_list_tail = 13, RuleRet_type = 14, RuleParam = 15, RuleStat_seq = 16, 
    RuleStat = 17, RuleL_tail = 18, RuleOpt_prefix = 19, RuleExpr = 20, 
    RuleConstant = 21, RuleBinary_operator = 22, RuleExpr_list = 23, RuleExpr_list_tail = 24, 
    RuleLvalue = 25, RuleLvalue_tail = 26, RuleId = 27
  };

  TigerParser(antlr4::TokenStream *input);
  ~TigerParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class Tiger_programContext;
  class Declaration_segmentContext;
  class Type_declaration_listContext;
  class Var_declaration_listContext;
  class Funct_declaration_listContext;
  class Type_declarationContext;
  class TypeContext;
  class Type_idContext;
  class Var_declarationContext;
  class Id_listContext;
  class Optional_initContext;
  class Funct_declarationContext;
  class Param_listContext;
  class Param_list_tailContext;
  class Ret_typeContext;
  class ParamContext;
  class Stat_seqContext;
  class StatContext;
  class L_tailContext;
  class Opt_prefixContext;
  class ExprContext;
  class ConstantContext;
  class Binary_operatorContext;
  class Expr_listContext;
  class Expr_list_tailContext;
  class LvalueContext;
  class Lvalue_tailContext;
  class IdContext; 

  class  Tiger_programContext : public antlr4::ParserRuleContext {
  public:
    Tiger_programContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MAIN();
    antlr4::tree::TerminalNode *LET();
    Declaration_segmentContext *declaration_segment();
    antlr4::tree::TerminalNode *IN();
    antlr4::tree::TerminalNode *BEGIN();
    Stat_seqContext *stat_seq();
    antlr4::tree::TerminalNode *END();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Tiger_programContext* tiger_program();

  class  Declaration_segmentContext : public antlr4::ParserRuleContext {
  public:
    Declaration_segmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Type_declaration_listContext *type_declaration_list();
    Var_declaration_listContext *var_declaration_list();
    Funct_declaration_listContext *funct_declaration_list();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Declaration_segmentContext* declaration_segment();

  class  Type_declaration_listContext : public antlr4::ParserRuleContext {
  public:
    Type_declaration_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Type_declarationContext *type_declaration();
    Type_declaration_listContext *type_declaration_list();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Type_declaration_listContext* type_declaration_list();

  class  Var_declaration_listContext : public antlr4::ParserRuleContext {
  public:
    Var_declaration_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Var_declarationContext *var_declaration();
    Var_declaration_listContext *var_declaration_list();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Var_declaration_listContext* var_declaration_list();

  class  Funct_declaration_listContext : public antlr4::ParserRuleContext {
  public:
    Funct_declaration_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Var_declarationContext *var_declaration();
    Var_declaration_listContext *var_declaration_list();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Funct_declaration_listContext* funct_declaration_list();

  class  Type_declarationContext : public antlr4::ParserRuleContext {
  public:
    Type_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TypeContext *> type();
    TypeContext* type(size_t i);
    IdContext *id();
    antlr4::tree::TerminalNode *SEMI();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Type_declarationContext* type_declaration();

  class  TypeContext : public antlr4::ParserRuleContext {
  public:
    TypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Type_idContext *type_id();
    antlr4::tree::TerminalNode *ARRAY();
    antlr4::tree::TerminalNode *LBRACK();
    antlr4::tree::TerminalNode *INTLIT();
    antlr4::tree::TerminalNode *RBRACK();
    antlr4::tree::TerminalNode *OF();
    IdContext *id();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeContext* type();

  class  Type_idContext : public antlr4::ParserRuleContext {
  public:
    Type_idContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INT();
    antlr4::tree::TerminalNode *FLOAT();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Type_idContext* type_id();

  class  Var_declarationContext : public antlr4::ParserRuleContext {
  public:
    Var_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VAR();
    Id_listContext *id_list();
    antlr4::tree::TerminalNode *COLON();
    TypeContext *type();
    Optional_initContext *optional_init();
    antlr4::tree::TerminalNode *SEMI();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Var_declarationContext* var_declaration();

  class  Id_listContext : public antlr4::ParserRuleContext {
  public:
    Id_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdContext *id();
    antlr4::tree::TerminalNode *COMMA();
    Id_listContext *id_list();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Id_listContext* id_list();

  class  Optional_initContext : public antlr4::ParserRuleContext {
  public:
    Optional_initContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ASSIGN();
    ConstantContext *constant();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Optional_initContext* optional_init();

  class  Funct_declarationContext : public antlr4::ParserRuleContext {
  public:
    Funct_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FUNCTION();
    IdContext *id();
    antlr4::tree::TerminalNode *LPAREN();
    Param_listContext *param_list();
    antlr4::tree::TerminalNode *RPAREN();
    Ret_typeContext *ret_type();
    antlr4::tree::TerminalNode *BEGIN();
    Stat_seqContext *stat_seq();
    antlr4::tree::TerminalNode *END();
    antlr4::tree::TerminalNode *SEMI();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Funct_declarationContext* funct_declaration();

  class  Param_listContext : public antlr4::ParserRuleContext {
  public:
    Param_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ParamContext *param();
    Param_list_tailContext *param_list_tail();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Param_listContext* param_list();

  class  Param_list_tailContext : public antlr4::ParserRuleContext {
  public:
    Param_list_tailContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COMMA();
    ParamContext *param();
    Param_list_tailContext *param_list_tail();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Param_list_tailContext* param_list_tail();

  class  Ret_typeContext : public antlr4::ParserRuleContext {
  public:
    Ret_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COLON();
    TypeContext *type();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Ret_typeContext* ret_type();

  class  ParamContext : public antlr4::ParserRuleContext {
  public:
    ParamContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdContext *id();
    antlr4::tree::TerminalNode *COLON();
    TypeContext *type();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParamContext* param();

  class  Stat_seqContext : public antlr4::ParserRuleContext {
  public:
    Stat_seqContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StatContext *stat();
    Stat_seqContext *stat_seq();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Stat_seqContext* stat_seq();

  class  StatContext : public antlr4::ParserRuleContext {
  public:
    StatContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LvalueContext *lvalue();
    L_tailContext *l_tail();
    antlr4::tree::TerminalNode *ASSIGN();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *SEMI();
    antlr4::tree::TerminalNode *IF();
    antlr4::tree::TerminalNode *THEN();
    std::vector<Stat_seqContext *> stat_seq();
    Stat_seqContext* stat_seq(size_t i);
    antlr4::tree::TerminalNode *ENDIF();
    antlr4::tree::TerminalNode *ELSE();
    antlr4::tree::TerminalNode *WHILE();
    antlr4::tree::TerminalNode *DO();
    antlr4::tree::TerminalNode *ENDDO();
    antlr4::tree::TerminalNode *FOR();
    IdContext *id();
    antlr4::tree::TerminalNode *TO();
    Opt_prefixContext *opt_prefix();
    antlr4::tree::TerminalNode *LPAREN();
    Expr_listContext *expr_list();
    antlr4::tree::TerminalNode *RPAREN();
    antlr4::tree::TerminalNode *BREAK();
    antlr4::tree::TerminalNode *RETURN();
    antlr4::tree::TerminalNode *LET();
    Declaration_segmentContext *declaration_segment();
    antlr4::tree::TerminalNode *IN();
    antlr4::tree::TerminalNode *END();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StatContext* stat();

  class  L_tailContext : public antlr4::ParserRuleContext {
  public:
    L_tailContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ASSIGN();
    LvalueContext *lvalue();
    L_tailContext *l_tail();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  L_tailContext* l_tail();

  class  Opt_prefixContext : public antlr4::ParserRuleContext {
  public:
    Opt_prefixContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LvalueContext *lvalue();
    antlr4::tree::TerminalNode *ASSIGN();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Opt_prefixContext* opt_prefix();

  class  ExprContext : public antlr4::ParserRuleContext {
  public:
    ExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ConstantContext *constant();
    LvalueContext *lvalue();
    antlr4::tree::TerminalNode *LPAREN();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *RPAREN();
    Binary_operatorContext *binary_operator();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExprContext* expr();
  ExprContext* expr(int precedence);
  class  ConstantContext : public antlr4::ParserRuleContext {
  public:
    ConstantContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INTLIT();
    antlr4::tree::TerminalNode *FLOATLIT();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConstantContext* constant();

  class  Binary_operatorContext : public antlr4::ParserRuleContext {
  public:
    Binary_operatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EXP();
    antlr4::tree::TerminalNode *PLUS();
    antlr4::tree::TerminalNode *MINUS();
    antlr4::tree::TerminalNode *MULT();
    antlr4::tree::TerminalNode *DIV();
    antlr4::tree::TerminalNode *EQ();
    antlr4::tree::TerminalNode *NEQ();
    antlr4::tree::TerminalNode *LESSER();
    antlr4::tree::TerminalNode *GREATER();
    antlr4::tree::TerminalNode *LESSEREQ();
    antlr4::tree::TerminalNode *GREATEREQ();
    antlr4::tree::TerminalNode *AND();
    antlr4::tree::TerminalNode *OR();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Binary_operatorContext* binary_operator();

  class  Expr_listContext : public antlr4::ParserRuleContext {
  public:
    Expr_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExprContext *expr();
    Expr_list_tailContext *expr_list_tail();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Expr_listContext* expr_list();

  class  Expr_list_tailContext : public antlr4::ParserRuleContext {
  public:
    Expr_list_tailContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COMMA();
    ExprContext *expr();
    Expr_list_tailContext *expr_list_tail();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Expr_list_tailContext* expr_list_tail();

  class  LvalueContext : public antlr4::ParserRuleContext {
  public:
    LvalueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdContext *id();
    Lvalue_tailContext *lvalue_tail();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LvalueContext* lvalue();

  class  Lvalue_tailContext : public antlr4::ParserRuleContext {
  public:
    Lvalue_tailContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LBRACK();
    ExprContext *expr();
    antlr4::tree::TerminalNode *RBRACK();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Lvalue_tailContext* lvalue_tail();

  class  IdContext : public antlr4::ParserRuleContext {
  public:
    IdContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> NON_DIGIT();
    antlr4::tree::TerminalNode* NON_DIGIT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DIGIT();
    antlr4::tree::TerminalNode* DIGIT(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IdContext* id();


  virtual bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;
  bool exprSempred(ExprContext *_localctx, size_t predicateIndex);

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

