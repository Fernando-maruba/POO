#ifndef DATAS_H
#define DATAS_H

class datas
{
private:
    int dia, mes, ano; //argumentos da classe
public:
    datas(int dia, int mes, int ano);
    ~datas();
    void imprime();
    void imprimeextenso();
    bool bissexto();
    int compare(datas data);
};
#endif /* DATAS_H */