/*
 * Aluno: Pedro Felipe Alexandre Gomes
 * Exercício: 47
 * Descrição: Soma os elementos de um array de 5 inteiros usando ponteiro e aritmética de ponteiros.
 * Data: 19/11/2026
 */

#include <stdio.h>

#define TAM 5

int main(void) {
    int numeros[TAM];
    int soma = 0;

    printf("Digite %d inteiros:\n", TAM);
    for (int i = 0; i < TAM; i++) {
        if (scanf("%d", &numeros[i]) != 1) {
            printf("Entrada invalida.\n");
            return 1;
        }
    }

    int *p = numeros;
    for (int i = 0; i < TAM; i++) {
        soma += *(p + i); /* aritmetica de ponteiros */
    }

    printf("Soma = %d\n", soma);
    return 0;
}
