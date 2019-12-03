#ifndef RETANGULO_H
#define RETANGULO_H

class Retangulo : public Poligono
{
public:
    Retangulo(vector<double> &);
    virtual ~Retangulo();
    virtual double getArea();

private:
};
#endif