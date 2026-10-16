#include "Search_People.h"
#include "search_linear.h"


void printP(Pessoa list[], int id, int size)
{
    int index = Linearsearch(list, id, size);
    if (index == -1)
    {
    std::  cout <<  "Esta pessoa nao esta cadastrada." << std:: endl;
    }
    else
    {
        std:: cout << "Nome :" << list[index].nome << std:: endl;
        std:: cout << "Idade :" << list[index].idade << std:: endl;
        std:: cout << "Cidade :" << list[index].cidade << std:: endl;
    }
    
}