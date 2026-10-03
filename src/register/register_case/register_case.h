#ifndef REGISTER_CASE_H
#define REGISTER_CASE_H
// keep them separate

// third party libraries
#define MAX_OCORRENCIAS 100

// our own libraries
#include "variaveis.h"
#include "stringParaChar.h"
#include "busca.h"

// c libraries
#include <iostream>
#include <limits>
#include <string>

// func REGISTER CASE
void cadastrandoOcorrenciaAleatoria(int quantidadeOcorrencias, struct Ocorrencia listaOcorrencias[]);
bool cadastrandoOcorrenciaManual(struct Ocorrencia listaOcorrencias[], int &quantidadeOcorrencias);
#endif