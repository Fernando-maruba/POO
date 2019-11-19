#include "pintura.h"
#include "obra.h"
#include <iostream>
using namespace std;

namespace catalogo
{
pintura::pintura(string titulo, string artista, string material, int anoCriacao, string tipo) : obra(titulo, artista, material, anoCriacao), tipo(tipo)
{
}
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