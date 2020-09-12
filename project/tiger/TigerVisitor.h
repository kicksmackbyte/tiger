
// Generated from Tiger.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "TigerParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by TigerParser.
 */
class  TigerVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by TigerParser.
   */
    virtual antlrcpp::Any visitTiger_program(TigerParser::Tiger_programContext *context) = 0;

    virtual antlrcpp::Any visitDeclaration_segment(TigerParser::Declaration_segmentContext *context) = 0;

    virtual antlrcpp::Any visitType_declaration_list(TigerParser::Type_declaration_listContext *context) = 0;

    virtual antlrcpp::Any visitVar_declaration_list(TigerParser::Var_declaration_listContext *context) = 0;

    virtual antlrcpp::Any visitFunct_declaration_list(TigerParser::Funct_declaration_listContext *context) = 0;

    virtual antlrcpp::Any visitType_declaration(TigerParser::Type_declarationContext *context) = 0;

    virtual antlrcpp::Any visitType(TigerParser::TypeContext *context) = 0;

    virtual antlrcpp::Any visitType_id(TigerParser::Type_idContext *context) = 0;

    virtual antlrcpp::Any visitVar_declaration(TigerParser::Var_declarationContext *context) = 0;

    virtual antlrcpp::Any visitId_list(TigerParser::Id_listContext *context) = 0;

    virtual antlrcpp::Any visitOptional_init(TigerParser::Optional_initContext *context) = 0;

    virtual antlrcpp::Any visitFunct_declaration(TigerParser::Funct_declarationContext *context) = 0;

    virtual antlrcpp::Any visitParam_list(TigerParser::Param_listContext *context) = 0;

    virtual antlrcpp::Any visitParam_list_tail(TigerParser::Param_list_tailContext *context) = 0;

    virtual antlrcpp::Any visitRet_type(TigerParser::Ret_typeContext *context) = 0;

    virtual antlrcpp::Any visitParam(TigerParser::ParamContext *context) = 0;

    virtual antlrcpp::Any visitStat_seq(TigerParser::Stat_seqContext *context) = 0;

    virtual antlrcpp::Any visitStat(TigerParser::StatContext *context) = 0;

    virtual antlrcpp::Any visitL_tail(TigerParser::L_tailContext *context) = 0;

    virtual antlrcpp::Any visitOpt_prefix(TigerParser::Opt_prefixContext *context) = 0;

    virtual antlrcpp::Any visitExpr(TigerParser::ExprContext *context) = 0;

    virtual antlrcpp::Any visitConstant(TigerParser::ConstantContext *context) = 0;

    virtual antlrcpp::Any visitBinary_operator(TigerParser::Binary_operatorContext *context) = 0;

    virtual antlrcpp::Any visitExpr_list(TigerParser::Expr_listContext *context) = 0;

    virtual antlrcpp::Any visitExpr_list_tail(TigerParser::Expr_list_tailContext *context) = 0;

    virtual antlrcpp::Any visitLvalue(TigerParser::LvalueContext *context) = 0;

    virtual antlrcpp::Any visitLvalue_tail(TigerParser::Lvalue_tailContext *context) = 0;

    virtual antlrcpp::Any visitId(TigerParser::IdContext *context) = 0;


};

