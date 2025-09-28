# SwiftLexer

## Процесс создания lex.yy.exe

* Открыть терминал в visual studio ( Вид -> терминал или ctrl+` )

## В терминале

* PS F:\visualStudioProjects\SwiftLexer> cd SwiftLexer
* PS F:\visualStudioProjects\SwiftLexer\SwiftLexer> .\win_flex.exe -o lex.yy.cpp swift.l
* PS F:\visualStudioProjects\SwiftLexer\SwiftLexer> cl lex.yy.cpp

## Работа с lex.yy.exe
* PS F:\visualStudioProjects\SwiftLexer\SwiftLexer> .\lex.yy.exe
* test <- вводите данные с клавиатуры 
* WORD(test)


для завершения выполнения программы нажать ctrl+C
