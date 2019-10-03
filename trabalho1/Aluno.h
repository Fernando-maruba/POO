#ifndef ALUNO_H
#define ALUNO_H
#include "Pessoa.h"
namespace poo{

class Aluno : public Pessoa
{
public:
    Aluno(string, int, int, double, double, double, double, double);
    ~Aluno();
    int getRA();
    void imprime();
    double media();
    bool aprovado();
    bool sac();
    double notaSAC();

private:
    string nome;
    int cpf, RA;
    double n1, n2, t1, t2, t3;
};
}
#endif