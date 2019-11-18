#ifndef TRIANGULOS_H
#define TRIANGULOS_H

class Triangulos{
    public:
    Triangulos(double, double, double);
    ~Triangulos();
    virtual double getPerimetro();
   virtual double getArea();
    void imprime();
    int compare(Triangulos &t2);
    double getL1();
    double getL2();
    double getL3();

    private:
    double l1, l2, l3;

};
#endif