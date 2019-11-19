#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H
#include <string>
#include <iostream>
using namespace std;
class Funcionario {
public:
 Funcionario(int CPF, string nome);
 virtual ~Funcionario();
 virtual void imprime();
 virtual string getProfissao() = 0; // método abstrato
private:
 int CPF;
 string nome;
};
#endif /* FUNCIONARIO_H */