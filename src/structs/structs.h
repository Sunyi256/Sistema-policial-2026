#ifndef STRUCTS_H
#define STRUCTS_H
#include <string>

#define MAX_P 10000
#define MAX_O 5000
#define MAX_E 20000
#define MAX_R 20000

struct Ocorrencia
{
    int id;
    std::string tipo;
    std::string local;
    int gravidade;
    int ano;
};
struct Evidencia
{
    int id;
    std::string descricao;
    int relevancia;
};
struct Pessoa
{
    int id;
    std::string nome;
    int idade;
    std::string cidade;
};
struct relation
{
    int registered_id;
    int occurrence_id;
    int Relevancelevel;
};

extern int Amount_P, Amount_O, Amount_E;
extern int Usedinterconnection;

extern Pessoa *listaPessoas;
extern Ocorrencia *listaOcorrencias;
extern Evidencia *listaEvidencias;
extern relation *interconnection;

void DeleteArrays();

#endif