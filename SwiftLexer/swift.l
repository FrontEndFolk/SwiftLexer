%option noyywrap
%option never-interactive
%option yylineno

%x COMMENT_MULTILINE
%x STRING_MULTILINE
%x STRING

FLOAT_HEX       0x[0-9a-fA-F][_0-9a-fA-F]*\.[0-9a-fA-F][_0-9a-fA-F]*([pP][-+]?[0-9a-fA-F][_0-9]*)|[0-9a-fA-F][_0-9a-fA-F]*[Pp][+-]?[0-9][_0-9]*
FLOAT_DEC		[0-9][_0-9]*[Ee][+-]?[0-9][_0-9]*|[0-9][_0-9]*\.[0-9][_0-9]*([Ee][-+]?[0-9][_0-9]*)?
INT_BINARY		0b[01][_01]*
INT_OCTAL		0o[0-7][_0-7]*
INT_DECIMAL	    [0-9][_0-9]*
INT_HEXADECIMAL	0x[0-9a-fA-F][_0-9a-fA-F]*

ID_START		[a-zA-Z_]
ID_CONT		[a-zA-Z0-9_]

%{
#define YY_NO_UNISTD_H 1
#include "swift.tab.hh"

#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <string>
using namespace std;


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


static string stripUnderscores(const char* txt) {
    string clean;
    for (const char* p = txt; *p; ++p) {
        if (*p != '_') clean += *p;
    }
    return clean;
}
%}

%%
%{
    static int lineNumber = 1;
    static string strBuf;
    static int commentDepth = 0;
%}
\n { lineNumber++; }

"class"			{ cout << "\"CLASS\" " << yytext << '\n'; }
"func"			{ cout << "\"FUNC\" " << yytext << '\n'; }
"var"			{ cout << "\"VAR\" "  << yytext << '\n'; }
"let"			{ cout << "\"LET\" "  << yytext << '\n'; }
"if"			{ cout << "\"IF\" "   << yytext << '\n'; }
"else"			{ cout << "\"ELSE\" " << yytext << '\n'; }
"for"			{ cout << "\"FOR\" "  << yytext << '\n'; }
"while"			{ cout << "\"WHILE\" "<< yytext << '\n'; }
"return"		{ cout << "\"RETURN\" "<< yytext << '\n'; }
"true"			{ cout << "\"TRUE\" " << yytext << '\n'; }
"false"			{ cout << "\"FALSE\" "<< yytext << '\n'; }
"nil"			{ cout << "\"NIL\" "  << yytext << '\n'; }



"Bool"			{ cout << "\"TYPE_BOOL\" "      << yytext << '\n'; }
"String"		{ cout << "\"TYPE_STRING\" "    << yytext << '\n'; }
"Character"		{ cout << "\"TYPE_CHARACTER\" " << yytext << '\n'; }
"Int"			{ cout << "\"TYPE_INT\" "       << yytext << '\n'; }
"UInt"			{ cout << "\"TYPE_UINT\" "      << yytext << '\n'; }
"Float"			{ cout << "\"TYPE_FLOAT\" "     << yytext << '\n'; }
"Double"		{ cout << "\"TYPE_DOUBLE\" "    << yytext << '\n'; }


{ID_START}{ID_CONT}* { cout << "\"IDENTIFIER\" " << yytext << '\n'; }


{FLOAT_HEX} {
    string clean = stripUnderscores(yytext);
    double val = strtod(clean.c_str(), nullptr);
    cout << "\"LITERAL_FLOAT_HEX\" " << val << '\n';
}

{FLOAT_DEC} {
    string clean = stripUnderscores(yytext);
    double val = strtod(clean.c_str(), nullptr);
    cout << "\"LITERAL_FLOAT_DEC\" " << val << '\n';
}

{INT_BINARY} {
    string clean = stripUnderscores(yytext + 2); 
    unsigned long long val = strtoull(clean.c_str(), nullptr, 2);
    cout << "\"LITERAL_INT_BINARY\" " << val << '\n';
}

{INT_OCTAL} {
    string clean = stripUnderscores(yytext + 2);
    unsigned long long val = strtoull(clean.c_str(), nullptr, 8);
    cout << "\"LITERAL_INT_OCTAL\" " << val << '\n';
}

{INT_HEXADECIMAL} {
    string clean = stripUnderscores(yytext);
    unsigned long long val = strtoull(clean.c_str(), nullptr, 16);
    cout << "\"LITERAL_INT_HEX\" " << val << '\n';
}

{INT_DECIMAL} {
    string clean = stripUnderscores(yytext);
    long long val = strtoll(clean.c_str(), nullptr, 10);
    cout << "\"LITERAL_INT_DEC\" " << val << '\n';
}

\" { strBuf.clear(); BEGIN(STRING); }
<STRING>[^\\\"\n]+ { strBuf += yytext; }
<STRING>\\\\       { strBuf += "\\"; }
<STRING>\\n        { strBuf += "\n"; }
<STRING>\\b        { strBuf += "\b"; }
<STRING>\\0        { strBuf += "\0"; }
<STRING>\\f        { strBuf += "\f"; }
<STRING>\\r        { strBuf += "\r"; }
<STRING>\\t        { strBuf += "\t"; }
<STRING>\\v        { strBuf += "\v"; }
<STRING>\\\'       { strBuf += "'"; }
<STRING>\\\"       { strBuf += "\""; }
<STRING>\n {
    cout << "ERROR: unterminated string at line " << lineNumber << '\n';
    BEGIN(INITIAL);
}
<STRING>\" {
    cout << "\"LITERAL_STRING\" " << strBuf << '\n';
    BEGIN(INITIAL);
}
<STRING><<EOF>> {
    cout << "ERROR: string isn't closed at end of file\n";
    BEGIN(INITIAL);
}

"+=" { cout << "\"PLUS_ASSIGN\" " << yytext << '\n'; }
"-=" { cout << "\"MINUS_ASSIGN\" " << yytext << '\n'; }
"/=" { cout << "\"DIV_ASSIGN\" " << yytext << '\n'; }
"*=" { cout << "\"MUL_ASSIGN\" " << yytext << '\n'; }
"%=" { cout << "\"MOD_ASSIGN\" " << yytext << '\n'; }

"==" { cout << "\"EQ\" " << yytext << '\n'; }
"!=" { cout << "\"NEQ\" " << yytext << '\n'; }
"<=" { cout << "\"LTE\" " << yytext << '\n'; }
">=" { cout << "\"GTE\" " << yytext << '\n'; }
"||" { cout << "\"OR\" " << yytext << '\n'; }
"&&" { cout << "\"AND\" " << yytext << '\n'; }

"="  { cout << "\"ASSIGN\" " << yytext << '\n'; }
"<"  { cout << "\"LT\" " << yytext << '\n'; }
">"  { cout << "\"GT\" " << yytext << '\n'; }
"\." { cout << "\"DOT\" " << yytext << '\n'; }
","  { cout << "\"COMMA\" " << yytext << '\n'; }
";"  { cout << "\"SEMICOLON\" " << yytext << '\n'; }
":"  { cout << "\"COLON\" " << yytext << '\n'; }
"->" { cout << "\"ARROW\" " << yytext << '\n'; }

"+" { cout << "\"PLUS\" " << yytext << '\n'; }
"-" { cout << "\"MINUS\" " << yytext << '\n'; }
"*" { cout << "\"MUL\" " << yytext << '\n'; }
"/" { cout << "\"DIV\" " << yytext << '\n'; }
"%" { cout << "\"MOD\" " << yytext << '\n'; }
"!"  { cout << "\"NOT\" " << yytext << '\n'; }

"(" { cout << "\"LPAREN\" " << yytext << '\n'; }
")" { cout << "\"RPAREN\" " << yytext << '\n'; }
"[" { cout << "\"LBRACKET\" " << yytext << '\n'; }
"]" { cout << "\"RBRACKET\" " << yytext << '\n'; }
"{" { cout << "\"LBRACE\" " << yytext << '\n'; }
"}" { cout << "\"RBRACE\" " << yytext << '\n'; }


\"\"\" { strBuf.clear(); BEGIN(STRING_MULTILINE); }
<STRING_MULTILINE>\"\"\" {
    cout << "\"LITERAL_STRING\" " << strBuf << '\n';
    BEGIN(INITIAL);
}
<STRING_MULTILINE>[^\n]+   { strBuf += yytext; }
<STRING_MULTILINE>\n       { strBuf += "\n"; lineNumber++; }
<STRING_MULTILINE><<EOF>> {
    cout << "ERROR: unterminated multiline string\n";
    BEGIN(INITIAL);
}

"//".* { cout << "\"INLINE_COMMENT\" " << yytext << '\n'; }

"/*" { commentDepth = 1; strBuf.clear(); BEGIN(COMMENT_MULTILINE); }
<COMMENT_MULTILINE>"/*" { commentDepth++; strBuf += yytext; }
<COMMENT_MULTILINE>"*/" {
    commentDepth--;
    if (commentDepth == 0) {
        cout << "\"MULTILINE_COMMENT\" " << strBuf << '\n';
        BEGIN(INITIAL);
    } else strBuf += yytext;
}
<COMMENT_MULTILINE>[^\n]+  { strBuf += yytext; }
<COMMENT_MULTILINE>\n      { strBuf += "\n"; lineNumber++; }
<COMMENT_MULTILINE><<EOF>> {
    cout << "ERROR: unterminated multiline comment\n";
    BEGIN(INITIAL);
}

[ \t\v\f\r]+ { /* skip */ }

<*>. { cout << "\"UNKNOWN\" " << yytext << '\n'; }

%%
