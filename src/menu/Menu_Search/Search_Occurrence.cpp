#include "Search_Occurrence.h"
#include "search_binary.h"
#include "struct_case.h"
#include "variaveis.h"
#include "Relevance _Occurrence.h"

void printO(Ocorrencia list[], int target, int size)
{
   int index = Searchbinary(list, target, size);
   if (index == -1)
   {
    std:: cout << " Esta ocorrencia nao existe." << std:: endl;
   }
   else
   {
       std:: cout  << "Tipo : " << list[index].tipo << std:: endl;
       std:: cout << "Local : " << list[index].local << std:: endl;
       std:: cout << "Gravidade : " << recursivEvidence(interconnection, Usedinterconnection-1, target ) << std:: endl;
       std:: cout << " Ano : " << list[index].ano << std:: endl;
   }
}