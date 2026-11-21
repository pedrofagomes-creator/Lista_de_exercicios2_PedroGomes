/*
 * Aluno: Pedro Felipe Alexandre Gomes
 * Exercício: 20
 * Descrição: Lê N, aloca dinamicamente um array de N inteiros com malloc, preenche e imprime.
 * Data: 19/11/2026
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n;

    printf("Quantos elementos? ");
    if (scanf("%d", &n) != 1 || n < 1) {
        printf("Tamanho invalido.\n");
        return 1;
    }

    int *vetor = malloc((size_t)n * sizeof(int));
    if (vetor == NULL) {
        printf("Erro: memoria insuficiente.\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("Elemento %d: ", i);
        if (scanf("%d", &vetor[i]) != 1) {
            printf("Entrada invalida.\n");
            free(vetor);
            return 1;
        }
    }

    printf("Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    free(vetor); /* libera a memoria alocada */
    return 0;
}
