#include "search_linear.h"

#include "search_linear.h"

int Linearsearch (Pessoa list[], int id, int size)
{
    for (int i = 0; i < size; i++)
    if (list[i].id == id)
            return i;
    return -1;
}


int LinearsearchCases (Ocorrencia list[], int id, int size)
{
    for (int i = 0; i < size; i++)
    if (list[i].id == id)
            return i;
    return -1;
}