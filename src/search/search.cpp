#include "search.h"

namespace linear
{
    int LinearsearchPerson (Pessoa list[], int id, int size)
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

    int LinearsearchRelation (relation list[], int id, int size)
    {
        for (int i = 0; i < size; i++)
        if (list[i].occurrence_id == id)
                return i;
        return -1;
    }
}

namespace binarysearch
{
    int Searchbinary(Ocorrencia list[], int target, int tamanho)
    {
        int ini = 0;
        int fim = tamanho - 1;
        while (ini <= fim)
        {
            int meio = (ini + fim) / 2;
            if (list[meio].id == target)
                return meio;
            if (list[meio].id < target)
                ini = meio + 1;
            if (list[meio].id > target)
                fim = meio - 1;
        }
        return -1;
    }
}
