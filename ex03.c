/*
 * Aluno: Pedro Felipe Alexandre Gomes
 * Exercício: 03
 * Descrição: Lê um número e determina se ele é primo, usando um laço for e uma flag.
 * Data: 19/11/2026
 */

#include <stdio.h>

int main(void) {
    long n;
    int ehPrimo = 1; /* flag: 1 = primo, 0 = nao primo */

    printf("Digite um numero inteiro: ");
    if (scanf("%ld", &n) != 1) {
        printf("Entrada invalida.\n");
        return 1;
    }

    if (n < 2) {
        ehPrimo = 0; /* 0, 1 e negativos nao sao primos */
    }

    /* basta testar divisores ate a raiz quadrada de n */
    for (long i = 2; i * i <= n && ehPrimo; i++) {
        if (n % i == 0) {
            ehPrimo = 0;
        }
    }

    if (ehPrimo) {
        printf("%ld e primo.\n", n);
    } else {
        printf("%ld nao e primo.\n", n);
    }
    return 0;
}
