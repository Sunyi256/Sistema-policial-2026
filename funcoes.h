#ifndef FUNCOES_H
#define FUNCOES_H
#include "variaveis.h"
#include <iostream>
#include <chrono>
#include <thread>
#include <ctime>
#include "stringParaChar.h"
#include "busca.h"
#include <ctime>

using namespace std;

bool cadastrandoPessoaManual(struct Pessoa listaPessoas[], int &quantidadePessoas);
void cadastrandoPessoasAleatorias(int quantidadePessoas, struct Pessoa listaPessoas[]);

bool cadastrandoOcorrenciaManual(struct Ocorrencia listaOcorrencias[], int &quantidadeOcorrencias);
void cadastrandoOcorrenciaAleatoria(int quantidadeOcorrencias, struct Ocorrencia listaOcorrencias[]);

bool cadastrandoEvidenciaManual(struct Evidencia listaEvidencias[], int &quantidadeEvidencias);
void cadastrandoEvidenciaAleatoria(int quantidadeEvidencias, struct Evidencia listaEvidencias[]);

void menu();

#endif
