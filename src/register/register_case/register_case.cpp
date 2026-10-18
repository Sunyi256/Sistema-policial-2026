#include "register_case.h"
#include <limits>
#include <cstdlib>

void cadastrandoOcorrenciaAleatoria(int quantidadeOcorrencias, struct Ocorrencia listaOcorrencias[])
{
    std::string tipos[5] = {"Roubo", "Assalto", "Homicidio", "Sequestro", "Tráfico de drogas"};
    std::string locais[10] = {"Rua", "Avenida", "Praça", "Parque", "Shopping", "Escola", "Hospital", "Estádio", "Igreja", "Terminal de ônibus"};
    for (int i = 0; quantidadeOcorrencias > i && i < MAX_O; i++) 
    {
        listaOcorrencias[i].id = i;
        listaOcorrencias[i].tipo = tipos[rand() % 5];
        listaOcorrencias[i].local = locais[rand() % 10]; 
        listaOcorrencias[i].gravidade = rand() % 5 + 1;
        listaOcorrencias[i].ano = rand() % 10 + 2010;
    }
}

bool cadastrandoOcorrenciaManual(struct Ocorrencia listaOcorrencias[], int &quantidadeOcorrencias)
{
    if (quantidadeOcorrencias == MAX_O)
    {
        std::cout << "O limite de ocorrencias cadastradas foi atingido. Feche o programa." << std:: endl; 
        return false;
    }

    int indice = quantidadeOcorrencias; 
    std::cout << "Digite o tipo da ocorrencia: ";
    std::string tipo;
    std::getline(std::cin, tipo);
    while (tipo.find_first_not_of(' ') == std::string::npos)
    {
        std::cout << "O tipo nao pode ficar vazio. Digite novamente: " << std:: endl;
        std::getline(std::cin, tipo);
    }
    std::cout << "Digite o local da ocorrencia: " << std:: endl;
    std::string local;
    std::getline(std::cin, local);
    while (local.find_first_not_of(' ') == std::string::npos) 
    {
        std::cout << "O local nao pode ficar vazio. Digite novamente: " << std:: endl;
        std::getline(std::cin, local);
    }

    std::cout << "Digite a gravidade da ocorrencia (1 a 5): " << std:: endl;
    int gravidade;
    while (!(std::cin >> gravidade) || gravidade < 1 || gravidade > 5) 
    {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Gravidade invalida (1 a 5). Digite novamente: " << std:: endl;
    }
    std::cout << "Digite o ano da ocorrencia: " << std:: endl;
    int ano;
    while (!(std::cin >> ano) || ano < 1901 || ano > 2026) 
    {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Ano invalido (1901 a 2026). Digite novamente: " << std:: endl;
    }
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    listaOcorrencias[indice].id = indice;
    listaOcorrencias[indice].gravidade = gravidade;
    listaOcorrencias[indice].ano = ano;
    listaOcorrencias[indice].tipo = tipo;   
    listaOcorrencias[indice].local = local; 
    quantidadeOcorrencias++;
    std::cout << "Ocorrencia cadastrada com sucesso." << std:: endl ;
    return true;
}