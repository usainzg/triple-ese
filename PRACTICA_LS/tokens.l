%option yylineno 

%{
 #include <string>
 #include <iostream>
 #include <vector>
 using namespace std ;
 #include "parser.hpp" 
 using namespace std;

 #define TOKEN(t) yylval.str = new string(yytext, yyleng) ; return t 

 extern "C" int yywrap() { return(1) ; }  

%}

%%
program	                TOKEN(RPROGRAM) ;


"*"                     TOKEN(TMUL);

"="                     TOKEN(TASSIG);

";"                     TOKEN(TSEMIC);

"{"                     TOKEN(TLBRACE);
"}"                     TOKEN(TRBRACE);

"("                     TOKEN(TLPARENTHESIS);
")"                     TOKEN(TRPARENTHESIS);

","                     TOKEN(TCOMMA);

\/\/.+\n                ;

[ \t\n]                 ;

[a-zA-Z]+(_?[a-zAZ0-9])*    TOKEN(TIDENTIFIER) ; 
[0-9]+\.[0-9]+([eE][\+\-]?[0-9]+)?          TOKEN(TDOUBLE);
[0-9]+                  TOKEN(TINTEGER); 

.                       { cout << "Token desconocido: " << yytext << endl; yyterminate();}
%%


