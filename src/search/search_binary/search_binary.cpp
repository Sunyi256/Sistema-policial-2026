#include "search_binary.h"
#include "struct_case.h"


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
}