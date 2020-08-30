#include <iostream>
#include <fstream>

#include "antlr4-runtime.h"
#include "TigerLexer.h"
#include "TigerParser.h"

using namespace antlrcpp;
using namespace antlr4;

int main(int argc, const char* args[])
{
    std::ifstream ins;
    ins.open(args[1]);

    ANTLRInputStream input(ins);

    TigerLexer lexer(&input);
    CommonTokenStream tokens(&lexer);

    std::cout << "Tokens: " << std::endl;
    tokens.fill();

    for(auto token : tokens.getTokens())
    {
        std::cout << token->toString() << std::endl;
    }

    TigerParser parser(&tokens);
    tree::ParseTree* tree = parser.tiger_program();

    std::cout << "Parse tree (Lisp format): " << std::endl;
    std::cout << tree->toStringTree(&parser) << std::endl;

    return 0;
}
