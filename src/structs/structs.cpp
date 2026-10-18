#include "structs.h"

int Amount_P = 0, Amount_O = 0, Amount_E = 0,Amount_R = 0, Usedinterconnection = 0;
Pessoa *listaPessoas = new Pessoa[Amount_P];
Ocorrencia *listaOcorrencias = new Ocorrencia[Amount_O];
Evidencia *listaEvidencias = new Evidencia[Amount_E];
relation *interconnection = new relation[Amount_R];

void DeleteArrays()
{
    delete[] listaPessoas;
    delete[] listaOcorrencias;
    delete[] listaEvidencias;
    delete[] interconnection;
}