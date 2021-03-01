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

%option nounput
digito [0-9]
letra [a-zA-Z]

%%
program	                TOKEN(RPROGRAM);
int                     TOKEN(RINTEGER);
float		            TOKEN(RFLOAT);
while		            TOKEN(RWHILE);
until                   TOKEN(RUNTIL);
exit		            TOKEN(REXIT);
proc	                TOKEN(RPROCEDURE);	
if                      TOKEN(RIF);
else                    TOKEN(RELSE);
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


(\[\*)([^*]|\*+[^*\]])*(\*+\])  printf("COMENTARIO MULTI\n");
#[^#\n]*\n                      printf("COMENTARIO LINEA\n");

{letra}+(_?{letra}|{digito})*    TOKEN(TIDENTIFIER) ; 
{digito}+\.{digito}+([eE][\+\-]?{digito}+)?          TOKEN(TDOUBLE);
{digito}+                  TOKEN(TINTEGER); 

[ \t\n]                 ;
.                       { cout << "Token desconocido: " << yytext << endl; yyterminate();}
%%