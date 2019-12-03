#include <iostream>
#include <algorithm> // std::sort
#include <vector>    // std::vector
#include "poligono.h"
#include "triangulo.h"
#include "retangulo.h"
int main(int argc, char **argv)
{
    vector<Poligono *> poligonos;
    vector<double> v1{3, 4, 5};
    poligonos.push_back(new Triangulo(v1));
    vector<double> v2{3, 3, 3};
    poligonos.push_back(new Triangulo(v2));
    vector<double> v3{3, 4, 3, 4};
    poligonos.push_back(new Retangulo(v3));
    vector<double> v4{2, 3, 2, 3};
    poligonos.push_back(new Retangulo(v4));
    cout << "poligonos:" << endl;
    for (int i = 0; i < poligonos.size(); i++)
    {
        cout << *poligonos[i] << endl;
    }
    sort(poligonos.begin(), poligonos.end(), Poligono::compara);
    cout << "poligonos (ordenado):" << endl;
    for (int i = 0; i < poligonos.size(); i++)
    {
        poligonos[i]->imprime();
    }
    return 0;
}
