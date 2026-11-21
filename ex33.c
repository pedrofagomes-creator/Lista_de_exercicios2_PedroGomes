/*
 * Aluno: Pedro Felipe Alexandre Gomes
 * Exercício: 33
 * Descrição: Função que retorna o fatorial de N usando um laço for.
 * Data: 19/11/2026
 */

#include <stdio.h>

/* retorna N! (iterativo); 20! e o maior fatorial que cabe em unsigned long long */
unsigned long long fatorial(int n) {
    unsigned long long resultado = 1;
    for (int i = 2; i <= n; i++) {
        resultado *= (unsigned long long)i;
    }
    return resultado;
}

int main(void) {
    int n;

    printf("Digite N (0 a 20): ");
    if (scanf("%d", &n) != 1 || n < 0 || n > 20) {
        printf("Valor invalido (use de 0 a 20).\n");
        return 1;
    }

    printf("%d! = %llu\n", n, fatorial(n));
    return 0;
}
