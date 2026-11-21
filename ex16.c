/*
 * Aluno: Pedro Felipe Alexandre Gomes
 * Exercício: 16
 * Descrição: Lê uma matriz 3x3 e calcula a soma dos elementos da diagonal principal.
 * Data: 19/11/2026
 */

#include <stdio.h>

#define N 3

int main(void) {
    int matriz[N][N];
    int somaDiagonal = 0;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            if (scanf("%d", &matriz[i][j]) != 1) {
                printf("Entrada invalida.\n");
                return 1;
            }
        }
    }

    /* diagonal principal: linha == coluna */
    for (int i = 0; i < N; i++) {
        somaDiagonal += matriz[i][i];
    }

    printf("Soma da diagonal principal: %d\n", somaDiagonal);
    return 0;
}
