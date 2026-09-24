#include "funcoes.h"
#include "variaveis.cpp"
srand(time(0));



void cadastrandoEvidenciaAleatoria(int quantidadeEvidencias, struct Evidencia listaEvidencias[])

{
    string descricoes[9] = {"arma do crime", "carta de ameaça", "câmera de segurança", "impressão digital", "testemunha ocular", "vídeo de celular", "arma de fogo", "arma branca", "objeto suspeito"};
    for (int i = 0; quantidadeEvidencias > i; i++)
    {
        string descricaoEscolhida = descricoes[rand() % 9];
        listaEvidencias[i].id = i;
        stringParaChar(listaEvidencias[i].descricao, descricaoEscolhida.c_str());
        listaEvidencias[i].idOcorrencia = rand() % quantidadeEvidencias;
    }
};

void cadastrandoEvidenciaManual(int quantidadeEvidencias, struct Evidencia listaEvidencias[])

{
};