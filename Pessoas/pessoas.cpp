#include "pessoas.h"
#include <iostream>
#include <string.h>
using namespace std;

Pessoa::Pessoa(string nome, int idade) : nome(nome), idade(idade){
}

string Pessoa::getNome(){
    return nome;
}

int Pessoa::getIdade(){
    return idade;
}

void Pessoa::setNome(string nome){
    this->nome = nome;
}

void Pessoa::setIdade(int idade){
    this->idade = idade;
}

void Pessoa::imprime(){
    cout << "Nome: " << nome << endl;
    cout << "Idade: " << idade << endl;
}

int Pessoa::compare (Pessoa p){
    return idade -p.idade;
}