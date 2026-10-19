#include "Search_People.h"


void printP(Pessoa list[], int id, int size)
{
    int index = linear::LinearsearchPerson(list, id, size);
    if (index == -1)
    {
    std::cout <<  "Esta pessoa nao esta cadastrada." << '\n';
    }
    else
    {
        std::cout << "Nome :" << list[index].nome << '\n';
        std::cout << "Idade :" << list[index].idade << '\n';
        std::cout << "Cidade :" << list[index].cidade << '\n';
    }
    
}