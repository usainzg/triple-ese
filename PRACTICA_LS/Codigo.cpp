#include "Codigo.hpp"

using namespace std;

Codigo::Codigo() 
{
    sig_id = 1; // Primer id en la constructora.
}

int Codigo::sig_instruccion() const 
{
    return instrucciones.size() + 1;
}

string Codigo::nuevo_id() 
{
    stringstream cadena;
    cadena << "_t" << sig_id++; // "_t" + "xx" => "_t1", "_t2", ...
    return cadena.str();
}

void Codigo::add_inst(const string &inst) 
{
    stringstream cadena;
    cadena << sig_instruccion() << ": " << inst;
    instrucciones.push_back(cadena.str());
}

void Codigo::add_decls(const vector<string> &id_nombres, const string &tipo_nombre) 
{
    vector<string>::const_iterator iter;
    for (iter = id_nombres.begin(); iter != id_nombres.end(); iter++) 
    {
        add_inst(tipo_nombre + " " + *iter + ";");
    }
}

void Codigo::add_params(const vector<string> &id_nombres, const string &p_tipo, const string &tipo_nombre)
{
    vector<string>::const_iterator iter;
    for (iter = id_nombres.begin(); iter != id_nombres.end(); iter++) 
    {
        add_inst(p_tipo + "_" + tipo_nombre + " " + *iter + ";");
    }
}

void Codigo::completar_insts(vector<int> &num_insts, const int ref)
{
    stringstream cadena;
    vector<int>::iterator iter;
    cadena << " " << ref;
    for (iter = num_insts.begin(); iter != num_insts.end(); iter++)
    {
        instrucciones[*iter - 1].append(cadena.str() + ";");
    }
}

void Codigo::escribir() const // TODO: cambiar para escribir en el fichero!
{
    vector<string>::const_iterator iter;
    for (iter = instrucciones.begin(); iter != instrucciones.end(); iter++)
    {
        cout << *iter << endl;
    }
}

int Codigo::obten_ref() const
{
    return sig_instruccion();
}

string Codigo::ini_nom()
{
    return "";
}

vector<int> Codigo::ini_lista(int arg)
{
    vector<int> res;
    if (arg != 0)
        res.push_back(arg);
    return res;
}

vector<string> Codigo::ini_lista(string arg)
{
    vector<string> res;
    if (arg != "")
        res.push_back(arg);
    return res;
}

vector<int> *Codigo::unir(vector<int> &list1, vector<int> &list2) 
{
    vector<int> *merged = new vector<int>(list1);
    merged->insert(merged->end(),list2.begin(),list2.end());
    return merged;
}

vector<string> *Codigo::unir(vector<string> &list1, vector<string> &list2) 
{
    vector<string> *merged = new vector<string>(list1);
    merged->insert(merged->end(),list2.begin(),list2.end());
    return merged;
}
