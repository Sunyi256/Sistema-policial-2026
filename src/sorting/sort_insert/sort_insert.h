#ifndef INSERTION_SORT_H
#define INSERTION_SORT_H

void insert(int vetor[], int tamanho); // O(n)

template <typename T>
void insert(T vetor[], int tamanho);

template <typename T, typename Compare>
void insert_Compare(T vetor[], int tamanho, Compare compare);

#endif