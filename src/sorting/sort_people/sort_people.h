#ifndef SORT_PEOPLE_H
#define SORT_PEOPLE_H

#include "../../structs/structs.h"

int compareStrings(const char *a, const char *b);
bool compareById(const Pessoa &a, const Pessoa &b);
bool compareByName(const Pessoa &a, const Pessoa &b);
void sortById(Pessoa pessoas[], int size);
void sortByName(Pessoa pessoas[], int size);
#endif