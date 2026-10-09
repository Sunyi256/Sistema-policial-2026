#include "sort_insert.h"


void insert(T vetor[], int tamanho)
{
    for (int i = 1; i < tamanho; i++)
    {
        T auxiliar = vetor[i];
        int j = i - 1;
        while (j >= 0 && auxiliar < vetor[j])
        {
            vetor[j + 1] = vetor[j];
            j--;
        }
        vetor[j + 1] = auxiliar;
    }
}