#include "Aluno.h"
#include "Pessoa.h"
namespace poo{

Aluno::Aluno(string nome, int cpf, int RA, double n1, double n2, double t1, double t2, double t3) : Pessoa(nome, cpf)
{
    this->RA = RA;
    this->n1 = n1;
    this->n2 = n2;
    this->t1 = t2;
    this->t2 = t2;
    this->t3 = t3;
}

Aluno::~Aluno()
{
}

int Aluno::getRA()
{
    return RA;
}

void Aluno::imprime()
{
    Pessoa::imprime();
    cout << "Media: " << Aluno::media() << endl;
}

double Aluno::media()
{
    double mp, mt, mf;
    mp = (n1 + n2) / 2;
    mt = (t1 + 2 * t2 + 3 * t3) / 6;
    mf = (mp * 8 + mt * 2) / 10;
    return mf;
}

bool Aluno::aprovado()
{
    if (Aluno::media() >= 6)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool Aluno::sac()
{
    bool x;
    if (Aluno::media() >= 5 && Aluno::media() < 6)
    {
        x = true;
    }
    else
    {
        x = false;
    }
    return x;
}

double Aluno::notaSAC()
{
    double SAC;
    if (!(Aluno::sac()))
        return 0;
    else
    {
        SAC = 12 - Aluno::media();
    }
    return SAC;
}
}