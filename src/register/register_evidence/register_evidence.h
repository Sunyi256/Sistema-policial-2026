#ifndef REGISTER_EVIDENCE_H
#define REGISTER_EVIDENCE_H
// keep them separate

// third party libraries
#define MAX_EVIDENCIAS 100

// our own libraries
#include "src/structs/structs.h"

// c libraries
#include <iostream>
#include <limits>
#include <string>

// func REGISTER EVIDENCE
void cadastrandoEvidenciaAleatoria(int quantidadeProvas, struct Evidencia listaProvas[]); // O(n)
bool cadastrandoEvidenciaManual(struct Evidencia listaProvas[], int &quantidadeProvas);   // O(n)
#endif