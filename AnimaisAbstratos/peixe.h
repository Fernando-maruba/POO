#ifndef PEIXE_H
#define PEIXE_H

#include "animaldomestico.h"

class peixe : public animaldomestico {
    public:
        peixe(string nome, double peso, string habitat);
        virtual ~peixe();
        string getHabitat() const;
        void setHabitat(string habitat);
        virtual string getEspecie();
        virtual void imprime();

    private:
    string habitat;
};

#endif