#include <string>
#include "datas.h"
#include <iostream>

using namespace std;

datas::datas(int dia, int mes, int ano)
{
    int a = dia;
    int b = mes;
    int c = ano;
}

datas::~datas()
{
}

void datas::imprime()
{
    cout << dia << "/" << mes << "/" << ano << endl;
}

void datas::imprimeextenso()
{
    string meses[12] = {"Janeiro", "Fevereiro", "Março", "Abril", "Maio", "Junho", "Julho", "agosto",
                        "setembro", "Outubro", "Novembro", "Dezembro"};

    cout << dia << "de " << meses[mes - 1] << "de " << ano << endl;
}

bool datas::bissexto()
{
    if (ano % 400 == 0)
    {
        return true;
    }
    else if (ano % 4 == 0 && ano % 100 != 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int datas::compare(datas data)
{
    if (this->ano != data.ano)
    {
        return this->ano - data.ano;
    }
    else if (this->mes != data.mes)
    {
        return this->mes - data.mes;
    }
    else
    {
        return this->dia - data.dia;
    }
}
