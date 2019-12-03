#ifndef TRIANGULO_H
#define TRIANGULO_H
#include "poligono.h"

class Poligono;

class Triangulo : public Poligono
{
public:
    Triangulo(vector<double> &);
    virtual ~Triangulo();
    virtual double getArea();

private:
};
#endif