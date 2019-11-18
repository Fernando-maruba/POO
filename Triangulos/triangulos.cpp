#include "triangulos.h"
#include <math.h>
#include <iostream>
using namespace std;

Triangulos::Triangulos(double, double, double) : l1(l1), l2(l2), l3(l3)
{
}

Triangulos::~Triangulos()
{
}
double Triangulos::getL1()
{
    return l1;
}
double Triangulos::getL2()
{
    return l2;
}
double Triangulos::getL3()
{
    return l3;
}
double Triangulos::getPerimetro()
{
    double p = 0;
    p = l1 + l2 + l3;
    return p;
}
double Triangulos::getArea()
{
    double p;
    double A;
    p = this->getPerimetro();
    A = (p - l1) * (p - l2) * (p - l3);
    A = A * p;
    A = sqrt(A);
    return A;
}

int Triangulos::compare(Triangulos &t2)
{
    double diff = this->getArea() - t2.getArea();
    return (diff < 0) ? -1 : (diff > 0) ? 1 : 0;
}