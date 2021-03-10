%{
   #include <stdio.h>
   #include <iostream>
   #include <vector>
   #include <string>
   using namespace std; 

   extern int yylex();
   extern int yylineno;
   extern char *yytext;
   string tab = "  ";
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
%token <str> TMUL
%token <str> TSEMIC TASSIG
%token <str> RPROGRAM RBEGIN RENDPROGRAM
%token <str> RIF RTHEN RELSE

%type <str> programa
%type <str> listasentencias
%type <str> sentencia
%type <str> expr

%start programa

%%

programa : RPROGRAM  
           TIDENTIFIER 
	   RBEGIN
	   listasentencias
	   RENDPROGRAM 
     {cout <<"\n<programa>\n" + *$1 + tab + *$2 + tab + *$3 + tab + *$4 + tab + *$5 + " \n\n</programa>\n" << endl; }   

listasentencias : sentencia 
      {$$ = new string;
      *$$ = "\n\n<ListaSentencias1>\n\n" + *$1 + "\n\n<ListaSentencias1>\n";}
      | sentencia TSEMIC listasentencias
      {$$ = new string;
      *$$ = "\n\n<ListaSentencias1>\n\n" + *$1 + tab + *$2 + tab + *$3 + "\n\n<ListaSentencias1>\n";}
      ;

sentencia :  TIDENTIFIER TASSIG expr
      {$$ = new string;
      *$$ = "\n\n<Sentencia1>\n\n" + *$1 + tab + *$2 + tab + *$3 + "\n\n<Sentencia1>\n";}
      | RIF expr RTHEN sentencia
      {$$ = new string;
      *$$ = "\n\n<SentenciaIfThen>\n\n" + *$1 + tab + *$2 + tab + *$3 + tab + *$4 + "\n\n<SentenciaIfThen>\n";}
      | RIF expr RTHEN sentencia RELSE sentencia
      {$$ = new string;
      *$$ = "\n\n<SentenciaIfThenElse>\n\n" + *$1 + tab + *$2 + tab + *$3 + tab + *$4 + tab + *$5 + "\n\n<SentenciaIfThenElse>\n";}
      ;

expr : TIDENTIFIER
     | TINTEGER
     | TDOUBLE
     ;

