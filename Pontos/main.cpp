#include <cstdio>
#include "Ponto2D.h"
#include <iostream>

using std::cout;

int main()
{
    Ponto2D p1(4, 4);
    Ponto2D p2(7, 7);

 printf("dist(P1, P2) = %5.2f\n", p1.distancia(p2));
 printf("dist(P2, P1) = %5.2f\n", p2.distancia(p1));


    return 0;
}