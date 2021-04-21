#ifndef STRUCTS
#define STRUCTS


struct lista_ident_strct {
    std::vector<std::string> lnom;
};

struct resto_lista_id_strct {
    std::vector<std::string> lnom;
};

struct tipo_strct {
    std::string clase;
};

struct clase_par_strct {
    std::string tipo;
};

struct lista_sentencias_strct {
    std::vector<int> exits;
    std::vector<int> skips;
};

struct sentencia_strct {
    std::vector<int> exits;
    std::vector<int> skips;
};

struct variable_strct {
    std::string nom;
};

struct expresion_strct {
    std::string nom;
    std::vector<int> trues;
    std::vector<int> falses;
};

struct m_strct {
    int ref;
};

#endif