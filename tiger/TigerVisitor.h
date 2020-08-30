
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
    virtual antlrcpp::Any visitProgram(TigerParser::ProgramContext *context) = 0;


};

