#include "pessoa.h"
using namespace std;
pessoa::pessoa(string nome, int idade) : nome(nome), idade(idade) {}
pessoa::~pessoa() {}
string pessoa::getNome() const { return nome; }
void pessoa::setNome(string nome)
{
    this->nome = nome;
}
int pessoa::getIdade() const { return idade; }
void pessoa::setIdade(int idade)
{
    this->idade = idade;
}
void pessoa::adiciona(animaldomestico *a)
{
    animais.push_back(a);
    a->setDono(this);
}
void pessoa::remove(string nome)
{
    for (int i = 0; i <= animais.size(); i++)
    {
        animaldomestico *animal = animais[i];
        if (animal->getNome() == nome)
        {
            animais.erase(animais.begin() + i);
            animal->setDono(NULL);
            break;
        }
    }
}
void pessoa::imprime(Criterio opcao)
{
    cout << "========== pessoa ==========" << endl;
    cout << "Nome: " << nome << endl;
    cout << "Idade: " << idade << endl;
    if (animais.size() > 0)
    {
        vector<animaldomestico *> copia = animais;
        switch (opcao)
        {
        case NOME:
        {
            sort(copia.begin(), copia.end(), animaldomestico::compNome);
            break;
        }
        case PESO:
        {
            sort(copia.begin(), copia.end(), animaldomestico::compPeso);
            break;
        }
        case ESPECIE:
        {
            sort(copia.begin(), copia.end(), animaldomestico::compEspecie);
            break;
        }
        }
        for (int i = 0; i < copia.size(); i++)
        {
            cout << "----------------------------" << endl;
            copia[i]->imprime();
        }
        cout << "----------------------------" << endl;
    }
}