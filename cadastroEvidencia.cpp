#include "funcoes.h"
#include <limits>

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
}

bool cadastrandoEvidenciaManual(struct Evidencia listaEvidencias[], int &quantidadeEvidencias)
{
    if (quantidadeEvidencias == MAX_EVIDENCIAS)
    {
        cout << "O limite de evidencias cadastradas foi atingido. Aceita apagar o dado mais antigo?\n1 - Sim\n2 - Nao\n";
        int escolha;
        cin >> escolha;
        if (escolha != 1)
        {
            cout << "Cadastro de evidencia cancelado.\n";
            return false;
        }
        for (int i = 0; i < MAX_EVIDENCIAS - 1; i++)
        {
            listaEvidencias[i] = listaEvidencias[i + 1];
        }
    }

    int indice = quantidadeEvidencias < MAX_EVIDENCIAS ? quantidadeEvidencias : MAX_EVIDENCIAS - 1;
    cout << "Digite a descricao da evidencia: ";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    string descricao;
    getline(cin, descricao);
    if (descricao.size() >= sizeof(listaEvidencias[indice].descricao))
    {
        descricao.resize(sizeof(listaEvidencias[indice].descricao) - 1);
    }
    cout << "Digite o id da ocorrencia relacionada a esta evidencia: ";
    int idOcorrencia;
    cin >> idOcorrencia;

    listaEvidencias[indice].id = indice;
    listaEvidencias[indice].idOcorrencia = idOcorrencia;
    stringParaChar(listaEvidencias[indice].descricao, descricao.c_str());
    if (quantidadeEvidencias < MAX_EVIDENCIAS)
    {
        quantidadeEvidencias++;
    }
    cout << "Evidencia cadastrada com sucesso.\n";
    return true;
}