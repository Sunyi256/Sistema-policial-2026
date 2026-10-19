#include <cstring>

#include "sort_people.h"
#include "src/sorting/sort_insert/sort_insert.h"
#include "src/sorting/sort_merge/sort_merge.h"

int compareStrings(const char *a, const char *b)
{
    int i = 0;

    while (a[i] != '\0' && b[i] != '\0')
    {
        if (a[i] < b[i])
            return -1;
        if (a[i] > b[i])
            return 1;
        i++;
    }

    if (a[i] == '\0' && b[i] == '\0')
        return 0;
    if (a[i] == '\0')
        return -1;
    return 1;
}

int compareByCity(const Pessoa &a, const Pessoa &b)
{
    return compareStrings(a.cidade.c_str(), b.cidade.c_str()) < 0;
}

static bool compareByName(const Pessoa &a, const Pessoa &b)
{
    return compareStrings(a.nome.c_str(), b.nome.c_str()) < 0;
}

static bool compareById(const Pessoa &a, const Pessoa &b)
{
    return a.id < b.id;
}

void sortById(Pessoa pessoas[], int size)
{
    if (size <= 1)
        return;

    merge_Compare(pessoas, 0, size - 1, compareById);
}

void sortByName(Pessoa pessoas[], int size)
{
    if (size <= 1)
        return;

    merge_Compare(pessoas, 0, size - 1, compareByName);
}

void sortByCity(Pessoa pessoas[], int size)
{
    if (size <= 1)
        return;

    merge_Compare(pessoas, 0, size - 1, compareByCity);
}