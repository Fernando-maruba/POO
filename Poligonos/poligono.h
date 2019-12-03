#ifndef POLIGONO_H
#define POLIGONO_H

#include <iostream>
#include <vector>
using namespace std;

class Poligono
{
    public:
        Poligono(vector<double>&);
        virtual ~Poligono();
        int getLado(int i);
        double getPerimetro();
        double getArea(); //abstrato
        void imprime();
        friend ostream& operator<<(ostream&, Poligono&);
        static bool compara(Poligono* p1, Poligono* p2);
    private:
    vector<double>& lados;
};
#endif