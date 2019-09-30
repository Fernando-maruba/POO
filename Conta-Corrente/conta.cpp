#include "conta.h"
#include <iostream>

using namespace std;

ContaCorrente::ContaCorrente(int numero, double saldo){
    cout << "construindo conta: " << numero << endl;
    this-> numero = numero;
    this-> saldo = saldo;
}

ContaCorrente::~ContaCorrente(){
    cout << "Destruindo a conta: " << numero << endl;
}

bool ContaCorrente::retirada(double valor){
    if (saldo < valor){
        cout << "não há saldo suficiente para fazer a retirada"<< endl;
        return false;
    }
    else{
        saldo = saldo - valor;
        return true;
    }
}

void ContaCorrente::deposito(double valor){
    this-> saldo += valor;
}

bool ContaCorrente::transferencia(ContaCorrente &outra, double valor){ //passagem de uma conta que voce quer transferir para por referencia
    bool ok = this-> retirada(valor);
    if (ok){
        outra.deposito(valor);
    }
    return ok;
}

void ContaCorrente::imprime() {
    cout << "Numero da conta: "<< numero << "Saldo da conta: "<< saldo << endl;
}