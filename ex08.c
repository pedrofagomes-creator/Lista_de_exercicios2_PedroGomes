/*
 * Aluno: Pedro Felipe Alexandre Gomes
 * Exercício: 08
 * Descrição: Desenha um retângulo de asteriscos com altura e largura informadas (for aninhados).
 * Data: 19/11/2026
 */

#include <stdio.h>

int main(void) {
    int altura, largura;

    printf("Altura: ");
    if (scanf("%d", &altura) != 1 || altura < 1) {
        printf("Altura invalida.\n");
        return 1;
    }
    printf("Largura: ");
    if (scanf("%d", &largura) != 1 || largura < 1) {
        printf("Largura invalida.\n");
        return 1;
    }

    for (int linha = 0; linha < altura; linha++) {
        for (int coluna = 0; coluna < largura; coluna++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
