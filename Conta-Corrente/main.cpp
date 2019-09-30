#include "conta.h"
#include <iostream>

using namespace std;

int main()
{
    ContaCorrente c1(1000, 1200.50); // construtor com 2 paraêmetros
    ContaCorrente c2(2000);          // construtor com 1 paraêmetro (segundo paraêmetro com valor default)

    cout << endl
         << "Antes da Transferência" << endl
         << endl;

    c1.imprime();
    c2.imprime();

    c1.transferencia(c2, 500);

    cout << endl
         << "Depois da Transfereência" << endl
         << endl;

    c1.imprime();
    c2.imprime();

    cout << endl;
    return 0;
}