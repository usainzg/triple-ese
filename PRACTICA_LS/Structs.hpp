#ifndef STRUCTS
#define STRUCTS

using namespace std;


struct lista_ident_strct {
    vector<string> lnom;
};

struct resto_lista_id_strct {
    vector<string> lnom;
};

struct tipo_strct {
    string clase;
};

struct clase_par_strct {
    string tipo;
};

struct lista_sentencias_strct {
    vector<int> exits;
    vector<int> skips;
};

struct sentencia_strct {
    vector<int> exits;
    vector<int> skips;
};

struct variable_strct {
    string nom;
};

struct expresion_strct {
    string nom;
    vector<int> trues;
    vector<int> falses;
};

struct m_strct {
    int ref;
};

#endif