#ifndef CACHORRO_H
#define CACHORRO_H

#include "animaldomestico.h"
using namespace std;

class cachorro : public animaldomestico
{
    public:
        cachorro(string nome, double peso, string raca);
        virtual ~cachorro();
        string getRaca() const;
        void setRaca(string raca);
        virtual string getEspecie();
        virtual void imprime();
    private:
        string raca;
};

#endif