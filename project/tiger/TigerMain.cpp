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

    tokens.fill();

    auto vocabulary = lexer.getVocabulary();
    for(auto token : tokens.getTokens())
    {
        auto tokenType = token->getType();

        if( tokenType != Token::EOF)
        {
            auto displayName = vocabulary.getDisplayName(tokenType);
            std::cout << "<" << displayName << ", \"" << token->getText() << "\">" << std::endl;
        }
    }

    TigerParser parser(&tokens);
    tree::ParseTree* tree = parser.tiger_program();

    std::cout << "Parse tree (Lisp format): " << std::endl;
    std::cout << tree->toStringTree(&parser) << std::endl;

    return 0;
}
