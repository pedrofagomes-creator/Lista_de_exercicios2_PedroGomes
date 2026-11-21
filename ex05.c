/*
 * Aluno: Pedro Felipe Alexandre Gomes
 * Exercício: 05
 * Descrição: Imprime os números de 10 a 1 usando while e depois usando for.
 * Data: 19/11/2026
 */

#include <stdio.h>

int main(void) {
    int i = 10;

    printf("Usando while:\n");
    while (i >= 1) {
        printf("%d ", i);
        i--;
    }

    printf("\nUsando for:\n");
    for (int j = 10; j >= 1; j--) {
        printf("%d ", j);
    }
    printf("\n");
    return 0;
}
