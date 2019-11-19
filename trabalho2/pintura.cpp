#include "pintura.h"
#include "obra.h"
#include <iostream>
using namespace std;

namespace catalogo
{
//construtora
pintura::pintura(string titulo, string artista, string material, int anoCriacao, string tipo) : obra(titulo, artista, material, anoCriacao), tipo(tipo)
{

}
//destrutora
pintura::~pintura()
{
}

string pintura::getTipo()
{
    return this->tipo;
}

int pintura::getCategoria()
{
    return 1;
}
//imprime a ficha de uma pintura
void pintura::imprimeFicha()
{
    cout << "Categoria: Pintura" << endl;
    cout << "Titulo: " << getTitulo() << endl;
    cout << "Artista: " << getArtista() << endl;
    cout << "Material: " << getMaterial() << endl;
    cout << "Ano: " << getAno() << endl;
    cout << "Tipo: " << getTipo() << endl;
}

} // namespace catalogo