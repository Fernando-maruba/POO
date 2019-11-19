#include "escultura.h"
using namespace std;
#include <iostream>
namespace catalogo
{
//construtor
escultura::escultura(string titulo, string artista, string material, int anoCriacao, double altura) : obra(titulo, artista, material, anoCriacao), altura(altura)
{
}
//destrutor
escultura::~escultura()
{
}

//funções get retornam o que geralmente é private dentro da classe
double escultura::getAltura()
{
    return this->altura;
}

int escultura::getCategoria()
{
    return 2;
}
//imprime a ficha de uma escultura
void escultura::imprimeFicha()
{
    cout << "Categoria: Escultura" << endl;
    cout << "Titulo: " << getTitulo() << endl;
    cout << "Artista: " << getArtista() << endl;
    cout << "Material: " << getMaterial() << endl;
    cout << "Ano: " << getAno() << endl;
    cout << "Altura: " << getAltura() << endl;
}

} // namespace catalogo
