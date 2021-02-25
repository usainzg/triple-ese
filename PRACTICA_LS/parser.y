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
%token <str> TMUL TDIV TPLUS TMINUS
%token <str> TSEMIC TASSIG TLBRACE TRBRACE TLPAREN TRPAREN TCOMMA TDOT
%token <str> RPROGRAM RPROCEDURE
%token <str> RFLOAT RINTEGER
%token <str> RWHILE RIF RTHEN RFOREVER RDO RFINALLY RSKIP REXIT
%token <str> RREAD RPRINTLN
%token <str> TCLT TCLE TCGT TCGE TEQUAL TNEQUAL

/* 
   declaración de no terminales. Por ej:
%type <str> program
%type <str> declaraciones
%type <str> lista_de_ident
%type <str> resto_lista_id
%type <str> tipo
%type <str> decl_de_subprogs
%type <str> decl_de_subprograma
%type <str> argumentos
%type <str> lista_de_param
%type <str> clase_par
%type <str> resto_lis_de_param
%type <str> lista_de_sentencias
%type <str> sentencia
%type <str> variable
%type <str> expr
*/

%nonassoc CLT TCLE TCGT TCGE TEQUAL TNEQUAL
%left TPLUS TMINUS
%left TMUL TDIV


%start programa

%%

programa : RPROGRAM TIDENTIFIER 
      declaraciones
      decl_de_subprogs
	   TLBRACE lista_de_sentencias TRBRACE
      ;

declaraciones : tipo lista_de_ident TSEMIC declaraciones
      | /* vacio */
      ;

lista_de_ident : TIDENTIFIER resto_lista_id
      ;

resto_lista_id : TCOMMA TIDENTIFIER resto_lista_id
      | /* vacio */
      ;

tipo : RINTEGER 
      | RFLOAT
      ;

decl_de_subprogs : decl_de_subprograma decl_de_subprogs
      | /* vacio */
      ;

decl_de_subprograma : RPROCEDURE TIDENTIFIER argumentos declaraciones
      decl_de_subprogs TLBRACE lista_de_sentencias
      ;

argumentos : TLPAREN lista_de_param TRPAREN
      | /* vacio */
      ;

lista_de_param : tipo clase_par lista_de_ident resto_lis_de_param
      ;

clase_par : TCGE | TCLE | TCGLE /* !!! TODO: preguntar esto !!! */
      ;

resto_lis_de_param : TSEMIC tipo clase_par lista_de_ident resto_lis_de_param
      | /* vacio */
      ;

lista_de_sentencias : sentencia lista_de_sentencias
      | /*vacio*/
      ;

sentencia : TIDENTIFIER TASSIG expr TSEMIC;
      | RIF expr TLBRACE lista_de_sentencias TRBRACE TSEMIC
      | RWHILE RFOREVER TLBRACE lista_de_sentencias TRBRACE
      | RDO TLBRACE lista_de_sentencias TRBRACE RUNTIL expr  TLBRACE lista_de_sentencias TRBRACE TSEMIC
      | RSKIP TIF expr TSEMIC
      | REXIT TSEMIC
      | RREAD TLPAREN variable TRPAREN TSEMIC
      | RPRINTLN TLPAREN expr TRPAREN TSEMIC
      ;

variable : TIDENTIFIER
      ;

expr : expr TEQUAL expr
      | expr TCLT expr
      | expr TCLE expr
      | expr TCGE expr
      | expr TCLE expr
      | expr TNEQUAL expr
      | expr TPLUS expr
      | expr TMINUS expr
      | expr TMUL expr
      | expr TDIV expr
      | variable
      | TINTEGER
      | TDOUBLE
      | TLPAREN expr TRPAREN
      ;