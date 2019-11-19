#include "obra.h"
#include <iostream>
using namespace std;

namespace catalogo
{
obra::obra(string titulo, string artista, string material, int ano) : titulo(titulo), artista(artista), material(material), ano(ano)
{
}

obra::~obra()
{
}

string obra::getTitulo()
{
    return this->titulo;
}
string obra::getArtista()
{
    return this->artista;
}
string obra::getMaterial()
{
    return this->material;
}
int obra::getAno()
{
    return this->ano;
}

void obra::setTitulo(string titulo)
{
    this->titulo = titulo;
}
void obra::setArtista(string artista)
{
    this->artista = artista;
}
void obra::setMaterial(string material)
{
    this->material = material;
}
void obra::setAno(int ano)
{
    this->ano = ano;
}

//Precisamos ordernas as obras por data/titulo então precisamos utilizar a funcao sort para isso
} // namespace catalogo