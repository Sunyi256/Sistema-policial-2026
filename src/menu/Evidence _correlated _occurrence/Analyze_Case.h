#ifndef ANALYZE_CASE_H
#define ANALYZE_CASE_H
#include "../../structs/structs.h"
#include "../../search/search.h"
#include <iostream>

int sumRelevance(relation list[], int n, int idOcorrencia);
void analyzeCase(Ocorrencia listaOcorrencias[], int quantidadeOcorrencias, int idOcorrencia, relation relacoes[], int quantidadeRelacoes);

#endif