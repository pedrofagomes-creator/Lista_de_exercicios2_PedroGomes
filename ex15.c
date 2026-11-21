/*
 * Aluno: Pedro Felipe Alexandre Gomes
 * Exercício: 15
 * Descrição: Lê uma matriz 2x3 e armazena a soma de cada linha em um array de 2 posições.
 * Data: 19/11/2026
 */

#include <stdio.h>

#define LINHAS 2
#define COLUNAS 3

int main(void) {
    int matriz[LINHAS][COLUNAS];
    int somaLinha[LINHAS] = {0};

    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            if (scanf("%d", &matriz[i][j]) != 1) {
                printf("Entrada invalida.\n");
                return 1;
            }
            somaLinha[i] += matriz[i][j];
        }
    }

    for (int i = 0; i < LINHAS; i++) {
        printf("Soma da linha %d: %d\n", i, somaLinha[i]);
    }
    return 0;
}
