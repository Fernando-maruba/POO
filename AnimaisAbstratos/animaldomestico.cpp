#include "animaldomestico.h"
using namespace std;

animaldomestico::animaldomestico(string nome, double peso) : nome(nome), peso(peso)
{
}

animaldomestico::~animaldomestico()
{
}

string animaldomestico::getNome() const
{
    return nome;
}

void animaldomestico::setNome(string nome)
{
    this->nome = nome;
}

double animaldomestico::getPeso() const
{
    return peso;
}

void animaldomestico::setPeso(double peso)
{
    this->peso = peso;
}
void animaldomestico::setDono(pessoa *dono)
{
    this->dono = dono;
}
void animaldomestico::imprime()
{
    cout << "Espécie: " << this->getEspecie() << endl;
    cout << "Nome: " << this->nome << endl;
    cout << "Peso: " << this->peso << endl;
}
bool animaldomestico::compNome(animaldomestico *a1, animaldomestico *a2)
{
    return a1->nome < a2->nome;
}
bool animaldomestico::compPeso(animaldomestico *a1, animaldomestico *a2)
{
    return a1->peso < a2->peso;
}
bool animaldomestico::compEspecie(animaldomestico *a1, animaldomestico *a2)
{
    if (a1->getEspecie() == a2->getEspecie())
    {
        return animaldomestico::compNome(a1, a2);
    }
    else
    {
        return a1->getEspecie() < a2->getEspecie();
    }
}