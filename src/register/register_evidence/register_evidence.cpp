#include "register_evidence.h"
#include <cstdlib>

void cadastrandoEvidenciaAleatoria(int quantidade, struct Evidencia listaEvidencias[], int &quantidadeEvidencias, struct Ocorrencia listaOcorrencias[], int quantidadeOcorrencias)
{
    if (quantidadeOcorrencias == 0)
    {
        std::cout << "Nao ha ocorrencias cadastradas para relacionar as evidencias." << std:: endl;
        return;
    }
    std::string descricoes[9] = {"arma do crime", "carta de ameaça", "câmera de segurança", "impressão digital", "testemunha ocular", "vídeo de celular", "arma de fogo", "arma branca", "objeto suspeito"};
    for (int i = 0; i < quantidade && quantidadeEvidencias < MAX_E && Usedinterconnection < MAX_R; i++)
    {
        int indice = quantidadeEvidencias;
        listaEvidencias[indice].id = indice;
        listaEvidencias[indice].descricao = descricoes[rand() % 9];
        listaEvidencias[indice].relevancia = 1 + rand() % 4;
        interconnection[Usedinterconnection].registered_id = indice;
        interconnection[Usedinterconnection].occurrence_id = listaOcorrencias[rand() % quantidadeOcorrencias].id;
        interconnection[Usedinterconnection].Relevancelevel = listaEvidencias[indice].relevancia;
        Usedinterconnection++;
        quantidadeEvidencias++;
    }
}

bool cadastrandoEvidenciaManual(struct Evidencia listaEvidencias[], int &quantidadeEvidencias, struct Ocorrencia listaOcorrencias[], int quantidadeOcorrencias) // usamos referência para quantidadeEvidencias para que a função possa modificar o valor da variável original
{
    if (quantidadeEvidencias == MAX_E || Usedinterconnection == MAX_R) 
    {
        std::cout << "O limite de evidencias cadastradas foi atingido. Feche o programa." << std::endl;
        return false;
    }
    if (quantidadeOcorrencias == 0)
    {
        std::cout << "Nao ha ocorrencias cadastradas. Cadastre uma ocorrencia antes." << std::endl;
        return false;
    }
    std::cout << "Digite o id da ocorrencia: " << std:: endl;
    int idOcorrencia;
    while (!(std::cin >> idOcorrencia) || idOcorrencia < 0)
    {
        std::cin.clear(); 
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Id invalido. Digite novamente: " << std:: endl;
    }
    bool found = false;
    for (int i = 0; i < quantidadeOcorrencias; i++)
    {
        if (listaOcorrencias[i].id == idOcorrencia)
        {
            found = true;
        }
    }
    if (found == false)
    {
        std::cout << "Ocorrencia nao encontrada. Cadastro cancelado" << std:: endl;
        return false;
    }
    std::cout << "Ocorrencia encontrada." << std:: endl;

    int indice = quantidadeEvidencias;
    std::cout << "Digite a descricao da evidencia: " << std:: endl;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
    std::string descricao;
    std::getline(std::cin, descricao); 
    while (descricao.find_first_not_of(' ') == std::string::npos)
    {
        std::cout << "A descricao nao pode ficar vazia. Digite novamente: " << std:: endl;
        std::getline(std::cin, descricao);
    }
    std::cout << "Qual nivel de relevancia ?" << std:: endl;
    std::cout << " 1 - Baixa" << std:: endl;
    std::cout << " 2 - Media" << std:: endl;
    std::cout << " 3 - Alta" <<  std:: endl;
    std::cout << " 4 - Extrema" << std:: endl;
    int relevancia;
    while (!(std::cin >> relevancia) || relevancia < 1 || relevancia > 4) 
    {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Relevancia invalida (1 a 4). Digite novamente: " << std:: endl;
    }
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    listaEvidencias[indice].id = indice;
    listaEvidencias[indice].descricao = descricao; 
    listaEvidencias[indice].relevancia = relevancia;
    interconnection[Usedinterconnection].registered_id = indice;
    interconnection[Usedinterconnection].occurrence_id = idOcorrencia;
    interconnection[Usedinterconnection].Relevancelevel = relevancia;
    Usedinterconnection++;
    quantidadeEvidencias++;
    std::cout << "Evidencia cadastrada com sucesso" << std:: endl;
    return true;
}