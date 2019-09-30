#include "Pessoa.h"
#include <iostream>
#include <string.h>
using namespace std;

Pessoa::Pessoa(string nome, int cpf) : nome(nome), cpf(cpf){
}

Pessoa::~Pessoa(){

}

string Pessoa::getnome(){
    return nome;
}

int Pessoa::getCPF(){
    return cpf;
}

void Pessoa::imprime(){
    cout << "o nome eh " << nome << endl;
    cout << "o CPF eh " << cpf << endl;
}