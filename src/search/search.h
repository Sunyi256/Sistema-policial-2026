#ifndef SEARCH_H
#define SEARCH_H
#include "../structs/structs.h"
namespace linear 
{
    int LinearsearchPerson (Pessoa list[], int id, int size);
    int LinearsearchCases (Ocorrencia list[], int id, int size);
}

namespace binarysearch
{
    int Searchbinary(Ocorrencia list[], int target, int tamanho);
}
#endif