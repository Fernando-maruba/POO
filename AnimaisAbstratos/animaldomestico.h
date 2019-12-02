#ifndef ANIMALDOMESTICO_H
#define ANIMALDOMESTICO_H

#include <string>
#include <iostream>
using namespace _STDLIB_H
class Pessoa;

class animaldomestico
{
public:
    animaldomestico(string nome, double peso);
    virtual ~animaldomestico();
    string getNome() const;
    void setNome(string nome);
    double getPeso() const;
    void setPeso(double peso);
    Pessoa* getDono() const;
    void setDono(Pessoa*dono);
    virtual string getEspecie()=0;
    virtual void imprime();

    static bool compNome(animaldomestico* a1, animaldomestico* a2);
    static bool compPeso(animaldomestico* a1, animaldomestico* a2);
    static bool compEspecie(animaldomestico* a1, animaldomestico* a2);
    
private:
    Pessoa* dono;
    string nome;
    double peso;
};

#endif

