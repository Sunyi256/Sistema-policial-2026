#include "funcoes.h"
#include "variaveis.cpp"
srand(time(0));


void cadastrandoPessoasAleatorias(int quantidadePessoas, struct Pessoa listaPessoas[])
{
    string nomes[6] = {"Ana", "Bruno", "Carlos", "Diana", "Eduardo", "Fernanda"};
    string cidades[19] = {"Sao Paulo", "Rio de Janeiro", "Belo Horizonte", "Salvador", "Curitiba", "Porto Alegre", "Recife", "Fortaleza", "Brasilia", "Campinas", "Ribeirao Preto", "Juiz de Fora", "Joinville", "Londrina", "Blumenau", "Caxias do Sul", "Montes Claros", "Petrolina", "Uberlandia"};
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

void cadastrandoPessoasManual(int quantidadePessoas, struct Pessoa listaPessoas)
{
};