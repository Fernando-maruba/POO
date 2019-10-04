#include "Pessoa.h"
#include <iostream>
#include <string.h>
using namespace std;
namespace poo
{
//Funçao para construir um objeto Pessoa novo
Pessoa::Pessoa(string nome, int cpf) : nome(nome), cpf(cpf)
{
}
//Destrutor do objeto 
Pessoa::~Pessoa()
{
}

//As duas funçoes abaixo sao para pegar os atributos de classe que estao privados
string Pessoa::getnome()
{
    return nome;
}

int Pessoa::getCPF()
{
    return cpf;
}

//Funçao para imprimir os dados de uma pessoa
void Pessoa::imprime()
{
    cout << "o nome eh " << nome << endl;
    cout << "o CPF eh " << cpf << endl;
}
} // namespace poo