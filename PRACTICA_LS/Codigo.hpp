#ifndef CODIGO_HPP
#define CODIGO_HPP

#include <iostream>
#include <sstream>
#include <fstream>
#include <set>
#include <vector>

class Codigo {

private:
    /* Instrucciones que forman el codigo. */
    std::vector<std::string> instrucciones;
    
    /* Se incrementa cada vez que se crea un id nuevo. */
    int sig_id;

    /* Devuelve el numero correspondiente a la siguiente instruccion. */
    int sig_instruccion() const;
    
public:
    Codigo();

    /* Crea nuevo id... "_t1, _t2, ...". */
    std::string nuevo_id();
    
    /* Introducir instruccion en la estructura. */
    void add_inst(const std::string &inst);

    /* Dada una lista de variables y sus tipos, crea las declaraciones. */
    void add_decls(const std::vector<std::string> &id_nombres, const std::string &tipo_nombre);
    
    /* Dada una lista de parametros y sus tipos, crea las declaraciones. */
    void add_params(const std::vector<std::string> &id_nombres, const std::string &p_tipo, const std::string &tipo_nombre);
    
    /* Añade a las instrucciones que se especifican la referencia que les falta. */
    void completar_insts(std::vector<int> &num_insts, const int ref);
    
    /* Escribe las instrucciones aculumadas en el fichero de salida. */
    void escribir() const;
    
    /* Devuelve el numero de la siguiente instruccion. */
    int obten_ref() const;
};

#endif