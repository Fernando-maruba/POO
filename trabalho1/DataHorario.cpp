#include "DataHorario.h"

namespace poo
{
//Construtor de uma nova DataHorario
DataHorario::DataHorario(int dia, int mes, int ano, int hora, int minuto, int segundo)
{
    this->dia = dia;
    this->mes = mes;
    this->ano = ano;
    this->hora = hora;
    this->minuto = minuto;
    this->segundo = segundo;
}
//Destrutor do objeto
DataHorario::~DataHorario()
{
}
//As funçoes abaixo são para pegar os atributos que sao privados da classe para utilizar nas outras funçoes
int DataHorario::getDia()
{
    return dia;
}

int DataHorario::getMes()
{
    return mes;
}

int DataHorario::getAno()
{
    return ano;
}

int DataHorario::getHora()
{
    return hora;
}

int DataHorario::getMinuto()
{
    return minuto;
}

int DataHorario::getSegundo()
{
    return segundo;
}
//Funçao para imprimir a data e o horario no formato AM/PM (caso o booleano passado seja 1), ou no formato de 24h (caso o booleano passado seja 0)
void DataHorario::imprime(bool a)
{
    if (dia >= 10)
        cout << dia;
    else
        cout << "0" << dia;
    if (mes >= 10)
        cout << "/" << mes << "/" << ano << " ";
    else
        cout << "/"
             << "0" << mes << "/" << ano << " ";
    if (a)
    {
        if (hora > 12)
        {
            if (hora - 12 < 10)
                cout << "0" << hora - 12;
            else
                cout << hora - 12;
        }
        else
        {
            if (hora < 10)
                cout << "0" << hora;
            else
                cout << hora;
        }
    }
    else
    {
        if (hora >= 10)
            cout << hora;
        else
            cout << "0" << hora;
    }
    if (minuto < 10)
        cout << ":0" << minuto;
    else
        cout << ":" << minuto;
    if (a)
    {
        if (hora < 12)
        {
            if (segundo < 10)
                cout << ":0" << segundo << " AM" << endl;
            else
                cout << ":" << segundo << " AM" << endl;
        }
        else
        {
            if (segundo < 10)
                cout << ":0" << segundo << " PM" << endl;
            else
                cout << ":" << segundo << " PM" << endl;
        }
    }
    else
    {
        if (segundo < 10)
            cout << ":0" << segundo << endl;
        else
            cout << ":" << segundo << endl;
    }
}
// Funçao para imprimir a data e hora por extenso
void DataHorario::imprimePorExtenso()
{
    string anoExtenso[12] = {"Janeiro", "Fevereiro", "Março", "Abril", "Maio", "junho",
                             "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"};
    if (dia >= 10)
        cout << dia << " de ";
    else
        cout << "0" << dia << " de ";

    cout << anoExtenso[mes - 1] << " de " << ano << " -- ";
    if (hora >= 10)
        cout << hora << " hora(s), ";
    else
        cout << "0" << hora << " hora(s), ";
    if (minuto < 10)
        cout << "0" << minuto << " minuto(s) e ";
    else
        cout << minuto << " minuto(s) e ";
    if (segundo < 10)
        cout << "0" << segundo << " segundo(s)." << endl;
    else
        cout << segundo << " segundo(s)." << endl;
}
// Funçao que compara uma DataHora com outra e retorna 1 se a primeira for maior, 0 se forem iguais, e -1 se a primeira for menor que a segunda.
int DataHorario::compara(DataHorario &a)
{
    int i;
    if (ano > a.ano)
        i = 1;
    else if (ano < a.ano)
        i = -1;
    else
    {
        if (mes > a.mes)
            i = 1;
        else if (mes < a.mes)
            i = -1;
        else
        {
            if (dia > a.dia)
                i = 1;
            else if (dia < a.dia)
                i = -1;
            else
            {
                if (hora > a.hora)
                    i = 1;
                else if (hora < a.hora)
                    i = -1;
                else
                {
                    if (minuto > a.minuto)
                        i = 1;
                    else if (minuto < a.minuto)
                        i = -1;
                    else
                    {
                        if (segundo > a.segundo)
                            i = 1;
                        else if (segundo < a.segundo)
                            i = -1;
                        else
                            i = 0;
                    }
                }
            }
        }
    }
    return i;
}
} // namespace poo