#include "Search_Occurrence.h"

void printO(Ocorrencia list[], int target, int size)
{
   if (size == 0) 
   {
    std::cout << "Nao ha ocorrencias cadastradas." << std::endl;
    return;
   }
   int index = binarysearch::Searchbinary(list, target, size); 
   if (index == -1)
   {
    std::cout << " Esta ocorrencia nao existe." << std::endl;
   }
   else
   {
    std::cout << "Ocorrencia encontrada!" << std:: endl; 
    std::cout << "ID : " << list[index].id << std::endl;
    std::cout << "Tipo : " << list[index].tipo << std::endl;
    std::cout << "Local : " << list[index].local << std::endl;
    std::cout << "Gravidade : " << list[index].gravidade << std::endl;
    std::cout << "Ano : " << list[index].ano << std::endl;
   }
}
