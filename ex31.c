/*
 * Aluno: Pedro Felipe Alexandre Gomes
 * Exercício: 31
 * Descrição: Função soma(int a, int b) que retorna a soma; o main lê dois números e chama a função.
 * Data: 19/11/2026
 */

#include <stdio.h>

int soma(int a, int b) {
    return a + b;
}

int main(void) {
    int x, y;

    printf("Digite dois numeros: ");
    if (scanf("%d %d", &x, &y) != 2) {
        printf("Entrada invalida.\n");
        return 1;
    }

    printf("%d + %d = %d\n", x, y, soma(x, y));
    return 0;
}
