#include "sort_bubble.h"

void bubbleSort(Ocorrencia* v, int n, Campo campo) {
    bool trocou = true;
    for (int i = 0; i < n - 1 && trocou; i++) {
        trocou = false;
        for (int j = 0; j < n - 1 - i; j++) {
            if (!menorOuIgual(v[j], v[j + 1], campo)) {
                Ocorrencia temp = v[j];
                v[j] = v[j + 1];
                v[j + 1] = temp;
                trocou = true;
            }
        }
    }
}