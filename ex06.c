/*
 * Aluno: Pedro Felipe Alexandre Gomes
 * Exercício: 06
 * Descrição: Solicita um número positivo, repetindo a pergunta enquanto for inválido (while).
 * Data: 19/11/2026
 */

#include <stdio.h>

static void limparEntrada(void) {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {
    }
}

int main(void) {
    int numero = 0;

    while (numero <= 0) {
        printf("Digite um numero positivo: ");
        int r = scanf("%d", &numero);
        if (r == EOF) {
            return 1;
        }
        if (r != 1) {
            limparEntrada();
            numero = 0;
        }
        if (numero <= 0) {
            printf("Valor invalido! Tente novamente.\n");
        }
    }

    printf("Numero valido: %d\n", numero);
    return 0;
}
