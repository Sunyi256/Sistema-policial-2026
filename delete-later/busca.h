#ifndef BUSCA_H
#define BUSCA_H
int Linearsearch (Pessoa list[], int id, int size)
{
    for (int i = 0; i < size; i++)
    if (list[i].id == id)
            return i;
    return -1;
}
#endif