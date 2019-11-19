#ifndef ESCULTURA_H
#define ESCULTURA_H
#include <iostream>
#include <string>
#include "obra.h"
using namespace std;

namespace catalogo{

class escultura : public obra
{
    public:
    escultura (string titulo, string artista, string material, int anoCriacao, double altura);
    virtual ~escultura();
    void setAltura(double altura);
    double getAltura();
    virtual int getCategoria();
    virtual void imprimeFicha();
    
    private:
    string titulo, artista, material;
    int anoCriacao;
    double altura;
};
}
#endif