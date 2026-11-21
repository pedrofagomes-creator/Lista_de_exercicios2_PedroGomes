/*
 * Aluno: Pedro Felipe Alexandre Gomes
 * Exercício: 49
 * Descrição: Cria com malloc um array de N inteiros, preenche, imprime e libera a memória.
 * Data: 19/11/2026
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n;

    printf("Tamanho do array: ");
    if (scanf("%d", &n) != 1 || n < 1) {
        printf("Tamanho invalido.\n");
        return 1;
    }

    int *vetor = malloc((size_t)n * sizeof(*vetor));
    if (vetor == NULL) {
        printf("Erro: memoria insuficiente.\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        vetor[i] = i * 10; /* preenche: 0, 10, 20, ... */
    }

    for (int i = 0; i < n; i++) {
        printf("vetor[%d] = %d\n", i, vetor[i]);
    }

    free(vetor);
    vetor = NULL;
    return 0;
}
