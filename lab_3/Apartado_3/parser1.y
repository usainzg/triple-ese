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
%type <str> EP
%type <str> T
%type <str> TP
%type <str> F

%left TPLUS TMINUS
%left TMUL TDIV

%start E

%%

E : T EP
   ;
EP : TPLUS T EP
   { cout << "<suma>" << "+" << *$2 << *$3 << "<\\suma>" << endl; $$ = new string; *$$ = "(" + *$1 + *$2 + *$3 + ")"; }
   | TMINUS T EP
   { cout << "<resta>" << "-" << *$2 << *$3 << "<\\resta>" << endl;$$ = new string; *$$ = "(" + *$1 + *$2 + *$3 + ")"; }
   | /* Vacio */
   { cout << "Vacio" << endl;$$ = new string; }
   ;
T : F TP
   ;
TP : TMUL F TP
   { cout << "<mult>" << "*" << *$2 << *$3 << "<\\mult>" << endl; $$ = new string; *$$ = "(" + *$1 + *$2 + *$3 + ")"; }
   | TDIV F TP
   { cout << "<div>" << "/" << *$2 << *$3 << "<\\div>" << endl; $$ = new string; *$$ = "(" + *$1 + *$2 + *$3 + ")"; }
   | /* Vacio */
   { cout << "Vacio" << endl;$$ = new string; }
   ;
F : TIDENTIFIER
   { $$ = $1; cout<<"Id : "<< yytext << endl;}
   | TINTEGER
   { $$ = $1; cout<<"Ent : "<< yytext << endl;}
   | TDOUBLE
   { $$ = $1; cout<<"Real : "<< yytext << endl;}
   ;