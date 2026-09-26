#include "stringParaChar.h"

void stringParaChar(char *destino, const char *origem) // talvez eu tenha ido um pouco longe demais, mas eu fiz uma função que converte string pra char array, caso seja necessário
{                                                      // origem é a string que você quer converter, destino é o char array que vai receber a string convertida
    int i = 0;

    while (origem[i] != '\0')
    {
        destino[i] = origem[i];
        i++;
    }

    destino[i] = '\0';
}
