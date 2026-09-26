#ifndef BUSCA_H
#define BUSCA_H

template <typename T>
int Buscal(T vet[], T target, int tamanho)
{
    for (int i = 0; i < tamanho; i++)
        if (vet[i] == target)
            return i;
    return -1;
}

template <typename T>
int Buscabi(T vet[], T target, int tamanho)
{
    int ini = 0;
    int fim = tamanho - 1;
    while (ini <= fim)
    {
        int meio = (ini + fim) / 2;
        if (vet[meio] == target)
            return meio;
        if (vet[meio] < target)
            ini = meio + 1;
        if (vet[meio] > target)
            fim = meio - 1;
    }
    return -1;
}

#endif