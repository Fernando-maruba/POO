#include "peixe.h"
using namespace std;
peixe::peixe(string nome, double peso, string habitat) :
animaldomestico(nome, peso), habitat(habitat) {
}
peixe::~peixe() {
}
string peixe::getHabitat() const {
return habitat;
}
void peixe::setHabitat(string habitat) {
this->habitat = habitat;
}
string peixe::getEspecie() {
return "peixe";
}
void peixe::imprime() {
animaldomestico::imprime();
cout << "Habitat: " << this->habitat << endl;
}
