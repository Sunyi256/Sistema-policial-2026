#ifndef INSERTION_SORT_H
#define INSERTION_SORT_H

void insert(int vetor[], int tamanho); // O(n)

template <typename T>
void insert(T vetor[], int tamanho)
{
    for (int i = 1; i < tamanho; i++)
    {
        T chave = vetor[i];
        int j = i - 1;

        while (j >= 0 && chave < vetor[j])
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

#endif