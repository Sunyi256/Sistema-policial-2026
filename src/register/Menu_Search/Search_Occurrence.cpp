#include "Search_Occurrence.H"
#include "search_binary.h"

void printO(Ocorrencia list[], int target, int size)
{
   int index = Searchbinary( list,target, size );
   if (index == -1)
   {
    std:: cout << " Esta ocorrencia nao existe." << std:: endl;
   }
   else
   {
       std:: cout  << "Tipo : " << list[index].tipo << std:: endl;
       std:: cout << "Local : " << list[index].local << std:: endl;
       std:: cout << "Gravidade : " << list[index].gravidade << std:: endl;
       std:: cout << " Ano : " << list[index].ano << std:: endl;
   }
}