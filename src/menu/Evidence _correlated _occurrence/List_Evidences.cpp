#include "List_Evidences.h"
#include "struct_relevance.h"
#include "struct_evidence.h"
#include "struct_case.h"


int Linearsearch (Evidencia list[], int id, int size)
{
    for (int i = 0; i < size; i++)
    if (list[i].id == id)
            return i;
    return -1;
}






void printCorrelation(relevance list[],Evidencia Evidencelist[],int id,int size )
{
    for (int i = 0; i < size; i++)
    {
        if (list[i].occurrence_id == id)
        {
            int index = Linearsearch(Evidencelist, list[i].registered_id, size); //Since I don't know the size of the evidence list, I will leave the size, but once set correctly, I will replace the size with the amount of evidence
            std:: cout << "id = " << Evidencelist[index].id << std:: endl;
            std:: cout << "Descricao = " << Evidencelist[index].descricao << std:: endl;
            std:: cout << "Nivel de relevancia " << Evidencelist[index].relevancia << std :: endl; 
            std:: cout << "===================================" << std:: endl;
        }
        
    }
    

}