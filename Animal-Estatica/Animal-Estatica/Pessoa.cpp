#include "Pessoa.h"
#include <algorithm>
using namespace std;

Pessoa::Pessoa(string nome, int idade) :
nome(nome), idade(idade) {
    cout << "Construindo Pessoa: [" << nome << "]" << endl;
    qtde = 0;
}

Pessoa::~Pessoa() {
    cout << "Destruindo Pessoa: [" << nome << "]" << endl;
}

string Pessoa::getNome() const {
    return nome;
}

void Pessoa::setNome(string nome) {
    this->nome = nome;
}

int Pessoa::getIdade() const {
    return idade;
}

void Pessoa::setIdade(int idade) {
    this->idade = idade;
}

void Pessoa::adiciona(AnimalDomestico* a) {
    if (qtde <= 4) {
        animais[qtde++] = a;
    }
}

void Pessoa::remove(string nome) {
    bool found = false;
    int i = 0;

    while (i < qtde && !found) {
        if (animais[i]->getNome().compare(nome) == 0) {
            found = true;
        } else {
            i++;
        }
    }
    
    animais[i]->setDono(NULL);
    
    while (i < qtde) {
        animais[i] = animais[i + 1];
        i++;
    }

    qtde = qtde - 1;
}

void Pessoa::imprime() {
    cout << "Nome: " << nome << endl;
    cout << "Idade: " << idade << endl;
    cout << "=== Animais === " << endl;
    for (int i = 0; i < qtde; i++) {
        animais[i]->imprime();
        cout << endl;
    }
}
