/*
 * Aluno: Pedro Felipe Alexandre Gomes
 * Exercício: 02
 * Descrição: Lê as idades de 10 pessoas e calcula a média usando for.
 * Data: 19/11/2026
 */

#include <stdio.h>

#define TOTAL 10

int main(void) {
    int idade;
    int soma = 0;

    for (int i = 1; i <= TOTAL; i++) {
        printf("Idade da pessoa %d: ", i);
        if (scanf("%d", &idade) != 1 || idade < 0) {
            printf("Idade invalida.\n");
            return 1;
        }
        soma += idade;
    }

    printf("Media das idades: %.2f\n", (double)soma / TOTAL);
    return 0;
}
