#include <math.h>
#include "Ponto2D.h"

Ponto2D::Ponto2D(float a, float b){ //constructor
    x = a;
    y = b;
}

Ponto2D::~Ponto2D(){//destructor

}

float Ponto2D::distancia(Ponto2D p) {//metodo da distancia 
    float dx = x-p.x;
    float dy = y-p.y;
    

}