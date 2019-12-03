#ifndef PESSOA_H
#define PESSOA_H

#include "animaldomestico.h"
#include <algorithm>
#include <vector>
using namespace std;

enum Criterio { NOSORTED, NOME, PESO, ESPECIE};

class pessoa
{
    public:
        pessoa(string nome, int idade);
        virtual ~pessoa();
        string getNome() const;
        void setNome(string nome);
        int getIdade() const;
        void setIdade (int sidade);
        void adiciona(animaldomestico* a);
        void remove(string nome);
        void imprime(Criterio opcao = NOSORTED);
    private:
        string nome;
        int idade;
        vector<animaldomestico*> animais;
};
#endif