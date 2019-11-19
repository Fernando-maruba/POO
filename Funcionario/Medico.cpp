#include "Medico.h"
Medico::Medico(int CPF, string nome, string especialidade) :
Funcionario(CPF, nome), especialidade(especialidade) {
}
Medico::~Medico() {
}
void Medico::imprime() {
 Funcionario::imprime();
 cout << "Especialidade : " << especialidade << endl;
}
string Medico::getProfissao() {
 return "Médico";
}