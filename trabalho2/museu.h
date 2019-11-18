#ifndef MUSEU_H
#define MUSEU_H

#include "pintura.h"
#include "escultura.h"
#include <vector>
#include <algorithm>
#include <iostream>

namespace catalogo
{
class museu
{
private:
    string nome;
    vector<obra *> obra;

public:
    museu(string nome);
    virtual ~museu();
    string getnome();
    void setnome(string nome);
    bool adicionaobra(obra *obra);
    bool removeobra(string titulo);
    obra *obtemobra(string titulo);
    int qtdeobras();
    int qtdepinturas();
    int qtdeesculturas();
    void imprime();
    void imprimePorCategoria(int categoria);
};

} // namespace catalogo
#endif