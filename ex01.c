/*
 * Aluno: Pedro Felipe Alexandre Gomes
 * Exercício: 01
 * Descrição: Lê um número N e calcula a soma de 1 até N usando um laço for.
 * Data: 19/11/2026
 */

#include <stdio.h>

int main(void) {
    int n;
    long soma = 0;

    printf("Digite N: ");
    if (scanf("%d", &n) != 1 || n < 1) {
        printf("Entrada invalida. Digite um inteiro positivo.\n");
        return 1;
    }

    for (int i = 1; i <= n; i++) {
        soma += i;
    }

    printf("A soma de 1 a %d e %ld\n", n, soma);
    return 0;
}
