#ifndef FUNCOES_H
#define FUNCOES_H
#include "variaveis.cpp"
#include <iostream>
#include <chrono>
#include <thread>
#include <ctime>

using namespace std;

void stringParaChar(char *destino, const char *origem) // talvez eu tenha ido um pouco longe demais, mas eu fiz uma função que converte string pra char array, caso seja necessário
{                                                      // origem é a string que você quer converter, destino é o char array que vai receber a string convertida
    int i = 0;

    while (origem[i] != '\0')
    {
        destino[i] = origem[i];
        i++;
    }

    destino[i] = '\0';
}
void cadastrandoPessoasAleatorias(int quantidadePessoas, struct Pessoa listaPessoas[])
{
    string nomes[6] = {"Ana", "Bruno", "Carlos", "Diana", "Eduardo", "Fernanda"};
    string cidades[19] = {"Sao Paulo", "Rio de Janeiro", "Belo Horizonte", "Salvador", "Curitiba", "Porto Alegre", "Recife", "Fortaleza", "Brasilia", "Campinas", "Ribeirao Preto", "Juiz de Fora", "Joinville", "Londrina", "Blumenau", "Caxias do Sul", "Montes Claros", "Petrolina", "Uberlandia"};
    srand(time(0));
    for (int i = 0; quantidadePessoas > i; i++)
    {
        string nomeEscolhido = nomes[rand() % 6];
        string cidadeEscolhida = cidades[rand() % 19];
        listaPessoas[i].id = i;
        stringParaChar(listaPessoas[i].nome, nomeEscolhido.c_str());
        listaPessoas[i].idade = rand() % 100;
        stringParaChar(listaPessoas[i].cidade, cidadeEscolhida.c_str());
    }
};

void cadastrandoPessoaManual(struct Pessoa pessoal) {

};

void cadastrandoOcorrenciaManual(struct Ocorrencia ocorrencia) {
};
void cadastrandoOcorrenciaAleatoria(int quantidadeOcorrencias, struct Ocorrencia listaOcorrencias[])
{
    string tipos[5] = {"Roubo", "Assalto", "Homicidio", "Sequestro", "Tráfico de drogas"};
    string locais[10] = {"Rua", "Avenida", "Praça", "Parque", "Shopping", "Escola", "Hospital", "Estádio", "Igreja", "Terminal de ônibus"};
    srand(time(0));
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

void cadastrandoEvidenciaManual(struct Evidencia evidencia) {
};

void cadastrandoEvidenciaAleatoria(int quantidadeEvidencias, struct Evidencia listaEvidencias[])
{
    string descricoes[9] = {"arma do crime", "carta de ameaça", "câmera de segurança", "impressão digital", "testemunha ocular", "vídeo de celular", "arma de fogo", "arma branca", "objeto suspeito"};
    srand(time(0));
    for (int i = 0; quantidadeEvidencias > i; i++)
    {
        string descricaoEscolhida = descricoes[rand() % 9];
        listaEvidencias[i].id = i;
        stringParaChar(listaEvidencias[i].descricao, descricaoEscolhida.c_str());
        listaEvidencias[i].idOcorrencia = rand() % quantidadeEvidencias;
    }
};

void menu()
{

    cout << "1. Cadastrar Pessoas\n";
    cout << "2. Cadastrar Ocorrencias\n";
    cout << "3. Cadastrar Evidencias\n";

    cout << "4. Buscar Pessoas\n";
    cout << "5. Buscar Ocorrencias\n";

    cout << "6 - Ordenar pessoas\n";
    cout << "7 - Ordenar ocorrencias\n";

    cout << "8 - Listar evidencias de uma ocorrencia\n";

    cout << "9 - Analisar ocorrencia\n";

    cout << "10 - Relatorio de desempenho\n";

    cout << "0 - Encerrar programa\n";
    cout << "Escolha uma opcao: ";
    int escolha;
    cin >> escolha;
    switch (escolha)
    {
    case 1:
        cout << "1. Cadastrar Pessoas Aleatorias\n";
        cout << "2. Cadastrar Pessoa Manualmente\n";
        int escolha1;
        cin >> escolha1;
        switch (escolha1)
        {
        case 1:
            int quantidadePessoas;
            cout << "Escolha a quantidade de pessoas a serem cadastradas: ";
            cin >> quantidadePessoas;
            cadastrandoPessoasAleatorias(quantidadePessoas, listaPessoas);
            menu();
        case 2:
            cadastrandoPessoaManual(listaPessoas[0]);
            menu();
        default:
            cout << "Opcao invalida. Tente novamente.\n";
            menu();
        }
        menu();
    case 2:
        cout << "1. Cadastrar Ocorrencias Aleatorias\n";
        cout << "2. Cadastrar Ocorrencia Manualmente\n";
        cin >> escolha1;
        switch (escolha1)
        {
        case 1:
            int quantidadeOcorrencias;
            cout << "Escolha a quantidade de ocorrencias a serem cadastradas: ";
            cin >> quantidadeOcorrencias;
            cadastrandoOcorrenciaAleatoria(quantidadeOcorrencias, listaOcorrencias);
            menu();
        case 2:
            cadastrandoOcorrenciaManual(listaOcorrencias[0]);
            menu();
        default:
            cout << "Opcao invalida. Tente novamente.\n";
            menu();
        }
        menu();
    case 3:
        cout << "1. Cadastrar Evidencias Aleatorias\n";
        cout << "2. Cadastrar Evidencia Manualmente\n";
        cin >> escolha1;
        switch (escolha1)
        {
        case 1:
            int quantidadeEvidencias;
            cout << "Escolha a quantidade de evidencias a serem cadastradas: ";
            cin >> quantidadeEvidencias;
            cadastrandoEvidenciaAleatoria(quantidadeEvidencias, listaEvidencias);
            menu();
        case 2:
            cadastrandoEvidenciaManual(listaEvidencias[0]);
            menu();
        default:
            cout << "Opcao invalida. Tente novamente.\n";
            menu();
        }
        menu();
    default:
        cout << "Opcao invalida. Tente novamente.\n";
        menu();
    };
}

#endif
