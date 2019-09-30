#include <cstdio>
#include "Ponto2D.h"
#include <iostream>

using std::cout;

int main(){
    Ponto2D p1(4,4);
    Ponto2D p2(7,7);

        cout << "distancia de p1 a p2 é: "<< p1.distancia(p2);
        cout << "distancia de p2 a p1 é: "<< p2.distancia(p1);
    
    return 0;
        
}