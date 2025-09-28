#include <iostream>
#include "FlexLexer.h"

int main() {
    yyFlexLexer lexer;
    while (lexer.yylex() != 0) {
        // токены обрабатываются внутри lex.yy.cc
    }
    return 0;
}