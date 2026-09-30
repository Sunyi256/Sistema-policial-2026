#ifndef VARIAVEIS_H
#define VARIAVEIS_H

constexpr int MAX_PESSOAS = 10000; // constexpr faz com que o valor seja uma constante em tempo de compilação, permitindo que seja usado para definir o tamanho dos arrays
constexpr int MAX_OCORRENCIAS = 5000;
constexpr int MAX_EVIDENCIAS = 20000;

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

extern Pessoa listaPessoas[MAX_PESSOAS];
extern Ocorrencia listaOcorrencias[MAX_OCORRENCIAS];
extern Evidencia listaEvidencias[MAX_EVIDENCIAS];

#endif