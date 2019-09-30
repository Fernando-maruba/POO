#ifndef PONTO2D_H
#define PONTO2D_H

class Ponto2D
{
private:
    float x, y; //atributos da classe
public:
    Ponto2D(float x, float y); //construtor
    virtual ~Ponto2D();        //destutor

    float distancia(Ponto2D p); //método da classe 
};

Ponto2D::Ponto2D(/* args */)
{
}

Ponto2D::~Ponto2D()
{
}
