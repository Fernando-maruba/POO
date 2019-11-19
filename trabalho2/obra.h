#ifndef OBRA_H
#define OBRA_H
#include <iostream>
#include <vector>
#include <string>
using namespace std;
#include <algorithm>

namespace catalogo
{

class obra
{
public:
    obra(string titulo, string artista, string material, int ano);
    virtual ~obra();
    virtual int getCategoria() = 0; //metodos abstratos
    virtual void imprimeFicha() = 0;
    string getTitulo();
    string getArtista();
    string getMaterial();
    int getAno();
    void setTitulo(string titulo);
    void setArtista(string artista);
    void setMaterial(string material);
    void setAno(int ano);
    static bool comparaTitulo(obra* o1, obra* o2);
    static bool comparaAno(obra* o1, obra* o2);
private:
    string titulo, artista, material;
    int ano;
};
} // namespace catalogo
#endif
