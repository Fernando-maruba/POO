#include "Sessao.h"
#include "DataHorario.h"
#include "Pessoa.h"
#include "string.h"
#include <iostream>
using namespace std;
namespace poo
{
Sessao::Sessao(string nomePeca, DataHorario &d) : nomePeca(nomePeca), d(d)
{
   Pessoa pessoasTeatro[210];
    for (int i=0; i <=210; i++){
        pessoasTeatro[i] = NULL;
    }
}
Sessao::~Sessao(){

};
string Sessao::proximoLivre()
{
    int i = 0, n = 209;
    while (i != n + 1)
    {
        if (!(pessoasTeatro[i].compare(NULL)))
        {
            if (i != n + 1)
            {

                if (i < 14)
                {
                    return "a0";
                }
                else if (i < 28)
                    return "a1";

                else
                    return "Cheio";
            }
        }
        i++;
    }
};
} // namespace poo