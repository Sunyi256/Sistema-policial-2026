#include "sort_merge.h"

void merge(T v[], int inicio, int meio, int fim)
{
    int n1 = meio - inicio + 1;
    int n2 = fim - meio;

    T esquerda[n1];
    T direita[n2];

    for (int i = 0; i < n1; i++)
        esquerda[i] = v[inicio + i];

    for (int j = 0; j < n2; j++)
        direita[j] = v[meio + 1 + j];

    int i = 0, j = 0;
    int k = inicio;

    while (i < n1 && j < n2)
    {
        if (esquerda[i] <= direita[j])
        {
            v[k] = esquerda[i];
            i++;
        }
        else
        {
            v[k] = direita[j];
            j++;
        }
        k++;
    }

    while (i < n1) { v[k] = esquerda[i]; i++; k++; }
    while (j < n2) { v[k] = direita[j]; j++; k++; }
}

void merge_sort(T v[], int inicio, int fim)
{
    if (inicio < fim)
    {
        int meio = inicio + (fim - inicio) / 2;
        merge_sort(v, inicio, meio);
        merge_sort(v, meio + 1, fim);
        merge(v, inicio, meio, fim);
    }
}