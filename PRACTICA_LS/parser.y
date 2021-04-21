%error-verbose

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
        printf("line %d: %s\n", yylineno, msg) ;
   }

   #include "Codigo.hpp"

   void print_vector(vector<int> &vec);
   Codigo codigo;
%}

/* 
   qué atributos tienen los tokens 
*/
%union {
    std::string *str;
    lista_ident_strct *lident;
    resto_lista_id_strct *rlident;
    tipo_strct *tp;
    clase_par_strct *cp;
    lista_sentencias_strct *lsent;
    sentencia_strct *sent;
    m_strct *m;
    variable_strct *var;
    expresion_strct *expr; 
}

/* declaración de tokens. Esto debe coincidir con tokens.l */
%token <str> TIDENTIFIER TINTEGER TDOUBLE
%token <str> TMUL TDIV TPLUS TMINUS
%token <str> TSEMIC TASSIG TLBRACE TRBRACE TLPAREN TRPAREN TCOMMA
%token <str> RPROGRAM RPROCEDURE
%token <str> RFLOAT RINTEGER
%token <str> RWHILE RUNTIL RIF RELSE RFOREVER RDO RSKIP REXIT
%token <str> RREAD RPRINTLN
%token <str> TCGLE TCLT TCLE TCGT TCGE  TEQUAL TNEQUAL
 
%nonassoc TCLE TCGT TCGE TEQUAL TNEQUAL
%left TPLUS TMINUS
%left TMUL TDIV

/* declaración de no terminales. */
%type <lident> lista_de_ident
%type <rlident> resto_lista_id
%type <tp> tipo
%type <str> lista_de_param
%type <cp> clase_par
%type <lsent> lista_de_sentencias
%type <sent> sentencia
%type <var> variable
%type <expr> expr
%type <m> M

%start programa

%%

programa : RPROGRAM TIDENTIFIER 
    { codigo.add_inst(*$1 + " " + *$2 + ";"); } 
    declaraciones decl_de_subprogs TLBRACE lista_de_sentencias TRBRACE 
    { codigo.add_inst("halt;"); codigo.escribir(); }
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
      decl_de_subprogs TLBRACE lista_de_sentencias TRBRACE
      ;

argumentos : TLPAREN lista_de_param TRPAREN
      | /* vacio */
      ;

lista_de_param : tipo clase_par lista_de_ident resto_lis_de_param
      ;

clase_par : TCGE | TCLE | TCGLE
      ;

resto_lis_de_param : TSEMIC tipo clase_par lista_de_ident resto_lis_de_param
      | /* vacio */
      ;

lista_de_sentencias : sentencia lista_de_sentencias
      | /*vacio*/
      ;

sentencia : TIDENTIFIER TASSIG expr TSEMIC;
    | RIF expr TLBRACE lista_de_sentencias TRBRACE TSEMIC
    | RWHILE RFOREVER TLBRACE lista_de_sentencias TRBRACE TSEMIC
    | RDO TLBRACE lista_de_sentencias TRBRACE RUNTIL expr RELSE TLBRACE lista_de_sentencias TRBRACE TSEMIC
    | RSKIP RIF expr TSEMIC
    | REXIT TSEMIC
    | RREAD TLPAREN variable TRPAREN TSEMIC
    | RPRINTLN TLPAREN expr TRPAREN TSEMIC
    ;

M: { $$ = new m_strct; $$->ref = codigo.obtenRef(); };

variable : TIDENTIFIER { $$ = new variable_strct; $$->nom = *$1; }
    ;

expr : 
    expr TEQUAL expr
    {
        $$ = new expresion_strct;
        $$->nom = codigo.ini_nom();
        $$->trues = codigo.ini_lista(codigo.obten_ref());
        $$->falses = codigo.ini_lista(codigo.obten_ref()+1);
        codigo.add_inst("if " + $1->nom + " == " + $3->nom + " goto");
        codigo.add_inst("goto");
        delete $1; delete $3;
    }
    | expr TCGT expr
    | expr TCLT expr
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