%{
   #include <stdio.h>
   #include <iostream>
   #include <vector>
   #include <string>
   using namespace std; 

   extern int yylex();
   extern int yylineno;
   extern char *yytext;
   void yyerror (const char *msg) {
     printf("line %d: %s at '%s'\n", yylineno, msg, yytext) ;
   }
   
%}

/* 
   qué atributos tienen los tokens 
*/
%union {
    string *str ; 
}

/* 
   declaración de tokens. Esto debe coincidir con tokens.l 
*/
%token <str> TIDENTIFIER TINTEGER TDOUBLE
%token <str> TPLUS TMINUS TMUL TDIV

%type <str> E
%type <str> T
%type <str> F

%left TPLUS TMINUS
%left TMUL TDIV

%start E

%%

E : E TPLUS T
   { cout << "<suma>" << *$1 << "+" << *$3 << "<\\suma>" << endl; $$ = new string; *$$ = "(" + *$1 + "+" + *$3 + ")"; }
   | E TMINUS T
   { cout << "<resta>" << *$1 << "-" << *$3 << "<\\resta>" << endl;$$ = new string; *$$ = "(" + *$1 + "-" + *$3 + ")"; }
   | T
   ;
T : T TMUL F
   { cout << "<mult>" << *$1 << "*" << *$3 << "<\\mult>" << endl; $$ = new string; *$$ = "(" + *$1 + "*" + *$3 + ")"; }
   | T TDIV F
   { cout << "<div>" << *$1 << "/" << *$3 << "<\\div>" << endl; $$ = new string; *$$ = "(" + *$1 + "/" + *$3 + ")"; }
   | F
   ;
F : TIDENTIFIER
   { $$ = $1; cout<<"Id : "<< yytext << endl;}
   | TINTEGER
   { $$ = $1; cout<<"Ent : "<< yytext << endl;}
   | TDOUBLE
   { $$ = $1; cout<<"Real : "<< yytext << endl;}
   ;


