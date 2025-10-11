#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>   // Для FILE, fopen(), perror()
#include <stdlib.h>  // Для exit(), EXIT_FAILURE и т.п.
#include <iostream>

using namespace std;

extern FILE* yyin;   // Определено в сгенерированном lex.yy.c
int yylex(void);     // Главная функция лексера

int main(int argc, char** argv)
{
    if (argc > 1) {
        FILE* fp = fopen(argv[1], "r");
        if (!fp) {
            perror("Error opening file");
            return 1;
        }
        yyin = fp; // для flex
    }
    yylex();
    return 0;
}