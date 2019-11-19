#include "Funcionario.h"
Funcionario::Funcionario(int CPF, string nome) :
CPF(CPF), nome(nome) {
}
Funcionario::~Funcionario() {
}
void Funcionario::imprime() {
 cout << "Nome : " << nome << endl;
 cout << "CPF : " << CPF << endl;
 cout << "Profissaão : " << getProfissao() << endl;
}