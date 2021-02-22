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
%token <str> TMUL
%token <str> TSEMIC TASSIG TLBRACE TRBRACE TCOMMA
%token <str> RPROGRAM RBEGIN RENDPROGRAM

/* 
   declaración de no terminales. Por ej:
%type <str> expr
*/
%type <str> program
%type <str> listasentencias
%type <str> sentencia
%type <str> expr




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

tipo : TINTEGER 
      | TDOUBLE
      ;

decl_de_subprogs : decl_de_subprograma decl_de_subprogs
      | /* vacio */
      ;

decl_de_subprograma : TPROC TIDENTIFIER argumentos declaraciones
      decl_de_subprogs TLBRACE lista_de_sentencias
      ;

argumentos : TLPARENTHESIS lista_de_param TRPARENTHESIS
      | /* vacio */
      ;

lista_de_param : tipo clase_par lista_de_ident resto_lis_de_param
      ;

clase_par : TGE | TLE | TGLE
      ;

resto_lis_de_param : TSEMIC tipo clase_par lista_de_ident resto_lis_de_param
      | /* vacio */
      ;

lista_de_sentencias : sentencia lista_de_sentencias
      | /*vacio*/
      ;

sentencia : TIDENTIFIER TASSIG expr TSEMIC;
      | TIF expr TLBRACE lista_de_sentencias TRBRACE TSEMIC
      | TWHILE TFOREVER TLBRACE lista_de_sentencias TRBRACE
      | TDO TLBRACE lista_de_sentencias TRBRACE TUNTIL expr TELSE TLBRACE lista_de_sentencias TRBRACE TSEMIC
      | TSKIP TIF expr TSEMIC
      | TEXIT TSEMIC
      | TREAD TLPARENTHESIS variable TRPARENTHESIS TSEMIC
      | TPRINT TLPARENTHESIS expr TRPARENTHESIS TSEMIC
      ;

variable : TIDENTIFIER
      ;

expr : expr TEEQ expr
      | expr TG expr
      | expr TL expr
      | expr TGE expr
      | expr TLE expr
      | expr TNE expr
      | expr TPLUS expr
      | expr TMINUS expr
      | expr TMULT expr
      | expr TDIV expr
      | variable
      | TINTEGER
      | TDOUBLE
      | TLPARENTHESIS expr TRPARENTHESIS
      ;