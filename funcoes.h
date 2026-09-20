#ifndef FUNCOES_H
#define FUNCOES_H
#include "variaveis.cpp"
#include <iostream>
#include <chrono>
#include <thread>
#include <ctime>

using namespace std;
void cadastrandoPessoasAleatorias(int quantidadePessoas, struct Pessoa listaPessoas[])
{
    string nomes[6] = {"Ana", "Bruno", "Carlos", "Diana", "Eduardo", "Fernanda"};
    string cidades[19] = {"Sao Paulo", "Rio de Janeiro", "Belo Horizonte", "Salvador", "Curitiba", "Porto Alegre", "Recife", "Fortaleza", "Brasilia", "Campinas", "Ribeirao Preto", "Juiz de Fora", "Joinville", "Londrina", "Blumenau", "Caxias do Sul", "Montes Claros", "Petrolina", "Uberlandia"};
    srand(time(0));
    for (int i = 0; quantidadePessoas > i; i++)
    {
        listaPessoas[i].id = i;
        listaPessoas[i].nome = nomes[rand() % 6];
        listaPessoas[i].idade = rand() % 100;
        listaPessoas[i].cidade = cidades[rand() % 19];
    }
};

void cadastrandoPessoaManual(struct Pessoa pessoal)
{
    int idP, idadeP;
    string nome, cidade;
    if (listaPessoas[1].id == 1)
    { // caso o cadastro de pessoas aleatórias tenha sido usada, ele adiciona essa pessoa dentro da lista a partir da última posição
    }
    else
    { // ou listaPessoas[1].id é 1 ou 0, caso seja 0, a lista não foi acionada, ou seja, ele é o primeiro elemento do vetor
    }
};

void menu()
{

    cout << "Menu de Opcoes:\n";
    cout << "1. Cadastrar Pessoas Aleatorias\n";
    cout << "2. Cadastrar Pessoa Manualmente\n";
    cout << "3. Cadastrar ocorrencia\n";
    cout << "4. Cadastrar evidencia\n";

    cout << "5. Buscar Pessoas\n";
    cout << "6. Buscar Ocorrencias\n";

    cout << "7 - Ordenar pessoas\n";
    cout << "8 - Ordenar ocorrencias\n";

    cout << "9 - Listar evidencias de uma ocorrencia\n";

    cout << "10 - Analisar ocorrencia\n";

    cout << "11 - Relatorio de desempenho\n";

    cout << "0 - Encerrar programa\n";
    cout << "Escolha uma opcao: ";
    int escolha;
    cin >> escolha;
    switch (escolha)
    {
    case 1:
        int quantidadePessoas;
        cout << "Escolha a quantidade de pessoas a serem cadastradas: ";
        cin >> quantidadePessoas;
        cadastrandoPessoasAleatorias(quantidadePessoas, listaPessoas);
        break;
    case 2:
        cadastrandoPessoaManual(listaPessoas[0]);
        break;
    default:
        cout << "Opcao invalida. Tente novamente.\n";
        void menu();
    };
}

#endif
