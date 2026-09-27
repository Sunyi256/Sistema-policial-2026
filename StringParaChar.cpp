#include "stringParaChar.h"

void stringParaChar(char *destino, const char *origem) // talvez eu tenha ido um pouco longe demais, mas eu fiz uma função que converte string pra char array, caso seja necessário
{                                                      // origem é a string que você quer converter, destino é o char array que vai receber a string convertida
    int i = 0;

    while (origem[i] != '\0') // enquanto o caractere atual da origem não for o caractere nulo, continue copiando os caracteres da origem para o destino
    {
        destino[i] = origem[i]; // copia o caractere atual da origem para o destino
        i++;                    // incrementa o índice para passar para o próximo caractere
    }

    destino[i] = '\0'; // adiciona o caractere nulo no final do destino para indicar o fim da string
}
