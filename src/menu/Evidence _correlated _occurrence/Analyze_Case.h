#ifndef ANALYZE_CASE_H
#define ANALYZE_CASE_H
#include "src/structs/structs.h"
#include "src/search/search_linear/search_linear.h"
#include <iostream>

int sumRelevance(relation list[], int n, int idOcorrencia);
void analyzeCase(Ocorrencia listaOcorrencias[], int quantidadeOcorrencias, int idOcorrencia, relation relacoes[], int quantidadeRelacoes);

#endif