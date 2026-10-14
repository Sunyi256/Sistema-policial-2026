#ifndef BUSCA_H
#define BUSCA_H


template <typename T>
int Buscabi(T vet[], T target, int tamanho) // Busca binária
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
int Linearsearch (Pessoa list[], int id, int size)
{
    for (int i = 0; i < size; i++)
    if (list[i].id == id)
            return i;
    return -1;
}

#endif
