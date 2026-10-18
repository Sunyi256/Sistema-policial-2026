#include "List_Evidences.h"
#include "structs.h"
#include "Relevance _Occurrence.h"



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
            int index = Linearsearch(Evidencelist, list[i].registered_id, Usedinterconnection);
            std:: cout << "id = " << Evidencelist[index].id << std:: endl;
            std:: cout << "Descricao = " << Evidencelist[index].descricao << std:: endl;
            std:: cout << "Nivel de relevancia " << recursivEvidence(interconnection, Usedinterconnection-1, id )<< std :: endl; 
            std:: cout << "===================================" << std:: endl;
        }
        
    }
    

}