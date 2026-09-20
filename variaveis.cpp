#ifndef VARIAVEIS_CPP
#define VARIAVEIS_CPP

struct Pessoa
{
    int id;
    char nome[100];
    int idade;
    char cidade[50];
} listaPessoas[10000];

struct Ocorrencia
{
    int id;
    char tipo[50];
    char local[100];
    int gravidade;
    int ano;
} listaOcorrencias[5000];

struct Evidencia
{
    int id;
    int idOcorrencia;
    char descricao[100];
    int relevancia;
} listaEvidencias[20000];

#endif