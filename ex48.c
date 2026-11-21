/*
 * Aluno: Pedro Felipe Alexandre Gomes
 * Exercício: 48
 * Descrição: Ponteiro para ponteiro: imprime o valor de x usando q (que aponta para p).
 * Data: 19/11/2026
 */

#include <stdio.h>

int main(void) {
    int x = 42;
    int *p = &x;   /* p aponta para x */
    int **q = &p;  /* q aponta para p */

    printf("Valor de x via q: %d\n", **q);
    return 0;
}
