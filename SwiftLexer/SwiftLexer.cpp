#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <conio.h>

using namespace std;


extern FILE* yyin;   
extern int yydebug;
int yyparse(void);   

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
    
    yydebug = 0;
    yyparse();  
    _getch();
    return 0;
}