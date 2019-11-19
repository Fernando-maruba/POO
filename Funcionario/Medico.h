#ifndef MEDICO_H
#define MEDICO_H
#include "Funcionario.h"
class Medico : public Funcionario {
public:
 Medico(int CPF, string nome, string especialidade);
 virtual ~Medico();
 virtual void imprime();
 virtual string getProfissao();
private:
 string especialidade;
};
#endif /* MEDICO_H */
