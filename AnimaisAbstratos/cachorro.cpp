#include "cachorro.h"
using namespace std;
cachorro::cachorro(string nome, double peso, string raca) :
animaldomestico(nome, peso), raca(raca) {
}
cachorro::~cachorro() {
}
string cachorro::getRaca() const {
return raca;
}
void cachorro::setRaca(string raca) {
this->raca = raca;
}
string cachorro::getEspecie() {
return "cachorro";
}
void cachorro::imprime() {
animaldomestico::imprime();
cout << "Raça: " << this->raca << endl;
}
