#include "struct_case.h"
#include "sort_insert.h"
#include "sort_merge.h"

static bool compareId(const Ocorrencia &a, const Ocorrencia &b)
{
    return a.id < b.id;
}

static bool compareBySeverity(const Ocorrencia &a, const Ocorrencia &b)
{
    return a.gravidade < b.gravidade;
}

void sortById(Ocorrencia ocorrencias[], int size)
{
    merge_Compare(ocorrencias, 0, size - 1, compareId);
}

void sortBySeverity(Ocorrencia ocorrencias[], int size)
{
    insert_Compare(ocorrencias, size, compareBySeverity);
}