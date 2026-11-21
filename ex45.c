/*
 * Aluno: Pedro Felipe Alexandre Gomes
 * Exercício: 45
 * Descrição: Função troca(int *a, int *b) que troca os valores de dois inteiros.
 * Data: 19/11/2026
 */

#include <stdio.h>

void troca(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(void) {
    int x, y;

    printf("Digite dois numeros: ");
    if (scanf("%d %d", &x, &y) != 2) {
        printf("Entrada invalida.\n");
        return 1;
    }

    printf("Antes : x = %d, y = %d\n", x, y);
    troca(&x, &y);
    printf("Depois: x = %d, y = %d\n", x, y);
    return 0;
}
