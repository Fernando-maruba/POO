#include <iostream>
#include "datas.h"
using namespace std;
int main(int argc, char **argv)
{
    datas d1(20, 8, 2019);
    datas d2(20, 8, 2020);
    datas d3(20, 8, 2019);

    d1.imprime();
    d1.imprimeextenso();

    d2.imprime();
    d2.imprimeextenso();

    cout << boolalpha;
    cout << d1.bissexto() << endl;
    cout << d2.bissexto() << endl;

    cout << noboolalpha;
    cout << d1.bissexto() << endl;
    cout << d2.bissexto() << endl;

    cout << d1.compare(d2) << endl;
    cout << d1.compare(d3) << endl;
    cout << d2.compare(d1) << endl;

    return 0;
}
