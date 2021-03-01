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
program	                TOKEN(RPROGRAM);
int                     TOKEN(RINTEGER);
float		            TOKEN(RFLOAT);
while		            TOKEN(RWHILE);
until                   TOKEN(RUNTIL);
exit		            TOKEN(REXIT);
proc	                TOKEN(RPROCEDURE);	
if                      TOKEN(RIF);
forever                 TOKEN(RFOREVER);
do                      TOKEN(RDO);
skip                    TOKEN(RSKIP);
read                    TOKEN(RREAD);
println                 TOKEN(RPRINTLN);


"{"			            TOKEN(TLBRACE);
"}"                     TOKEN(TRBRACE);
"("						TOKEN(TLPAREN);
")"						TOKEN(TRPAREN);
","						TOKEN(TCOMMA);
"="                     TOKEN(TASSIG);
";"                     TOKEN(TSEMIC);
"<=>"                   TOKEN(TCGLE);
"<"						TOKEN(TCLT);
"<="					TOKEN(TCLE);
">"						TOKEN(TCGT);
">="					TOKEN(TCGE);
"=="					TOKEN(TEQUAL);
"/="					TOKEN(TNEQUAL);
"/"						TOKEN(TDIV);
"+"						TOKEN(TPLUS);
"-"						TOKEN(TMINUS);	
"*"                     TOKEN(TMUL);


[ \t\n]                 ;

\[\*+([*][^*\]]|[^*])*\*\]  printf("\nCOMENTARIO MULTI\n");

[a-zA-Z]+(_?[a-zAZ0-9])*    TOKEN(TIDENTIFIER) ; 
[0-9]+\.[0-9]+([eE][\+\-]?[0-9]+)?          TOKEN(TDOUBLE);
[0-9]+                  TOKEN(TINTEGER); 

.                       { cout << "Token desconocido: " << yytext << endl; yyterminate();}
%%


