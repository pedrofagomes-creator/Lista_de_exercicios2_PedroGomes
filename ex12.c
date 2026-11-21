/*
 * Aluno: Pedro Felipe Alexandre Gomes
 * Exercício: 12
 * Descrição: Lê dois arrays de 5 elementos e gera um terceiro com a soma elemento a elemento.
 * Data: 19/11/2026
 */

#include <stdio.h>

#define TAM 5

int main(void) {
    int a[TAM], b[TAM], soma[TAM];

    printf("Digite os %d elementos do primeiro array:\n", TAM);
    for (int i = 0; i < TAM; i++) {
        if (scanf("%d", &a[i]) != 1) {
            printf("Entrada invalida.\n");
            return 1;
        }
    }

    printf("Digite os %d elementos do segundo array:\n", TAM);
    for (int i = 0; i < TAM; i++) {
        if (scanf("%d", &b[i]) != 1) {
            printf("Entrada invalida.\n");
            return 1;
        }
    }

    for (int i = 0; i < TAM; i++) {
        soma[i] = a[i] + b[i];
    }

    printf("Array soma: ");
    for (int i = 0; i < TAM; i++) {
        printf("%d ", soma[i]);
    }
    printf("\n");
    return 0;
}
