#ifndef PINTURA_H
#define PINTURA_H
#include <iostream>
#include <string>
#include "obra.h"
using namespace std;

namespace catalogo
{

class pintura : public obra
{
private:
    string titulo, artista, material, tipo;
    int ano;
    
public:
    pintura(string titulo, string artista, string material, int ano, string tipo);
    virtual ~pintura();
    string getTipo();
    virtual int getCategoria();
    virtual void imprimeFicha();

};
} // namespace catalogo
#endif