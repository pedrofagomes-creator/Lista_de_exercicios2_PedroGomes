/*
 * Aluno: Pedro Felipe Alexandre Gomes
 * Exercício: 37
 * Descrição: Função dobrar(int *x) que dobra o valor da variável passada por ponteiro.
 * Data: 19/11/2026
 */

#include <stdio.h>

void dobrar(int *x) {
    *x = *x * 2;
}

int main(void) {
    int valor;

    printf("Digite um numero: ");
    if (scanf("%d", &valor) != 1) {
        printf("Entrada invalida.\n");
        return 1;
    }

    dobrar(&valor);
    printf("Valor dobrado: %d\n", valor);
    return 0;
}
