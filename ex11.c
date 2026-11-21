/*
 * Aluno: Pedro Felipe Alexandre Gomes
 * Exercício: 11
 * Descrição: Preenche um array de 10 posições com números aleatórios (rand) e imprime os elementos.
 * Data: 19/11/2026
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10

int main(void) {
    int numeros[TAM];

    srand((unsigned int)time(NULL)); /* semente diferente a cada execucao */

    for (int i = 0; i < TAM; i++) {
        numeros[i] = rand() % 100; /* valores de 0 a 99 */
    }

    printf("Elementos do array:\n");
    for (int i = 0; i < TAM; i++) {
        printf("numeros[%d] = %d\n", i, numeros[i]);
    }
    return 0;
}
