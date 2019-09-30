#ifndef PESSOA_H
#define PESSOA_H
#include <string.h>
#include <iostream>
using namespace std;

class Pessoa
{
private:
    string nome;
    int cpf;
public:
    Pessoa(string nome, int cpf);
    ~Pessoa();
    string getnome();
    int getCPF();
    void imprime();
};

#endif
