#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;


extern FILE* yyin;     // Определено в lex.yy.c
int yyparse(void);     // Главная функция парсера
int yylex(void);

int main(int argc, char** argv)
{
    if (argc > 1) {
        FILE* fp = fopen(argv[1], "r");
        if (!fp) {
            perror("Error opening file");
            return 1;
        }
        yyin = fp;
    }

    yyparse();  // <-- теперь вызываем парсер, а не лексер
    return 0;
}