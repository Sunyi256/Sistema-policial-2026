#ifndef SORT_PEOPLE_H
#define SORT_PEOPLE_H

#include "struct_person.h"

int compareStrings(const char *a, const char *b);
static bool compareById(const Pessoa &a, const Pessoa &b);
static bool compareByName(const Pessoa &a, const Pessoa &b);
void sortById(Pessoa pessoas[], int size);
void sortByName(Pessoa pessoas[], int size);

#endif