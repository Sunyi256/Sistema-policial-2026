#ifndef SORT_CASE_H
#define SORT_CASE_H

#include "../../structs/structs.h"

bool compareId(const Ocorrencia &a, const Ocorrencia &b);

bool compareBySeverity(const Ocorrencia &a, const Ocorrencia &b);

void sortById(Ocorrencia ocorrencias[], int size);

void sortBySeverity(Ocorrencia ocorrencias[], int size);
#endif