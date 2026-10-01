#ifndef VARIAVEIS_H
#define VARIAVEIS_H

int max_Person = 10000;
int max_Case = 5000;
int max_Evidence = 20000;

struct Pessoa
{
    int id;
    char nome[100];
    int idade;
    char cidade[50];
};

struct Ocorrencia
{
    int id;
    char tipo[50];
    char local[100];
    int gravidade;
    int ano;
};

struct Evidencia
{
    int id;
    int idOcorrencia;
    char descricao[100];
    int relevancia;
};

extern Pessoa listaPessoas[max_Person];
extern Ocorrencia listaOcorrencias[max_Case];
extern Evidencia listaEvidencias[max_Evidence];

#endif