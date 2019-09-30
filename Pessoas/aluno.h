#ifndef ALUNO_H
#define ALUNO_H
#include "pessoas.h"

class Aluno : public Pessoa
{
public:
    Aluno(string nome, int idade, int RA);
    int getRA() const;
    void setRA(int RA);
    virtual void imprime();

private:
    int RA;
};

#endif