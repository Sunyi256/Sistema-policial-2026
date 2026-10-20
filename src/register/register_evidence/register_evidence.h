#ifndef REGISTER_EVIDENCE_H
#define REGISTER_EVIDENCE_H
// keep them separate

// third party libraries
#define MAX_EVIDENCIAS 100

// our own libraries
#include "../../structs/structs.h"

// c libraries
#include <iostream>
#include <limits>
#include <string>

// func REGISTER EVIDENCE
void cadastrandoEvidenciaAleatoria(int quantidade, struct Evidencia listaEvidencias[], int &quantidadeEvidencias, struct Ocorrencia listaOcorrencias[], int quantidadeOcorrencias); // O(n)
bool cadastrandoEvidenciaManual(struct Evidencia listaEvidencias[], int &quantidadeEvidencias, struct Ocorrencia listaOcorrencias[], int quantidadeOcorrencias);   // O(n)
#endif