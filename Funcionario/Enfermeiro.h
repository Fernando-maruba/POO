#ifndef ENFERMEIRO_H
#define ENFERMEIRO_H
#include "Funcionario.h"
class Enfermeiro : public Funcionario{
public:
 Enfermeiro(int CPF, string nome, int CRE);
 virtual ~Enfermeiro();
 virtual void imprime();
 virtual string getProfissao();
private:
 int CRE; // Nuémero de registro no Conselho Regional de Enfermagem
};
#endif /* ENFERMEIRO_H */