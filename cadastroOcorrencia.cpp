#include "funcoes.h"
#include "variaveis.cpp"
srand(time(0));


void cadastrandoOcorrenciaAleatoria(int quantidadeOcorrencias, struct Ocorrencia listaOcorrencias[])
{
    string tipos[5] = {"Roubo", "Assalto", "Homicidio", "Sequestro", "Tráfico de drogas"};
    string locais[10] = {"Rua", "Avenida", "Praça", "Parque", "Shopping", "Escola", "Hospital", "Estádio", "Igreja", "Terminal de ônibus"};
    for (int i = 0; quantidadeOcorrencias > i; i++)
    {
        string tipoEscolhido = tipos[rand() % 5];
        string localEscolhido = locais[rand() % 10];
        listaOcorrencias[i].id = i;
        stringParaChar(listaOcorrencias[i].tipo, tipoEscolhido.c_str()); //.c_str() converte string para const char*, que é o que a função stringParaChar espera como argumento
        stringParaChar(listaOcorrencias[i].local, localEscolhido.c_str());
        listaOcorrencias[i].gravidade = rand() % 5 + 1;
        listaOcorrencias[i].ano = rand() % 10 + 2010;
    }
};


void cadastrandoOcorrenciaManual(struct Ocorrencia ocorrencia)
{
};