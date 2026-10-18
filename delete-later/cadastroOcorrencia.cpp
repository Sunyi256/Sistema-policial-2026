#include "funcoes.h"
#include <limits>

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
}

bool cadastrandoOcorrenciaManual(struct Ocorrencia listaOcorrencias[], int &quantidadeOcorrencias)
{
    if (quantidadeOcorrencias == MAX_OCORRENCIAS)
    {
        cout << "O limite de ocorrencias cadastradas foi atingido. Aceita apagar o dado mais antigo?\n1 - Sim\n2 - Nao\n";
        int escolha;
        cin >> escolha;
        if (escolha != 1)
        {
            cout << "Cadastro de ocorrencia cancelado.\n";
            return false;
        }
        for (int i = 0; i < MAX_OCORRENCIAS - 1; i++)
        {
            listaOcorrencias[i] = listaOcorrencias[i + 1];
        }
    }

    int indice = quantidadeOcorrencias < MAX_OCORRENCIAS ? quantidadeOcorrencias : MAX_OCORRENCIAS - 1;
    cout << "Digite o tipo da ocorrencia: ";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    string tipo;
    getline(cin, tipo);
    if (tipo.size() >= sizeof(listaOcorrencias[indice].tipo))
    {
        tipo.resize(sizeof(listaOcorrencias[indice].tipo) - 1);
    }
    cout << "Digite o local da ocorrencia: ";
    string local;
    getline(cin, local);
    if (local.size() >= sizeof(listaOcorrencias[indice].local))
    {
        local.resize(sizeof(listaOcorrencias[indice].local) - 1);
    }
    cout << "Digite a gravidade da ocorrencia (1 a 5): ";
    int gravidade;
    cin >> gravidade;
    cout << "Digite o ano da ocorrencia: ";
    int ano;
    cin >> ano;

    listaOcorrencias[indice].id = indice;
    listaOcorrencias[indice].gravidade = gravidade;
    listaOcorrencias[indice].ano = ano;
    stringParaChar(listaOcorrencias[indice].tipo, tipo.c_str());
    stringParaChar(listaOcorrencias[indice].local, local.c_str());
    if (quantidadeOcorrencias < MAX_OCORRENCIAS)
    {
        quantidadeOcorrencias++;
    }
    cout << "Ocorrencia cadastrada com sucesso.\n";
    return true;
}