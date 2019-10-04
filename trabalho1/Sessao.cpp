#include "Sessao.h"
#include "DataHorario.h"
#include "string.h"
#include <iostream>
using namespace std;
namespace poo
{
Sessao::Sessao(string nomePeca[], DataHorario &d)
{
    memset(nomePeca, NULL, 209);
    DataHorario h(d);
}
Sessao::~Sessao(){

};
string Sessao::proximoLivre()
{
    int i = 0, n = 209;
    while ((nomePeca[i] == NULL) && i != n+1)
    {
        i++;
    }
    if (i != n+1){
        if (i < 14){
            return "a0";
        }
        else if (i < 28)
            return "a1";
    }
    else
        return "Cheio";
}

bool Sessao::verifica(string a){
    if 
}
} // namespace poo