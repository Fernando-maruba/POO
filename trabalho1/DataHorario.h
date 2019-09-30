#ifndef DATAHORARIO_H
#define DATAHORARIO_H
#include <iostream>
using namespace std;

class DataHorario{
    public: 
    DataHorario(int, int, int, int, int, int);
    ~DataHorario();
    int compara(DataHorario&);
    int getDia();
    int getMes();
    int getAno();
    int getHora();
    int getMinuto();
    int getSegundo();
    void imprime(bool);
    void imprimePorExtenso();
    
    private:
    int dia, mes, ano, hora, minuto, segundo;
};

#endif /*DATAHORARIO_H*/