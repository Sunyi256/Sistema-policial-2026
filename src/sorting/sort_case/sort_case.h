#ifndef SORT_CASE_H
#define SORT_CASE_H

#include "src\structs\structs.h"

static bool compareId(const Ocorrencia &a, const Ocorrencia &b);

static bool compareBySeverity(const Ocorrencia &a, const Ocorrencia &b);

void sortById(Ocorrencia ocorrencias[], int size);

void sortBySeverity(Ocorrencia ocorrencias[], int size);
#endif