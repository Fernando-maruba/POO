#include "obra.h"
#include <iostream>
using namespace std;

namespace catalogo
{
    //construtora
obra::obra(string titulo, string artista, string material, int ano) : titulo(titulo), artista(artista), material(material), ano(ano)
{
}

//destrutora
obra::~obra()
{
}

//funções de get retornam dados que geralmente são private
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

//funções set são para atribuir um valor a uma variável da classe
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

//Precisamos ordernas as obras por data/titulo então precisamos utilizar a seguint função para isso:

//Retorna a obra mais próxima do inicio pelo título
bool obra::comparaTitulo(obra *o1, obra *o2)
{
    return o1->titulo < o2->titulo;
}

//A função retorna a obra mais antiga primeiro, então é em ordem crescente
bool obra::comparaAno(obra *o1, obra *o2)
{
    if (o1->ano == o2->ano)
        return obra::comparaTitulo(o1, o2);
    return o1->ano < o2->ano;
}
} // namespace catalogo