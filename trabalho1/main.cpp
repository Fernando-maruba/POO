#include "Pessoa.h"
#include <string.h>
#include <iostream>
using namespace std;

int main(){
    Pessoa pessoa1("Fernando", 485017253);
    pessoa1.getCPF();
    pessoa1.getnome();
    pessoa1.imprime();
    return 0;

}