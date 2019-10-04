#include "Pessoa.h"
#include "Aluno.h"
#include "DataHorario.h"
#include "Sessao.h"
#include <string.h>
#include <iostream>
using namespace std;
using namespace poo;

int main()
{
    Pessoa pessoa1("Fernando", 485017253);
    pessoa1.getCPF();
    pessoa1.getnome();
    pessoa1.imprime();
    Aluno a1("Brunao", 2398293, 707070, 5.82, 7.5, 8, 4, 3);
    a1.getRA();
    a1.imprime();
    cout << a1.aprovado() << endl;
    cout << a1.sac() << endl;
    cout << "A nota para a sac: " << a1.notaSAC() << endl;
    DataHorario d1(21, 9, 1998, 21, 9, 19);
    d1.getAno();
    d1.getDia();
    d1.getMes();
    d1.getHora();
    d1.getMinuto();
    d1.getSegundo();

    d1.imprime(1);
    d1.imprimePorExtenso();

    DataHorario d2(21, 9, 19908, 21, 9, 19);
    d2.getAno();
    d2.getDia();
    d2.getMes();
    d2.getHora();
    d2.getMinuto();
    d2.getSegundo();

    d2.imprime(0);
    d2.imprimePorExtenso();

    cout << d2.compara(d1) << endl;
    Sessao sessao1("Nomefilme", d2);
    
    cout << sessao1.proximoLivre() << endl;
    return 0;
}