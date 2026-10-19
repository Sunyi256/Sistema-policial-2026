#include "Analyze_Case.h"

int sumRelevance(relation list[], int n, int idOcorrencia)
{
    if (n == 0) // 
    {
        return 0;
    }
    int atual = 0;
    if (list[n - 1].occurrence_id == idOcorrencia) 
    {
        atual = list[n - 1].Relevancelevel;
    }
    return atual + sumRelevance(list, n - 1, idOcorrencia); 
}

void analyzeCase(Ocorrencia listaOcorrencias[], int quantidadeOcorrencias, int idOcorrencia, relation relacoes[], int quantidadeRelacoes)
{
    if (quantidadeOcorrencias == 0) 
    {
        std::cout << "Nao ha ocorrencias cadastradas." << std::endl;
        return;
    }
    int index = linear::LinearsearchCases(listaOcorrencias, idOcorrencia, quantidadeOcorrencias);
    if (index == -1)
    {
        std::cout << "Esta ocorrencia nao existe." << std::endl;
        return;
    }

    std::cout << "Ocorrencia: " << listaOcorrencias[index].tipo << " - " << listaOcorrencias[index].local << std::endl;
    int total = sumRelevance(relacoes, quantidadeRelacoes, idOcorrencia);
    if (total == 0) 
    {
        std::cout << "Esta ocorrencia nao possui evidencias." << std::endl;
    }
    else
    {
        std::cout << "Relevancia total das evidencias: " << total << std::endl;
    }
}