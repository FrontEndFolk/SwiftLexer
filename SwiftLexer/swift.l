%{
#define YY_NO_UNISTD_H 1

#include <stdio.h>

#ifdef _WIN32
    #include "unistd.h"
    #include <io.h>
    #define isatty _isatty
    #define fileno _fileno
    #define read   _read
    #define write  _write
#else
    #include <unistd.h>
#endif
%}

%%
[0-9]+   { printf("NUMBER(%s)\n", yytext); }
[a-zA-Z]+ { printf("WORD(%s)\n", yytext); }
.         { /* ignore */ }
%%

int main() {
    yylex(); // this will read stdin and print tokens
    return 0;
}
int yywrap() { return 1; }