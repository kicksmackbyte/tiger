
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

  virtual antlrcpp::Any visitProgram(TigerParser::ProgramContext *ctx) override {
    return visitChildren(ctx);
  }


};

