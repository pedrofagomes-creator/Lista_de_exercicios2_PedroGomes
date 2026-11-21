/*
 * Aluno: Pedro Felipe Alexandre Gomes
 * Exercício: 14
 * Descrição: Lê 5 números e os ordena com Bubble Sort, exibindo o array ordenado.
 * Data: 19/11/2026
 */

#include <stdio.h>

#define TAM 5

int main(void) {
    int v[TAM];

    printf("Digite %d numeros:\n", TAM);
    for (int i = 0; i < TAM; i++) {
        if (scanf("%d", &v[i]) != 1) {
            printf("Entrada invalida.\n");
            return 1;
        }
    }

    /* Bubble Sort: compara vizinhos e troca se estiverem fora de ordem */
    for (int i = 0; i < TAM - 1; i++) {
        for (int j = 0; j < TAM - 1 - i; j++) {
            if (v[j] > v[j + 1]) {
                int temp = v[j];
                v[j] = v[j + 1];
                v[j + 1] = temp;
            }
        }
    }

    printf("Array ordenado: ");
    for (int i = 0; i < TAM; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");
    return 0;
}
