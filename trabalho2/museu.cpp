#include "museu.h"
#include "obra.h"

namespace catalogo
{

museu::museu(string nome) : nome(nome) //funcão construtora
{
}

museu::~museu() //função destrutora
{
}

string museu::getnome() //função para pegar o nome da obra (mesma coisa se repete para todos os "get's")
{
    return this->nome;
}

void museu::setnome(string nome) //função que recebe e seta o nome da obra (mesma coisa se repete para todas as funções "set's")
{
    this->nome = nome;
}

bool museu::adicionaobra(obra *obra)
{
    int i;
    for (i = 0; i < obra.size(); i++)
        if (obra[i]->getTitulo() == obra->getTitulo()) //Se a obra já existe então ela não vai ser adicionada 2x
            return false;

    obra.push_back(obra); //vai adicionar uma obra no fim do vetor de obras
    return true;
}

bool museu::removeobra(string titulo)
{
    int i = 0, j = 0;
    while (j == 0 && i < obra.size()) //enquanto j for igual a 0 e i for menor que o tamanho do vetor de obras
    {
        if (obra[i]->getTitulo() == titulo)
        {
            obra.erase(obra.begin() + i); //apaga o titulo e encerra o laço while
            j = 1;
        }
        i++;
    }
    if (j == 1)
        return true; //retorna true se consegue apagar
    else
        return false;
}

obra *museu::obtemobra(string titulo)
{
    int i = 0, j = 0;
    while (j == 0 && i < obra.size())
    {
        if (obra[i]->getTitulo() == titulo)
        {
            j = 1;
        }
        i++;
    }
    if (j == 1)
        return obras[i]; //retorna a obra na posição i do vetor
    else
        return NULL;
}

int museu::qtdeobras()
{
    return obra.size(); //retorna o tamanho do vetor de obras
}

int museu::qtdepinturas()
{
    int n = 0;
    int i;
    for (i = 0; i < obra.size(); i++)
    {
        if (obra[i]->getCategoria() == 1) //compara se a categoria é 1 de pintura
        {
            n++;
        }
    }
    return n; //retorna a quantidade de pinturas que existe no vetor obras
}

int museu::qtdeesculturas()
{
    int n = 0;
    int i;
    for (i = 0; i < obra.size(); i++)
    {
        if (obra[i]->getCategoria() == 2) //compara se a categoria é 2 de escultura
        {
            n++;
        }
    }
    return n; //retorna a quantidade de esculturas que existe no vetor obras
}

//a função primeiro compara o ano das obras para imprimí-las na ordem.
//Para isso é utilizada a função comparaAno de obra.cpp.
//Caso o ano seja igual a funçao ordena pela ordem alfabética.
void museu::imprime()
{
    if (obra.size() > 0)
    {
        vector<obra *> copia = obra;

        sort(copia.begin(), copia.end(), obra::comparaAno);

        for (int i = 0; i < obra.size(); i++)
        {
            cout << copia[i]->getTitulo() << endl;
        }
    }
}
//A função faz a mesma coisa que a anterior mas leva em conta a categoria da obra para imprimir apenas pinturas ou apenas esculturas.
//Mas faz a comparação do mesmo jeito.
void museu::imprimePorCategoria(int categoria)
{
    if (obra.size() > 0)
    {
        vector<obra *> copia = obra;
        int i;
        sort(copia.begin(), copia.end(), obra::comparaAno);
        for (i = 0; i < copia.size(); i++)
        {
            if (copia[i]->getCategoria() == categoria)
                cout << copia[i]->obra::getTitulo() << endl;
        }
    }
}
} // namespace catalogo
