#include "Aluno.h"
#include "Pessoa.h"
namespace poo
{
/*Função para construir um aluno novo, usando a funçao de construçao de uma pessoa com os dados passados como parametros*/
Aluno::Aluno(string nome, int cpf, int RA, double n1, double n2, double t1, double t2, double t3) : Pessoa(nome, cpf)
{
    this->RA = RA;
    this->n1 = n1;
    this->n2 = n2;
    this->t1 = t2;
    this->t2 = t2;
    this->t3 = t3;
}
/*Função destrutora do objeto*/
Aluno::~Aluno()
{
}
//Funçao para pegar o RA dos atributos privados da classe
int Aluno::getRA()
{
    return RA;
}
//Funçao para imprimir a média, chamando a funçao do calculo da media na hora de imprimir
void Aluno::imprime()
{
    Pessoa::imprime();
    cout << "Media: " << Aluno::media() << endl;
}
//Funçao que calcula a media final ponderada com a media das provas e dos trabalhos
double Aluno::media()
{
    double mp, mt, mf;
    mp = (n1 + n2) / 2;
    mt = (t1 + 2 * t2 + 3 * t3) / 6;
    mf = (mp * 8 + mt * 2) / 10;
    return mf;
}
//Funçao que retorna true se a media do aluno for maior ou igual a 6 e false se for menor.
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
//Funçao que checa se o aluno está de recuperaçao
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
//Funçao que retorna quanto queo aluno precisa tirar na prova de recuperaçao.
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
} // namespace poo