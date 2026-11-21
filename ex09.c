/*
 * Aluno: Pedro Felipe Alexandre Gomes
 * Exercício: 09
 * Descrição: Desenha um triângulo retângulo de asteriscos a partir da base informada.
 * Data: 19/11/2026
 */

#include <stdio.h>

int main(void) {
    int base;

    printf("Base do triangulo: ");
    if (scanf("%d", &base) != 1 || base < 1) {
        printf("Base invalida.\n");
        return 1;
    }

    /* a linha i tem i asteriscos */
    for (int linha = 1; linha <= base; linha++) {
        for (int coluna = 1; coluna <= linha; coluna++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
