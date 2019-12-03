#include "peixe.h"
#include "pessoa.h"
#include "cachorro.h"
#include "animaldomestico.h"
using namespace std;
int main(int argc, char** argv) {
pessoa* p = new pessoa("Joao", 12);
peixe* nemo = new peixe("Nemo", 0.15, "Água salgada");
p->adiciona(nemo);
cachorro* teo = new cachorro("Teo", 6.2, "pug");
p->adiciona(teo);
peixe* dory = new peixe("Dory", 0.2, "Água doce");
p->adiciona(dory);
cout << "================== SEM ORDENAÇÃO ==================" << endl << endl;
p->imprime();
cout << endl;
cout << "================== ORDENAÇÃO (NOME) ==================" << endl << endl;
p->imprime(NOME);
cout << endl;
cout << "================== ORDENAÇÃO (PESO) ==================" << endl << endl;
p->imprime(PESO);
cout << endl;
cout << "================== ORDENAÇÃO (ESPECIE) ==================" << endl << endl;
p->imprime(ESPECIE);
cout << endl;
cout << "================== REMOÇÃO DE UM ELEMENTO ==================" << endl << endl;
p->remove("Teo");
p->imprime(NOME);
return 0;
}