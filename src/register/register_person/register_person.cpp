#include "register_person.h"
#include "../register_input/register_input.h"
#include <cstdlib>
void cadastrandoPessoasAleatorias(int quantidadePessoas, struct Pessoa listaPessoas[])
{
    std::string nomes[6] = {"Ana", "Bruno", "Carlos", "Diana", "Eduardo", "Fernanda"};
    std::string cidades[19] = {"Sao Paulo", "Rio de Janeiro", "Belo Horizonte", "Salvador", "Curitiba", "Porto Alegre", "Recife", "Fortaleza", "Brasilia", "Campinas", "Ribeirao Preto", "Juiz de Fora", "Joinville", "Londrina", "Blumenau", "Caxias do Sul", "Montes Claros", "Petrolina", "Uberlandia"};
    for (int i = 0; quantidadePessoas > i; i++)
    {
        listaPessoas[i].id = i;
        listaPessoas[i].nome = nomes[rand() % 6];
        listaPessoas[i].idade = rand() % 100;
        listaPessoas[i].cidade = cidades[rand() % 19];
    }
}

bool cadastrandoPessoaManual(struct Pessoa listaPessoas[], int &quantidadePessoas)
{
    if (quantidadePessoas == MAX_P)
    {
        std::cout << "O limite de pessoas cadastradas foi atingido. Feche o programa." << std::endl;
        return false;
    }

    int indice = quantidadePessoas;
    std::cout << "Digite o nome da pessoa: " << std::endl;
    std::string nome;
    if (!readText("O nome", nome))
    {
        return false;
    }
    std::cout << "Digite a idade da pessoa: " << std::endl;
    int idade;
    while (!(std::cin >> idade) || idade < 0 || idade > 120)
    {
        std::cin.clear();
        while (std::cin.get() != '\n' && std::cin)
        {
        }
        std::cout << "Idade invalida (0 a 120). Digite novamente: " << std::endl;
    }
    std::cout << "Digite a cidade da pessoa: " << std::endl;
    while (std::cin.get() != '\n' && std::cin)
    {
    }
    std::string cidade;
    if (!readText("A cidade", cidade))
    {
        return false;
    }

    listaPessoas[indice].id = indice;
    listaPessoas[indice].idade = idade;
    listaPessoas[indice].nome = nome;
    listaPessoas[indice].cidade = cidade;
    quantidadePessoas++;
    std::cout << "Pessoa cadastrada com sucesso. ID: " << listaPessoas[indice].id << std::endl;
    return true;
}