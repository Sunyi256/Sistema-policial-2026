#ifndef STRUCTS_H
#define STRUCTS_H
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

int Amount_P, Amount_O, Amount_E, Amount_R = 1;

Pessoa * listaPessoas = new Pessoa[Amount_P];
Ocorrencia * listaOcorrencias = new Ocorrencia [Amount_O];
Evidencia * listaEvidencias = new Evidencia [Amount_E];
relation * interconnection = new relation [Amount_R];
int Usedinterconnection;

void DeleteArrays();

#endif