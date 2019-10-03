#include "Sessao.h"
#include <iostream>
using namespace std;
namespace poo
{
Sessao::Sessao(string nomePeca, DataHorario &d)
{
    int k = 14;
    int f = 15;
    int i, j;
    for (i = 1; i <= f; i++)
    {
        for (j = 1; j <= k; k++){
            this->nomePeca = nomePeca;
            this->d = &d;
        }
    }
}
} // namespace poo