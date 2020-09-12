
// Generated from Tiger.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "TigerVisitor.h"


/**
 * This class provides an empty implementation of TigerVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  TigerBaseVisitor : public TigerVisitor {
public:

  virtual antlrcpp::Any visitTiger_program(TigerParser::Tiger_programContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDeclaration_segment(TigerParser::Declaration_segmentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitType_declaration_list(TigerParser::Type_declaration_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVar_declaration_list(TigerParser::Var_declaration_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunct_declaration_list(TigerParser::Funct_declaration_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitType_declaration(TigerParser::Type_declarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitType(TigerParser::TypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitType_id(TigerParser::Type_idContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVar_declaration(TigerParser::Var_declarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitId_list(TigerParser::Id_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOptional_init(TigerParser::Optional_initContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunct_declaration(TigerParser::Funct_declarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParam_list(TigerParser::Param_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParam_list_tail(TigerParser::Param_list_tailContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRet_type(TigerParser::Ret_typeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParam(TigerParser::ParamContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStat_seq(TigerParser::Stat_seqContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStat(TigerParser::StatContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitL_tail(TigerParser::L_tailContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOpt_prefix(TigerParser::Opt_prefixContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpr(TigerParser::ExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConstant(TigerParser::ConstantContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBinary_operator(TigerParser::Binary_operatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpr_list(TigerParser::Expr_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpr_list_tail(TigerParser::Expr_list_tailContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLvalue(TigerParser::LvalueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLvalue_tail(TigerParser::Lvalue_tailContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitId(TigerParser::IdContext *ctx) override {
    return visitChildren(ctx);
  }


};

