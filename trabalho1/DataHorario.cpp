#include "DataHorario.h"

DataHorario::DataHorario(int dia, int mes, int ano, int hora, int minuto, int segundo)
{
    this->dia = dia;
    this->mes = mes;
    this->ano = ano;
    this->hora = hora;
    this->minuto = minuto;
    this->segundo = segundo;
}
DataHorario::~DataHorario()
{
}
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

void DataHorario::imprime(bool a)
{
    if(mes>=10)
    cout << dia << "/" << mes << "/" << ano << " ";
    else
    cout << dia << "/" << "0" << mes << "/" << ano << " ";
    if (a)
    {
        if (hora > 12)
        {
            cout << "0" <<  hora - 12 << ":" << minuto << ":" << segundo << " PM." << endl;
        }
        else
        {
            cout << hora << ":" << minuto << ":" << segundo << "AM." << endl;
        }
    }
    else
    {
        if (hora < 12)
        cout << "0" << hora << ":" << minuto << ":" << segundo << endl;
    }
}

void DataHorario::imprimePorExtenso()
{
    string anoExtenso[12] = {"Janeiro", "Fevereiro", "Março", "Abril", "Maio", "junho", "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"};
    cout << dia << " de " << anoExtenso[mes - 1] << " de " << ano << " -- " << hora << " horas, " << minuto << " minutos e " << segundo << " segundos." << endl;
}
