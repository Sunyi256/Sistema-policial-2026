#ifndef SORT_MERGE_H
#define SORT_MERGE_H


template <typename T>
void merge(T v[], int inicio, int meio, int fim);

template <typename T>
void merge_sort(T v[], int inicio, int fim);

template <typename T, typename Compare>
void merge(T v[], int inicio, int meio, int fim, Compare compare);

template <typename T, typename Compare>
void merge_Compare(T v[], int inicio, int fim, Compare compare);

#endif