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
#include "swift.tab.h"

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

"class"			{ cout << "\"CLASS\" " << yytext << '\n'; return CLASS; }
"func"			{ cout << "\"FUNC\" " << yytext << '\n'; return FUNC;   }
"var"			{ cout << "\"VAR\" "  << yytext << '\n'; return VAR_KW; }
"let"			{ cout << "\"LET\" "  << yytext << '\n'; return LET_KW; }
"if"			{ cout << "\"IF\" "   << yytext << '\n'; return IF;     }
"else"			{ cout << "\"ELSE\" " << yytext << '\n'; return ELSE;   }
"for"			{ cout << "\"FOR\" "  << yytext << '\n'; return FOR;    }
"while"			{ cout << "\"WHILE\" "<< yytext << '\n'; return WHILE;  }
"return"		{ cout << "\"RETURN\" "<< yytext << '\n'; return RETURN;}
"switch"        { cout << "\"SWITCH\" " << yytext << '\n'; return SWITCH; }
"case"          { cout << "\"CASE\" " << yytext << '\n'; return CASE; }
"default"       { cout << "\"DEFAULT\" " << yytext << '\n'; return DEFAULT; }
"where"         { cout << "\"WHERE\" " << yytext << '\n'; return WHERE; }
"fallthrough"   { cout << "\"FALLTHROUGH\" " << yytext << '\n'; return FALLTHROUGH; }
"break"         { cout << "\"BREAK\" " << yytext << '\n'; return BREAK; }
"continue"      { cout << "\"CONTINUE\" " << yytext << '\n'; return CONTINUE; }
"static"        { cout << "\"STATIC\" " << yytext << '\n'; return STATIC; }
"open"          { cout << "\"OPEN\" " << yytext << '\n'; return OPEN; }
"internal"      { cout << "\"INTERNAL\" " << yytext << '\n'; return INTERNAL; }
"public"        { cout << "\"PUBLIC\" " << yytext << '\n'; return PUBLIC; }
"private"       { cout << "\"PRIVATE\" " << yytext << '\n'; return PRIVATE; }
"fileprivate"   { cout << "\"FILE_PRIVATE\" " << yytext << '\n'; return FILE_PRIVATE; }
"true"			{ cout << "\"TRUE\" " << yytext << '\n'; yylval.boolVal = true; return TRUE;}
"false"			{ cout << "\"FALSE\" "<< yytext << '\n'; yylval.boolVal = false; return FALSE;}
"nil"			{ cout << "\"NIL\" "  << yytext << '\n'; return NIL;}
"in"            { cout << "\"in\" "  << yytext << '\n'; return IN;}
"_"             { cout << "\"underscore\" "  << yytext << '\n'; return UNDERSCORE;}
"..."           { cout << "\"closed range\" "  << yytext << '\n'; return CLOSED_RANGE;}
"..<"           { cout << "\"opened range\" "  << yytext << '\n'; return OPENED_RANGE;}

"Bool"			{ cout << "\"TYPE_BOOL\" "      << yytext << '\n'; return BOOL_KW; }
"String"		{ cout << "\"TYPE_STRING\" "    << yytext << '\n'; return STRING_KW; }
"Int"			{ cout << "\"TYPE_INT\" "       << yytext << '\n'; return INT_KW; }
"UInt"			{ cout << "\"TYPE_UINT\" "      << yytext << '\n'; return UINT_KW; }
"Float"			{ cout << "\"TYPE_FLOAT\" "     << yytext << '\n'; return FLOAT_KW; }
"Double"		{ cout << "\"TYPE_DOUBLE\" "    << yytext << '\n'; return DOUBLE_KW; }

"INIT"          {cout << "\"INIT\" "   << yytext << '\n'; yylval.Id = new std::string(yytext); return INIT;}
"DEINIT"        {cout << "\"DEINIT\" " << yytext << '\n'; yylval.Id = new std::string(yytext); return DEINIT;}

{ID_START}{ID_CONT}* { 
    yylval.Id = new std::string(yytext);
    cout << "\"IDENTIFIER\" " << yytext << '\n';
    return ID;
}

{FLOAT_HEX} {
    string clean = stripUnderscores(yytext);
    double val = strtod(clean.c_str(), nullptr);
    yylval.Float = val;
    cout << "\"LITERAL_FLOAT_HEX\" " << val << '\n';
    return FLOAT_DEC;
}

{FLOAT_DEC} {
    string clean = stripUnderscores(yytext);
    double val = strtod(clean.c_str(), nullptr);
    yylval.Float = val;
    cout << "\"LITERAL_FLOAT_DEC\" " << val << '\n';
    return FLOAT_DEC;
}

{INT_BINARY} {
    string clean = stripUnderscores(yytext + 2); 
    unsigned long long val = strtoull(clean.c_str(), nullptr, 2);
    yylval.Int = val;
    cout << "\"LITERAL_INT_BINARY\" " << val << '\n';
    return INT_DEC;
}

{INT_OCTAL} {
    string clean = stripUnderscores(yytext + 2);
    unsigned long long val = strtoull(clean.c_str(), nullptr, 8);
    yylval.Int = val;
    cout << "\"LITERAL_INT_OCTAL\" " << val << '\n';
    return INT_DEC;
}

{INT_HEXADECIMAL} {
    string clean = stripUnderscores(yytext);
    unsigned long long val = strtoull(clean.c_str(), nullptr, 16);
    yylval.Int = val;
    cout << "\"LITERAL_INT_HEX\" " << val << '\n';
    return INT_DEC;
}

{INT_DECIMAL} {
    string clean = stripUnderscores(yytext);
    long long val = strtoll(clean.c_str(), nullptr, 10);
    yylval.Int = val;
    cout << "\"LITERAL_INT_DEC\" " << val << '\n';
    return INT_DEC;
}

\" { strBuf = "\""; BEGIN(STRING); }
<STRING>[^\\\"\n]+ { 
                     strBuf += yytext;
                     yylval.Id = new std::string(strBuf);
                     return STRING_C;
                   }
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
    strBuf += "\"";
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

"==" { cout << "\"EQ\" " << yytext << '\n';  return EQ;  }
"!=" { cout << "\"NEQ\" " << yytext << '\n'; return NE;  }
"<=" { cout << "\"LTE\" " << yytext << '\n'; return LE;  }
">=" { cout << "\"GTE\" " << yytext << '\n'; return GE;  }
"||" { cout << "\"OR\" " << yytext << '\n';  return OR;  }
"&&" { cout << "\"AND\" " << yytext << '\n'; return AND; }

"="  { 
        cout << "\"ASSIGN\" " << yytext << '\n';
        return '='; 
     }
"<"  { cout << "\"LT\" " << yytext << '\n';        return '<';   }
">"  { cout << "\"GT\" " << yytext << '\n';        return '>';   }
"\." { cout << "\"DOT\" " << yytext << '\n';       return '.';   }
","  { cout << "\"COMMA\" " << yytext << '\n';     return ',';   }
";"  { cout << "\"SEMICOLON\" " << yytext << '\n'; return ';';   }
":"  { cout << "\"COLON\" " << yytext << '\n';     return ':';   }
"->" { cout << "\"ARROW\" " << yytext << '\n';     return ARROW; }

"+" { cout << "\"PLUS\" " << yytext << '\n';  return '+'; }
"-" { cout << "\"MINUS\" " << yytext << '\n'; return '-'; }
"*" { cout << "\"MUL\" " << yytext << '\n';   return '*'; }
"/" { cout << "\"DIV\" " << yytext << '\n';   return '/'; }
"%" { cout << "\"MOD\" " << yytext << '\n';   return '%'; }
"!"  { cout << "\"NOT\" " << yytext << '\n';  return NOT; }

"(" { cout << "\"LPAREN\" " << yytext << '\n';   return '('; }
")" { cout << "\"RPAREN\" " << yytext << '\n';   return ')'; }
"[" { cout << "\"LBRACKET\" " << yytext << '\n'; return '['; }
"]" { cout << "\"RBRACKET\" " << yytext << '\n'; return ']'; }
"{" { cout << "\"LBRACE\" " << yytext << '\n';   return '{'; }
"}" { cout << "\"RBRACE\" " << yytext << '\n';   return '}'; }


\"\"\" { strBuf = "\"\"\""; BEGIN(STRING_MULTILINE); }
<STRING_MULTILINE>\"\"\" {
    strBuf += "\"\"\"";
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