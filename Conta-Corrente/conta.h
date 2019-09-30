#ifndef CONTA_H
#define CONTA_H

class ContaCorrente
{
private:
    int numero;
    double saldo; //atributos da classe
public:
    ContaCorrente(int numero, double saldo = 0); //construtor
    virtual ~ContaCorrente(); //destructor
    bool retirada(double valor);
    void deposito(double valor);
    bool transferencia(ContaCorrente &outra, double valor);
    void imprime();
};

#endif /* CONTA_H */