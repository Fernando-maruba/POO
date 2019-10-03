#ifndef SESSAO_H
#define SESSAO_H
#include "DataHorario.h"
#include "Pessoa.h"
namespace poo{
class Sessao {
    public:
    Sessao(string nomePeca, DataHorario &d);
    ~Sessao();
    string proximoLivre();
    bool verifica(string);
    bool ocupa(string, Pessoa&);
    bool desocupa(string);
    int vagas();
    void imprime();
    private:
    string nomePeca;
    DataHorario *d;
};
}
#endif