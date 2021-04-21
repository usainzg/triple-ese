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
   #include "Structs.hpp"

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

%nonassoc TCLE TCGT TCGE TEQUAL TNEQUAL
%left TPLUS TMINUS
%left TMUL TDIV

%start programa

%%

programa : RPROGRAM TIDENTIFIER 
    { codigo.add_inst(*$1 + " " + *$2 + ";"); } 
    declaraciones decl_de_subprogs TLBRACE lista_de_sentencias TRBRACE 
    { codigo.add_inst("halt;"); codigo.escribir(); }
    ;

declaraciones : tipo lista_de_ident 
    { codigo.add_decls($2->lnom, $1->clase); delete $1; delete $2; } 
    TSEMIC declaraciones
    | /* vacio */
    ;

lista_de_ident : TIDENTIFIER resto_lista_id
    { 
        $$ = new lista_ident_strct; 
        $$->lnom = codigo.ini_lista(*$1);
        $$->lnom = *codigo.unir($$->lnom, $2->lnom);
        delete $2;
    }
    ;

resto_lista_id : TCOMMA TIDENTIFIER resto_lista_id
    {
        $$ = new resto_lista_id_strct;
        $$->lnom = codigo.ini_lista(*$2);
        $$->lnom = *codigo.unir($$->lnom, $3->lnom);
        delete $3;
    }
    | /* vacio */ { $$ = new resto_lista_id_strct; $$->lnom = codigo.ini_lista(""); }
    ;

tipo : RINTEGER { $$ = new tipo_strct; $$->clase = "ent"; }
    | RFLOAT { $$ = new tipo_strct; $$->clase = "real"; }
    ;

decl_de_subprogs : decl_de_subprograma decl_de_subprogs
    | /* vacio */
    ;

decl_de_subprograma : RPROCEDURE TIDENTIFIER  { codigo.add_inst(*$1 + " " + *$2 + ";"); } argumentos declaraciones
    decl_de_subprogs TLBRACE lista_de_sentencias TRBRACE { codigo.add_inst("endproc;"); }
    ;

argumentos : TLPAREN lista_de_param TRPAREN
    | /* vacio */
    ;

lista_de_param : tipo clase_par lista_de_ident 
    { codigo.add_params($3->lnom, $2->tipo, $1->clase); delete $1; delete $2; delete $3; } 
    resto_lis_de_param
    ;

clase_par : 
    TCGE { $$ = new clase_par_strct; $$->tipo = "ref"; } // out
    | TCLE { $$ = new clase_par_strct; $$->tipo = "val"; } // int
    | TCGLE { $$ = new clase_par_strct; $$->tipo = "ref"; } // in out
    ;

resto_lis_de_param : TSEMIC tipo clase_par lista_de_ident 
    { codigo.add_params($4->lnom, $3->tipo, $2->clase); delete $2; delete $3; delete $4; } 
    resto_lis_de_param
    | /* vacio */
    ;

lista_de_sentencias : sentencia lista_de_sentencias
    { 
        $$ = new lista_sentencias_strct; 
        $$->exits = *codigo.unir($1->exits, $2->exits); 
        $$->skips = *codigo.unir($1->skips, $2->skips);
        delete $1; delete $2;
    }
    | /*vacio*/ 
    { 
        $$ = new lista_sentencias_strct; $$->exits = codigo.ini_lista(0); $$->skips = codigo.ini_lista(0); 
    }
    ;

sentencia : variable TASSIG expr TSEMIC
    {
        codigo.add_inst($1->nom + " := " + $3->nom + ";");
		$$ = new sentencia_strct;
		$$->exits = codigo.ini_lista(0);
        $$->skips = codigo.ini_lista(0);
		delete $1; delete $3;
    }
    | RIF expr TLBRACE M lista_de_sentencias TRBRACE M TSEMIC 
    {
        codigo.completar_insts($2->trues, $4->ref);
		codigo.completar_insts($2->falses, $7->ref);
		$$ = new sentencia_strct; 
        $$->exits = $5->exits;
        $$->skips = $5->skips;
		delete $2; delete $4; delete $5; delete $7;
    }
    | RWHILE RFOREVER TLBRACE M lista_de_sentencias TRBRACE M TSEMIC
    {
        codigo.add_inst("goto" + to_string($4->ref) + ";");
		codigo.completar_insts($5->exits, $7->ref + 1);
		$$ = new sentencia_strct;
		$$->exits = codigo.ini_lista(0);
        $$->skips = codigo.ini_lista(0);
		delete $4; delete $5; delete $7;
    }
    | RDO TLBRACE M lista_de_sentencias TRBRACE RUNTIL M expr RELSE TLBRACE M lista_de_sentencias TRBRACE M TSEMIC
    {
        codigo.completar_insts($8->trues, $11->ref);
        codigo.completar_insts($8->falses, $3->ref);
		codigo.completar_insts($4->skips, $7->ref);
        codigo.completar_insts($4->exits, $14->ref);
        codigo.completar_insts($12->exits, $14->ref);
		$$ = new sentencia_strct;
		$$->exits = codigo.ini_lista(0);
        $$->skips = codigo.ini_lista(0);
		delete $3; delete $4; delete $7; delete $8; delete $11; delete $12; delete $14;
    }
    | RSKIP RIF expr M TSEMIC
    {
        codigo.completar_insts($3->falses, $4->ref);
        $$ = new sentencia_strct;
		$$->exits = codigo.ini_lista(0);
        $$->skips = $3->trues;
        delete $3; delete $4;
    }
    | REXIT M TSEMIC
    {
        $$ = new sentencia_strct;
		$$->exits = codigo.ini_lista(codigo.obten_ref());
        $$->skips = codigo.ini_lista(0);
        codigo.add_inst("goto");
    }
    | RREAD TLPAREN variable TRPAREN TSEMIC
    {
        codigo.add_inst("read " + $3->nom + ";");
		$$ = new sentencia_strct; 
        $$->exits = codigo.ini_lista(0);
        $$->skips = codigo.ini_lista(0);
		delete $3;
    }
    | RPRINTLN TLPAREN expr TRPAREN TSEMIC
    {
        codigo.add_inst("write " + $3->nom + ";");
		codigo.add_inst("writeln;");
		$$ = new sentencia_strct; 
        $$->exits = codigo.ini_lista(0);
        $$->skips = codigo.ini_lista(0);
		delete $3;
    }
    ;

M: { $$ = new m_strct; $$->ref = codigo.obten_ref(); };

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
    {
        $$ = new expresion_strct;
        $$->nom = codigo.ini_nom();
        $$->trues = codigo.ini_lista(codigo.obten_ref());
        $$->falses = codigo.ini_lista(codigo.obten_ref()+1);
        codigo.add_inst("if " + $1->nom + " > " + $3->nom + " goto");
        codigo.add_inst("goto");
        delete $1; delete $3;
    }
    | expr TCLT expr
    {
        $$ = new expresion_strct;
        $$->nom = codigo.ini_nom();
        $$->trues = codigo.ini_lista(codigo.obten_ref());
        $$->falses = codigo.ini_lista(codigo.obten_ref()+1);
        codigo.add_inst("if " + $1->nom + " < " + $3->nom + " goto");
        codigo.add_inst("goto");
        delete $1; delete $3;
    }
    | expr TCGE expr
    {
        $$ = new expresion_strct;
        $$->nom = codigo.ini_nom();
        $$->trues = codigo.ini_lista(codigo.obten_ref());
        $$->falses = codigo.ini_lista(codigo.obten_ref()+1);
        codigo.add_inst("if " + $1->nom + " >= " + $3->nom + " goto");
        codigo.add_inst("goto");
        delete $1; delete $3;
    }
    | expr TCLE expr
    {
        $$ = new expresion_strct;
        $$->nom = codigo.ini_nom();
        $$->trues = codigo.ini_lista(codigo.obten_ref());
        $$->falses = codigo.ini_lista(codigo.obten_ref()+1);
        codigo.add_inst("if " + $1->nom + " <= " + $3->nom + " goto");
        codigo.add_inst("goto");
        delete $1; delete $3;
    }
    | expr TNEQUAL expr
    {
        $$ = new expresion_strct;
        $$->nom = codigo.ini_nom();
        $$->trues = codigo.ini_lista(codigo.obten_ref());
        $$->falses = codigo.ini_lista(codigo.obten_ref()+1);
        codigo.add_inst("if " + $1->nom + " /= " + $3->nom + " goto");
        codigo.add_inst("goto");
        delete $1; delete $3;
    }
    | expr TPLUS expr
    {
        $$ = new expresion_strct;
        $$->nom = codigo.nuevo_id();
        codigo.add_inst($$->nom + " := " + $1->nom + " + " + $3->nom + ";");
        $$->trues = codigo.ini_lista(0);
        $$->falses = codigo.ini_lista(0);
        delete $1; delete $3;
    }
    | expr TMINUS expr
    {
        $$ = new expresion_strct;
        $$->nom = codigo.nuevo_id();
        codigo.add_inst($$->nom + " := " + $1->nom + " - " + $3->nom + ";");
        $$->trues = codigo.ini_lista(0);
        $$->falses = codigo.ini_lista(0);
        delete $1; delete $3;
    }
    | expr TMUL expr
    {
        $$ = new expresion_strct;
        $$->nom = codigo.nuevo_id();
        codigo.add_inst($$->nom + " := " + $1->nom + " * " + $3->nom + ";");
        $$->trues = codigo.ini_lista(0);
        $$->falses = codigo.ini_lista(0);
        delete $1; delete $3;
    }
    | expr TDIV expr
    {
        $$ = new expresion_strct;
        $$->nom = codigo.nuevo_id();
        codigo.add_inst($$->nom + " := " + $1->nom + " / " + $3->nom + ";");
        $$->trues = codigo.ini_lista(0);
        $$->falses = codigo.ini_lista(0);
        delete $1; delete $3;
    }
    | variable
    {
        $$ = new expresion_strct;
        $$->nom = $1->nom;
        $$->trues = codigo.ini_lista(0);
        $$->falses = codigo.ini_lista(0);
        delete $1;
    }
    | TINTEGER
    {
        $$ = new expresion_strct;
        $$->nom = *$1;
        $$->trues = codigo.ini_lista(0);
        $$->falses = codigo.ini_lista(0);
    }
    | TDOUBLE
    {
        $$ = new expresion_strct;
        $$->nom = *$1;
        $$->trues = codigo.ini_lista(0);
        $$->falses = codigo.ini_lista(0);
    }
    | TLPAREN expr TRPAREN
    {
        $$ = $2; delete $2;
    }
    ;