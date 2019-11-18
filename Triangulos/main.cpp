#include "triangulos.h"
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    Triangulos t1(3, 4, 5);
    t1.getL1();
    t1.getL2();
    t1.getL3();
    cout << t1.getPerimetro() << endl;
    cout << t1.getArea() << endl;
    Triangulos t2(6, 8, 10);
    t1.compare(t2);

    return 0;
}