/*
 * Aluno: Pedro Felipe Alexandre Gomes
 * Exercício: 43
 * Descrição: Usa o ponteiro p para alterar x para 20 e imprime o novo valor.
 * Data: 19/11/2026
 */

#include <stdio.h>

int main(void) {
    int x = 10;
    int *p = &x;

    *p = 20; /* altera x atraves do ponteiro */

    printf("Novo valor de x: %d\n", x);
    return 0;
}
