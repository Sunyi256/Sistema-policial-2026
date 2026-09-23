#ifndef FUNCOES_H
#define FUNCOES_H
#include "variaveis.cpp"
#include <iostream>
#include <chrono>
#include <thread>
#include <ctime>

using namespace std;

void stringParaChar(char *destino, const char *origem); // talvez eu tenha ido um pouco longe demais, mas eu fiz uma função que converte string pra char array, caso seja necessário                                                      
                                                        // origem é a string que você quer converter, destino é o char array que vai receber a string convertid;
void cadastrandoPessoaManual(struct Pessoa pessoal);

void cadastrandoOcorrenciaManual(struct Ocorrencia ocorrencia);
void cadastrandoOcorrenciaAleatoria(int quantidadeOcorrencias, struct Ocorrencia listaOcorrencias[]);

void cadastrandoEvidenciaManual(struct Evidencia evidencia);

void cadastrandoEvidenciaAleatoria(int quantidadeEvidencias, struct Evidencia listaEvidencias[]);
void menu();

#endif
