/*
 * Aluno: Pedro Felipe Alexandre Gomes
 * Exercício: 42
 * Descrição: Declara x=10 e um ponteiro p para x; imprime o valor de x usando o ponteiro.
 * Data: 19/11/2026
 */

#include <stdio.h>

int main(void) {
    int x = 10;
    int *p = &x;

    printf("Valor de x via ponteiro: %d\n", *p);
    return 0;
}
