#ifndef ANIMALDOMESTICO_H
#define ANIMALDOMESTICO_H

#include <string>
#include <iostream>
using namespace std;
class pessoa;

class animaldomestico
{
public:
    animaldomestico(string nome, double peso);
    virtual ~animaldomestico();
    string getNome() const;
    void setNome(string nome);
    double getPeso() const;
    void setPeso(double peso);
    pessoa* getDono() const;
    void setDono(pessoa*dono);
    virtual string getEspecie()=0;
    virtual void imprime();

    static bool compNome(animaldomestico* a1, animaldomestico* a2);
    static bool compPeso(animaldomestico* a1, animaldomestico* a2);
    static bool compEspecie(animaldomestico* a1, animaldomestico* a2);
    
private:
    pessoa* dono;
    string nome;
    double peso;
};

#endif

