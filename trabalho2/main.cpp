#include <iostream>
#include "obra.h"
#include "pintura.h"
#include "escultura.h"
#include "museu.h"

const int PINTURA = 1;
const int ESCULTURA = 2;

using namespace std;
using namespace catalogo;

void imprime(museu &museu)
{
    cout << "Imprimindo informações sobre o museu:" << endl;
    cout << "Quantidade de obras: " << museu.qtdeobras() << endl;
    museu.imprime();

    cout << "Imprimindo as fichas de pintura: " << endl;

    cout << "Quantidade de pinturas: " << museu.qtdepinturas() << endl;
    museu.imprimePorCategoria(PINTURA);

    cout << "=Imprimindo as esculturas: " << endl;

    cout << "Quantidade de esculturas: " << museu.qtdeesculturas() << endl;
    museu.imprimePorCategoria(ESCULTURA);
}

int main()
{

    obra *o1 = new pintura("Delano Beder", "Delano Beder", "Madeira", 1990, "Óleo");
    obra *o2 = new escultura("Pieta", "Michelangelo", "Marmore", 1499, 1.99);
    museu museu("Masp");

    cout << endl;
    cout << "Teste de adicionar obra: " << endl;
    cout << endl;
    bool res = museu.adicionaobra(o1);
    cout << "Adiciona Obra (" << o1->getTitulo() << ") => " << res << " deveria ser " << true << endl;

    res = museu.adicionaobra(o2);
    cout << "Adiciona Obra (" << o2->getTitulo() << ") => " << res << " deveria ser " << true << endl;

    res = museu.adicionaobra(o1);
    cout << "Adiciona Obra (" << o1->getTitulo() << ") => " << res << " deveria ser " << false << endl;

    res = museu.adicionaobra(o2);
    cout << "Adiciona Obra (" << o2->getTitulo() << ") => " << res << " deveria ser " << false << endl;

    imprime(museu);

    cout << "Testando remove obra: " << endl;
    res = museu.removeobra("Pieta");
    cout << "Remove Obra (Pieta) => " << res << " deveria ser " << true << endl;
    res = museu.removeobra("Delano Beder");
    cout << "Remove Obra (Delano Beder) => " << res << " deveria ser " << false << endl;

    imprime(museu);

    cout << endl;

    cout << "Testando obtém obra: " << endl;
    obra *o3 = museu.obtemobra("Delano Beder");
    cout << endl;
    if (o3 != NULL)
    {
        o3->imprimeFicha();
    }

    cout << "Testando obtém obra para escultura: " << endl;

    obra *o4 = museu.obtemobra("Pieta");
    cout << "Nao deveria imprimir nada" << endl;
    cout << "(obra nao se encontra no acervo)" << endl;
    if (o4 != NULL)
    {
        o4->imprimeFicha();
    }
    return 0;
}
