#include "sort_insert.h"

void insert(int vetor[], int tamanho)
{
    for (int i = 1; i < tamanho; i++)
    {
        int chave = vetor[i];
        int j = i - 1;

        while (j >= 0 && vetor[j] > chave)
        {
            vetor[j + 1] = vetor[j];
            j--;
        }
        vetor[j + 1] = chave;
    }
}

template <typename T, typename Compare>
void insert_Compare(T vetor[], int tamanho, Compare compare)
{
    for (int i = 1; i < tamanho; i++)
    {
        T chave = vetor[i];
        int j = i - 1;

        while (j >= 0 && compare(chave, vetor[j]))
        {
            vetor[j + 1] = vetor[j];
            j--;
        }
        vetor[j + 1] = chave;
    }
}
